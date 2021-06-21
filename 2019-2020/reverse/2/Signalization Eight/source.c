int __cdecl main(int argc, const char **argv, const char **envp)
{
  __int64 v3; // rdx
  int v5; // [rsp+18h] [rbp-8h]
  int v6; // [rsp+1Ch] [rbp-4h]

  signal(8, (__sighandler_t)handler);
  puts("Enter number1:");
  __isoc99_scanf("%d", &v5);
  puts("Enter number2:");
  __isoc99_scanf("%d", &v6);
  v3 = (unsigned int)(v5 >> 31);
  LODWORD(v3) = v5 % v6;
  return printf("%d\n", (unsigned int)(v5 / v6), v3, argv);
}

void __noreturn handler()
{
  char s[20]; // [rsp+0h] [rbp-20h]
  unsigned __int64 v1; // [rsp+18h] [rbp-8h]

  v1 = __readfsqword(0x28u);
  strcpy(s, "Flag{This Is Simple}");
  s[10] = 95;
  s[11] = 52;
  s[6] = 122;
  s[4] = 55;
  s[7] = 84;
  s[12] = 104;
  puts(s);
  exit(1);
}
