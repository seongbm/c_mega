#include <stdio.h>
int main_3(void) {

	int a = 10;
	a += 1;
	a -= 1;
	a *= 2;
	a /= 2;
	a %= 3;
	//a는1이 됩니다.
	printf("%d\n\n", a);
	return 0;
}