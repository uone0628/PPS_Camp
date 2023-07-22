#include<iostream>
using namespace std;

int main() {
	int n;
	cin >> n;

	string s;

	for (int i = 0; i < n; i++) 
    {
		cin >> s;

		int score = 0, count = 0;

		for(int j = 0; j < s.length(); j++) 
        {
			if (s[j] == 'O') 
                count++;
			else 
                count = 0;
			score += count;
		}

		cout << score << "\n";
	}
	
    return 0;
}