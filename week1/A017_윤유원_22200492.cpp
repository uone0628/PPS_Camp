#include <iostream>
#include <cstring>
using namespace std;

int main() {
	char room[8];
	int n[10] = {0};

	cin >> room;

	for (int i = 0; i < strlen(room); i++)
		n[room[i] - '0']++;

	n[6] += n[9];
	n[6] = (n[6] + 1) / 2;
	n[9] = 0;
	
	int max = 0;
	for (int i = 0; i < 10; i++)
	{
		if (max < n[i])
		{
			max = n[i];
		}
	}
	
	cout << max;

	return 0;
}