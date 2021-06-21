#include <stdio.h>

int main()
{
	char s[256];
	strcpy(s, "Flag{This Is Simple}");
	s[10] = 95;
	s[11] = 52;
	s[6] = 122;
	s[4] = 55;
	s[7] = 84;
  	s[12] = 104;
  	puts(s);
	return 0;
}
