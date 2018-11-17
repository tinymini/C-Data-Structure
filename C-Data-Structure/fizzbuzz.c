#include <stdio.h>

int main()
{
	int limit = 100;

	for (int i = 1; i <= limit; i++) {
		char fizz = i % 3;
		char buzz = i % 5;

		if (fizz == 0)
		{
			printf("fizz");
		}
		if (buzz == 0)
		{
			printf("buzz");
		}
		if (fizz != 0 && buzz != 0)
		{
			printf("%d", i);
		}
		printf("\n");
	}
}