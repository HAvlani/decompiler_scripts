
void close_stdout(void)

{
  int iVar1;
  int *piVar2;
  undefined8 uVar3;
  char *pcVar4;
  
  iVar1 = close_stream(stdout);
  if (iVar1 != 0) {
    piVar2 = __errno_location();
    if ((ignore_EPIPE == false) || (*piVar2 != 0x20)) {
      uVar3 = dcgettext(0,"write error",5);
      if (file_name == (char *)0x0) {
        error(0,*piVar2,&DAT_0011597f,uVar3);
      }
      else {
        pcVar4 = quotearg_colon(file_name);
        error(0,*piVar2,"%s: %s",pcVar4,uVar3);
      }
      goto LAB_00105078;
    }
  }
  iVar1 = close_stream(stderr);
  if (iVar1 == 0) {
    return;
  }
LAB_00105078:
                    /* WARNING: Subroutine does not return */
  _exit(exit_failure);
}
