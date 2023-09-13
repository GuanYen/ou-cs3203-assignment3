#include <stdio.h>

int sumOfList(int[] a){
	int sum = 0;
	int size = sizeof(a) / sizeof(a[0]);

	for (int i = 0; i < size; ++i)
	{
		sum += a[i];
	}
	return sum;
}

int productOfList(int[] a){
	int product = a[0];
	int size = sizeof(a) / sizeof(a[0]);

	for (int i = 1; i < size; ++i)
	{
		product *=  a[i];
	}
	return product;
}
