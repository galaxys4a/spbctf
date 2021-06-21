int __cdecl main(int argc, const char **argv, const char **envp)
{
  int a[10]; // [esp+0h] [ebp-38h]
  int r1; // [esp+28h] [ebp-10h]
  int r2; // [esp+2Ch] [ebp-Ch]
  int *v7; // [esp+30h] [ebp-8h]

  v7 = &argc;
  memset(a, 0, sizeof(a));
  mapM_(int_read, 10, a);
  mapM_(int_print, 10, a);
  putchar(10);
  r2 = int_foldl1((int)xor, 10, (int)a);
  r1 = int_foldl(and, 1, 10, a);
  if ( r2 || !r1 )
    puts("Wrong!");
  else
    puts("Correct!");
  return 0;
}

int __cdecl int_foldl1(int a1, int a2, int a3)
{
  return int_foldl((int (__cdecl *)(int, int))a1, 0, a2, (int *)a3);
}

int __cdecl int_foldl(int (__cdecl *f)(int, int), int current_result, int number_of_elements, int *current_address)
{
  int v4; // eax

  if ( !number_of_elements )
    return current_result;
  v4 = f(current_result, *current_address);
  return int_foldl(f, v4, number_of_elements - 1, current_address + 1);
}
