
void exit_cleanup(void)

{
  long lVar1;
  tempnode *ptVar2;
  int iVar3;
  long in_FS_OFFSET;
  cs_status cs;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  if (temphead != (tempnode *)0x0) {
    iVar3 = pthread_sigmask(0,(__sigset_t *)&caught_signals,(__sigset_t *)&cs.sigs);
    cs.valid = iVar3 == 0;
    for (ptVar2 = temphead; ptVar2 != (tempnode *)0x0; ptVar2 = ptVar2->next) {
      unlink(&ptVar2->field_0xd);
    }
    temphead = (tempnode *)0x0;
    if (cs.valid != false) {
      cs_leave(&cs);
    }
  }
  close_stdout();
  if (lVar1 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

