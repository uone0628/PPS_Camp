#include <iostream>
#include <string>
using namespace std;

int main() {
    int times[] = {3, 3, 3, 4, 4, 4, 5, 5, 5, 6, 6, 6, 7, 7, 7, 8, 8, 8, 8, 9, 9, 9, 10, 10, 10, 10};
    int r = 0;
    string in;

    cin >> in;
    for(int i = 0; i < in.length(); i++)
        r += times[(in[i] - 'A')];
    cout << r;

    return 0;
}