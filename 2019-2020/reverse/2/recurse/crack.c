#include <stdio.h>

int f1(int a)
{
	return a;
}

int f2(int a)
{
	return (a ^ 0xFFFFFFFF);
}

int f3(int a)
{
	return (a + 17);
}

int f4(int a)
{
	return (a - 23);
}

int main()
{
	int (*f[29])(int);
	char s[30];
	char t[30] = "\x73\x8f\x51\x7a\x63\x99\x6a\x7f\xcf\x77\x76\x64\x20\x9b\x5f\x90\x30\x8a\x4e\x83\x20\x94\x22\x76\x8b\x68\x4b\x74\x6c";
	int i;

    f[0] = f1;
    f[1] = f2;
    f[2] = f3;
    f[3] = f4;
    f[4] = f3;
    f[5] = f2;
    f[6] = f3;
    f[7] = f4;
    f[8] = f2;
    f[9] = f1;
    f[10] = f4;
    f[11] = f1;
    f[12] = f3;
    f[13] = f2;
    f[14] = f1;
    f[15] = f4;
    f[16] = f1;
    f[17] = f2;
    f[18] = f3;
    f[19] = f4;
    f[20] = f3;
    f[21] = f2;
    f[22] = f3;
    f[23] = f4;
    f[24] = f2;
    f[25] = f1;
    f[26] = f4;
    f[27] = f1;
    f[28] = f3;

  	for (i = 0; i <= 28; i++)
  	{
  		s[i] = f[i](t[i]);;
  	}
  	s[29] = '\0';

  	printf("%s\n", s);

	return 0;
}