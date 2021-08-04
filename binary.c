#include <stdio.h>
#include <math.h>

int main()
{
	long int decimal, binary, exp=17;

	printf("Enter a number to convert to binary(MAX 131072): ");
	scanf("%ld", &decimal);

	while(exp>=0)
	{
		if(decimal-pow(2,exp)>=0)
		{
			decimal-=pow(2,exp);
			binary+=pow(10,exp);
		}

		exp--;
	}
	printf("%ld", binary);
}
