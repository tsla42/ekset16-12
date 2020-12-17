#include <iostream>
#include <cstdio> 

int main() {
  int n, m, l, r, ar, br, *a, *b, sum=0, count=0;
  scanf("%d %d %d %d", &n, &m, &l, &r);

  a= new int[n+1];
  a[0]=0;
  b= new int[m+1];
  b[0]=0;

  for (int i=1; i<=n; i++) {
  scanf ("%d", &ar);
  a[i]=ar;
  }
  for (int j=1; j<=m; j++) {
  scanf ("%d", &br);
  b[j]=br;
  }
  for (int i=1; i<=n; i++) {
    for (int j=1; j<=m; j++) {
      sum= a[i]+ b[j];
      if ( (sum>=l) && (sum<=r) ) {
        count++;
      }
    }
  }
  printf ("%d", count);
}