
int set_acl(char *name,int desc,mode_t mode)

{
  int iVar1;
  char *pcVar2;
  undefined8 uVar3;
  int *piVar4;
  
  iVar1 = qset_acl(name,desc,mode);
  if (iVar1 == 0) {
    return 0;
  }
  pcVar2 = quote(name);
  uVar3 = dcgettext(0,"setting permissions for %s",5);
  piVar4 = __errno_location();
  error(0,*piVar4,uVar3,pcVar2);
  return iVar1;
}

