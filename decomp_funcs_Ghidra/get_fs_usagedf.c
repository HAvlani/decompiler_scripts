
int get_fs_usage(char *file,char *disk,fs_usage *fsp)

{
  int iVar1;
  int iVar2;
  long in_FS_OFFSET;
  statfs fsd;
  char local_126 [262];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  if (statvfs_works_cache_2650 < 0) {
    iVar2 = uname((utsname *)&fsd);
    if ((iVar2 != 0) || (iVar2 = strverscmp(local_126,"2.6.36"), iVar2 < 0)) {
      statvfs_works_cache_2650 = 0;
      goto LAB_001078ba;
    }
    statvfs_works_cache_2650 = 1;
LAB_00107877:
    iVar1 = statvfs(file,(statvfs *)&fsd);
    iVar2 = -1;
    if (iVar1 < 0) goto LAB_0010790b;
    fsd.f_frsize = fsd.f_bsize;
    if (fsd.f_bsize == 0) {
      fsd.f_frsize = fsd.f_type;
    }
  }
  else {
    if (statvfs_works_cache_2650 != 0) goto LAB_00107877;
LAB_001078ba:
    iVar2 = statfs(file,(statfs *)&fsd);
    if (iVar2 < 0) {
      iVar2 = -1;
      goto LAB_0010790b;
    }
  }
  fsp->fsu_blocksize = fsd.f_frsize;
  fsp->fsu_blocks = fsd.f_blocks;
  fsp->fsu_bfree = fsd.f_bfree;
  fsp->fsu_bavail = fsd.f_bavail;
  fsp->fsu_bavail_top_bit_set = SUB81(fsd.f_bavail >> 0x3f,0);
  fsp->fsu_files = fsd.f_files;
  fsp->fsu_ffree = fsd.f_ffree;
  iVar2 = 0;
LAB_0010790b:
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return iVar2;
}

