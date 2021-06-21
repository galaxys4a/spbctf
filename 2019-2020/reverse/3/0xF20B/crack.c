#include <stdio.h>

int main(void) {
  char flag[28];
  flag[0] = 93;
  flag[1] = 66;
  flag[2] = 30;
  flag[3] = 29;
  flag[4] = 117;
  flag[5] = 94;
  flag[6] = 66;
  flag[7] = 25;
  flag[8] = 117;
  flag[9] = 98;
  flag[10] = 25;
  flag[11] = 102;
  flag[12] = 102;
  flag[13] = 117;
  flag[14] = 67;
  flag[15] = 89;
  flag[16] = 117;
  flag[17] = 108;
  flag[18] = 120;
  flag[19] = 26;
  flag[20] = 104;
  flag[21] = 100;
  flag[22] = 27;
  flag[23] = 105;
  flag[24] = 107;
  flag[25] = 126;
  flag[26] = 111;
  flag[27] = 0;
  memfrob(&flag, 28);
  printf("%s\n", flag);
  return 0;
}