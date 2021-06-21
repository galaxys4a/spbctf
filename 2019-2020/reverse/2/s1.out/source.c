int __cdecl main(int argc, const char **argv, const char **envp)
{
  char s2[4]; // [esp+3h] [ebp-115h]
  char s1; // [esp+11h] [ebp-107h]

  strcpy(s2, "VaL1DP@$$w0rD");
  printf("This is secure app, you need password to use it!\n\n>");
  scanf("%s", &s1);
  if ( !strcmp(&s1, s2) )
    puts("You are welcome! Now you can use this app.");
  else
    puts("Go out of here!");
  return 0;
}
