
void physmem_total(void)

{
  long lVar1;
  long lVar2;
  long in_FS_OFFSET;
  sysinfo local_88;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  lVar1 = sysconf(0x55);
  lVar2 = sysconf(0x1e);
  if (((double)lVar1 < 0.0) || ((double)lVar2 < 0.0)) {
    sysinfo(&local_88);
  }
  if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

