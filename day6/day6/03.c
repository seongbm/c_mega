#include <stdio.h>

int main_3(void) {
	
	char input_ch = 0;
	printf("ASCII �ڵ带 �Է��ϼ���. :");
	scanf_s("%d", &input_ch);
	//97<= input_ch<=122
	// input_ch�� 97���� ũ�� 122���� �۴�
	if (input_ch >=97&&input_ch <=122) {
		printf("���� %d�� �ҹ��� '%c' �Դϴ�.\n\n", input_ch, input_ch);

	}
	else if(input_ch>=65&& input_ch<=90) {
		printf("���� %d�� �빮�� '%c' �Դϴ�.\n\n", input_ch, input_ch);

	}
	else {
		printf("%d�� ������ ASCII ������ ���Ե��� �ʽ��ϴ�.\n", input_ch);
	}
	printf("�Է��Ͻ� ���� '%c'�Դϴ�.\n\n", input_ch);
	return 0;
}