#include <iostream>
using namespace std;

int main() {
  int n, sum = 0;

  scanf("%d", &n);
  
  for(int i = 0; i < n; i++) 
  {
    int tmp;
    scanf("%d", &tmp);
    sum += tmp;
  }

  printf("%d", sum - n + 1);

  return 0;
}