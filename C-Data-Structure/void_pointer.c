#include <stdio.h>

int main()
{
	int num1 = 10;
	char c1 = 'a';
	int *numPtr1 = &num1;
	char *cPtr1 = &c1;

	void *ptr;

	ptr = numPtr1;
	ptr = cPtr1;

	//numPtr1 = ptr; 컴파일 에러
	//cPtr1 = ptr;


	ptr = numPtr1;
	//printf("%d", *ptr); // void 포인트는 역참조 불가능

	//void v1; // void 변수 선언 불가

	return 0;
}