int __cdecl __noreturn main(int argc, const char **argv, const char **envp)
{
  char s1; // [esp+1Ch] [ebp-2Ch]
  unsigned int v4; // [esp+3Ch] [ebp-Ch]

  v4 = __readgsdword(0x14u);
  signal(14, timeout);
  alarm(3u);
  print_banner();
  puts("[*] You have exactly three seconds...");
  printf("[*] Would you like a gift?\n> ");
  get_user_input(&s1, 32);
  if ( !strcmp(&s1, "Y3$") )
  {
    puts("[+] So typical...");
    print_flag();
  }
  else
  {
    puts("[-] You are strange");
  }
  exit(0);
}

unsigned int print_flag()
{
  unsigned int v0; // ST1C_4

  v0 = __readgsdword(0x14u);
  printf("[*] FLAG{%s}\n", flag);
  return __readgsdword(0x14u) ^ v0;
}
