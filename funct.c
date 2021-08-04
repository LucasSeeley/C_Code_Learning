#include <stdio.h>

int sum(int a, int b)
{
	return a + b;
}


int main()
{
	int a;
	int b;
	printf("Enter an integer: ");
	scanf("%d", &a);
	printf("Enter another integer: ");
	scanf("%d", &b);
	int out = sum(a,b);

	if (out>40)
		printf("Sum is greater than 40");
	else if( out == 40)
		printf("Sum is 40");
	else
		printf("Sum is less than 40");

	return 0;
}
