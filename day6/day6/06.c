#include <stdio.h>

int main_06(void) {

	int i = 10;

	while (i < 10) {
		printf("i=%d\n", i);
		i++;
	}
	printf("\n\n");
	i = 10;
	do {
		printf("i=%d\n", i);
		i++;
	} while (i < 10);

	printf("\n\n");
	for (i=0;i<10;i++) {
		printf("i=%d\n", i);
	}
	return 0;
}