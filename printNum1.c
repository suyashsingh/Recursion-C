/*
* Program to print 5 to 1 using recursion
*/
#include <stdio.h>

void fun(int n) {
	printf("%d\n", n);
	if(n > 0) {fun(n - 1);}
}

int main() {
	fun(5);
	return 0;
}
