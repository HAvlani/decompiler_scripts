
int rpl_fclose(FILE *fp)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  __off_t _Var4;
  
  iVar1 = fileno((FILE *)fp);
  if (-1 < iVar1) {
    iVar1 = __freading();
    if (iVar1 != 0) {
      iVar1 = fileno((FILE *)fp);
      _Var4 = lseek(iVar1,0,1);
      if (_Var4 == -1) goto LAB_00105fdf;
    }
    iVar1 = rpl_fflush(fp);
    if (iVar1 != 0) {
      piVar3 = __errno_location();
      iVar1 = *piVar3;
      iVar2 = fclose((FILE *)fp);
      if (iVar1 != 0) {
        *piVar3 = iVar1;
        iVar2 = -1;
      }
      return iVar2;
    }
  }
LAB_00105fdf:
  iVar1 = fclose((FILE *)fp);
  return iVar1;
}

