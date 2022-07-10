
int settime(timespec *ts)

{
  long lVar1;
  int iVar2;
  int *piVar3;
  long in_FS_OFFSET;
  timeval tv;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  iVar2 = clock_settime(0,(timespec *)ts);
  if (iVar2 != 0) {
    piVar3 = __errno_location();
    if (*piVar3 != 1) {
      tv.tv_sec = ts->tv_sec;
      tv.tv_usec = ts->tv_nsec / 1000;
      iVar2 = settimeofday((timeval *)&tv,(timezone *)0x0);
    }
  }
  if (lVar1 == *(long *)(in_FS_OFFSET + 0x28)) {
    return iVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

