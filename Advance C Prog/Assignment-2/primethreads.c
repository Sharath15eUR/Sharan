#include <stdio.h>
#include <pthread.h>
#include <signal.h>
#include <unistd.h>
#include <stdlib.h>
#include <time.h>

volatile sig_atomic_t keepRunning = 1;

void sigintHandler(int sig) {
    printf("\nSIGINT received. Ignored.\n");
}  

int isPrime(int num) {
    if (num < 2) return 0;
    for (int i = 2; i*i <= num; i++) {
        if (num % i == 0) return 0;
    }
    return 1;
}

void* threadA_func(void* arg) {
    int N = *(int*)arg;
    int count = 0, num = 2, sum = 0;

    while (count < N) {
        if (isPrime(num)) {
            sum += num;
            count++;
        }
        num++;
    }

    printf("Thread A: Sum of first %d prime numbers is %d\n", N, sum);
    pthread_exit(NULL);
}

void* threadB_func(void* arg) {
    time_t start = time(NULL);
    while (difftime(time(NULL), start) < 100) {
        printf("Thread 1 running\n");
        sleep(2);
    }
    pthread_exit(NULL);
}

void* threadC_func(void* arg) {
    time_t start = time(NULL);
    while (difftime(time(NULL), start) < 100) {
        printf("Thread 2 running\n");
        sleep(3);
    }
    pthread_exit(NULL);
}

int main() {
    signal(SIGINT, sigintHandler);
    int N;
    printf("Enter N (number of prime numbers): ");
    scanf("%d", &N);
    pthread_t threadA, threadB, threadC;
    time_t start_time = time(NULL);
    
    pthread_create(&threadA, NULL, threadA_func, &N);
    pthread_create(&threadB, NULL, threadB_func, NULL);
    pthread_create(&threadC, NULL, threadC_func, NULL);

    pthread_join(threadA, NULL);
    pthread_join(threadB, NULL);
    pthread_join(threadC, NULL);
    time_t end_time=time(NULL);

    printf("All threads finished. Total time taken: %.2f seconds\n", difftime(end_time,start_time));

    return 0;
}

