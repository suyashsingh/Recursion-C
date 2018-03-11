/*
* Program to print an integer array.
*/
#include <stdio.h>

void printArr(int *arr, int n) {
	if(n > 0) {
		printArr(arr, n - 1);
	}
	printf("%d\n", *(arr + n));
}

int main() {
	int arr[5] = {10, 20, 30, 40, 50};
	printArr(arr, 5 - 1);
	return 0;
}
