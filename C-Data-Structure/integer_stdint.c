#include <stdio.h>
#include <stdint.h>

int main()
{
	int8_t num1 = -128;

	int16_t num2 = 32767;

	int32_t num3 = 2147483647;

	int64_t num4 = 9223372036854775807;

	printf("%d %d %d %lld\n", num1, num2, num3, num4);

	uint8_t num5 = 255;
	
	uint16_t num6 = 65535;

	uint32_t num7 = 4294967295;

	uint64_t num8 = 18446744073709551615;

	printf("%u %u %u %llu\n", num5, num6, num7, num8);

	// ��������

	char q_num1 = 256;
	short q_num2 = 65536;
	long long q_num3 = 9223372036854775808;

	printf("%u %u %lld\n", q_num1, q_num2, q_num3);

	return 0;
}