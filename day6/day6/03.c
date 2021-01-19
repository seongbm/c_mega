#include <stdio.h>

int main_3(void) {
	
	char input_ch = 0;
	printf("ASCII 코드를 입력하세요. :");
	scanf_s("%d", &input_ch);
	//97<= input_ch<=122
	// input_ch가 97보다 크고 122보다 작다
	if (input_ch >=97&&input_ch <=122) {
		printf("숫자 %d는 소문자 '%c' 입니다.\n\n", input_ch, input_ch);

	}
	else if(input_ch>=65&& input_ch<=90) {
		printf("숫자 %d는 대문자 '%c' 입니다.\n\n", input_ch, input_ch);

	}
	else {
		printf("%d는 영문자 ASCII 범위에 포함되지 않습니다.\n", input_ch);
	}
	printf("입력하신 값은 '%c'입니다.\n\n", input_ch);
	return 0;
}