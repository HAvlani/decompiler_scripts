
void file_failure(_Bool serious,char *message,char *file)

{
  char *pcVar1;
  int *piVar2;
  
  pcVar1 = quotearg_style(shell_escape_always_quoting_style,file);
  piVar2 = __errno_location();
  error(0,*piVar2,message,pcVar1);
  if (serious == false) {
    if (exit_status == 0) {
      exit_status = 1;
      return;
    }
  }
  else {
    exit_status = 2;
  }
  return;
}

