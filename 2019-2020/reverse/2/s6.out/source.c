int __cdecl main(int argc, const char **argv, const char **envp)
{
  char s; // [esp+1h] [ebp-17h]
  int v5; // [esp+Ch] [ebp-Ch]

  v5 = 11;
  printf("Enter serial number: ");
  fgets(&s, 11, stdin);
  Check(&s);
  return 0;
}

int __cdecl Check(char *s)
{
  char v1; // bl

  v1 = 0;
  if ( strlen(s) > 6 )
  {
    if ( s[3] == 119 )
      v1 = 1;
    if ( s[6] == 68 )
      ++v1;
    if ( s[5] == 51 )
      ++v1;
    if ( s[2] == 70 )
      ++v1;
    if ( s[1] == 50 )
      ++v1;
    if ( s[4] == 49 )
      ++v1;
  }
  PrintOK(v1 == 6);
  return PrintError(v1 != 6);
}
