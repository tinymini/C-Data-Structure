#include <stdio.h>

int main()
{
	unsigned char flag = 0;

	flag |= 1;
	flag |= 2;
	flag |= 4;
	printf("%u\n", flag);

	if (flag & 1)    // & �����ڷ� 0000 0001 ��Ʈ�� ���� �ִ��� Ȯ��
		printf("0000 0001�� ���� ����\n");
	else
		printf("0000 0001�� ���� ����\n");

	if (flag & 2)    // & �����ڷ� 0000 0010 ��Ʈ�� ���� �ִ��� Ȯ��
		printf("0000 0010�� ���� ����\n");
	else
		printf("0000 0010�� ���� ����\n");

	if (flag & 4)    // & �����ڷ� 0000 0100 ��Ʈ�� ���� �ִ��� Ȯ��
		printf("0000 0100�� ���� ����\n");
	else
		printf("0000 0100�� ���� ����\n");

	return 0;
}