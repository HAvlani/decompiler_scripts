
void verify_numeric(char *s,char *end)

{
  int *piVar1;
  char *pcVar2;
  undefined8 uVar3;
  char *pcVar4;
  
  piVar1 = __errno_location();
  if (*piVar1 == 0) {
    if (*end != '\0') {
      if (end == s) {
        pcVar2 = quote(end);
        pcVar4 = "%s: expected a numeric value";
      }
      else {
        pcVar2 = quote(s);
        pcVar4 = "%s: value not completely converted";
      }
      uVar3 = dcgettext(0,pcVar4,5);
      error(0,0,uVar3,pcVar2);
      exit_status = 1;
    }
    return;
  }
  pcVar2 = quote(s);
  error(0,*piVar1,"%s",pcVar2);
  exit_status = 1;
  return;
}

