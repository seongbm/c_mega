#ifdef _MSC_VER
#define _CRT_SECURE_NO_WARNINGS
#endif

#include<stdio.h>
int main_3(void) {
	int q1;
	printf("�� �ڸ��� �ڿ����� �Է��ϼ���:");
	scanf("%d",&q1); //scanf �� \n�� �ȵǿ��
	int  a1, a2;
	a1 = q1 / 10;
	a2 = q1 % 10;
	printf("\n%d�� �������� %d%d�Դϴ�", q1,a1, a2);
	return 0;
}
