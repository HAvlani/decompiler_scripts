
void xstrtol_fatal(uint param_1,int param_2,undefined param_3,long param_4,undefined8 param_5)

{
  int iVar1;
  undefined8 uVar2;
  char *pcVar3;
  undefined *puVar4;
  undefined *puVar5;
  long in_FS_OFFSET;
  undefined local_32;
  undefined local_31;
  undefined8 local_30;
  
  iVar1 = exit_failure;
  local_30 = *(undefined8 *)(in_FS_OFFSET + 0x28);
  if (param_1 < 4) {
    if (param_1 < 2) {
      if (param_1 != 1) {
        xstrtol_fatal_cold();
        return;
      }
      pcVar3 = "%s%s argument \'%s\' too large";
    }
    else {
      pcVar3 = "invalid suffix in %s%s argument \'%s\'";
    }
  }
  else {
    if (param_1 != 4) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
    pcVar3 = "invalid %s%s argument \'%s\'";
  }
  if (param_2 < 0) {
    puVar5 = &local_32;
    local_31 = 0;
    puVar4 = &DAT_00117eb5 + -(long)param_2;
    local_32 = param_3;
  }
  else {
    puVar4 = &DAT_00117eb5;
    puVar5 = *(undefined **)(param_4 + (long)param_2 * 0x20);
  }
  uVar2 = dcgettext(0,pcVar3,5);
                    /* WARNING: Subroutine does not return */
  error(iVar1,0,uVar2,puVar4,puVar5,param_5);
}

