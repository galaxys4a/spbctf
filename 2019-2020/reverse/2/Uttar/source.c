int __cdecl main(int argc, const char **argv, const char **envp)
{
  char tmp; // al
  int v4; // eax
  __int64 v6; // [esp+0h] [ebp-114h]
  char v7[4]; // [esp+8h] [ebp-10Ch]
  char input[256]; // [esp+10h] [ebp-104h]

  strcpy(v7, "ricky");
  v6 = qword_402108;
  sub_401020("Input valid serial key: >", qword_402108);
  sub_401050("%s", input);
  tmp = input[2] ^ input[3];
  input[2] ^= input[2] ^ input[3];
  input[3] = tmp ^ input[2];
  v4 = strcmp((const char *)&v6, input);
  if ( v4 )
    v4 = -(v4 < 0) | 1;
  if ( v4 )
    sub_401020("Go out of here!\n", v6);
  else
    sub_401020("You are welcome! Now you can use this app.\n", v6);
  system("pause");
  return 0;
}
