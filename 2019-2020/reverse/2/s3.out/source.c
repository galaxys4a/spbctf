int __cdecl main(int argc, const char **argv, const char **envp)
{
  char s[255]; // [esp+1h] [ebp-117h]
  int ch_code; // [esp+100h] [ebp-18h]
  int n; // [esp+104h] [ebp-14h]
  int i; // [esp+108h] [ebp-10h]
  int result; // [esp+10Ch] [ebp-Ch]

  printf("This is secure app, you need password to use it!\n\n>");
  scanf("%s", s);
  n = strlen(s);
  result = 117;
  for ( i = 0; i < n; ++i )
  {
    ch_code = s[i];
    result *= ++ch_code;
    result = (unsigned __int8)(((unsigned __int64)result >> 56) + result) - ((unsigned int)(result >> 31) >> 24);
  }
  if ( result == 118 )
    puts("You are welcome! Now you can use this app.");
  else
    puts("Go out of here!");
  return 0;
}