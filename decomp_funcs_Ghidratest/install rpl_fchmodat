
int rpl_fchmodat(int dir,char *file,mode_t mode,int flags)

{
  int iVar1;
  long lVar2;
  int iVar3;
  int __fildes;
  int iVar4;
  int *piVar5;
  long in_FS_OFFSET;
  int chmod_errno;
  stat st;
  char buf [26];
  
  lVar2 = *(long *)(in_FS_OFFSET + 0x28);
  if (flags == 0x100) {
    __fildes = openat(dir,file,0x2a0000);
    iVar3 = __fildes;
    if (__fildes < 0) goto LAB_0010c59c;
    flags = __fxstatat(1,__fildes,"",(stat *)&st,0x1000);
    piVar5 = __errno_location();
    if (flags != 0) {
      iVar1 = *piVar5;
      iVar3 = -1;
      close(__fildes);
      *piVar5 = iVar1;
      goto LAB_0010c59c;
    }
    if ((st.st_mode & 0xf000) == 0xa000) {
      iVar3 = -1;
      close(__fildes);
      *piVar5 = 0x5f;
      goto LAB_0010c59c;
    }
    __sprintf_chk(buf,1,0x1a,"/proc/self/fd/%d",__fildes);
    iVar4 = chmod(buf,mode);
    iVar1 = *piVar5;
    close(__fildes);
    iVar3 = 0;
    if (iVar4 == 0) goto LAB_0010c59c;
    if (iVar1 != 2) {
      *piVar5 = iVar1;
      iVar3 = iVar4;
      goto LAB_0010c59c;
    }
  }
  iVar3 = fchmodat(dir,file,mode,flags);
LAB_0010c59c:
  if (lVar2 == *(long *)(in_FS_OFFSET + 0x28)) {
    return iVar3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

