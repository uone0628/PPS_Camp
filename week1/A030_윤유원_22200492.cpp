#include <iostream>
using namespace std;

int main() {
  int n, stat;
  float gg, gb, bg, bb;
  float g[101], b[101];

  scanf("%d %d", &n, &stat);
  scanf("%f %f %f %f",&gg, &gb, &bg, &bb);
  
  if(stat == 0)
  {
    g[1] = gg;
    b[1] = gb;
  }
  else
  {
    g[1] = bg;
    b[1] = bb;
  }

  for(int i = 2; i <= n; i++)
  {
    g[i] = g[i-1] * gg + b[i-1] * bg;
    b[i] = g[i-1] * gb + b[i-1] * bb;
  }

  printf("%.0f\n", g[n] * 1000);
  printf("%0.f\n", b[n] * 1000);
  
  return 0;
}