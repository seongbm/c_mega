#include<stdio.h>

int main_7(void) {
	int i = 0;
		for (; i <= 100; i++) {
			printf("i=%d\n", i);
			if (i == 51) break;

	}
	printf("i�� �������� %d �Դϴ�.\n", i);
	for (i = 0; i <= 100; i++) {
		if (i >= 30 && i <= 50) continue;
		printf("i=%d\n", i);
	}
 	return 0;
}