int __cdecl main(int argc, const char **argv, const char **envp)
{
  int result; // eax
  int c1; // [esp+18h] [ebp-40h]
  int c2; // [esp+1Ch] [ebp-3Ch]
  char s[4]; // [esp+22h] [ebp-36h]
  unsigned int v7; // [esp+4Ch] [ebp-Ch]

  v7 = __readgsdword(0x14u);
  if ( argc > 2 )
  {
    strcpy(s, "dix_gyhiiz}xdduah}puvyhn}u}pxa}tnbfh}ozbc");
    c1 = (char)get_idx(*argv[1]);
    c2 = (char)get_idx(*argv[2]);
    if ( c1 != -1 && c2 != -1 )
    {
      decode(s, (char)c1, (char)c2);
      puts(s);
      result = 0;
    }
    else
    {
      puts("Sorry, bro");
      result = 3;
    }
  }
  else
  {
    puts("WHAAAAAT?");
    result = 2;
  }
  return result;
}

int __cdecl decode(char *s, int c1, int c2)
{
  int result; // eax
  int i; // [esp+14h] [ebp-14h]
  char *tmp; // [esp+18h] [ebp-10h]
  signed int len; // [esp+1Ch] [ebp-Ch]

  len = strlen(s);
  tmp = s;
  for ( i = 0; ; ++i )
  {
    result = i;
    if ( i >= len )
      break;
    *tmp = transform(*tmp, c1, c2);
    ++tmp;
  }
  return result;
}

int __cdecl transform(char s, char c1, char c2)
{
  char c; // [esp+1Fh] [ebp-9h]

  c = get_idx(s);
  if ( c == -1 )
  {
    puts("Wrong input");
    exit(0);
  }
  return (unsigned __int8)alph[(c1 * c + c2) % 29];
}
