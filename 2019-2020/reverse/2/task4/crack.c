#include <stdio.h>

int main()
{
	char a[14];
	char s[256] = "This is my string.Possible this is flag";
	int i;
	int n;
	
	for (i = 0; i < 9; i++)
	{
		a[i] = 49 + i;
	}
	
	for (i = 9; i < 14; i++)
	{
		a[i] = 97 + (i - 9);
	}
	
	n = strlen(s);
	
	printf("Flag{");
	for (i = 0; i < n; i++)
	{
		printf("%c", a[s[i] % 14]);
	}
	printf("}\n");
	
	return 0;
}