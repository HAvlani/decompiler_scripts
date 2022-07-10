
int lchmod(char *file,mode_t mode)

{
  int iVar1;
  long lVar2;
  int __fildes;
  int iVar3;
  int iVar4;
  int *piVar5;
  long in_FS_OFFSET;
  stat st;
  char buf [26];
  
  lVar2 = *(long *)(in_FS_OFFSET + 0x28);
  __fildes = open(file,0x2a0000);
  iVar3 = __fildes;
  if (-1 < __fildes) {
    iVar3 = __fxstatat(1,__fildes,"",(stat *)&st,0x1000);
    piVar5 = __errno_location();
    if (iVar3 == 0) {
      if ((st.st_mode & 0xf000) == 0xa000) {
        iVar3 = -1;
        close(__fildes);
        *piVar5 = 0x5f;
      }
      else {
        __sprintf_chk(buf,1,0x1a,"/proc/self/fd/%d",__fildes);
        iVar4 = chmod(buf,mode);
        iVar1 = *piVar5;
        close(__fildes);
        iVar3 = 0;
        if (iVar4 != 0) {
          if (iVar1 == 2) {
            iVar3 = chmod(file,mode);
          }
          else {
            *piVar5 = iVar1;
            iVar3 = iVar4;
          }
        }
      }
    }
    else {
      iVar1 = *piVar5;
      iVar3 = -1;
      close(__fildes);
      *piVar5 = iVar1;
    }
  }
  if (lVar2 == *(long *)(in_FS_OFFSET + 0x28)) {
    return iVar3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

