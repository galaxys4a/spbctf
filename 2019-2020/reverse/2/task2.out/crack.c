#include <stdio.h>

char alph[256] = "abcdefghijklmnopqrstuvwxyz{}_";
char s[256] = "dix_gyhiiz}xdduah}puvyhn}u}pxa}tnbfh}ozbc";
char buf[256];

char transform(char c, char c1, char c2)
{
	return alph[(c1 * c + c2) % 29];
}

void func(char c1_min, char c1_max, char c2_min, char c2_max)
{
	int i;
	int len = strlen(s);
	char c1;
	char c2;
	
	for (c1 = c1_min; c1 <= c1_max; c1++)
	{
		for (c2 = c2_min; c2 <= c2_max; c2++)
		{
			strcpy(buf, s);
			for (i = 0; i < len; i++)
			{	
				buf[i] = transform(buf[i], c1, c2);
			}
			if (strncmp(buf, "flag", 3) == 0)
				printf("\(%c %c)[%s]\n", c1, c2, buf);				
		}
	}
}

int main()
{
	func('a', 'z', 'a', 'z');
	func('a', 'z', 'A', 'Z');
	func('A', 'Z', 'a', 'z');
	func('A', 'Z', 'A', 'Z');
	return 0;
}