#include <stdio.h>

int main()
{
	int numArr[3][4] = {
		{11,22,33,44},
		{55,66,77,88},
		{99,110,121,132}
	};

	//int **numPtr = numArr; // 이렇게는 안됨

	int (*numPtr)[4] = numArr;

	//int num1, num2, num3, num4;
	//int *numPtr[4] = { &num1, &num2, &num3, &num4 }; // 포인트 4개를 담는 변수
	
	printf("%p\n", *numPtr);
	printf("%p\n", *numArr);

	printf("%d\n", numPtr[2][1]);

	printf("%d\n", sizeof(numArr));

	printf("%d\n", sizeof(numPtr));
}