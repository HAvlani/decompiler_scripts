
_Bool create_hole(int fd,char *name,_Bool punch_holes,off_t size)

{
  int iVar1;
  __off_t _Var2;
  char *pcVar3;
  undefined8 uVar4;
  int *piVar5;
  char *pcVar6;
  
  _Var2 = lseek(fd,size,1);
  if (_Var2 < 0) {
    pcVar3 = quotearg_style(shell_escape_always_quoting_style,name);
    pcVar6 = "cannot lseek %s";
LAB_001063a4:
    uVar4 = dcgettext(0,pcVar6,5);
    piVar5 = __errno_location();
    error(0,*piVar5,uVar4,pcVar3);
    return false;
  }
  if (punch_holes != false) {
    iVar1 = punch_hole(fd,_Var2 - size,size);
    if (iVar1 < 0) {
      pcVar3 = quotearg_style(shell_escape_always_quoting_style,name);
      pcVar6 = "error deallocating %s";
      goto LAB_001063a4;
    }
  }
  return true;
}

