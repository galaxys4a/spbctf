int __cdecl main(int argc, const char **argv, const char **envp)
{
  char c; // cl
  unsigned int m; // eax
  char s[256]; // [rsp+10h] [rbp-120h]
  const char *str; // [rsp+110h] [rbp-20h]
  unsigned int n; // [rsp+11Ch] [rbp-14h]
  unsigned int j; // [rsp+120h] [rbp-10h]
  unsigned int i; // [rsp+124h] [rbp-Ch]
  unsigned int k; // [rsp+128h] [rbp-8h]
  int check; // [rsp+12Ch] [rbp-4h]

  puts("With a shield or on a shield? ");
  fgets(s, 255, _bss_start);
  n = strlen(s) - 1;
  s[n] = 0;
  str = "st_3phr_b13gcsvut_3yf1rz{55}";
  check = 1;
  k = 0;
  for ( i = 0; i <= 6; ++i )
  {
    for ( j = i; j < n; j += 7 )
    {
      c = s[j];
      m = k++;
      if ( c != str[m] )
      {
        check = 0;
        break;
      }
    }
    if ( !check )
      break;
  }
  if ( check )
    puts("Wow, with a shield :)");
  else
    puts("Oh, on a shield :(");
  return 0;
}
