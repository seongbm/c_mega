#include <stdio.h>
int main_04(void) {

	int num1 = 2, num2 = 4;
	int r1, r2, r3, r4;

	r1 = num1 > num2;
	r2 = num1 < num2;
	r3 = num1 >= num2;
	r4 = num1 <= num2;

	printf("r1=%d\n",r1);
	printf("r1=%d\n", r2);
	printf("r1=%d\n", r3);
	printf("r1=%d\n", r4);

	

	printf("r=equal =%d\n", num1 == num2);
	printf("r=equal2=%d\n",num1+2==num2);
	printf("rnot=%d\n", num1 != num2);
	printf("exi=%d\n", !(num1 + 2 == num2));
	return 0;
}