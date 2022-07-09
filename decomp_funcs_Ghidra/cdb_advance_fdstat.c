
int cdb_advance_fd(cd_buf *cdb,char *dir)

{
  int iVar1;
  
  iVar1 = openat(cdb->fd,dir,0x10900);
  if (iVar1 < 0) {
    iVar1 = -1;
  }
  else {
    cdb_free((cd_buf *)(ulong)(uint)cdb->fd);
    cdb->fd = iVar1;
    iVar1 = 0;
  }
  return iVar1;
}

