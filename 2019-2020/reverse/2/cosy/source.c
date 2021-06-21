int __cdecl __noreturn main(int argc, const char **argv, const char **envp)
{
  int a[22]; // [rsp+0h] [rbp-190h]
  __int64 v4; // [rsp+60h] [rbp-130h]
  __int64 v5; // [rsp+68h] [rbp-128h]
  int v6; // [rsp+70h] [rbp-120h]
  __int16 v7; // [rsp+74h] [rbp-11Ch]
  char input[256]; // [rsp+80h] [rbp-110h]
  int val; // [rsp+180h] [rbp-10h]
  int rad; // [rsp+184h] [rbp-Ch]
  unsigned int len; // [rsp+188h] [rbp-8h]
  unsigned int i; // [rsp+18Ch] [rbp-4h]

  puts("Give me the key: ");
  fgets(input, 255, stdin);
  len = strlen(input) - 1;
  input[len] = 0;
  if ( strlen(input) != 22 )
  {
    puts("Incorrect length");
    exit(-1);
  }
  v4 = 0LL;
  v5 = 0LL;
  v6 = 0;
  v7 = 0;
  a[0] = 3089;
  a[1] = 9659;
  a[2] = 174;
  a[3] = 9993;
  a[4] = 3255;
  a[5] = 9961;
  a[6] = 5876;
  a[7] = 8910;
  a[8] = 6155;
  a[9] = 9986;
  a[10] = 4382;
  a[11] = 7880;
  a[12] = 1218;
  a[13] = 8660;
  a[14] = 3255;
  a[15] = 8746;
  a[16] = 6155;
  a[17] = 9781;
  a[18] = 4999;
  a[19] = 9455;
  a[20] = 1218;
  a[21] = 7987;
  for ( i = 0; len > i; ++i )
  {
    rad = toRad(input[i]);
    if ( rad < 0 )
    {
      puts("Internal error");
      exit(-1);
    }
    val = modify(rad, (signed int)i % 2);
    if ( val != a[i] )
    {
      puts("Wrong input");
      exit(-1);
    }
  }
  puts("Correct!");
  exit(0);
}

int __fastcall toRad(char c)
{
  if ( c > 96 && c <= 122 )
    return c - 97;
  if ( c > 47 && c <= 57 )
    return c - 22;
  switch ( c )
  {
    case 123:
      return 36;
    case 125:
      return 37;
    case 95:
      return 38;
  }
  return -1;
}

int __fastcall modify(int a1, int i)
{
  double x; // [rsp+18h] [rbp-8h]

  x = 3.141 * (double)a1 / 180.0;
  if ( !i )
    return (signed int)(sin(x) * 10000.0);
  if ( i == 1 )
    return (signed int)(cos(x) * 10000.0);
  return 0;
}
