
pid_t reap(pid_t pid)

{
  long lVar1;
  __pid_t _Var2;
  void *pvVar3;
  char *pcVar4;
  undefined8 uVar5;
  int *piVar6;
  long in_FS_OFFSET;
  int status;
  tempnode test;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  _Var2 = -1;
  if (pid != 0) {
    _Var2 = pid;
  }
  _Var2 = waitpid(_Var2,&status,(uint)(pid == 0));
  if (_Var2 < 0) {
    pcVar4 = quotearg_style(shell_escape_always_quoting_style,compress_program);
    uVar5 = dcgettext(0,"waiting for %s [-d]",5);
    piVar6 = __errno_location();
                    /* WARNING: Subroutine does not return */
    error(2,*piVar6,uVar5,pcVar4);
  }
  if (_Var2 != 0) {
    if (pid < 1) {
      test.pid = _Var2;
      pvVar3 = hash_remove(proctab,&test);
      if (pvVar3 == (void *)0x0) goto LAB_0010775a;
      *(undefined *)((long)pvVar3 + 0xc) = 2;
    }
    if (((uint)status >> 8 & 0xff | status & 0x7fU) != 0) {
      pcVar4 = quotearg_style(shell_escape_always_quoting_style,compress_program);
      uVar5 = dcgettext(0,"%s [-d] terminated abnormally",5);
                    /* WARNING: Subroutine does not return */
      error(2,0,uVar5,pcVar4);
    }
    nprocs = nprocs + -1;
  }
LAB_0010775a:
  if (lVar1 == *(long *)(in_FS_OFFSET + 0x28)) {
    return _Var2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

