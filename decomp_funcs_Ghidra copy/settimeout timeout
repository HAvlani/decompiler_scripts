
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void settimeout(double duration,_Bool warn)

{
  long lVar1;
  int iVar2;
  int *piVar3;
  undefined8 uVar4;
  uint __seconds;
  long in_FS_OFFSET;
  timer_t timerid;
  itimerspec its;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  its.it_value = dtotimespec(duration);
  its.it_interval.tv_sec = 0;
  its.it_interval.tv_nsec = 0;
  iVar2 = timer_create(0,(sigevent *)0x0,&timerid);
  if (iVar2 == 0) {
    iVar2 = timer_settime(timerid,0,(itimerspec *)&its,(itimerspec *)0x0);
    if (iVar2 == 0) goto LAB_0010308d;
    if (warn != false) {
      uVar4 = dcgettext(0,"warning: timer_settime",5);
      piVar3 = __errno_location();
      error(0,*piVar3,uVar4);
    }
    timer_delete(timerid);
  }
  else if (warn != false) {
    piVar3 = __errno_location();
    if (*piVar3 != 0x26) {
      uVar4 = dcgettext(0,"warning: timer_create",5);
      error(0,*piVar3,uVar4);
    }
  }
  __seconds = 0xffffffff;
  if (duration < _DAT_00107af8) {
    __seconds = (uint)((double)((long)duration & 0xffffffff) < duration) + (int)(long)duration;
  }
  alarm(__seconds);
LAB_0010308d:
  if (lVar1 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

