#include <stdio.h>

int main()
{
	char input[256];
	int len;
	int i;
	
	// len = 2k + 1 and len > 4
	len = 5;
	input[0] = 94;
	input[len >> 1] = 95;
	input[len - 1] = 94;
	
	for (i = 1; i < (len >> 1); i++)
	{
		input[i] = 33;
	}
	
	for (i = (len >> 1) + 1; i < len - 1; i++)
	{
		input[i] = 48;
	}	
	
	printf("%s\n", input);
	return 0;
}