
void parse_block_signal_params(char *optarg,_Bool block)

{
  long lVar1;
  int __signo;
  char *pcVar2;
  char *operand;
  undefined8 uVar3;
  sigset_t *psVar4;
  long in_FS_OFFSET;
  char signame [19];
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  if (optarg == (char *)0x0) {
    if (block == false) {
      sigfillset((sigset_t *)&unblock_signals);
      psVar4 = &block_signals;
    }
    else {
      sigfillset((sigset_t *)&block_signals);
      psVar4 = &unblock_signals;
    }
    sigemptyset((sigset_t *)psVar4);
    sig_mask_changed = true;
  }
  else {
    if (sig_mask_changed == false) {
      sigemptyset((sigset_t *)&block_signals);
      sigemptyset((sigset_t *)&unblock_signals);
    }
    sig_mask_changed = true;
    pcVar2 = xstrdup(optarg);
    operand = strtok(pcVar2,",");
    if (operand != (char *)0x0) {
      psVar4 = &block_signals;
      if (block != false) {
        psVar4 = &unblock_signals;
      }
      do {
        __signo = operand2sig(operand,signame);
        if (__signo == 0) {
          pcVar2 = quote(operand);
          uVar3 = dcgettext(0,"%s: invalid signal",5);
          error(0,0,uVar3,pcVar2);
LAB_00104457:
                    /* WARNING: Subroutine does not return */
          usage(exit_failure);
        }
        if (__signo < 1) goto LAB_00104457;
        if (block == false) {
          sigaddset((sigset_t *)&unblock_signals,__signo);
        }
        else {
          sigaddset((sigset_t *)&block_signals,__signo);
        }
        sigdelset((sigset_t *)psVar4,__signo);
        operand = strtok((char *)0x0,",");
      } while (operand != (char *)0x0);
    }
    rpl_free(pcVar2);
  }
  if (lVar1 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

