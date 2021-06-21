#include <stdio.h>

int main()
{
	char buf[6];
	
	buf[3] = 97;
	buf[1] = 49;
	buf[5] = 66;
	buf[0] = 99;
	buf[2] = 52;
	buf[4] = 101;
	
	printf("%s\n", buf);
    
	return 0;
}