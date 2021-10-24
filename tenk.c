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

int fnthree()
{
  return 3;
}

int main()
{
  printf("%d\n", fnone());
  printf("%d\n", fntwo());
  printf("%d\n", fnthree());
  return 0;
}
