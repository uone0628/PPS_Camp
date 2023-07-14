#include <iostream>
using namespace std;

int main() {
	int n, answer = 0;
	int s = 0;

	for (int i = 0; i < 5; i++) 
    {
		cin >> n;
		s += n * n;
	}

	answer = s % 10;
	cout << answer;
}