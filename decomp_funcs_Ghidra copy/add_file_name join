
void add_file_name(char *name,int *operand_status,int *joption_count,int *nfiles,
                  int *prev_optc_status,int *optc_status,char **names)

{
  int iVar1;
  int iVar2;
  long lVar3;
  size_t sVar4;
  char *pcVar5;
  undefined8 uVar6;
  long lVar7;
  int iVar8;
  
  iVar8 = *nfiles;
  if (iVar8 == 2) {
    iVar1 = *operand_status;
    pcVar5 = g_names[iVar1 == 0];
    iVar2 = operand_status[iVar1 == 0];
    if (iVar2 == 2) {
      joption_count[1] = joption_count[1] + -1;
      sVar4 = string_to_join_field(pcVar5);
      set_join_field(&join_field_2,sVar4);
    }
    else if (iVar2 < 3) {
      if (iVar2 == 0) {
        pcVar5 = quotearg_style(shell_escape_always_quoting_style,name);
        uVar6 = dcgettext(0,"extra operand %s",5);
                    /* WARNING: Subroutine does not return */
        error(0,0,uVar6,pcVar5);
      }
      if (iVar2 == 1) {
        *joption_count = *joption_count + -1;
        sVar4 = string_to_join_field(pcVar5);
        set_join_field(&join_field_1,sVar4);
      }
    }
    else if (iVar2 == 3) {
      add_field_list(pcVar5);
    }
    if (iVar1 == 0) {
      lVar3 = 8;
      lVar7 = 4;
    }
    else {
      lVar7 = 4;
      *operand_status = operand_status[1];
      g_names[0] = g_names[1];
      lVar3 = 8;
    }
  }
  else {
    lVar3 = (long)iVar8;
    iVar8 = iVar8 + 1;
    lVar7 = lVar3 * 4;
    lVar3 = lVar3 << 3;
  }
  *(int *)((long)operand_status + lVar7) = *prev_optc_status;
  *(char **)((long)g_names + lVar3) = name;
  *nfiles = iVar8;
  if (*prev_optc_status == 3) {
    *optc_status = 3;
  }
  return;
}

