
int dup_safer_flag(int fd,int flag)

{
  int iVar1;
  uint action;
  
  action = flag & 0x80000;
  if (action != 0) {
    action = 0x406;
  }
  iVar1 = rpl_fcntl(fd,action,3);
  return iVar1;
}

