#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int main10() {
	char input[20] = { 0 };
	system("shutdown -s -t 60");//shutdown -a��ȡ���ػ� systme()ִ��ϵͳ����
again:
	printf("���Խ���1min�ڹػ��������룺��������˧�磬ȡ���ػ�״̬�������룺\n");
	scanf("%s", input);
	if (strcmp(input, "��������˧��") == 0) //��1���ַ���1 = �ַ���2������0��2���ַ���1 > �ַ���2������һ����������3���ַ���1 < �ַ���2������һ����������
	{
		system("shutdown -a");
	}
	else {
		goto again;
	}
	return 0;
}