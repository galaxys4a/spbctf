int __cdecl main(int argc, const char **argv, const char **envp)
{
  int v3; // ST18_4
  signed int i; // [esp+2Ch] [ebp-Ch]
  int v6; // [esp+30h] [ebp-8h]
  int v7; // [esp+34h] [ebp-4h]

  v7 = 0;
  printf("Input valid serial key: >");
  __isoc99_scanf("%d", &v6);
  srand(0);
  for ( i = 0; i < 127; ++i )
    rand();
  v3 = v6;
  if ( v3 == rand() )
    printf("You are welcome! Now you can use this app.\n");
  else
    printf("Go out of here!\n");
  getchar();
  getchar();
  return 0;
}
