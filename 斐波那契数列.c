//���n��쳲�������

//Ч��̫��
int fibo(int x) {
	if (x <= 2) {
		return 1;
	}
	else
		return fibo(x - 1) + fibo(x - 2);
}
//ͨ�������ķ�ʽ
int fastFibo(int x) {
	int a = 1;
	int b = 1;
	int c = 1;
	while (x > 2) {
		c = b + a;
		a = b;
		b = c;
		x--;
	}
	return c;
}
