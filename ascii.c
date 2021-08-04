#include <stdio.h>
#include <stdlib.h>
#define TRUE 1
#define FALSE 0

int main()
{
	int loop = TRUE;

	char str[20];
	printf("Enter a string value: ");
	fgets(str, sizeof(str), stdin);
	puts(str);



	while(loop)
	{
		char chr;
		printf("Enter a char value: ");
		scanf(" %c", &chr);
		printf("%c\n", chr);

		int val = (int)chr;

		printf("ASCII Value: %d\n", val);

		char con;
		printf("Would you like to continue? (y/n)");
		while((con = getchar()) != EOF && (con = getchar()) != '\n')
		{
			//printf("Would you like to continue? (y/n)");
			//scanf(" %c", &con);
			switch(con)
			{
				case 'y':
					break;
				case 'n':
					loop = FALSE;
					break;
				default:
					printf("Invalid option. Try again: ");
					continue;
			}
		break;
		}
	}

	return 0;
}
