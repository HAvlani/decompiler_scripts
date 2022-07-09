
void unblock_signal(int sig)

{
  long lVar1;
  int iVar2;
  undefined8 uVar3;
  int *piVar4;
  long in_FS_OFFSET;
  sigset_t unblock_set;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  sigemptyset((sigset_t *)&unblock_set);
  sigaddset((sigset_t *)&unblock_set,sig);
  iVar2 = sigprocmask(1,(sigset_t *)&unblock_set,(sigset_t *)0x0);
  if (iVar2 != 0) {
    uVar3 = dcgettext(0,"warning: sigprocmask",5);
    piVar4 = __errno_location();
    error(0,*piVar4,uVar3);
  }
  if (lVar1 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

