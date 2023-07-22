#include <iostream>
using namespace std;

int main() {
    int x, i = 0;
    cin >> x;

    while(x > 0)
    {
        ++i;
        x -= i;
    }

    if(i % 2 == 1)
        cout << 1 - x << "/" << i + x;
    else    
        cout << i + x << "/" << 1 - x;

    return 0;
}