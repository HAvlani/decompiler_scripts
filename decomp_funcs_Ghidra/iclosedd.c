
int iclose(int fd)

{
  int iVar1;
  int *piVar2;
  
  piVar2 = __errno_location();
  iVar1 = *piVar2;
  while( true ) {
    if (iVar1 != 4) {
      return -1;
    }
    iVar1 = close(fd);
    if (iVar1 == 0) break;
    iVar1 = *piVar2;
    if (iVar1 == 9) {
      return 0;
    }
  }
  return 0;
}

