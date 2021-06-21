#include <stdio.h>

int main()
{
	char s[256] = "Flag{This Is Simple}";
 	s[10] = 49;
  	s[11] = 52;
  	s[6] = 42;
	puts(s);
	return 0;
}
