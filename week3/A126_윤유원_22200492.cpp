#include <stdio.h>

int chk(int n)
{
    int n1 = n % 10;
    int n2 = n / 10 % 10;
    int n3 = n / 100 % 10;

    if (n2 * 2 == n1 + n3)
        return 1;
    return 0;
}

int main()
{
    int n;
    scanf("%d\n", &n);

    int ret;
    if (n < 100)
        ret = n;
    else
    {
        ret = 99;
        if (n == 1000)
            n = 999;
        for (int i = 100; i <= n; ++i)
        {
            ret += chk(i);
        }
    }

    printf("%d\n", ret);
    return 0;
}