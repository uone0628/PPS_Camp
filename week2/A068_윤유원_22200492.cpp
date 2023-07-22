#include <iostream>
#include <queue>

using namespace std;

int main() {
	ios_base :: sync_with_stdio(false);
	cin.tie(NULL);

	queue<int> Q;
	string command;
	int t, cnt;

	cin >> t;

	for (int i = 0; i < t; i++) 
    {
		cin >> command;
		
		if (command == "push") 
        {
			cin >> cnt;
			Q.push(cnt);
		}

		else if (command == "pop") 
        {
			if (Q.empty()) {
				cout << "-1" << endl;
			} else {
				cout << Q.front() << endl;
				Q.pop();
			}
		}

		else if (command == "front") 
        {
			if (Q.empty()) 
				cout << "-1" << endl;
			else
				cout << Q.front() << endl;
		}

		else if (command == "back") 
        {
			if (Q.empty())
				cout << "-1" << endl;
			else
				cout << Q.back() << endl;
		}

		else if (command == "size")
			cout << Q.size() << endl;

		else if (command == "empty")
			cout << Q.empty() << endl;

		else if (command == "top") 
        {
			if (Q.empty())
				cout << "-1" << endl;
			else
				cout << Q.front() << endl;
		}
	}

	return 0;
}