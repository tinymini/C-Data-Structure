#include <stdio.h>
#include <limits.h>

int main()
{
	char num1 = CHAR_MIN - 1;
	short num2 = SHRT_MIN - 1;
	int num3 = INT_MIN - 1;
	long long num4 = LLONG_MIN - 1;

	printf("%d %d %d %lld\n", num1, num2, num3, num4);

	unsigned char num5 = 0 - 1;
	unsigned short num6 = 0 - 1;
	unsigned int num7 = 0 - 1;
	unsigned long long num8 = 0 - 1;

	printf("%u %u %u %llu\n", num5, num6, num7, num8);
}