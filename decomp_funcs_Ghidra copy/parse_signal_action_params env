
void parse_signal_action_params(char *optarg,_Bool set_default)

{
  long lVar1;
  int iVar2;
  char *pcVar3;
  char *operand;
  undefined8 uVar4;
  long lVar5;
  long in_FS_OFFSET;
  char signame [19];
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  if (optarg == (char *)0x0) {
    lVar5 = 0;
    do {
      iVar2 = (int)lVar5;
      lVar5 = lVar5 + 1;
      iVar2 = sig2str(iVar2 + 1,signame);
      if (iVar2 == 0) {
        signals[lVar5] = (-(uint)(set_default == false) & 2) + DEFAULT_NOERR;
      }
    } while (lVar5 != 0x40);
  }
  else {
    pcVar3 = xstrdup(optarg);
    operand = strtok(pcVar3,",");
    if (operand != (char *)0x0) {
      do {
        iVar2 = operand2sig(operand,signame);
        if (iVar2 == 0) {
          pcVar3 = quote(operand);
          uVar4 = dcgettext(0,"%s: invalid signal",5);
          error(0,0,uVar4,pcVar3);
LAB_001042b6:
                    /* WARNING: Subroutine does not return */
          usage(exit_failure);
        }
        if (iVar2 < 1) goto LAB_001042b6;
        signals[iVar2] = (-(uint)(set_default == false) & 2) + DEFAULT;
        operand = strtok((char *)0x0,",");
      } while (operand != (char *)0x0);
    }
    rpl_free(pcVar3);
  }
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

