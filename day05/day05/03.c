#ifdef _MSC_VER
#define _CRT_SECURE_NO_WARNINGS
#endif

#include<stdio.h>
int main(void) {
	int q1;
	printf("두 자의 숫자를 입력하세요:");
	scanf("%d\n",q1);
	int  a1, a2;
	a1 = q1 / 10;
	a2 = q1 % 10;
	printf("%d를 뒤집으면 %d%d입니다", q1,a1, a2);
	return 0;
}
