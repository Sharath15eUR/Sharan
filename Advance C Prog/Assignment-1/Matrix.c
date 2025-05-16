#include <stdio.h>

int search(int n, int matrix[n][n], int key) {
    int row = 0, col = n - 1;

    while (row < n && col >= 0) {
        if (matrix[row][col] == key)
            return 1;
        else if (matrix[row][col] > key)
            col--;
        else
            row++;
    }
    return 0;
}

int main() {
    int matrix[5][5] = {
    {  5,  10,  20,  30,  40},
    { 12,  15,  25,  35,  45},
    { 22,  27,  29,  37,  48},
    { 31,  33,  36,  39,  50},
    { 41,  44,  47,  52,  60}
};

	printf("Enter key: ");
	int key;scanf("%d",&key);
    if (search(5, matrix, key))
        printf("Key %d found in matrix.\n", key);
    else
        printf("Key %d not found in matrix.\n", key);

    return 0;
}

