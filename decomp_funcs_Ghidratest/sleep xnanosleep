
int xnanosleep(double seconds)

{
  long lVar1;
  int iVar2;
  uint *puVar3;
  long in_FS_OFFSET;
  timespec ts_sleep;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  puVar3 = (uint *)__errno_location();
  if (DAT_00107ee0 <= seconds) {
    do {
      pause();
      if (*puVar3 != 4) break;
      pause();
    } while (*puVar3 == 4);
  }
  ts_sleep = dtotimespec(seconds);
  do {
    *puVar3 = 0;
    iVar2 = rpl_nanosleep(&ts_sleep,&ts_sleep);
    if (iVar2 == 0) goto LAB_00105a75;
  } while ((*puVar3 & 0xfffffffb) == 0);
  iVar2 = -1;
LAB_00105a75:
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return iVar2;
}

