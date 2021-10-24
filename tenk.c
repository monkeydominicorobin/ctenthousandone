#include<stdio.h>

int fnone();

int fntwo();

int fnone()
{
  return 1;
}

int fntwo()
{
  return 2;
}

int main()
{
  printf("%d\n", fnone());
  printf("%d\n", fntwo());
  return 0;
}
