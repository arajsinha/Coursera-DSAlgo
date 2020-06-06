#include <stdio.h>

long long int gcd(long long int a, long long int b)
{
  if (a==b)
  {
    printf("%d", a);
  }
  if (a>b)
  {
    while(b!=0)
    {
      long long int gcd = a % b;
      a = b;
      b = gcd;
    }
    printf("%lld", a);
  }
  else if(b>a)
  {
    while(a!=0)
    {
      long long int gcd = b % a;
      b = a;
      a = gcd;
    }
    printf("%lld", b);
  }
}

int main()
{
  long long int a,b;
  scanf("%lld %lld", &a, &b);
  gcd(a,b);
}
