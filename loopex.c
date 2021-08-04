#include <stdio.h>
#include <stdlib.h>

int main()
{
	int x;
	char null;
	printf("Enter a number: ");
	scanf("%d", &x);

	while(x>0 && x<=1000)
	{
		printf("%d ", x);
		x--;
	}
	while(x<0 && x>=-1000)
	{
		printf("%d ", x);
		x++;
	}
	printf("\n");
	x = 5;
	for(x; x>0; x--)
	{
		printf("Hello\n");
	}
	printf("\nHit enter to exit...");
	getchar();
	getchar();
	return 0;
}
