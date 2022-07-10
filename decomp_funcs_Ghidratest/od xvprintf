
int xvprintf(char *format,__va_list_tag *args)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  int *piVar4;
  
  iVar1 = rpl_vprintf(format,args);
  if (iVar1 < 0) {
    iVar2 = ferror(stdout);
    if (iVar2 == 0) {
      uVar3 = dcgettext(0,"cannot perform formatted output",5);
      piVar4 = __errno_location();
      error(exit_failure,*piVar4,uVar3);
    }
  }
  return iVar1;
}

