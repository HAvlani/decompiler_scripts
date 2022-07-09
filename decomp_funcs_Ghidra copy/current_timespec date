
timespec current_timespec(void)

{
  long lVar1;
  long in_FS_OFFSET;
  timespec ts;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  clock_gettime(0,(timespec *)&ts);
  if (lVar1 == *(long *)(in_FS_OFFSET + 0x28)) {
    return (timespec)CONCAT88(ts.tv_nsec,ts.tv_sec);
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

