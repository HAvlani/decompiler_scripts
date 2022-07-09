
int ifstat(int fd,stat *st)

{
  int iVar1;
  int *piVar2;
  
  do {
    process_signals();
    iVar1 = __fxstat(1,fd,(stat *)st);
    if (-1 < iVar1) {
      return iVar1;
    }
    piVar2 = __errno_location();
  } while (*piVar2 == 4);
  return iVar1;
}

