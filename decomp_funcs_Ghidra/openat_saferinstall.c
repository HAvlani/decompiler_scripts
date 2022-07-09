
int openat_safer(int fd,char *file,int flags,...)

{
  long lVar1;
  int iVar2;
  ulong in_RCX;
  ulong uVar3;
  long in_FS_OFFSET;
  va_list ap;
  
  uVar3 = 0;
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  if ((flags & 0x40U) != 0) {
    uVar3 = in_RCX & 0xffffffff;
  }
  iVar2 = openat(fd,file,flags,uVar3);
  iVar2 = fd_safer(iVar2);
  if (lVar1 == *(long *)(in_FS_OFFSET + 0x28)) {
    return iVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

