#include<stdio.h>

int fnone();

int fntwo();

int fnthree();

int fnfour();

int fnfive();

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

int fnfour()
{
  return 4;
}

int fnfive()
{
  return 5;
}

int main()
{
  printf("%d\n", fnone());
  printf("%d\n", fntwo());
  printf("%d\n", fnthree());
  printf("%d\n", fnfour());
  printf("%d\n", fnfive());
  return 0;
}
