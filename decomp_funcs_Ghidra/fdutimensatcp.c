
int fdutimensat(int fd,int dir,char *file,timespec *ts,int atflag)

{
  int iVar1;
  int *piVar2;
  
  if (fd < 0) {
    if (file == (char *)0x0) goto LAB_0010ce20;
LAB_0010cdc4:
    iVar1 = utimensat(dir,file,(timespec *)ts,atflag);
  }
  else {
    iVar1 = futimens(fd,(timespec *)ts);
    if ((iVar1 == -1) && (file != (char *)0x0)) {
      piVar2 = __errno_location();
      if (*piVar2 != 0x26) {
        return -1;
      }
      goto LAB_0010cdc4;
    }
  }
  if (iVar1 != 1) {
    return iVar1;
  }
LAB_0010ce20:
  piVar2 = __errno_location();
  *piVar2 = 9;
  return -1;
}

