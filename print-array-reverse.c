/*
* Print an array in reverse order
*/
#include <stdio.h>

void printArr(int *arr, int i) {
	printf("%d\n", *(arr + i));
	if(i > 0){
		printArr(arr, i - 1);
	}
	return ;
}

int main() {
	int arr[5] = {100, 200, 300, 400, 500};
	printArr(arr, 4);
 	return 0;
}
