
int chmod_or_fchmod(char *name,int desc,mode_t mode)

{
  int iVar1;
  
  if (desc != -1) {
    iVar1 = fchmod(desc,mode);
    return iVar1;
  }
  iVar1 = chmod(name,mode);
  return iVar1;
}

