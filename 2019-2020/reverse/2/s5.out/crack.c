#include <stdio.h>

int main()
{
	char buf[7];
	int i;
	
	buf[0] = 97;
	buf[6] = 97;
	for (i = 1; i < 6; i++)
	{
		buf[i] = buf[i - 1] + i; 
	}		
	
	printf("%s\n", buf);

	return 0;
}