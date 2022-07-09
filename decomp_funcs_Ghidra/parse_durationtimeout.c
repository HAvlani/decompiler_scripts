
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

double parse_duration(char *str)

{
  char cVar1;
  _Bool _Var2;
  int *piVar3;
  char *pcVar4;
  undefined8 uVar5;
  long in_FS_OFFSET;
  double duration;
  char *ep;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  _Var2 = xstrtod(str,&ep,&duration,cl_strtod);
  if (_Var2 == false) {
    piVar3 = __errno_location();
    if (*piVar3 != 0x22) goto LAB_00103904;
  }
  if (_DAT_00107b00 <= duration) {
    cVar1 = *ep;
    if (cVar1 != '\0') {
      if (ep[1] != '\0') goto LAB_00103904;
      if (cVar1 == 'h') {
        duration = duration * _DAT_00107b10;
      }
      else if (cVar1 < 'i') {
        if (cVar1 != 'd') goto LAB_00103904;
        duration = duration * _DAT_00107b18;
      }
      else if (cVar1 == 'm') {
        duration = duration * _DAT_00107b08;
      }
      else if (cVar1 != 's') goto LAB_00103904;
    }
    if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
      return duration;
    }
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
LAB_00103904:
  pcVar4 = quote(str);
  uVar5 = dcgettext(0,"invalid time interval %s",5);
  error(0,0,uVar5,pcVar4);
                    /* WARNING: Subroutine does not return */
  usage(0x7d);
}

