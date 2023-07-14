#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int n;
	cin >> n;

	vector<int>a(n);
	vector<int>b(n);

	int m = 0, sum = 0;

	for (int i = 0; i < n; i++)	
	    cin >> a[i];
	
	for (int i = 0; i < n; i++)	
	    cin >> b[i];
	
	sort(a.begin(), a.end());

	for (int i = 0; i < n; i++)	
	{
		m = max_element(b.begin(), b.end()) - b.begin();	
		sum += a[i] * b[m];	
		b[m] = 0;
	}

	cout << sum;

	return 0;
}