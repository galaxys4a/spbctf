#include <stdio.h>

int main()
{
	int i;
	char s[6];
	
	s[5] = 120;
	for ( i = 5; i > 0; i-- )
    {
      s[i - 1] = s[i] - i;
    }

    printf("%s\n", s);

	return 0;
}