
void physmem_available(void)

{
  int iVar1;
  long lVar2;
  long lVar3;
  long in_FS_OFFSET;
  sysinfo local_88;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  lVar2 = sysconf(0x56);
  lVar3 = sysconf(0x1e);
  if ((((double)lVar2 < 0.0) || ((double)lVar3 < 0.0)) && (iVar1 = sysinfo(&local_88), iVar1 != 0))
  {
    physmem_total();
  }
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

