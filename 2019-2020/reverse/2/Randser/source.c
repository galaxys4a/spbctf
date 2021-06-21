int __cdecl __noreturn main(int argc, const char **argv, const char **envp)
{
  size_t v3; // eax
  char s; // [esp+1Ch] [ebp-14Ch]
  char v5; // [esp+3Ch] [ebp-12Ch]
  char v6; // [esp+5Ch] [ebp-10Ch]
  unsigned int v7; // [esp+15Ch] [ebp-Ch]

  v7 = __readgsdword(0x14u);
  print_banner();
  gen_login(&s);
  v3 = strlen(&s);
  gen_uid(&v5, v3);
  printf("[*] Enter your serial: ");
  get_user_input(&v6, 256);
  if ( check(&s, &v5, &v6) )
  {
    puts("[-] Invalid serial... Try again!");
  }
  else
  {
    puts("[+] This is a valid serial");
    print_flag();
  }
  exit(0);
}

unsigned int print_flag()
{
  int v1; // [esp+0h] [ebp-18h]
  signed int i; // [esp+4h] [ebp-14h]
  signed int j; // [esp+8h] [ebp-10h]
  unsigned int v4; // [esp+Ch] [ebp-Ch]

  v4 = __readgsdword(0x14u);
  printf("[*] FLAG{");
  for ( i = 0; i <= 15; ++i )
  {
    v1 = 0;
    for ( j = 0; j <= 99; ++j )
      v1 ^= (&Table)[j][i];
    printf("%02x", v1);
  }
  puts("}");
  return __readgsdword(0x14u) ^ v4;
}

