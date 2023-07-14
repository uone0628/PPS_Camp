#include <iostream>
#include <string>
using namespace std;

int main(){
  ios::sync_with_stdio(0);
  cin.tie(NULL);
  cout.tie(NULL);

  int count[26]={0,}; 
  int n;
  cin >> n;

  for(int i = 0; i < n; i++)
  {
    string str = "";
    cin >> str;
    count[str[0] - 'a']++;
  }
   
  int isExist = 0; 
  
  for(int i = 0; i < 26; i++)
  {  
    if (count[i] >= 5)
    {
      cout << (char)('a' + i);
      isExist = 1;
    }
  }
  
  if (isExist == 0)
  { 
    cout << "PREDAJA" << "\n";
  }
  
  return 0;
}