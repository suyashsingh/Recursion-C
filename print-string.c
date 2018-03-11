/*
* Program to print a string.
*/
#include <stdio.h>

void printStr(char *str) {
	printf("%c", *str);
	if(*(str + 1) != '\0') {
		printStr(str + 1);
	}
}

int main() {
	char str[5] = "Hello";
	//char *str = "Hello"; // Both will work
	printStr(str);
	printf("\n");
	return 0;
}
