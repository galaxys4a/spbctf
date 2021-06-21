int __cdecl main(int argc, const char **argv, const char **envp)
{
  printf("Enter serial number: ");
  fgets(&Buf, 11, stdin);
  if ( (unsigned __int8)Check() )
    PrintOK();
  else
    PrintError();
  return 0;
}

signed int Check(void)
{
  if ( strlen(&Buf) <= 5 )
    return 0;
  if ( *(&Buf + 3) != 97
    || *(&Buf + 1) != 49
    || *(&Buf + 5) != 66
    || Buf != 99
    || *(&Buf + 2) != 52
    || *(&Buf + 4) != 101 )
  {
    return 0;
  }
  return 1;
}
