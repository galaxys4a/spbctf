int __cdecl main(int argc, const char **argv, const char **envp)
{
  char s; // [rsp+10h] [rbp-110h]
  unsigned __int64 v5; // [rsp+118h] [rbp-8h]

  v5 = __readfsqword(0x28u);
  signal(2, (__sighandler_t)handler);
  return (unsigned __int64)fgets(&s, 10, _bss_start);
}

void handler()
{
  char s[20]; // [rsp+0h] [rbp-20h]
  unsigned __int64 v1; // [rsp+18h] [rbp-8h]

  v1 = __readfsqword(0x28u);
  strcpy(s, "Flag{This Is Simple}");
  s[10] = 49;
  s[11] = 52;
  s[6] = 42;
  puts(s);
}
