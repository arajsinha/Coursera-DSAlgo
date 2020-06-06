#include <stdio.h>

void MaxPairProd(long long int n, long long int b[])
{
  long long int max1 = 0, max2 = 0;
  for(long long int i=0;i<n;i++)
  {
    if(b[i]>max1)
    {
      max2 = max1;
      max1 = b[i];
    }
    else if(b[i]>max2)
    {
      max2 = b[i];
    }
  }
  printf("%lld", max1*max2);
}

int main()
{
  long long int n; long long int res;
  scanf("%lld", &n);
  if(n<2)
  {
    return 0;
  }
  long long int b[n];
  for(long long int i=0;i<n;i++)
  {
    scanf("%lld", &b[i]);
  }

  MaxPairProd(n, b);

  return 0;
}
