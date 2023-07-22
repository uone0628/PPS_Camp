#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

vector<pair<int, int>> axis;
 
int main() {
  int num, x, y;

  cin >> num;
  
  for(int i = 0; i < num; i++)
  {
    cin >> x >> y;
    axis.push_back({x, y});
  }

  sort(axis.begin(), axis.end());
  
  for(int i = 0; i < num; i++)
    cout << axis[i].first << " " << axis[i].second << "\n";
  
  return 0;
}