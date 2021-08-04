#include <stdio.h>
#include <float.h>
#include <limits.h>

int main()
{
	char* var1 = "String";
	int var2 = 100;
	float var3 = 69.420;
	printf(var1);
	printf("\n");
	printf("%d\n", var2);
	printf("%.3f\n", var3);


	unsigned long long ullmax = ULLONG_MAX;
	long lmax = LONG_MAX;
	long double ldmax = LDBL_MAX;

	printf("Max value of unsinged long long is %Lu. \n", ullmax);
	printf("Max value of long is %ld. \n", lmax);
	printf("Max value of long double is %lf. \n", ldmax);


	return 0;
}
