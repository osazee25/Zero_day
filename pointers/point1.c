#include <stdio.h>

int main(void)
{
	int x; //declaring a normal value
	int *ptr; //declaring a pointer
	x = 5;

	ptr = &x; //address of x
	printf("memory address of x is: %p\n", ptr);
	printf("x is:%d\n", x);
	printf("%d\n", *ptr); //value at the address
	return (0);
}

