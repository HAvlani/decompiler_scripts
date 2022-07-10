
int fd_reopen(int desired_fd,char *file,int flags,mode_t mode)

{
  int iVar1;
  int __fd;
  int iVar2;
  int *piVar3;
  
  __fd = open(file,flags,(ulong)mode);
  if ((desired_fd != __fd) && (-1 < __fd)) {
    iVar2 = dup2(__fd,desired_fd);
    piVar3 = __errno_location();
    iVar1 = *piVar3;
    close(__fd);
    *piVar3 = iVar1;
    return iVar2;
  }
  return __fd;
}

