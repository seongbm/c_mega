#include<stdio.h>
int main(void) {

	char num1 = 2, num2 = 3, num3 = 5;
	char r1, r2, r3, r4r, r5;
	r1=(++num1 > num1)& (num2 < 10);

	r2 = (num1 == num2) | (num2 < 1);
	r3 = (num3 < 1) & (++num3 == num1);
	r3 = (num3 > 1) || (++num3 == num1);
	printf("\n결과값%d\n\n", r3);
	printf("num3의 값은 %d\n", num3);

	return 0;
}