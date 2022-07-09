
DIR * opendir_safer(char *name)

{
  uint fd;
  int __fd;
  DIR *__dirp;
  int *piVar1;
  DIR *pDVar2;
  int iVar3;
  
  __dirp = opendir(name);
  if (__dirp != (DIR *)0x0) {
    fd = dirfd(__dirp);
    if (fd < 3) {
      __fd = rpl_fcntl(fd,0x406,3);
      piVar1 = __errno_location();
      if (__fd < 0) {
        iVar3 = *piVar1;
        pDVar2 = (DIR *)0x0;
      }
      else {
        pDVar2 = fdopendir(__fd);
        iVar3 = *piVar1;
        if (pDVar2 == (DIR *)0x0) {
          close(__fd);
        }
      }
      closedir(__dirp);
      *piVar1 = iVar3;
      return (DIR *)pDVar2;
    }
  }
  return (DIR *)__dirp;
}

