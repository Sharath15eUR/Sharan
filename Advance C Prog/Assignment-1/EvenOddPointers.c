#include<stdio.h>
#include<stdlib.h>

void rearrange(int * arr, int n){
	int *temp = (int *)malloc(n* sizeof(int));
    int *even = temp;
    int *odd = temp;

    for (int *p = arr; p < arr +n; p++) {
        if (*p % 2 == 0) {
            odd++;
        }
    }
    int *OddStart = odd;
    for (int *p = arr; p < arr + n; p++) {
        if (*p % 2 == 0) {
            *even = *p;
            even++;
        } else {
            *OddStart = *p;
            OddStart++;
        }
    }
    for (int i = 0; i < n; i++) {
        *(arr + i) = *(temp + i);
    }
    free(temp);
}

int main(){
	printf("Enter size of array: ");
	int n;scanf("%d",&n);
	int arr[n];
	printf("Enter array: ");
	for(int i=0;i<n;i++){
		scanf("%d",&arr[i]);
	}
	
	rearrange(arr,n);
	printf("After rearranging array is: ");
	
	for(int i=0;i<n;i++){
		printf("%d ",arr[i]);
	}
	return 0;
}
