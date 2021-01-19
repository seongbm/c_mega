#ifdef _MSC_VER
#define _CRT_SECURE_NO_WARNINGS
#endif 

#include <stdio.h>

int main_04(void) {

	int num;
	printf("몇 번 메뉴를 선택하시겠습니까\n");
	printf("\t(1)짜장면\n");
	printf("\t(2)짬뽕\n");
	printf("\t(3)탕수육\n");
	printf("번호선택 :");

	scanf("%d", &num);

	printf("------------------\n");

	switch (num)
	{
	case 1:
		printf("짜장면은 5000원입니다.\n");
		break;
	case 2:
		printf("짬뽕은 6000원입니다.\n");
		break;
	case 3:
		printf("탕수육은 20000원 입니다.\n");
		break;
	default:
		printf("없는 메뉴입니다.\n");

	/*
	if (num==1){
	}
	else if(num==2){
	}
	
	
	
	*/
		

	}
	printf("감사합니다.\n");

	return 0;
}