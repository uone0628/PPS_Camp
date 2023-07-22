#include <iostream>
using namespace std;

int main() {
  int t, k;

  cin >> t;

  while(t--)
  {
    cin >> k;
    int cnt = 1;
    for(int i = 1; i < k; i++)
      cnt = cnt*2 +1 ;
    
    cout << cnt << endl;
  }
  
  return 0;
}
