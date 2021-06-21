int __cdecl main(int argc, const char **argv, const char **envp)
{
  char output[256]; // [rsp+0h] [rbp-210h]
  char input[268]; // [rsp+100h] [rbp-110h]
  int n; // [rsp+20Ch] [rbp-4h]

  puts("Give me the key: ");
  fgets(input, 255, stdin);
  n = strlen(input) - 1;
  input[n] = 0;
  output[n - 1] = 0;
  modify(input, output, n);
  if ( !strcmp(output, "k_mfblobadb{udp{idp4{iaxz") )
    puts("Correct");
  else
    puts("Incorrect");
  return 0;
}

__int64 __fastcall modify(char *input, char *output, int input_len)
{
  __int64 result; // rax
  unsigned int n; // [rsp+Ch] [rbp-44h]
  unsigned int j; // [rsp+38h] [rbp-18h]
  unsigned int i; // [rsp+3Ch] [rbp-14h]

  n = input_len;
  for ( i = 0; ; ++i )
  {
    result = i;
    if ( i >= n )
      break;
    for ( j = 0; j < strlen("abcdefghijklmnopqrstuvwxyz_{}0123456789") && str1[j] != input[i]; ++j )
      ;
    output[i] = str2[j];
  }
  return result;
}
