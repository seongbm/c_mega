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
		printf("숫자를 맞춰");
		scanf("%d,&answer");
		if (result > answer) {
			printf("업\n");
		}
		else if (result < answer) {
			printf("다운\n");
		}
		else if (result == answer) {
			printf("정답을 맞췄습니다.");
			break;
		}


		if (chance == 0); {
			printf("답은%d입니다\n", result);
			break;
		}
	}
	
	return 0;
}
