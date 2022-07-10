
ulong integer_arg(char *s,ulong maxval)

{
  char *err;
  uintmax_t uVar1;
  
  err = (char *)dcgettext(0,"invalid integer argument",5);
  uVar1 = xnumtoumax(s,0,0,maxval,"bB",err,0);
  return uVar1;
}

