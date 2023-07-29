#include <iostream>
#include <stack>
using namespace std;

stack<int> s;

int main(void)
{
    int k;
    cin >> k;

    int num;
    int sum = 0;

    for (int i = 0; i < k; i++)
    {
        cin >> num;

        if (num != 0)
            s.push(num);

        else if (num == 0)
            s.pop();
    }

    while (1)
    {
        if (s.size() == 0)
            break;
        else
        {
            sum += s.top();
            s.pop();
        }
    }
    cout << sum;

    return 0;
}