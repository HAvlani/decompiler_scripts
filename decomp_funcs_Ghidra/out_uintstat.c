
int out_uint(char *pformat,size_t prefix_len,uintmax_t arg)

{
  int iVar1;
  
  make_format(pformat,prefix_len,"\'-0","lu");
  iVar1 = __printf_chk(1,pformat,arg);
  return iVar1;
}

