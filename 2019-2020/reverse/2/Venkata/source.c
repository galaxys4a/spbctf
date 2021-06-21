int __cdecl __noreturn main(int argc, const char **argv, const char **envp)
{
  char *input; // [esp+1Ch] [ebp-10Ch]
  unsigned int v4; // [esp+11Ch] [ebp-Ch]

  v4 = __readgsdword(0x14u);
  print_banner();
  printf("[*] Enter something: ");
  get_user_input(&input, 256);
  if ( check((const char *)&input) )
  {
    puts("[-] No...");
  }
  else
  {
    puts("[+] Yes...");
    print_flag(&input);
  }
  exit(0);
}

signed int __cdecl check(const char *input)
{
  signed int result; // [esp+1Ch] [ebp-1Ch]
  int i; // [esp+20h] [ebp-18h]
  int j; // [esp+24h] [ebp-14h]
  size_t len; // [esp+28h] [ebp-10h]

  result = 0;
  len = strlen(input);
  if ( len <= 4 || !(len & 1) )
    result = 1;
  if ( *input != 94 || input[len >> 1] != 95 || input[len - 1] != 94 )
    result = 1;
  for ( i = 1; len >> 1 > i; ++i )
  {
    if ( input[i] <= 32 || input[i] > 47 )
      result = 1;
  }
  for ( j = (len >> 1) + 1; len - 1 > j; ++j )
  {
    if ( input[j] <= 47 || input[j] > 57 )
      result = 1;
  }
  return result;
}
