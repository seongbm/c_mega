#ifdef _MSC_VER
#define _CRT_SECURE_NO_WARNINGS
#endif 

#include <stdio.h>

int main_04(void) {

	int num;
	printf("�� �� �޴��� �����Ͻðڽ��ϱ�\n");
	printf("\t(1)¥���\n");
	printf("\t(2)«��\n");
	printf("\t(3)������\n");
	printf("��ȣ���� :");

	scanf("%d", &num);

	printf("------------------\n");

	switch (num)
	{
	case 1:
		printf("¥����� 5000���Դϴ�.\n");
		break;
	case 2:
		printf("«���� 6000���Դϴ�.\n");
		break;
	case 3:
		printf("�������� 20000�� �Դϴ�.\n");
		break;
	default:
		printf("���� �޴��Դϴ�.\n");

	/*
	if (num==1){
	}
	else if(num==2){
	}
	
	
	
	*/
		

	}
	printf("�����մϴ�.\n");

	return 0;
}