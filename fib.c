#include <stdio.h>

int main()
{
  long long int n;
  scanf("%lld", &n);
  long long int a[n];
  a[0] = 0;
  a[1] = 1;
  for(long long int i=2;i<=n;i++)
  {
    a[i] = a[i-1]+a[i-2];
  }
  printf("%lld", a[n]);
  return 0;
}
