#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
	long long *numPtr = malloc(sizeof(long long));
	memset(numPtr, 0x27, 8);

	printf("0x%llx\n", *numPtr);

	free(numPtr);

	long long *numPtr1 = malloc(sizeof(long long));
	memset(numPtr1, 0, sizeof(long long));

	char *cPtr = malloc(sizeof(char));

	memset(cPtr, 0, sizeof(char));
	//memset(cPtr, 0, sizeof(char*)); // �߸��� ��� 4����Ʈ��ŭ 0���� ����

	return 0;
}