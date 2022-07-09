
int ifd_reopen(int desired_fd,char *file,int flag,mode_t mode)

{
  int iVar1;
  int *piVar2;
  
  do {
    process_signals();
    iVar1 = fd_reopen(desired_fd,file,flag,mode);
    if (-1 < iVar1) {
      return iVar1;
    }
    piVar2 = __errno_location();
  } while (*piVar2 == 4);
  return iVar1;
}

