#include<stdio.h>

int fnone();

int fntwo();

int fnthree();

int fnfour();

int fnfive();

int fnsix();

int fnseven();

int fneight();

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

int fnsix()
{
  return 6;
}

int fnseven()
{
  return 7;
}

int fneight()
{
  return 8;
}

int main()
{
  printf("%d\n", fnone());
  printf("%d\n", fntwo());
  printf("%d\n", fnthree());
  printf("%d\n", fnfour());
  printf("%d\n", fnfive());
  printf("%d\n", fnsix());
  printf("%d\n", fnseven());
  printf("%d\n", fneight());
  return 0;
}
