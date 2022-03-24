bool isPalindrome(int x)
{
    if (x < 0)
    {
        return false;
    }
    // x是几位数，则temp就为几位数
    int temp = 1;
    while (x / temp >= 10)
    {
        temp *= 10;
    }
    while (x > 0)
    {
        //获取x左边的第一位
        int left = x / temp;
        //获取x的最后一位
        int right = x % 10;
        //比较两位是否相同
        if (left != right)
        {
            return false;
        }
        //将x已比较的第一位和最后一位去掉
        x = x % temp / 10;
        //x变化，temp也必须变，以便获取第一位	
        temp /= 100;
    }
    return true;
}