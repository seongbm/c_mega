#include <stdio.h>

int main_02(void) {
	printf("숫자를 입력하세요. :");
	int num = 0;
		scanf_s("%d", &num);

	if (num % 2 == 0) {
		printf("%d는 짝입니다.\n\n",num);
		
	}
	else {
		printf("%d는 홀수입니다\n\n", num); 
	}

	return 0;
}