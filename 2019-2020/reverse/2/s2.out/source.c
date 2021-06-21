int __cdecl main(int argc, const char **argv, const char **envp)
{
  int result; // eax
  char s; // [esp+Dh] [ebp-10Bh]
  char v5; // [esp+Eh] [ebp-10Ah]
  char v6; // [esp+Fh] [ebp-109h]
  char v7; // [esp+10h] [ebp-108h]
  char v8; // [esp+11h] [ebp-107h]
  char v9; // [esp+12h] [ebp-106h]
  size_t v10; // [esp+10Ch] [ebp-Ch]

  printf("This is secure app, you need password to use it!\n\n>");
  scanf("%s", &s);
  v10 = strlen(&s);
  if ( v10 != 6 || s != 113 || v5 != 119 || v6 != 101 || v7 != 114 || v8 != 116 || v9 != 121 )
  {
    puts("Go out of here!");
    result = 0;
  }
  else
  {
    puts("You are welcome! Now you can use this app.");
    result = 1;
  }
  return result;
}
