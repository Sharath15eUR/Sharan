---
Assignment for Module 2
---
# Program :
1. Write a C program to define 3 different threads with the following purposes where N is the input
   - Thread A - To run a loop and return the sum of first N prime numbers
   - Thread B & C - should run in parallel. One prints "Thread 1 running" every 2 seconds, and the other prints "Thread 2 running" every 3 seconds for 100 seconds.

2. In the above program,
   - add signal handling for SIGINT (etc) and prevent termination.
   - Convert the above threads to individual functions and note down the time taken and the flow of execution.
     
3. Concepts:
   1. **Child Process fork():**
      - fork() is a system call in Unix/Linux that creates a new process.
      - The new process is called `child` while the original is called the `parent`.
      - Both continue their execution from the `fork()` call.
      - `pid_t pid= fork()` returns
        - 0 in a child process
        - Childs PID in parent.
        - -1 on error. 
   2. **Handling common signals:**
      - Signals are asynchronous notifications sent to a process.
      - It is used for inter-process communication or exception handling.
      - Some Common Signals include `SIGNINT` to interrupt, `SIGTERM` to terminate, `SIGKILL` to kill the process, `SIGSERV` for segmentation fault, `SIGCHLD` incase the child process has stopped or exitted.
      - To handle such signals we can catch it using: (but cant catch signals like `SIGKILL`)
```
        #include <signal.h>
        #include <stdio.h>
        void sigint_handler(int sig) {
          printf("Caught SIGINT\n");
        }

        int main() {
            signal(SIGINT, sigint_handler);
            while (1);  // Infinite loop
        }
``` 
   3. **Different Kernel Crashes:**
      - Kernel crash is when the kernel experiences an unrecoverable error.
      -  Some causes for kernel crashes are:
          - Nulll pointer dereference in kernel space.
          - Invalid memory access.
          - Misbehaving drivers.
          - Stack Overflows.
      - There are tools to handle such crashes such as:
          - `dmseg` : Shows kernel logs
          - `crash` : For analyzing kernel dump.
          - `kgdb` :  Kernel Debugger. 
   4. **Time Complexity:**
      - it is a measure of the computational time an algorithm takes relative to the input size.
      - The common Notations for Time complexity are like `O(n)` `O(logn)` `O(n^2)` etc.
      - It is used to predict how the algorithm will scale.
      - Can help to choose the appropriate data structure.
   5. **Locking Mechanism (mutex/spinlock):**
      - Mutex:
          - Mutual Exclusion
          - Blocking Lock: puts thread to sleep if not available.
          - Safe and commonly used in user space.
```
           pthread_mutex_t lock;
           pthread_mutex_init(&lock, NULL);
          
           pthread_mutex_lock(&lock);
           // critical section
           pthread_mutex_unlock(&lock);

```
  - SpinLock:
      - Busy/Wait until lock is free.
      - Effecient only for short waits.
      - used in kernel/low-level cases.
```
spinlock_t my_lock;
spin_lock(&my_lock);
// critical section
spin_unlock(&my_lock);

``` 
---
END of ASSIGNMENT for Module 2
---
---


