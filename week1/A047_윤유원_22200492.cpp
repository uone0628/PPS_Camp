#include <iostream>
#include <string>
using namespace std;

int main() {
	string n;

	cin >> n;
	int cnt = 1;

	for (int i = 0; i < n.size(); i++)
	{
		if (cnt % 11 != 0)
		{
			cout << n[i];
		}
		else 
        {
			cout << "\n";
			cnt = 0;
			i--;
		}

		cnt++;
	}

	return 0;
}