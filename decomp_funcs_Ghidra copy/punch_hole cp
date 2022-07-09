
int punch_hole(int fd,off_t offset,off_t length)

{
  int iVar1;
  int *piVar2;
  
  iVar1 = fallocate(fd,3,offset,length);
  if (iVar1 < 0) {
    piVar2 = __errno_location();
    if ((*piVar2 == 0x26) || (*piVar2 == 0x5f)) {
      return 0;
    }
  }
  return iVar1;
}

