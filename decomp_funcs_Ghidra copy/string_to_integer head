
uintmax_t string_to_integer(_Bool count_lines,char *n_string)

{
  char *err;
  uintmax_t uVar1;
  
  if (count_lines == false) {
    err = (char *)dcgettext(0,"invalid number of bytes",5);
  }
  else {
    err = (char *)dcgettext(0,"invalid number of lines",5);
  }
  uVar1 = xdectoumax(n_string,0,0xffffffffffffffff,"bkKmMGTPEZY0",err,0);
  return uVar1;
}

