#include <stdio.h>

int main()
{
	char source[256] = "simple_answer";
	char dest[256];

	strncpy(dest, &source[7], 6);
	dest[6] = 95;
	strncpy(&dest[7], source, 6);
	dest[13] = 0;

	printf("%s\n", dest);

	return 0;
}
