#include <iostream>
using namespace std;

int main() {
    int t, sum = 0;
    int arr[26] = {0};
    string s;

    cin >> t;

    while(t--)
    {
        cin >> s;

        for(int i = 0; i < s.length(); i++)
        arr[s[i]-'A'] = 1;
        
        for(int i = 0; i < 26; i++)
            if(arr[i] == 0)
                sum+=(i+65);

        cout << sum << endl;

        for(int i = 0; i < 26; i++)
        arr[i] = 0;
        
        sum=0;
    }

    return 0;
}