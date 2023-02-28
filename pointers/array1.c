#include <stdio.h>

int main(void)
{
	int arr[5] = {2,4,6,8,10}; //initialise array
	int i;

	for (i = 0; i < 5; ++i)
	{
	printf("%d\n", arr[i]);

	//prints all elements of array and corr addresses
	printf("memory address of %d is %p\n", arr[i], &arr[i]);
	printf("memory address of %d is %p\n", arr[i], arr + i);
	
	//accessing the values using pointers:
	printf("memory address of %d is %p\n", *(arr + i), arr + i);
	}

	//to print an address without the & symbol
	printf("address of 6: %p\n", arr + 2);
	
	//to change values of the array using pointers
	*arr = 3;
	*(arr + 3) = 9;

	printf("first element is now %d\n", *arr);
	printf("last element is now %d\n", *(arr + 3));
	
	return (0);
}
