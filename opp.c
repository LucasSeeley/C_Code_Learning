#include <stdio.h>

int main()
{
	int a=0;
	int b;
	int c;

	b = --a;
	a++;
	c = ++a;
	a--;

	printf("a is %d, b is %d, c is %d\n", a ,b ,c);


	if (b == -1 && c == 1)
		printf("Bitwise AND statement\n");
	if (a == 0 || a == 21)
		printf("Bitwise OR statement\n");


	return 0;
}
