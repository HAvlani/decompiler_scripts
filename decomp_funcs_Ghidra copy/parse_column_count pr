
void parse_column_count(char *s)

{
  char *err;
  intmax_t iVar1;
  
  err = (char *)dcgettext(0,"invalid number of columns",5);
  iVar1 = xdectoimax(s,1,0x7fffffff,"",err,0);
  columns = (int)iVar1;
  explicit_columns = true;
  return;
}

