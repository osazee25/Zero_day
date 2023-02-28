#include <stdio.h>

int main(void)
{
	int arr[] = {34,12,21,54,48};
	int largest = *arr;
	int i;

	for (i = 0; i < 5; ++i)
	{
	if (largest < *(arr + i))
	{
	largest = *(arr + i);
	}
	}
	printf("the largest value of the array is %d\n", largest);
	return (0);
}
