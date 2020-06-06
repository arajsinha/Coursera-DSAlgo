#include <stdio.h>

int change(int a)
{
  int money[] = {10,5,1};
  int min = 0;

  for(int i=0;a>0;i++)
  {
    min = min + a/money[i];
    a = a % money[i];
  }
  printf("%d", min);
}

int main()
{
  int m;
  scanf("%d", &m);
  change(m);
}
