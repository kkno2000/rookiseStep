void bubbleSort(int arr[], int sz) //ð������˼�룺�������ڵ�Ԫ�ؽ��бȽϣ����ҿ�����Ҫ����
{
	int i = 0;
	for (i = 0; i < sz - 1; i++) {
		int j = 0;
		for (j = 0; j < sz - 1 - i; j++) {
			if (arr[j] > arr[j + 1]) {
				int tmp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = tmp;
			}
		}
	}
}