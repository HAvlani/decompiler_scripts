
void separator_string(char *optarg_S)

{
  size_t sVar1;
  char *err;
  intmax_t iVar2;
  char *n_str;
  
  n_str = optarg_S;
  sVar1 = strlen(optarg_S);
  if (sVar1 < 0x80000000) {
    col_sep_string = optarg_S;
    col_sep_length = (int)sVar1;
    return;
  }
  integer_overflow();
  err = (char *)dcgettext(0,"invalid number of columns",5);
  iVar2 = xdectoimax(n_str,1,0x7fffffff,"",err,0);
  columns = (int)iVar2;
  explicit_columns = true;
  return;
}

