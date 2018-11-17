#include <stdio.h>

int main()
{
	int numArr[10] = { 11,22,33,44,55,66,77,88,99,110 };
	printf("%d\n", numArr[0]);
	printf("%d\n", numArr[5]);
	printf("%d\n", numArr[9]);

	int numArr2[10] = { 0, };
	printf("%d\n", numArr2[0]);
	printf("%d\n", numArr2[5]);
	printf("%d\n", numArr2[9]);

	printf("%d\n", numArr2[-1]);
	printf("%d\n", numArr2[5]);
	printf("%d\n", numArr2[20]);

	return 0;
}