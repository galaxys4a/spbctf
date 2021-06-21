int __cdecl main(int argc, const char **argv, const char **envp)
{
  int result; // eax
  _BOOL4 is_digit; // eax
  char ch_code; // [rsp+13h] [rbp-27Dh]
  signed int i; // [rsp+14h] [rbp-27Ch]
  signed int j; // [rsp+14h] [rbp-27Ch]
  int k; // [rsp+14h] [rbp-27Ch]
  signed int check; // [rsp+18h] [rbp-278h]
  signed int len; // [rsp+1Ch] [rbp-274h]
  int b[10]; // [rsp+20h] [rbp-270h]
  int a[128]; // [rsp+50h] [rbp-240h]
  char s[8]; // [rsp+250h] [rbp-40h]
  __int64 v14; // [rsp+258h] [rbp-38h]
  __int64 v15; // [rsp+260h] [rbp-30h]
  int v16; // [rsp+268h] [rbp-28h]
  char v17; // [rsp+26Ch] [rbp-24h]
  unsigned __int64 v18; // [rsp+278h] [rbp-18h]

  v18 = __readfsqword(0x28u);
  b[0] = 8;
  b[1] = 7;
  b[2] = 5;
  b[3] = 4;
  b[4] = 1;
  b[5] = 3;
  b[6] = 2;
  b[7] = 6;
  b[8] = 9;
  b[9] = 10;
  *(_QWORD *)s = 8239724038823039075LL;
  v14 = 6720320975786360926LL;
  v15 = 6151733869282345556LL;
  v16 = 1163351423;
  v17 = 0;
  if ( argc > 1 )
  {
    len = strlen(argv[1]);
    for ( i = 0; i < len; ++i )
    {
      ch_code = argv[1][i];
      is_digit = ch_code > 47 && ch_code <= 57;
      if ( !is_digit )
      {
        puts("Only 0-9");
        return 2;
      }
      a[i] = argv[1][i] - 48;
    }
    bubble_sort_sequence_executor_aka_transposition_performer(b, a, len);
    check = 1;
    for ( j = 0; j <= 9; ++j )
    {
      if ( b[j] != j + 1 )
        check = 0;
    }
    if ( check )
    {
      for ( k = 0; k < strlen(s); ++k )
        s[k] ^= argv[1][k % len];
      printf("Your flag: %s\n", s, argv);
    }
    else
    {
      puts("Hmmm, Not exactly what I was asking for.");
    }
    result = 0;
  }
  else
  {
    puts("Go away, lazy student!");
    result = 1;
  }
  return result;
}

__int64 __fastcall bubble_sort_sequence_executor_aka_transposition_performer(int *a, int *b, signed int len)
{
  int tmp; // ST24_4
  __int64 result; // rax
  int i; // [rsp+1Ch] [rbp-8h]

  for ( i = 0; ; ++i )
  {
    result = (unsigned int)i;
    if ( i >= len )
      break;
    tmp = a[b[i]];
    a[b[i]] = a[b[i] + 1LL];
    a[b[i] + 1LL] = tmp;
  }
  return result;
}
