#ifdef _MSC_VER
#define _CRT_SECURE_NO_WARNINGS
#endif 
#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(void) {

	srand(time(NULL));
	int result = rand() % 100 + 1;
	int chance = 10;
	int answer = 0;
	

	while (1) {
		printf("���ڸ� ����");
		scanf("%d,&answer");
		if (result > answer) {
			printf("��\n");
		}
		else if (result < answer) {
			printf("�ٿ�\n");
		}
		else if (result == answer) {
			printf("������ ������ϴ�.");
			break;
		}


		if (chance == 0); {
			printf("����%d�Դϴ�\n", result);
			break;
		}
	}
	
	return 0;
}
