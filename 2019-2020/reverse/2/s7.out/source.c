int __cdecl main(int argc, const char **argv, const char **envp)
{
  char s; // [esp+1h] [ebp-17h]
  int v5; // [esp+Ch] [ebp-Ch]

  v5 = 11;
  printf("Enter serial number: ");
  scanf("%s", &s);
  Check(&s);
  return 0;
}

int __cdecl Check(char *s)
{
  signed int i; // [esp+8h] [ebp-10h]
  unsigned __int8 v3; // [esp+Fh] [ebp-9h]

  if ( (unsigned __int8)strlen(s) != 6 || s[5] != 120 )
  {
    v3 = 0;
  }
  else
  {
    v3 = 1;
    for ( i = 1; i < 6; ++i )
    {
      if ( s[i] != s[i - 1] + i )
      {
        v3 = 0;
        break;
      }
    }
  }
  PrintOK(v3);
  return PrintError((unsigned __int8)(v3 ^ 1));
}