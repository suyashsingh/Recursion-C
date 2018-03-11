/*
* Program to print numbers 0 to 5  using recursion
*/

#include <stdio.h>

void fun(int n) {
	if(n > 0) { fun(n - 1); }
	printf("%d\n", n);
}
int main() {
	fun(5);
	return 0;
}
