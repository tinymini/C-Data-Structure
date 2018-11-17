#include <stdio.h>

int main()
{
	unsigned char flag = 0;

	flag |= 1;
	flag |= 2;
	flag |= 4;
	printf("%u\n", flag);

	if (flag & 1)    // & 연산자로 0000 0001 비트가 켜져 있는지 확인
		printf("0000 0001은 켜져 있음\n");
	else
		printf("0000 0001은 꺼져 있음\n");

	if (flag & 2)    // & 연산자로 0000 0010 비트가 켜져 있는지 확인
		printf("0000 0010은 켜져 있음\n");
	else
		printf("0000 0010은 꺼져 있음\n");

	if (flag & 4)    // & 연산자로 0000 0100 비트가 켜져 있는지 확인
		printf("0000 0100은 켜져 있음\n");
	else
		printf("0000 0100은 꺼져 있음\n");

	return 0;
}