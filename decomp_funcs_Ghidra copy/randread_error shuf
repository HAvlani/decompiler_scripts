
void randread_error(char *param_1)

{
  char *pcVar1;
  int *piVar2;
  undefined8 uVar3;
  
  if (param_1 != (char *)0x0) {
    pcVar1 = quote(param_1);
    piVar2 = __errno_location();
    if (*piVar2 == 0) {
      uVar3 = dcgettext(0,"%s: end of file",5);
    }
    else {
      uVar3 = dcgettext(0,"%s: read error",5);
    }
    error(exit_failure,*piVar2,uVar3,pcVar1);
    randread_error_cold();
    return;
  }
                    /* WARNING: Subroutine does not return */
  abort();
}

