#include <stdio.h>
#include <string.h>

void swaper(char *s, int k)
{
  char tmp;
  int i;
  int len;

  len = strlen(s);
 for ( i = 0; ; i += k )
  {
    if ( i >= len - k )
      break;
    tmp = s[i];
    s[i] = s[i - 1 + k];
    s[i - 1 + k] = tmp;
  }
}

int main()
{
	char s[256] = "_A_m_aFneSuyn_w_IypvSr_ahIEwp_gitrnMhaetevT_so!";
	for (int i = 2; i <= 10; i++)
	{
		swaper(s, i);
	}
	puts(s);
	return 0;
}
