#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int main10() {
	char input[20] = { 0 };
	system("shutdown -s -t 60");//shutdown -a是取消关机 systme()执行系统命令
again:
	printf("电脑将在1min内关机，请输入：取消关机状态。请输入：\n");
	scanf("%s", input);
	if (strcmp(input, "取消关机状态") == 0) //（1）字符串1 = 字符串2，返回0（2）字符串1 > 字符串2，返回一个正整数（3）字符串1 < 字符串2，返回一个负整数。
	{
		system("shutdown -a");
	}
	else {
		goto again;
	}
	return 0;
}
