
int rpl_nanosleep(timespec *requested_delay,timespec *remaining_delay)

{
  long lVar1;
  int iVar2;
  int *piVar3;
  long lVar4;
  long in_FS_OFFSET;
  timespec intermediate;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  if ((ulong)requested_delay->tv_nsec < 1000000000) {
    lVar4 = requested_delay->tv_sec;
    intermediate.tv_nsec = requested_delay->tv_nsec;
    while (0x1fa400 < lVar4) {
      intermediate.tv_sec = 0x1fa400;
      lVar4 = lVar4 + -0x1fa400;
      iVar2 = nanosleep((timespec *)&intermediate,(timespec *)remaining_delay);
      if (iVar2 != 0) {
        if (remaining_delay != (timespec *)0x0) {
          remaining_delay->tv_sec = remaining_delay->tv_sec + lVar4;
        }
        goto LAB_00106077;
      }
      intermediate.tv_nsec = 0;
    }
    intermediate.tv_sec = lVar4;
    iVar2 = nanosleep((timespec *)&intermediate,(timespec *)remaining_delay);
  }
  else {
    piVar3 = __errno_location();
    *piVar3 = 0x16;
    iVar2 = -1;
  }
LAB_00106077:
  if (lVar1 == *(long *)(in_FS_OFFSET + 0x28)) {
    return iVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

