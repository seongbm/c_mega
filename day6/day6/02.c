#include <stdio.h>

int main_02(void) {
	printf("���ڸ� �Է��ϼ���. :");
	int num = 0;
		scanf_s("%d", &num);

	if (num % 2 == 0) {
		printf("%d�� ¦�Դϴ�.\n\n",num);
		
	}
	else {
		printf("%d�� Ȧ���Դϴ�\n\n", num); 
	}

	return 0;
}