int __cdecl main(int argc, const char **argv, const char **envp)
{
  int result; // eax
  unsigned int seed; // eax
  int n; // [esp+10h] [ebp-18h]
  int i; // [esp+14h] [ebp-14h]
  int *a; // [esp+18h] [ebp-10h]
  unsigned int v8; // [esp+1Ch] [ebp-Ch]

  v8 = __readgsdword(0x14u);
  if ( argc > 1 )
  {
    seed = time(0);
    srandom(seed);
    a = Tr4NsF0rm((char *)argv[1], (int)&n);
    for ( i = 0; i < n; ++i )
      printf("%d ", a[i]);
    puts(&byte_804887D);
    result = 0;
  }
  else
  {
    puts("Give me a string");
    result = 1;
  }
  return result;
}

int *__cdecl Tr4NsF0rm(char *s, int n)
{
  int i; // [esp+4h] [ebp-24h]
  int j; // [esp+8h] [ebp-20h]
  size_t len; // [esp+Ch] [ebp-1Ch]
  int *result; // [esp+10h] [ebp-18h]
  int p; // [esp+18h] [ebp-10h]
  int q; // [esp+1Ch] [ebp-Ch]

  len = strlen(s);
  result = (int *)calloc(2 * len, 4u);
  *(_DWORD *)n = 2 * len;
  i = 0;
  j = 0;
  while ( i < len )
  {
    do
    {
      p = primes[random() % 10];
      q = primes[random() % 10];
    }
    while ( p == q );
    result[j] = p * s[i];
    result[j + 1] = q * s[i++];
    j += 2;
  }
  return result;
}
