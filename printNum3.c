/*
* Program to print 5 to 1 using recursion
*/

#include <stdio.h>

void fun(int n) {
	printf("%d\n", n);
	if(n > 1) {
		fun(n - 1);
	}
	return;
}

int main() {
	fun(5);
	return 0;
}
