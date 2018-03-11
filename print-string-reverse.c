/*
* Print a string in reverse.
*/
#include <stdio.h>

void printStr(char *str) {
	if(*(str + 1) != '\0') {
		printStr(str + 1);
	}
	printf("%c", *str);
}

int main() {
	char *str = "ABCD";
	printStr(str);
	printf("\n");
	return 0;
}
