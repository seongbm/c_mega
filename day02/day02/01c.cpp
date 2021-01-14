#ifdef _MSC_VER
#define _CRT_SECURE_NO_WARNINGS
#endif

#include <stdio.h>
int main(void) {
	/*
	printf("\a");
	printf("Hello world\t Hello world!!!\n");
	printf("Hello world \\ Hello World !!\n");
	
	printf("*\n");
	printf("**\n");
	printf("***\n");
	printf("****\n");


	printf("\n");
	printf("%5s\n", "*");
	printf("%5s\n", "**");
	printf("%5s\n", "***");
	printf("%5s\n", "****");
	printf("%s\n", "*****");

	printf("\n");
	printf("%5s\n", "*");
	printf("%5s", "*");
	printf("%-5s\n", "*");
	printf("%5s", "**");
	printf("%-5s\n", "**");
	printf("%5s", "***");
	printf("%-5s\n", "***");
	printf("%5s", "****");
	printf("%-5s\n", "****");
	printf("%5s", "*****");
	printf("%-5s\n", "*****");
	

	putchar('a\r');
	puts("Hello world\n");
	printf("우리나라 경제 성장률은 %.1f %% 입니다", 2.5);
	

	char ch = 0;
	printf("문자를 입력하세요");
	ch = getchar();
	printf("문자 :%c, ASC|| : %d\n", ch, ch);
	*/

	char input[50];
	printf("문자열을 입력하세요 : ");
	scanf("%s",input);
	printf("문자열 %s \n", input);


	return 0;
}