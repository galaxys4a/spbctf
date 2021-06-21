#include <stdio.h>

int main()
{
  int k = 0;
  while ((-999 + k) % 32000 != (-17564) / 2)
  {
    k = k - 1;
  }
  printf("k = %d\n", k);

  int x1 = -9;
  int y1 = -43;
  int x0 = 111;
  int y0 = 181;
  int res = 0;
  for (int i = 3; i >= 0; i--)
  {
    if (i % 2 == 0)
    {
      res += (x0 * x1 + y0 * y1) % 32000;
      printf("%d\n", res);
    }
  }
  return 0;
}