int __cdecl main(int argc, const char **argv, const char **envp)
{
  unsigned int port; // [rsp+28h] [rbp-78h]
  unsigned int v5; // [rsp+2Ch] [rbp-74h]
  char *var_name; // [rsp+30h] [rbp-70h]
  char *var_val; // [rsp+38h] [rbp-68h]
  char *endptr; // [rsp+40h] [rbp-60h]
  const char **env_vars; // [rsp+48h] [rbp-58h]
  char s; // [rsp+50h] [rbp-50h]
  unsigned __int64 v11; // [rsp+98h] [rbp-8h]

  v11 = __readfsqword(0x28u);
  env_vars = envp;
  port = -1;
  while ( *env_vars )
  {
    if ( get_var_val(*env_vars, (const char *)&var_name, (char *)&var_val) != -1 && !strcmp(var_name, "TASK_PORT") )
    {
      port = strtol(var_val, &endptr, 16);
      if ( *endptr )
      {
        puts("Narkoman, Uhodi!");
        return 1;
      }
      if ( !(unsigned int)ok(port) )
      {
        puts("V shkolu!");
        return 1;
      }
    }
    ++env_vars;
  }
  if ( port == -1 )
  {
    puts("Go otsedova!. Hodut, tut, topchut.");
    exit(1);
  }
  v5 = create_socket();
  if ( v5 == -1 )
  {
    puts("Pensii mne na socket ne hvataet. Ne mogu socket sozdat, idi v ZHEK, sprosi tam.");
    exit(1);
  }
  if ( (unsigned int)connect_to_socket(v5, port) == -1 )
  {
    puts("RAZVALILI SYSTEM V, izvergi!! Teper' dazhe k socketu ne mogu podconnectitsya, idi v ZHEK, sprosi tam.\n");
    exit(1);
  }
  if ( (unsigned int)read_from_socket(v5, &s, 64LL) == -1 )
  {
    puts("Ya slishkom stara dlya etogo derma s socketami. Idi v ZHEK, sprosi tam\n");
    exit(1);
  }
  puts(&s);
  freeaddrinfo(Addr);
  return 0;
}

int __fastcall get_var_val(const char *var, const char *var_name, char *var_val)
{
  char *tmp; // [rsp+8h] [rbp-28h]
  char *eq_symbol_pointer; // [rsp+28h] [rbp-8h]

  tmp = var_val;
  // 61 => '='
  eq_symbol_pointer = strchr(var, 61);
  if ( !eq_symbol_pointer )
    return -1;
  *(_QWORD *)var_name = var;
  *eq_symbol_pointer = 0;
  *(_QWORD *)tmp = eq_symbol_pointer + 1;
  return 0;
}

_BOOL8 __fastcall ok(signed int port)
{
  _BOOL8 result; // rax

  // x^2 + 7x - 30896910 = 0
  // x = 5555 or x = 0x15B3
  if ( port >= 0 && port <= 0xFFFF )
    result = port * (port + 7) == 30896910;
  else
    result = 0LL;
  return result;
}