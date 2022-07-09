
_Bool print_type_indicator(_Bool stat_ok,mode_t mode,filetype type)

{
  char c;
  
  c = get_type_indicator(stat_ok,mode,type);
  if (c == '\0') {
    return false;
  }
  dired_outbyte(c);
  return c != '\0';
}

