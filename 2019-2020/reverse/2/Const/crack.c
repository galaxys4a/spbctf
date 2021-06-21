#include <stdio.h>

int main()
{
  char flag[32] = "Flag{This_is_definetly_a_flag}";
  char v0, v1, v2;
  char s[32];

  for (int i = 0; i < 32; i++)
  	s[i] = flag[i];

  v0 = flag[5];
  flag[5] = flag[14];
  flag[14] = v0;
  v1 = flag[20];
  flag[20] = flag[21];
  flag[21] = flag[7];
  flag[7] = v1;
  v2 = flag[19];
  flag[19] = flag[20];
  flag[20] = v2;

  puts(flag);
  return 0;
}