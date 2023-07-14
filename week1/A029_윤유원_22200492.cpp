#include <iostream>
using namespace std;

int main() {
    int n, way;

    cin >> n >> way;

    if(n > 5) 
    {
        cout << "Love is open door";
    } 
    else 
    {
        for(int i = 1; i < n; i++)
        {
            way = 1 - way;
            cout << way << '\n';
        }
    }

    return 0;
}