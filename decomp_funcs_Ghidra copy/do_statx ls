
int do_statx(int fd,char *name,stat *st,int flags,uint mask)

{
  long lVar1;
  int iVar2;
  undefined4 in_register_0000003c;
  long in_FS_OFFSET;
  statx stx;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  iVar2 = statx(CONCAT44(in_register_0000003c,fd),name,flags | 0x800,mask,&stx);
  if (-1 < iVar2) {
    st->st_dev = ((ulong)stx.stx_dev_minor & 0xffffff00) << 0xc |
                 ((ulong)stx.stx_dev_major & 0xfffff000) << 0x20 |
                 (ulong)((stx.stx_dev_major & 0xfff) << 8) | (ulong)stx.stx_dev_minor & 0xff;
    st->st_ino = stx.stx_ino;
    st->st_nlink = (ulong)stx.stx_nlink;
    st->st_mode = (uint)stx.stx_mode;
    *(undefined8 *)&st->st_uid = stx._20_8_;
    st->st_rdev = ((ulong)stx.stx_rdev_minor & 0xffffff00) << 0xc |
                  ((ulong)stx.stx_rdev_major & 0xfffff000) << 0x20 |
                  (ulong)((stx.stx_rdev_major & 0xfff) << 8) | (ulong)(byte)stx.stx_rdev_minor;
    st->st_blksize = (ulong)stx.stx_blksize;
    st->st_size = stx.stx_size;
    (st->st_atim).tv_nsec = (ulong)stx.stx_atime.tv_nsec;
    st->st_blocks = stx.stx_blocks;
    (st->st_mtim).tv_nsec = (ulong)stx.stx_mtime.tv_nsec;
    (st->st_atim).tv_sec = stx.stx_atime.tv_sec;
    (st->st_ctim).tv_nsec = (ulong)stx.stx_ctime.tv_nsec;
    (st->st_mtim).tv_sec = stx.stx_mtime.tv_sec;
    (st->st_ctim).tv_sec = stx.stx_ctime.tv_sec;
    if ((mask & 0x800) != 0) {
      if ((stx.stx_mask._1_1_ & 8) == 0) {
        (st->st_mtim).tv_nsec = -1;
        (st->st_mtim).tv_sec = -1;
      }
      else {
        (st->st_mtim).tv_sec = stx.stx_btime.tv_sec;
        (st->st_mtim).tv_nsec = (ulong)stx.stx_btime.tv_nsec;
      }
    }
  }
  if (lVar1 == *(long *)(in_FS_OFFSET + 0x28)) {
    return iVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

