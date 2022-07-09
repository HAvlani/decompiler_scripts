
void signal_setup(_Bool init)

{
  long lVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  int *piVar5;
  long in_FS_OFFSET;
  sigaction act;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  if (init == false) {
    piVar3 = (int *)(sig_10365 + 4);
    iVar4 = 0x14;
    while( true ) {
      iVar2 = sigismember((sigset_t *)&caught_signals,iVar4);
      if (iVar2 != 0) {
        signal(iVar4,(__sighandler_t)0x0);
      }
      if (piVar3 == (int *)&DAT_00117690) break;
      iVar4 = *piVar3;
      piVar3 = piVar3 + 1;
    }
  }
  else {
    piVar5 = (int *)(sig_10365 + 4);
    iVar4 = 0x14;
    sigemptyset((sigset_t *)&caught_signals);
    piVar3 = (int *)(sig_10365 + 4);
    while( true ) {
      sigaction(iVar4,(sigaction *)0x0,(sigaction *)&act);
      if (act.__sigaction_handler != (code *)0x1) {
        sigaddset((sigset_t *)&caught_signals,iVar4);
      }
      if (piVar3 == (int *)&DAT_00117690) break;
      iVar4 = *piVar3;
      piVar3 = piVar3 + 1;
    }
    act.sa_flags = 0x10000000;
    iVar4 = 0x14;
    act.sa_mask.__val[0]._0_4_ = (undefined4)caught_signals.__val[0];
    act.sa_mask.__val[0]._4_4_ = caught_signals.__val[0]._4_4_;
    act.sa_mask.__val[1]._0_4_ = (undefined4)caught_signals.__val[1];
    act.sa_mask.__val[1]._4_4_ = caught_signals.__val[1]._4_4_;
    act.sa_mask.__val[2]._0_4_ = (undefined4)caught_signals.__val[2];
    act.sa_mask.__val[2]._4_4_ = caught_signals.__val[2]._4_4_;
    act.sa_mask.__val[3]._0_4_ = (undefined4)caught_signals.__val[3];
    act.sa_mask.__val[3]._4_4_ = caught_signals.__val[3]._4_4_;
    act.sa_mask.__val[4]._0_4_ = (undefined4)caught_signals.__val[4];
    act.sa_mask.__val[4]._4_4_ = caught_signals.__val[4]._4_4_;
    act.sa_mask.__val[5]._0_4_ = (undefined4)caught_signals.__val[5];
    act.sa_mask.__val[5]._4_4_ = caught_signals.__val[5]._4_4_;
    act.sa_mask.__val[6]._0_4_ = (undefined4)caught_signals.__val[6];
    act.sa_mask.__val[6]._4_4_ = caught_signals.__val[6]._4_4_;
    act.sa_mask.__val[7]._0_4_ = (undefined4)caught_signals.__val[7];
    act.sa_mask.__val[7]._4_4_ = caught_signals.__val[7]._4_4_;
    act.sa_mask.__val[8]._0_4_ = (undefined4)caught_signals.__val[8];
    act.sa_mask.__val[8]._4_4_ = caught_signals.__val[8]._4_4_;
    act.sa_mask.__val[9]._0_4_ = (undefined4)caught_signals.__val[9];
    act.sa_mask.__val[9]._4_4_ = caught_signals.__val[9]._4_4_;
    act.sa_mask.__val[10]._0_4_ = (undefined4)caught_signals.__val[10];
    act.sa_mask.__val[10]._4_4_ = caught_signals.__val[10]._4_4_;
    act.sa_mask.__val[11]._0_4_ = (undefined4)caught_signals.__val[11];
    act.sa_mask.__val[11]._4_4_ = caught_signals.__val[11]._4_4_;
    act.sa_mask.__val[12]._0_4_ = (undefined4)caught_signals.__val[12];
    act.sa_mask.__val[12]._4_4_ = caught_signals.__val[12]._4_4_;
    act.sa_mask.__val[13]._0_4_ = (undefined4)caught_signals.__val[13];
    act.sa_mask.__val[13]._4_4_ = caught_signals.__val[13]._4_4_;
    act.sa_mask.__val[14]._0_4_ = (undefined4)caught_signals.__val[14];
    act.sa_mask.__val[14]._4_4_ = caught_signals.__val[14]._4_4_;
    act.sa_mask.__val[15]._0_4_ = (undefined4)caught_signals.__val[15];
    act.sa_mask.__val[15]._4_4_ = caught_signals.__val[15]._4_4_;
    while( true ) {
      iVar2 = sigismember((sigset_t *)&caught_signals,iVar4);
      if (iVar2 != 0) {
        act.__sigaction_handler = sighandler;
        if (iVar4 == 0x14) {
          act.__sigaction_handler = stophandler;
        }
        sigaction(iVar4,(sigaction *)&act,(sigaction *)0x0);
      }
      if (piVar5 == (int *)&DAT_00117690) break;
      iVar4 = *piVar5;
      piVar5 = piVar5 + 1;
    }
  }
  if (lVar1 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

