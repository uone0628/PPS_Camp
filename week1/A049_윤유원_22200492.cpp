#include <iostream>
#include <string>
using namespace std;
 
int main(int argc, char *argv[]) 
{
	bool m, check, flag, con; 
	int count;
	string s;
	char pre;
	char v[5] = { 'a', 'e', 'i', 'o', 'u' };
 
	while (1) 
    {
		m = false, check = false, flag = false;
		count = 0;
 
		cin >> s;
 
		if (s == "end")
			break;
	
		for (int i = 0; i < s.length(); ++i) 
        {
			con = false;
			if (i != 0) 
            {
				if (s[i] == s[i - 1] && s[i] != 'e' && s[i] != 'o') 
                {
					flag = true;
					break;
				}
			}
			for (int j = 0; j < 5; ++j) 
            {
				if (s[i] == v[j]) 
                {
					if (check == false) 
						count = 0;
					m = true, check = true, con = true;
					++count;
				}
            }
			if (!con) 
            {
				if (check == true)
					count = 0;
				check = false;
				++count;
			}
			if (count == 3) 
            {
				flag = true;
				break;
			}
			if (flag)
				break;
		}

		if (!m)
			flag = true;
 
		if (flag) 
			cout << "<" << s << "> is not acceptable." << endl;
		else
			cout << "<" << s << "> is acceptable." << endl;
	}
 
	return 0;
}