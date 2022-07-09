
int iftruncate(off_t length,int fd)

{
  int iVar1;
  int *piVar2;
  
  do {
    process_signals();
    iVar1 = ftruncate(1,length);
    if (-1 < iVar1) {
      return iVar1;
    }
    piVar2 = __errno_location();
  } while (*piVar2 == 4);
  return iVar1;
}

