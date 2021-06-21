int __cdecl main(int argc, const char **argv, const char **envp)
{
  int year2; // eax
  int age2; // ecx
  int mod; // edx
  int age; // [esp+8h] [ebp-8h]
  int year; // [esp+Ch] [ebp-4h]

  printf("Input your age: >");
  scanf("%d", &age);
  if ( age >= 14 )
  {
    if ( age < 100 )
    {
      printf("Input current year: >");
      scanf("%d", &year);
      year2 = year;
      if ( year >= 2017 )
      {
        if ( year <= 2200 )
        {
          age2 = age;
          if ( age )
          {
            do
            {
              mod = year2 % age2;
              year2 = age2;
              age2 = mod;
            }
            while ( mod );
            age = mod;
            year = year2;
          }
          if ( year2 == 7 )
            printf("You are welcome! Now you can use this app.\n");
          else
            printf("Go out of here!\n");
        }
        else
        {
          printf("Too late!\n");
        }
      }
      else
      {
        printf("Too early!\n");
      }
    }
    else
    {
      printf("Too old!\n");
    }
  }
  else
  {
    printf("Too young!\n");
  }
  system("pause");
  return 0;
}
