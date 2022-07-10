
int make_ancestor(char *dir,char *component,void *options)

{
  int iVar1;
  int *piVar2;
  void *options_00;
  
  if (*(long *)((long)options + 0x28) != 0) {
    piVar2 = __errno_location();
    *piVar2 = 0x5f;
  }
  options_00 = (void *)0x1ed;
  iVar1 = mkdir(component,0x1ed);
  if ((iVar1 == 0) && (*(char *)((long)options + 0x3c) != '\0')) {
    announce_mkdir(dir,options_00);
    return 0;
  }
  return iVar1;
}

