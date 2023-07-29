#include <iostream>
using namespace std;

int main()
{
    // 정수 N이 주어졌을때 소인수분해하는 프로그램
    int n;
    cin >> n;

    while (n > 1)
    {
        for (int i = 2; i <= n; i++)
        {
            if (n % i == 0)
            {
                cout << i << endl;
                n /= i;
                break;
            }
        }
    }

    return 0;
}