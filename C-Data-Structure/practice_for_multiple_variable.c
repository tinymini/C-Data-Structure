#include <stdio.h>

int main()
{
	for (int i = 2, j = 5; i <= 32 && j >= 1; i <<= 1, j++) {
		printf("%d %d \n", i, j);
	}
	return 0;
}