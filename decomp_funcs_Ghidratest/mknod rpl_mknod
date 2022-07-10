
int rpl_mknod(char *name,mode_t mode,dev_t dev)

{
  int iVar1;
  long in_FS_OFFSET;
  dev_t local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  if (((mode & 0xf000) == 0x1000) && (dev == 0)) {
    iVar1 = mkfifo(name,mode & 0xffffefff);
  }
  else {
    local_18 = dev;
    iVar1 = __xmknod(0,name,mode,&local_18);
  }
  if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
    return iVar1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

