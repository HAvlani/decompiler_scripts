
dev_ino * get_root_dev_ino(dev_ino *root_d_i)

{
  long lVar1;
  int iVar2;
  long in_FS_OFFSET;
  stat statbuf;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  iVar2 = __lxstat(1,"/",(stat *)&statbuf);
  if (iVar2 == 0) {
    root_d_i->st_ino = statbuf.st_ino;
    root_d_i->st_dev = statbuf.st_dev;
  }
  else {
    root_d_i = (dev_ino *)0x0;
  }
  if (lVar1 == *(long *)(in_FS_OFFSET + 0x28)) {
    return root_d_i;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

