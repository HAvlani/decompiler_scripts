
pid_t pipe_fork(int *pipefds,size_t tries)

{
  long lVar1;
  tempnode *ptVar2;
  int iVar3;
  pid_t pVar4;
  __pid_t _Var5;
  int *piVar6;
  long lVar7;
  long in_FS_OFFSET;
  double local_e8;
  cs_status cs;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  iVar3 = rpl_pipe2(pipefds,0x80000);
  if (iVar3 < 0) {
    _Var5 = -1;
  }
  else {
    if (nmerge + 1 < (uint)nprocs) {
      reap(-1);
      do {
        if (nprocs < 1) break;
        pVar4 = reap(0);
      } while (pVar4 != 0);
    }
    piVar6 = __errno_location();
    lVar7 = tries - 1;
    local_e8 = DAT_001170f8;
    do {
      iVar3 = pthread_sigmask(0,(__sigset_t *)&caught_signals,(__sigset_t *)&cs.sigs);
      ptVar2 = temphead;
      temphead = (tempnode *)0x0;
      cs.valid = iVar3 == 0;
      _Var5 = fork();
      iVar3 = *piVar6;
      if (_Var5 == 0) {
        if (cs.valid != false) goto LAB_0010955c;
LAB_001095b0:
        _Var5 = 0;
        close(0);
        close(1);
        goto LAB_0010957c;
      }
      temphead = ptVar2;
      if (cs.valid != false) {
LAB_0010955c:
        cs_leave(&cs);
      }
      *piVar6 = iVar3;
      if (-1 < _Var5) {
        if (_Var5 == 0) goto LAB_001095b0;
        nprocs = nprocs + 1;
        goto LAB_0010957c;
      }
      if (iVar3 != 0xb) goto LAB_00109604;
      xnanosleep(local_e8);
      local_e8 = local_e8 + local_e8;
      do {
        if (nprocs < 1) break;
        pVar4 = reap(0);
      } while (pVar4 != 0);
      lVar7 = lVar7 + -1;
    } while (lVar7 != -1);
    iVar3 = *piVar6;
LAB_00109604:
    close(*pipefds);
    close(pipefds[1]);
    *piVar6 = iVar3;
  }
LAB_0010957c:
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return _Var5;
}

