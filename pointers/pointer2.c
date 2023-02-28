#include <stdio.h>
//to change the value of a variable using pointers
int main(void)
{
	int age;
	int *ptr;
	age = 25;
	ptr = &age;
	
	*ptr = 31;
	printf("%d\n", age);
	return (0);
}
