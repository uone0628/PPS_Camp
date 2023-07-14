#include <iostream>
using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

    int n;
    int arr[21];

	cin >> n;
	for (int i = 0; i < n; i++) 
    {
		cin >> arr[i];
	}

	int y = 0, m = 0;
	for (int i = 0; i < n; i++) 
    {
		int a = arr[i];
		while (a >= 0) 
        {
			a -= 30;
			y += 10;
		}
		a = arr[i];
		while (a >= 0) 
        {
			a -= 60;
			m += 15;
		}
	}

	if (y < m) cout << "Y " << y << endl;
	else if (y > m) cout << "M " << m << endl;
	else cout << "Y M " << y << endl;

    return 0;
}