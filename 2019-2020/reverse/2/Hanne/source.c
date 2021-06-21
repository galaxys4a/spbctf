int __cdecl main(int argc, const char **argv, const char **envp)
{
  bool check; // zf
  int val; // edx
  int input; // [esp+0h] [ebp-8h]

  sub_401020((int)"Input password (number): >");
  sub_401050("%d", &input);
  val = (5 * input * input % 256 - 34 * input + 24) & 0x800000FF;
  check = val == 0;
  if ( val < 0 )
    check = (((_BYTE)val - 1) | 0xFFFFFF00) == -1;
  if ( check )
    sub_401020((int)"You are welcome! Now you can use this app.\n");
  else
    sub_401020((int)"Go out of here!\n");
  system("pause");
  return 0;
}
