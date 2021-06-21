int __cdecl main(int argc, const char **argv, const char **envp)
{
  printf("Enter serial number: ");
  scanf("%s", Buf);
  if ( (unsigned __int8)Check() )
    PrintOK();
  else
    PrintError();
  return 0;
}

signed int Check(void)
{
  signed int i; // [esp+Ch] [ebp-Ch]

  if ( strlen(Buf) != 7 )
    return 0;
  if ( Buf[0] != 97 )
    return 0;
  for ( i = 1; i < 6; ++i )
  {
    if ( *(char *)(i + 134520876) != Buf[i - 1] + i )
      return 0;
  }
  return 1;
}
