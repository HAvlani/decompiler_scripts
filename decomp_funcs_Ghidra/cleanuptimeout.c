
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void cleanup(int sig)

{
  long lVar1;
  double duration;
  int iVar2;
  int *piVar3;
  char *pcVar4;
  undefined8 uVar5;
  pid_t __pid;
  long in_FS_OFFSET;
  bool bVar6;
  char signame [19];
  
  duration = kill_after;
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  if (sig == 0xe) {
    timed_out = 1;
    sig = term_signal;
  }
  if (monitored_pid == 0) {
                    /* WARNING: Subroutine does not return */
    _exit(sig + 0x80);
  }
  if (kill_after == _DAT_00107b00) {
    __pid = monitored_pid;
    if (verbose == false) goto LAB_0010329e;
LAB_00103318:
    iVar2 = sig2str(sig,signame);
    if (iVar2 != 0) {
      __snprintf_chk(signame,0x13,1,0x13,&DAT_00107046,sig);
    }
    pcVar4 = quote(command);
    uVar5 = dcgettext(0,"sending signal %s to command %s",5);
    error(0,0,uVar5,signame,pcVar4);
  }
  else {
    piVar3 = __errno_location();
    term_signal = 9;
    iVar2 = *piVar3;
    settimeout(duration,false);
    bVar6 = verbose != false;
    kill_after = 0.0;
    *piVar3 = iVar2;
    if (bVar6) goto LAB_00103318;
  }
  __pid = monitored_pid;
  if (monitored_pid == 0) {
    signal(sig,(__sighandler_t)0x1);
  }
LAB_0010329e:
  kill(__pid,sig);
  if (foreground == false) {
    signal(sig,(__sighandler_t)0x1);
    kill(0,sig);
    if ((sig != 9) && (sig != 0x12)) {
      if (__pid == 0) {
        signal(0x12,(__sighandler_t)0x1);
      }
      kill(__pid,0x12);
      signal(0x12,(__sighandler_t)0x1);
      kill(0,0x12);
    }
  }
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

