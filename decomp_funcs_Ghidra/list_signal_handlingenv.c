
void list_signal_handling(void)

{
  long lVar1;
  int iVar2;
  int iVar3;
  undefined8 uVar4;
  int *piVar5;
  char *pcVar6;
  char *pcVar7;
  char *pcVar8;
  long in_FS_OFFSET;
  sigset_t set;
  sigaction act;
  char signame [19];
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  sigemptyset((sigset_t *)&set);
  iVar2 = sigprocmask(0,(sigset_t *)0x0,(sigset_t *)&set);
  if (iVar2 == 0) {
    iVar2 = 1;
    do {
      iVar3 = sigaction(iVar2,(sigaction *)0x0,(sigaction *)&act);
      if (iVar3 == 0) {
        if (act.__sigaction_handler == 1) {
          iVar3 = sigismember((sigset_t *)&set,iVar2);
          pcVar8 = "";
          pcVar7 = "";
          pcVar6 = "IGNORE";
          if (iVar3 != 0) {
            pcVar8 = ",";
            pcVar7 = "BLOCK";
          }
        }
        else {
          iVar3 = sigismember((sigset_t *)&set,iVar2);
          if (iVar3 == 0) goto LAB_00103be7;
          pcVar6 = "";
          pcVar7 = "BLOCK";
          pcVar8 = "";
        }
        sig2str(iVar2,signame);
        __fprintf_chk(stderr,1,"%-10s (%2d): %s%s%s\n",signame,iVar2,pcVar7,pcVar8,pcVar6);
      }
LAB_00103be7:
      iVar2 = iVar2 + 1;
    } while (iVar2 != 0x41);
    if (lVar1 == *(long *)(in_FS_OFFSET + 0x28)) {
      return;
    }
  }
  else {
    uVar4 = dcgettext(0,"failed to get signal process mask",5);
    piVar5 = __errno_location();
    error(0x7d,*piVar5,uVar4);
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

