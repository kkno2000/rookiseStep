#include<stdio.h>
#include<time.h>

void menu() {
	printf("*****************************\n");
	printf("***1.play game   2.exit******\n");
	printf("*****************************\n");
}

void game() {
	int random_number = 0;
	random_number = rand() % 100 + 1;//����1-100�����
	while (1)
	{
		int choice = 0;
		printf("��������²�����֣�\n");
		scanf("%d", &choice);
		if (choice > random_number)
			printf("�´��ˣ�������\n");
		else if (choice < random_number)
		{
			printf("��С�ˣ�������\n");
		}
		else
		{
			printf("��ϲ�������ˣ��������ǣ�%d\n", random_number);
			break;
		}
	}
}

int main() {
	int input = 0;
	srand((unsigned int)time(NULL));//��ʱ���������һ�������
	do {
		menu();
		printf("��ѡ��1/2����\n");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game();
			break;
		case 2:
			printf("�����˳��Ծ�\n");
			break;
		default:
			printf("ERROR\n");
			break;
		}
	} while (input);
	return 0;
}