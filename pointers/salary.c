#include <stdio.h>

int main(void)
{
	double salary;
	double* ptr;

	salary = 3000;
	ptr = &salary;
	*ptr = 5000;

	printf("the address of salary is: %p\n", ptr);
	printf("the value of the salary is %lf\n", *ptr);

	*ptr = 5000 * 2;

	printf("the value of new salary is %f\n", *ptr);
	return (0);
}

