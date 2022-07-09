
void direct_mode(int fd,_Bool enable)

{
  uint uVar1;
  uint uVar2;
  
  uVar1 = rpl_fcntl(fd,3);
  if (0 < (int)uVar1) {
    uVar2 = uVar1 & 0xffffbfff;
    if (enable != false) {
      uVar2 = uVar1 | 0x4000;
    }
    if (uVar2 != uVar1) {
      rpl_fcntl(fd,4);
      return;
    }
  }
  return;
}

