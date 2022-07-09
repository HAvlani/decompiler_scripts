
DIR * opendirat(int dir_fd,char *dir,int extra_flags,int *pnew_fd)

{
  int iVar1;
  int __fd;
  DIR *pDVar2;
  int *piVar3;
  
  pDVar2 = (DIR *)0x0;
  __fd = openat_safer(dir_fd,dir,extra_flags | 0x90900);
  if (-1 < __fd) {
    pDVar2 = fdopendir(__fd);
    if (pDVar2 == (DIR *)0x0) {
      piVar3 = __errno_location();
      iVar1 = *piVar3;
      close(__fd);
      *piVar3 = iVar1;
      return (DIR *)0x0;
    }
    *pnew_fd = __fd;
  }
  return (DIR *)pDVar2;
}

