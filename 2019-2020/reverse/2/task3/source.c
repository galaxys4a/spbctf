int __cdecl main(int argc, const char **argv, const char **envp)
{
  int result; // eax
  FILE *stream1; // [esp+18h] [ebp-210h]
  FILE *stream2; // [esp+18h] [ebp-210h]
  char s1[256]; // [esp+1Ch] [ebp-20Ch]
  char s2[256]; // [esp+11Ch] [ebp-10Ch]
  unsigned int n; // [esp+21Ch] [ebp-Ch]

  n = __readgsdword(0x14u);
  stream1 = fopen("Hello1", "r");
  if ( stream1 )
  {
    fgets(s1, 255, stream1);
    fclose(stream1);
    stream2 = fopen("Hello2", "r");
    if ( stream2 )
    {
      fgets(s2, 255, stream2);
      fclose(stream2);
      if ( check(s1, s2) )
      {
        puts("Nope");
        result = 1;
      }
      else
      {
        if ( !check2(s1) )
          printf("Flag{%s}\n", s1);
        result = 0;
      }
    }
    else
    {
      puts("NOT AGAIN!");
      result = 3;
    }
  }
  else
  {
    puts("NOOOOO");
    result = 5;
  }
  return result;
}

signed int __cdecl check2(char *a1)
{
  if ( strnlen(a1, 256) != 8 )
    return -1;
  if ( *a1 != a1[6] )
    return -1;
  if ( a1[2] != a1[3] )
    return -1;
  if ( a1[3] != a1[7] )
    return -1;
  if ( a1[1] != 102 )
    return -1;
  if ( a1[7] != 115 )
    return -1;
  if ( *a1 != 122 )
    return -1;
  if ( a1[5] - a1[4] != 8 )
    return -1;
  if ( a1[5] == 105 )
    return 0;
  return -1;
}

signed int __cdecl check(char *a1, char *a2)
{
  int i; // [esp+4h] [ebp-14h]
  int n1; // [esp+8h] [ebp-10h]
  int n2; // [esp+Ch] [ebp-Ch]

  n1 = strnlen(a1, 256);
  n2 = strnlen(a2, 256);
  if ( n1 != n2 )
    return -1;
  for ( i = 0; i < n1; ++i )
  {
    if ( a1[i] != a2[n2 - 1 - i] )
      return -1;
  }
  return 0;
}