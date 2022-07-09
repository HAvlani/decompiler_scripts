
void diagnose_copy_fd_failure(int param_1,char *param_2)

{
  char *pcVar1;
  undefined8 uVar2;
  int *piVar3;
  char *pcVar4;
  
  if (param_1 == 1) {
    pcVar1 = quotearg_style(shell_escape_always_quoting_style,param_2);
    pcVar4 = "error reading %s";
  }
  else {
    if (param_1 != 2) {
      diagnose_copy_fd_failure_cold();
      return;
    }
    pcVar1 = (char *)quotearg_n_style_colon(0,3,param_2);
    pcVar4 = "%s: file has shrunk too much";
  }
  uVar2 = dcgettext(0,pcVar4,5);
  piVar3 = __errno_location();
  error(0,*piVar3,uVar2,pcVar1);
  return;
}

