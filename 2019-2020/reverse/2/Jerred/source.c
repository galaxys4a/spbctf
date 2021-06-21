int __cdecl main(int argc, const char **argv, const char **envp)
{
  char v4; // [esp+0h] [ebp-104h]

  sub_401020("Input valid serial key: >", v4);
  sub_401050("%s", (unsigned int)&v4);
  if ( strlen(&v4) == 89 )
    sub_401020("You are welcome! Now you can use this app.\n", v4);
  else
    sub_401020("Go out of here!\n", v4);
  system("pause");
  return 0;
}
