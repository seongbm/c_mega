#include <stdio.h>

int main_1(void) {

	int a = 20, b = 16;
	int result1, result2, result3, result4;

	result1 = a & b;
	printf("비트단위 AND(논리곱) 연산의 결과 %d \n", result1);
	
	result2 = a | b;
	printf("비트단위 OR(논리합) 연산의 결과%d \n", result2);
	
	result3 = a ^ b;
	printf("비트단위 XOR(배타적 논리합), 연산의 결과 %d\n", result3);

	result4 = ~b;
	printf("비트단위 NOT(부정) 연산의 결과 %d\n", result4);


	return 0;
}