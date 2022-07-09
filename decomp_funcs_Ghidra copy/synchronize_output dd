
int synchronize_output(void)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  int *piVar4;
  char *pcVar5;
  char *pcVar6;
  int iVar7;
  
  iVar7 = conversions_mask;
  uVar2 = conversions_mask & 0xffff3fff;
  uVar1 = conversions_mask & 0x4000;
  conversions_mask = uVar2;
  if (uVar1 == 0) {
LAB_001062db:
    if ((iVar7 & 0x8000U) == 0) {
      return 0;
    }
  }
  else {
    do {
      process_signals();
      iVar3 = fdatasync(1);
      if (-1 < iVar3) {
        if (iVar3 == 0) goto LAB_001062db;
        piVar4 = __errno_location();
        iVar3 = *piVar4;
        break;
      }
      piVar4 = __errno_location();
      iVar3 = *piVar4;
    } while (iVar3 == 4);
    if ((iVar3 - 0x16U & 0xffffffef) != 0) {
      pcVar5 = quotearg_style(shell_escape_always_quoting_style,output_file);
      pcVar6 = (char *)dcgettext(0,"fdatasync failed for %s",5);
      iVar7 = 1;
      nl_error(0,*piVar4,pcVar6,pcVar5);
      goto LAB_00106395;
    }
  }
  iVar7 = 0;
LAB_00106395:
  do {
    process_signals();
    iVar3 = fsync(1);
    if (-1 < iVar3) {
      if (iVar3 == 0) {
        return iVar7;
      }
      piVar4 = __errno_location();
      break;
    }
    piVar4 = __errno_location();
  } while (*piVar4 == 4);
  pcVar5 = quotearg_style(shell_escape_always_quoting_style,output_file);
  pcVar6 = (char *)dcgettext(0,"fsync failed for %s",5);
  nl_error(0,*piVar4,pcVar6,pcVar5);
  return 1;
}

