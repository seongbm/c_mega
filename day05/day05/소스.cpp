#include <stdio.h>

int main_1(void) {

	int a = 20, b = 16;
	int result1, result2, result3, result4;

	result1 = a & b;
	printf("��Ʈ���� AND(����) ������ ��� %d \n", result1);
	
	result2 = a | b;
	printf("��Ʈ���� OR(����) ������ ���%d \n", result2);
	
	result3 = a ^ b;
	printf("��Ʈ���� XOR(��Ÿ�� ����), ������ ��� %d\n", result3);

	result4 = ~b;
	printf("��Ʈ���� NOT(����) ������ ��� %d\n", result4);


	return 0;
}