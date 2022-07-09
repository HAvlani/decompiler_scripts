
int out_int(char *pformat,size_t prefix_len,intmax_t arg)

{
  int iVar1;
  
  make_format(pformat,prefix_len,"\'-+ 0","ld");
  iVar1 = __printf_chk(1,pformat,arg);
  return iVar1;
}

