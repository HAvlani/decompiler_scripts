
/* WARNING: Could not reconcile some variable overlaps */

tempnode * maybe_create_temp(FILE **pfp,_Bool survive_fd_exhaustion)

{
  undefined *templ;
  int iVar1;
  int iVar2;
  pid_t pVar3;
  size_t __n;
  tempnode *temp;
  int *piVar4;
  FILE *pFVar5;
  char *pcVar6;
  undefined8 uVar7;
  tempnode *ptVar8;
  long in_FS_OFFSET;
  bool bVar9;
  int pipefds [2];
  __sigset_t local_c0;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  pcVar6 = temp_dirs[temp_dir_index_8870];
  __n = strlen(pcVar6);
  temp = (tempnode *)xmalloc(__n + 0x20 & 0xfffffffffffffff8);
  templ = &temp->field_0xd;
  memcpy(templ,pcVar6,__n);
  *(undefined8 *)(&temp->field_0xd + __n) = slashbase_8869._0_8_;
  *(undefined4 *)((long)&temp[1].next + __n + 5) = slashbase_8869._8_4_;
  temp->next = (tempnode *)0x0;
  temp_dir_index_8870 = temp_dir_index_8870 + 1;
  if (temp_dir_index_8870 == temp_dir_count) {
    temp_dir_index_8870 = 0;
  }
  iVar2 = pthread_sigmask(0,(__sigset_t *)&caught_signals,&local_c0);
  pipefds[0] = pipefds[0] & 0xffffff00U | (uint)(iVar2 == 0);
  iVar2 = mkostemp_safer(templ,0x80000);
  piVar4 = __errno_location();
  if (iVar2 < 0) {
    iVar2 = *piVar4;
    if (pipefds[0]._0_1_ != false) {
      cs_leave((cs_status *)pipefds);
      *piVar4 = iVar2;
    }
    if ((iVar2 != 0x18) || (survive_fd_exhaustion != true)) {
      pcVar6 = quotearg_style(shell_escape_always_quoting_style,pcVar6);
      uVar7 = dcgettext(0,"cannot create temporary file in %s",5);
                    /* WARNING: Subroutine does not return */
      error(2,*piVar4,uVar7,pcVar6);
    }
    ptVar8 = (tempnode *)0x0;
    rpl_free(temp);
  }
  else {
    ptVar8 = temp;
    *temptail = temp;
    temptail = &ptVar8->next;
    if (pipefds[0]._0_1_ != false) {
      iVar1 = *piVar4;
      cs_leave((cs_status *)pipefds);
      *piVar4 = iVar1;
    }
    bVar9 = compress_program != (char *)0x0;
    temp->state = '\0';
    if (bVar9) {
      pVar3 = pipe_fork((int *)(cs_status *)pipefds,4);
      temp->pid = pVar3;
      if (pVar3 < 1) {
        if (pVar3 == 0) {
          close(pipefds[1]);
          if (iVar2 != 1) {
            move_fd(iVar2,1);
          }
          if (pipefds[0] != 0) {
            move_fd(pipefds[0],0);
          }
          execlp(compress_program,compress_program,0);
                    /* WARNING: Subroutine does not return */
          async_safe_die(*piVar4,"couldn\'t execute compress program");
        }
      }
      else {
        close(iVar2);
        close(pipefds[0]);
        register_proc(temp);
        iVar2 = pipefds[1];
      }
    }
    pFVar5 = fdopen(iVar2,"w");
    *pfp = (FILE *)pFVar5;
    ptVar8 = temp;
    if (pFVar5 == (FILE *)0x0) {
      pcVar6 = (char *)dcgettext(0,"couldn\'t create temporary file",5);
                    /* WARNING: Subroutine does not return */
      sort_die(pcVar6,templ);
    }
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return ptVar8;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

