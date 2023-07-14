#include <iostream>
using namespace std;

int main() {
	int a[8];
	int as = 0;
	int ds = 0;

	for (int i = 0; i < 8; i++)
	{
		cin >> a[i];

		if (a[i] == i + 1)
			as += 1;
		else if (a[i] == 8 - i)
			ds += 1;
	}

	if (as == 8)
		cout << "ascending";
	else if (ds == 8)
		cout << "descending";
	else
		cout << "mixed";
        
	return 0;
}