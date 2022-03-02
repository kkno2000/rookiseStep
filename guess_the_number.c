#include<stdio.h>
#include<time.h>

void menu() {
	printf("*****************************\n");
	printf("***1.play game   2.exit******\n");
	printf("*****************************\n");
}

void game() {
	int random_number = 0;
	random_number = rand() % 100 + 1;//生成1-100随机数
	while (1)
	{
		int choice = 0;
		printf("请输入你猜测的数字：\n");
		scanf("%d", &choice);
		if (choice > random_number)
			printf("猜大了，请重试\n");
		else if (choice < random_number)
		{
			printf("猜小了，请重试\n");
		}
		else
		{
			printf("恭喜您猜中了！数字正是：%d\n", random_number);
			break;
		}
	}
}

int main() {
	int input = 0;
	srand((unsigned int)time(NULL));//用时间戳来生成一个随机数
	do {
		menu();
		printf("请选择（1/2）：\n");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game();
			break;
		case 2:
			printf("您已退出对局\n");
			break;
		default:
			printf("ERROR\n");
			break;
		}
	} while (input);
	return 0;
}
