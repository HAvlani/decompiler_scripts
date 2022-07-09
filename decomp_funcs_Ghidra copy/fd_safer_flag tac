
int fd_safer_flag(int fd,int flag)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  
  if (2 < (uint)fd) {
    return fd;
  }
  iVar2 = dup_safer_flag(fd,flag);
  piVar3 = __errno_location();
  iVar1 = *piVar3;
  close(fd);
  *piVar3 = iVar1;
  return iVar2;
}

