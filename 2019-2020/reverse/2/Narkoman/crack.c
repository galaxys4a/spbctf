#include <stdio.h>

int get_var_val(char *input, char *str, char *port_begin)
{
  char *t1;
  char *t2;

  t1 = port_begin;
  t2 = strchr(input, 61);
  if ( !t2 )
    return -1;
  str = input;
  *t2 = 0;
  t1 = t2 + 1;
  return 0;
}

int ok(int port)
{
  int result;

  if ( port >= 0 && port <= 0xFFFF )
    result = port * (port + 7) == 30896910;
  else
    result = 0LL;
  return result;
}

int main(int argc, const char **argv)
{
	char **input;
	int port;
	char *s1, *port_begin, *port_end;
  input = (char **)argv;
  port = -1;
  printf("%s\n", *input);
  while ( *input )
  {
	  int a1 =  get_var_val(*input, s1, port_begin);
	  int a2 = strcmp(s1, "TASK_PORT");
	  printf("%c %d %d\n", *input[0], a1, a2);
    if ( a1 != -1 && a2 == 0)
    {
		printf("ok!!!\n");
      port = strtol(port_begin, &port_end, 16);
      if ( *port_end )
      {
        puts("Narkoman, Uhodi!");
        return 1;
      }
      if ( !ok(port) )
      {
        puts("V shkolu!");
        return 1;
      }
    }
    ++input;
  }
	return 0;
}