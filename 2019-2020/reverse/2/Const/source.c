int __cdecl main(int argc, const char **argv, const char **envp)
{
  char s[268]; // [rsp+10h] [rbp-110h]
  int v5; // [rsp+11Ch] [rbp-4h]

  v5 = (unsigned __int64)fgets(s, 255, stdin);
  s[strlen(s) - 1] = 0;
  if ( !strcmp(flag, s) )
    puts("OK!");
  return 0;
}

__int64 swaps()
{
  char v0; // ST07_1
  char v1; // ST07_1
  unsigned __int8 v2; // ST07_1
  __int64 result; // rax

  v0 = flag[5];
  flag[5] = flag[14];
  flag[14] = v0;
  v1 = flag[20];
  flag[20] = flag[21];
  flag[21] = flag[7];
  flag[7] = v1;
  v2 = flag[19];
  flag[19] = flag[20];
  result = v2;
  flag[20] = v2;
  return result;
}
