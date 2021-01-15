#include<stdio.h>

int main_2(void) {

	int num1 = 20;
	int num2 = -16;
	int num3 = 2147483647;



	int r1, r2, r3, r4, r5;

	r1 = num1 << 1;
	printf("%d의 비트 외쪽 1 시프트 연산의 결과%d,\n", num1, r1);

	r2 = num1 >> 1;
	printf("%d의 비트 오른쪽 1 시프트 연산의 결과 %d\n", num1, r2);

	r3 = num3 << 1;
	printf("%d의 비트 연산 왼쪽 1 시프트 연산의 결과 %d\n", num3, r3);

	printf("\n\n%d\n", 10 & 17);
	printf("%d\n", 10 | 9);
	printf("%d\n", ~- 1);

	return 0;
}