
int rpl_pipe2(int *fd,int flags)

{
  undefined8 uVar1;
  int iVar2;
  uint uVar3;
  int *piVar4;
  
  uVar1 = *(undefined8 *)fd;
  if (-1 < rpl_pipe2::lexical_block_0::have_pipe2_really) {
    iVar2 = pipe2(fd,flags);
    if ((-1 < iVar2) || (piVar4 = __errno_location(), *piVar4 != 0x26)) {
      rpl_pipe2::lexical_block_0::have_pipe2_really = 1;
      return iVar2;
    }
    rpl_pipe2::lexical_block_0::have_pipe2_really = -1;
  }
  if ((flags & 0xfff7f7ffU) == 0) {
    iVar2 = pipe(fd);
    if (-1 < iVar2) {
      if (((flags & 0x800U) == 0) ||
         ((((uVar3 = rpl_fcntl(fd[1],3,0), -1 < (int)uVar3 &&
            (iVar2 = rpl_fcntl(fd[1],4,(ulong)(uVar3 | 0x800)), iVar2 != -1)) &&
           (uVar3 = rpl_fcntl(*fd,3,0), -1 < (int)uVar3)) &&
          (iVar2 = rpl_fcntl(*fd,4,(ulong)(uVar3 | 0x800)), iVar2 != -1)))) {
        if ((flags & 0x80000U) == 0) {
          return flags & 0xfff7f7ffU;
        }
        uVar3 = rpl_fcntl(fd[1],1,0);
        if (((-1 < (int)uVar3) && (iVar2 = rpl_fcntl(fd[1],2,(ulong)(uVar3 | 1)), iVar2 != -1)) &&
           ((uVar3 = rpl_fcntl(*fd,1,0), -1 < (int)uVar3 &&
            (iVar2 = rpl_fcntl(*fd,2,(ulong)(uVar3 | 1)), iVar2 != -1)))) {
          return flags & 0xfff7f7ffU;
        }
      }
      piVar4 = __errno_location();
      iVar2 = *piVar4;
      close(*fd);
      close(fd[1]);
      *(undefined8 *)fd = uVar1;
      *piVar4 = iVar2;
    }
  }
  else {
    piVar4 = __errno_location();
    *piVar4 = 0x16;
  }
  return -1;
}

