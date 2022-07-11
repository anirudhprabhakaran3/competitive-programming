#include <bits/stdc++.h>
 
using namespace std;
 
int main() {
  int n, x, i, ok = 1;
  scanf("%d %d",&n,&x);
  for (i=0;i<n;i++) {
    int q, w;
    scanf("%d %d",&q,&w);
    if (q == x || q == 7-x || w == x || w == 7-x) ok = 0;
  }
  if (ok) puts("YES"); else puts("NO");
  return 0;
}