
_Bool mkancesdirs_safe_wd(char *from,char *to,cp_options *x,_Bool save_always)

{
  int iVar1;
  long lVar2;
  _Bool _Var3;
  int iVar4;
  ptrdiff_t pVar5;
  int *piVar6;
  char *pcVar7;
  undefined8 uVar8;
  long in_FS_OFFSET;
  savewd wd;
  
  lVar2 = *(long *)(in_FS_OFFSET + 0x28);
  if (((save_always == false) && (*from == '/')) && (*to == '/')) {
    wd.state = INITIAL_STATE;
    savewd_finish((savewd_conflict2 *)&wd);
    pVar5 = mkancesdirs(to,(savewd_conflict *)&wd,make_ancestor,x);
    if (pVar5 == -1) {
      pcVar7 = quotearg_style(shell_escape_always_quoting_style,to);
      uVar8 = dcgettext(0,"cannot create directory %s",5);
      piVar6 = __errno_location();
      error(0,*piVar6,uVar8,pcVar7);
      _Var3 = false;
      goto LAB_00104dc0;
    }
LAB_00104dbb:
    _Var3 = true;
  }
  else {
    wd.state = INITIAL_STATE;
    pVar5 = mkancesdirs(to,(savewd_conflict *)&wd,make_ancestor,x);
    piVar6 = __errno_location();
    if (pVar5 == -1) {
      pcVar7 = quotearg_style(shell_escape_always_quoting_style,to);
      uVar8 = dcgettext(0,"cannot create directory %s",5);
      error(0,*piVar6,uVar8,pcVar7);
      savewd_restore((savewd_conflict2 *)&wd,1);
      savewd_finish((savewd_conflict2 *)&wd);
    }
    else {
      iVar4 = savewd_restore((savewd_conflict2 *)&wd,0);
      iVar1 = *piVar6;
      savewd_finish((savewd_conflict2 *)&wd);
      if (iVar4 < 1) {
        if (iVar4 != 0) {
          pcVar7 = quotearg_style(shell_escape_always_quoting_style,to);
          uVar8 = dcgettext(0,"cannot create directory %s",5);
          error(0,iVar1,uVar8,pcVar7);
          _Var3 = false;
          goto LAB_00104dc0;
        }
        goto LAB_00104dbb;
      }
    }
    _Var3 = false;
  }
LAB_00104dc0:
  if (lVar2 == *(long *)(in_FS_OFFSET + 0x28)) {
    return _Var3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

