#include <iostream>
#include <string>
using namespace std;

int main() {
    int apb[26] = {0,}, dif = 0, cnt = 0, sum = 0, n;
    string word;

    cin>>n;
    for(int j = 0; j < n; j++)
    {
        cin >> word;
        for(int i = 0; i < word.length(); i++)
        {
            apb[word[i] - 'a'] = 1;
            if(word[i] != word[i + 1])
                dif++;
        }

        for(int i = 0; i < 26; i++)
        {
            if(apb[i] == 1)
                cnt++;
            apb[i] = 0;
        }
        
        if(cnt == dif)
            sum++;

        cnt = 0; 
        dif = 0;
    }

    cout << sum << endl;

    return 0;
}