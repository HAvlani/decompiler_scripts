
int mkostemp_safer(char *templ,int flags)

{
  int iVar1;
  
  iVar1 = mkostemp(templ,flags);
  iVar1 = fd_safer_flag(iVar1,flags);
  return iVar1;
}

