int __cdecl main(int argc, const char **argv, const char **envp)
{
  int result; // eax
  char dest[128]; // [rsp+10h] [rbp-90h]
  unsigned __int64 v5; // [rsp+98h] [rbp-8h]

  v5 = __readfsqword(0x28u);
  if ( argc > 1 )
  {
    if ( strlen(argv[1]) <= 128 )
    {
      strncpy(dest, argv[1], 128uLL);
      swaper(dest, 10);
      swaper(dest, 9);
      swaper(dest, 8);
      swaper(dest, 7);
      swaper(dest, 6);
      swaper(dest, 5);
      swaper(dest, 4);
      swaper(dest, 3);
      swaper(dest, 2);
      puts(dest);
      result = 0;
    }
    else
    {
      puts("String is too long");
      result = 1;
    }
  }
  else
  {
    puts("Give me a string");
    result = 1;
  }
  return result;
}

__int64 __fastcall swaper(char *s, int k)
{
  char tmp; // ST13_1
  __int64 result; // rax
  int i; // [rsp+14h] [rbp-Ch]
  size_t len; // [rsp+18h] [rbp-8h]

  len = strlen(s);
  for ( i = 0; ; i += k )
  {
    result = i;
    if ( i >= len - k )
      break;
    tmp = s[i];
    s[i] = s[i - 1 + k];
    s[i - 1 + k] = tmp;
  }
  return result;
}
