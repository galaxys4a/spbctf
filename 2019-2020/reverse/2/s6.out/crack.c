#include <stdio.h>

int main()
{
  char s[7];

  s[3] = 119;
  s[6] = 68;
  s[5] = 51;
  s[2] = 70;
  s[1] = 50;
  s[4] = 49;
  s[0] = 'a';

  printf("%s\n", s);

  return 0;
}