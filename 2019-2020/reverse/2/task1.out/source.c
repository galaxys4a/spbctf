int hash(char *s)
{
	int n;
	char *tmp;
	int hash;
	int i;

	n = strlen(s) / 4;
	hash = -889266515;
	tmp = s;
	for ( i = 0; i < n; ++i )
	{
		hash ^= tmp;
		tmp += 4;
	}
	return hash;
}

int __cdecl main(int argc, const char **argv, const char **envp)
{
  int result; // eax
  char s[4]; // [esp+1h] [ebp-29h]
  int v5; // [esp+5h] [ebp-25h]
  int v6; // [esp+9h] [ebp-21h]
  int v7; // [esp+Dh] [ebp-1Dh]
  int v8; // [esp+11h] [ebp-19h]
  char v9; // [esp+15h] [ebp-15h]
  int h2; // [esp+16h] [ebp-14h]
  int h1; // [esp+1Ah] [ebp-10h]
  size_t len; // [esp+1Eh] [ebp-Ch]
  int *v13; // [esp+22h] [ebp-8h]

  v13 = &argc;
  if ( argc > 1 )
  {
    len = strlen(argv[1]);
    if ( len & 3 )
    {
      puts("Ok, you are wrong");
      result = 2;
    }
    else if ( !strcmp(argv[1], "FLAG{123REALFLAG!!!}") )
    {
      puts("Not enough!");
      result = 3;
    }
    else
    {
      h1 = hashf((char *)argv[1]);
      h2 = hashf("FLAG{123REALFLAG!!!}");
      if ( h1 == h2 )
      {
        *(_DWORD *)s = -1880242205;
        v5 = -2115706914;
        v6 = -1679436554;
        v7 = -1745500422;
        v8 = -1242181906;
        v9 = 0;
        decode(s, h1);
        puts(s);
      }
      result = 0;
    }
  }
  else
  {
    puts("What?");
    result = 1;
  }
  return result;
}
