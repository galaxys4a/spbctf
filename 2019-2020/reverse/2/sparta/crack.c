#include <stdio.h>

int main()
{
	char s[256];
	char str[256] = "st_3phr_b13gcsvut_3yf1rz{55}";
	int i;
	int j;
	int k;
	int n;
	
	n = strlen(str);
	
	for ( i = 0; i <= 6; ++i )
	{
		for ( j = i; j < n; j += 7 )
		{
			s[j] = str[k++];
		}
	}
	
	printf("%s\n", s);
	return 0;
}