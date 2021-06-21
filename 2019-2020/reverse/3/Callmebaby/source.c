int __cdecl main(int argc, const char **argv, const char **envp)
{
  int result; // eax

  if ( argc > 1 )
  {
    Validate6c4b677a46((char *)argv[1]);
    result = 0;
  }
  else
  {
    printf("USAGE: %s <flag to check>\n", *argv, envp, argv);
    result = 1;
  }
  return result;
}

__int64 __fastcall Validate553575746b(char *input)
{
  signed int i; // [rsp+14h] [rbp-5Ch]
  char flag[72]; // [rsp+20h] [rbp-50h]
  unsigned __int64 v4; // [rsp+68h] [rbp-8h]

  v4 = __readfsqword(0x28u);
  rand();
  rand();
  rand();
  rand();
  rand();
  for ( i = 0; i <= 12; ++i )
    flag[i] = buf[i] ^ 0x37;
  if ( !strcmp(input, flag) )
    puts("Valid");
  else
    puts("Invalid");
  return 0LL;
}