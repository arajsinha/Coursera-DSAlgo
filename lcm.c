#include <stdio.h>

long long int gcd(long long int a, long long int b)
{
  if (a==b)
  {
    return a;
  }
  if (a>b)
  {
    while(b!=0)
    {
      long long int gcd = a % b;
      a = b;
      b = gcd;
    }
    return a;
  }
  else if(b>a)
  {
    while(a!=0)
    {
      long long int gcd = b % a;
      b = a;
      a = gcd;
    }
    return b;
  }
}

long long int lcm(long long int a, long long int b, long long int c)
{
  printf("%lld", ((a*b)/c));
}

int main()
{
  long long int a,b;
  scanf("%lld %lld", &a, &b);
  long long int c = gcd(a,b);
  lcm(a,b,c);
}
