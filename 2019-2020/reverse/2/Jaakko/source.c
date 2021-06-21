int __cdecl main(int argc, const char **argv, const char **envp)
{
  int v3; // eax
  char input; // [esp+0h] [ebp-13Ch]
  char Dest[32]; // [esp+100h] [ebp-3Ch]
  char Source[8]; // [esp+128h] [ebp-14h]
  char v8[4]; // [esp+130h] [ebp-Ch]

  strcpy(v8, "nswer");
  *(_QWORD *)Source = qword_402118;
  sub_401020("Input valid serial key: >", input);
  sub_401050("%s", &input);
  strncpy(Dest, &Source[7], 6u);
  Dest[6] = 95;
  strncpy(&Dest[7], Source, 6u);
  Dest[13] = 0;
  v3 = strcmp(&input, Dest);
  if ( v3 )
    v3 = -(v3 < 0) | 1;
  if ( v3 )
    sub_401020("Go out of here!\n", input);
  else
    sub_401020("You are welcome! Now you can use this app.\n", input);
  system("pause");
  return 0;
}
