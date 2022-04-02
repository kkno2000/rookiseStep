//求第n个斐波那契数

//效率太低
int fibo(int x) {
	if (x <= 2) {
		return 1;
	}
	else
		return fibo(x - 1) + fibo(x - 2);
}
//通过迭代的方式
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