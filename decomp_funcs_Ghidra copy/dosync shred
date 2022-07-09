
int dosync(int fd,char *qname)

{
  int iVar1;
  int *piVar2;
  undefined8 uVar3;
  
  iVar1 = fdatasync(fd);
  if (iVar1 != 0) {
    piVar2 = __errno_location();
    iVar1 = *piVar2;
    if ((1 < iVar1 - 0x15U) && (iVar1 != 9)) {
      uVar3 = dcgettext(0,"%s: fdatasync failed",5);
      error(0,iVar1,uVar3,qname);
      *piVar2 = iVar1;
      return -1;
    }
    iVar1 = fsync(fd);
    if (iVar1 != 0) {
      iVar1 = *piVar2;
      if ((1 < iVar1 - 0x15U) && (iVar1 != 9)) {
        uVar3 = dcgettext(0,"%s: fsync failed",5);
        error(0,iVar1,uVar3,qname);
        *piVar2 = iVar1;
        return -1;
      }
      sync();
    }
  }
  return 0;
}

