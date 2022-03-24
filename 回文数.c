bool isPalindrome(int x)
{
    if (x < 0)
    {
        return false;
    }
    // x�Ǽ�λ������temp��Ϊ��λ��
    int temp = 1;
    while (x / temp >= 10)
    {
        temp *= 10;
    }
    while (x > 0)
    {
        //��ȡx��ߵĵ�һλ
        int left = x / temp;
        //��ȡx�����һλ
        int right = x % 10;
        //�Ƚ���λ�Ƿ���ͬ
        if (left != right)
        {
            return false;
        }
        //��x�ѱȽϵĵ�һλ�����һλȥ��
        x = x % temp / 10;
        //x�仯��tempҲ����䣬�Ա��ȡ��һλ	
        temp /= 100;
    }
    return true;
}