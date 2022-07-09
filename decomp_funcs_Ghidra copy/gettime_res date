
long gettime_res(void)

{
  long lVar1;
  long lVar2;
  int iVar3;
  long in_FS_OFFSET;
  timespec tVar4;
  timespec local_38;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  clock_getres(0,&local_38);
  local_38.tv_nsec = local_38.tv_sec * 1000000000 + local_38.tv_nsec;
  if (1 < local_38.tv_nsec) {
    iVar3 = 0;
    do {
      tVar4 = current_timespec();
      lVar2 = SUB168((undefined  [16])tVar4 >> 0x40,0);
      lVar1 = local_38.tv_nsec;
      if (lVar2 == 0) {
        lVar2 = 1000000000;
      }
      do {
        local_38.tv_nsec = lVar2;
        lVar2 = lVar1 % local_38.tv_nsec;
        lVar1 = local_38.tv_nsec;
      } while (lVar2 != 0);
      iVar3 = iVar3 + 1;
    } while ((1 < local_38.tv_nsec) && (iVar3 < 0x20));
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return local_38.tv_nsec;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

