#include <stdio.h>

int main()
{
  int n;
  scanf("%d", &n);
  int a[n];
  a[0] = 0;
  a[1] = 1;
  for(int i=2;i<=n;i++)
  {
    a[i] = (a[i-1]%1000)+(a[i-2]%1000);
  }
  printf("%d", a[n]%1000);
  return 0;
}
