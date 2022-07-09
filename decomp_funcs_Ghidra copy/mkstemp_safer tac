
int mkstemp_safer(char *templ)

{
  int iVar1;
  
  iVar1 = mkstemp(templ);
  iVar1 = fd_safer(iVar1);
  return iVar1;
}

