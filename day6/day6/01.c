#include <stdio.h>

int mai_01(void) {
	
	char num1 = 10, num2 = 9;
	if (num1 < num2) {
		printf("%d는 %d보다 큽니다", num1, num2);
	}
	else {
		printf("%d 는%d 보다 작습니다.", num1, num2);

	}
	return 0;
}