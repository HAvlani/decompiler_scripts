
void extract_dirs_from_files(char *dirname,_Bool command_line_arg)

{
  void **ppvVar1;
  int iVar2;
  char **ppcVar3;
  void **ppvVar4;
  char *pcVar5;
  char *pcVar6;
  void **ppvVar7;
  long lVar8;
  
  if ((dirname != (char *)0x0) && (active_dir_set != (Hash_table *)0x0)) {
    queue_directory((char *)0x0,dirname,false);
  }
  lVar8 = cwd_n_used - 1;
  if (cwd_n_used != 0) {
    do {
      while( true ) {
        ppcVar3 = (char **)sorted_file[lVar8];
        if ((*(int *)(ppcVar3 + 0x15) == 3) || (*(int *)(ppcVar3 + 0x15) == 9)) break;
LAB_00107350:
        lVar8 = lVar8 + -1;
        if (lVar8 == -1) goto LAB_00107400;
      }
      pcVar6 = *ppcVar3;
      if (dirname == (char *)0x0) {
LAB_00107450:
        queue_directory(pcVar6,ppcVar3[1],command_line_arg);
      }
      else {
        pcVar5 = last_component(pcVar6);
        if ((*pcVar5 == '.') &&
           ((pcVar5[(ulong)(pcVar5[1] == '.') + 1] == '\0' ||
            (pcVar5[(ulong)(pcVar5[1] == '.') + 1] == '/')))) goto LAB_00107350;
        if (*pcVar6 == '/') goto LAB_00107450;
        pcVar6 = file_name_concat(dirname,pcVar6,(char **)0x0);
        queue_directory(pcVar6,ppcVar3[1],command_line_arg);
        rpl_free(pcVar6);
      }
      if (*(int *)(ppcVar3 + 0x15) != 9) goto LAB_00107350;
      lVar8 = lVar8 + -1;
      rpl_free(*ppcVar3);
      rpl_free(ppcVar3[1]);
      rpl_free(ppcVar3[2]);
    } while (lVar8 != -1);
LAB_00107400:
    ppvVar4 = sorted_file;
    if (cwd_n_used != 0) {
      ppvVar1 = sorted_file + cwd_n_used;
      cwd_n_used = 0;
      ppvVar7 = sorted_file;
      do {
        iVar2 = *(int *)((long)*ppvVar7 + 0xa8);
        ppvVar4[cwd_n_used] = *ppvVar7;
        ppvVar7 = ppvVar7 + 1;
        cwd_n_used = cwd_n_used + (iVar2 != 9);
      } while (ppvVar1 != ppvVar7);
      return;
    }
  }
  cwd_n_used = 0;
  return;
}

