#include <stdio.h>

int find_index(char *s, char c)
{
	int i;
	int len;
	
	len = strlen(s);
	for (i = 0; i < len; i++)
	{
		if (s[i] == c)
		{
			break;
		}
	}
	
	if (i == len)
	{
		i = -1;
	}
	
	return i;
}

int main()
{
	char input[256];
	char output[256] = "k_mfblobadb{udp{idp4{iaxz";
	
	char str1[256] = "abcdefghijklmnopqrstuvwxyz_{}0123456789";
	char str2[256] = "wmf9slha2r}v7te_13kby8ug4c{oz5j0idp6nqx";
	
	int i;
	int j;
	int len;
	char c;
	
	len = strlen(output);
	for (i = 0; i < len; i++)
	{
		c = output[i];
		j = find_index(str2, c);
		input[i] = str1[j];
	}
	
	printf("%s\n", input);
	return 0;
}