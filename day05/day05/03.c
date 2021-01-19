#ifdef _MSC_VER
#define _CRT_SECURE_NO_WARNINGS
#endif

#include<stdio.h>
int main_3(void) {
	int q1;
	printf("두 자리의 자연수를 입력하세요:");
	scanf("%d",&q1); //scanf 는 \n이 안되요ㅠ
	int  a1, a2;
	a1 = q1 / 10;
	a2 = q1 % 10;
	printf("\n%d를 뒤집으면 %d%d입니다", q1,a1, a2);
	return 0;
}
