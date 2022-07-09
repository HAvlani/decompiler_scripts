
/* WARNING: Could not reconcile some variable overlaps */

int create(char *name)

{
  long lVar1;
  char *pcVar2;
  int iVar3;
  __pid_t _Var4;
  int iVar5;
  char *pcVar6;
  char *__arg;
  undefined8 uVar7;
  undefined8 uVar8;
  int *piVar9;
  ulong uVar10;
  long in_FS_OFFSET;
  stat out_stat_buf;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  if (filter_command == (char *)0x0) {
    if (verbose != false) {
      pcVar6 = quotearg_style(shell_escape_always_quoting_style,name);
      uVar8 = dcgettext(0,"creating file %s\n",5);
      __fprintf_chk(stdout,1,uVar8,pcVar6);
    }
    iVar3 = open_safer(name,0x41,0x1b6);
    if (-1 < iVar3) {
      iVar5 = __fxstat(1,iVar3,(stat *)&out_stat_buf);
      if (iVar5 != 0) {
        pcVar6 = quotearg_style(shell_escape_always_quoting_style,name);
        uVar8 = dcgettext(0,"failed to stat %s",5);
        piVar9 = __errno_location();
                    /* WARNING: Subroutine does not return */
        error(1,*piVar9,uVar8,pcVar6);
      }
      if ((in_stat_buf.st_ino == out_stat_buf.st_ino) &&
         (in_stat_buf.st_dev == CONCAT44(out_stat_buf.st_dev._4_4_,(int)out_stat_buf.st_dev))) {
        pcVar6 = quotearg_style(shell_escape_always_quoting_style,name);
        uVar8 = dcgettext(0,"%s would overwrite input; aborting",5);
                    /* WARNING: Subroutine does not return */
        error(1,0,uVar8,pcVar6);
      }
      iVar5 = ftruncate(iVar3,0);
      if ((iVar5 != 0) && ((out_stat_buf.st_mode & 0xf000) == 0x8000)) {
        uVar8 = quotearg_n_style_colon(0,3,name);
        uVar7 = dcgettext(0,"%s: error truncating",5);
        piVar9 = __errno_location();
                    /* WARNING: Subroutine does not return */
        error(1,*piVar9,uVar7,uVar8);
      }
    }
  }
  else {
    pcVar6 = getenv("SHELL");
    if (pcVar6 == (char *)0x0) {
      pcVar6 = "/bin/sh";
    }
    iVar3 = setenv("FILE",name,1);
    if (iVar3 != 0) {
      uVar8 = dcgettext(0,"failed to set FILE environment variable",5);
      piVar9 = __errno_location();
                    /* WARNING: Subroutine does not return */
      error(1,*piVar9,uVar8);
    }
    if (verbose != false) {
      uVar8 = quotearg_n_style_colon(0,3,name);
      uVar7 = dcgettext(0,"executing with FILE=%s\n",5);
      __fprintf_chk(stdout,1,uVar7,uVar8);
    }
    iVar3 = pipe((int *)&out_stat_buf);
    if (iVar3 != 0) {
      uVar8 = dcgettext(0,"failed to create pipe",5);
      piVar9 = __errno_location();
                    /* WARNING: Subroutine does not return */
      error(1,*piVar9,uVar8);
    }
    _Var4 = fork();
    if (_Var4 == 0) {
      uVar10 = 0;
      if (n_open_pipes != 0) {
        do {
          iVar3 = close(open_pipes[uVar10]);
          if (iVar3 != 0) {
            uVar8 = dcgettext(0,"closing prior pipe",5);
            piVar9 = __errno_location();
                    /* WARNING: Subroutine does not return */
            error(1,*piVar9,uVar8);
          }
          uVar10 = uVar10 + 1;
        } while (uVar10 < n_open_pipes);
      }
      iVar3 = close(out_stat_buf.st_dev._4_4_);
      piVar9 = __errno_location();
      if (iVar3 != 0) {
        uVar8 = dcgettext(0,"closing output pipe",5);
                    /* WARNING: Subroutine does not return */
        error(1,*piVar9,uVar8);
      }
      if ((int)out_stat_buf.st_dev != 0) {
        iVar3 = dup2((int)out_stat_buf.st_dev,0);
        if (iVar3 != 0) {
          uVar8 = dcgettext(0,"moving input pipe",5);
                    /* WARNING: Subroutine does not return */
          error(1,*piVar9,uVar8);
        }
        iVar3 = close((int)out_stat_buf.st_dev);
        if (iVar3 != 0) {
          uVar8 = dcgettext(0,"closing input pipe",5);
                    /* WARNING: Subroutine does not return */
          error(1,*piVar9,uVar8);
        }
      }
      sigprocmask(2,(sigset_t *)&oldblocked,(sigset_t *)0x0);
      pcVar2 = filter_command;
      __arg = last_component(pcVar6);
      execl(pcVar6,__arg,&DAT_0010a0de,pcVar2,0);
      uVar8 = dcgettext(0,"failed to run command: \"%s -c %s\"",5);
                    /* WARNING: Subroutine does not return */
      error(1,*piVar9,uVar8,pcVar6,pcVar2);
    }
    if (_Var4 == -1) {
      uVar8 = dcgettext(0,"fork system call failed",5);
      piVar9 = __errno_location();
                    /* WARNING: Subroutine does not return */
      error(1,*piVar9,uVar8);
    }
    iVar3 = close((int)out_stat_buf.st_dev);
    if (iVar3 != 0) {
      uVar8 = dcgettext(0,"failed to close input pipe",5);
      piVar9 = __errno_location();
                    /* WARNING: Subroutine does not return */
      error(1,*piVar9,uVar8);
    }
    filter_pid = _Var4;
    if (n_open_pipes == open_pipes_alloc) {
      open_pipes = (int *)x2nrealloc(open_pipes,&open_pipes_alloc,4);
    }
    piVar9 = open_pipes + n_open_pipes;
    n_open_pipes = n_open_pipes + 1;
    *piVar9 = out_stat_buf.st_dev._4_4_;
    iVar3 = out_stat_buf.st_dev._4_4_;
  }
  if (lVar1 == *(long *)(in_FS_OFFSET + 0x28)) {
    return iVar3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

