#include <stdio.h>
int sumOfList(int a[], int s);
int productOfList(int a[], int s);

int sumOfList(int a[], int s){
	int sum = 0;

	for (int i = 0; i < s; ++i)
	{
		sum += a[i];
	}
	return sum;
}

int productOfList(int a[], int s){
	int product = a[0];

	for (int i = 1; i < s; ++i)
	{
		product *=  a[i];
	}
	return product;
}

int main(){
	int num = 0;
	int size = 0;

	printf("Enter size for array: ");
	scanf("%d", &size);
	int list[size];

	printf("Enter a number: ");
	scanf("%d", &num);
	list[0] = num;
	int i = 1;

	while (num != -1)
	{	
		printf("Enter a number: ");
		scanf("%d", &num);
		list[i] = num;
		++i;

		if (i == size){
			printf("There is no more space in the array. \n");
			num = -1;
		}
	}

	int sum = sumOfList(list, size);
	printf("Sum of List: %d\n", sum);

	int product = productOfList(list, size);
	printf("Product of List: %d\n", product);
	return 0;
}
