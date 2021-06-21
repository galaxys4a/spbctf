int __cdecl main(int argc, const char **argv, const char **envp)
{
  void (*v4)(void); // [esp+14h] [ebp-14h]
  void (*v5)(void); // [esp+18h] [ebp-10h]
  unsigned int v6; // [esp+1Ch] [ebp-Ch]

  v6 = __readgsdword(0x14u);
  __isoc99_scanf("%d", &v4);
  v5 = v4;
  v4();
  return 12;
}

unsigned int printflag()
{
  signed int i; // [esp+4h] [ebp-74h]
  signed int len; // [esp+8h] [ebp-70h]
  int a[14]; // [esp+Ch] [ebp-6Ch]
  char s[4]; // [esp+44h] [ebp-34h]
  unsigned int v5; // [esp+6Ch] [ebp-Ch]

  v5 = __readgsdword(20u);
  strcpy(s, "This is my string.Possible this is flag");
  len = strlen(s);
  a[0] = (int)function1;
  a[1] = (int)function2;
  a[2] = (int)function3;
  a[3] = (int)function4;
  a[4] = (int)function5;
  a[5] = (int)function6;
  a[6] = (int)function7;
  a[7] = (int)function8;
  a[8] = (int)function9;
  a[9] = (int)function10;
  a[10] = (int)function11;
  a[11] = (int)function12;
  a[12] = (int)function13;
  a[13] = (int)function14;
  printf("Flag{");
  for ( i = 0; i < len; ++i )
    ((void (*)(void))a[s[i] % 14])();
  puts("}");
  return __readgsdword(0x14u) ^ v5;
}
