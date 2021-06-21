int __cdecl main(int argc, const char **argv, const char **envp)
{
  __int64 f[29]; // [rsp+0h] [rbp-210h]
  char s[268]; // [rsp+F0h] [rbp-120h]
  int check; // [rsp+1FCh] [rbp-14h]
  void *t; // [rsp+200h] [rbp-10h]
  int len; // [rsp+20Ch] [rbp-4h]

  puts("Give me the key: ");
  fgets(s, 255, stdin);
  len = strlen(s) - 1;
  s[len] = 0;
  if ( strlen(s) != 29 )
  {
    puts("Incorrect length");
    exit(-1);
  }
  f[0] = (__int64)f1;
  f[1] = (__int64)f2;
  f[2] = (__int64)f3;
  f[3] = (__int64)f4;
  f[4] = (__int64)f3;
  f[5] = (__int64)f2;
  f[6] = (__int64)f3;
  f[7] = (__int64)f4;
  f[8] = (__int64)f2;
  f[9] = (__int64)f1;
  f[10] = (__int64)f4;
  f[11] = (__int64)f1;
  f[12] = (__int64)f3;
  f[13] = (__int64)f2;
  f[14] = (__int64)f1;
  f[15] = (__int64)f4;
  f[16] = (__int64)f1;
  f[17] = (__int64)f2;
  f[18] = (__int64)f3;
  f[19] = (__int64)f4;
  f[20] = (__int64)f3;
  f[21] = (__int64)f2;
  f[22] = (__int64)f3;
  f[23] = (__int64)f4;
  f[24] = (__int64)f2;
  f[25] = (__int64)f1;
  f[26] = (__int64)f4;
  f[27] = (__int64)f1;
  f[28] = (__int64)f3;
  t = &unk_2027;
  check = checker(s, (int (__fastcall **)(int, int))f, (int *)&unk_2027, 29);
  if ( check )
    puts("Correct");
  else
    puts("Wrong");
  return 0;
}

signed __int64 __fastcall checker(char *s, int (__fastcall **f)(int, int), int *k, int n)
{
  int f_val; // ST2C_4
  int n2; // [rsp+4h] [rbp-2Ch]
  int *l; // [rsp+8h] [rbp-28h]

  l = k;
  n2 = n;
  if ( !n )
    return 1LL;
  f_val = (*f)((unsigned __int8)*s, *(unsigned __int8 *)k) & 1;
  return (unsigned int)checker(s + 1, f + 1, (int *)((char *)l + 1), n2 - 1) & f_val;
}
