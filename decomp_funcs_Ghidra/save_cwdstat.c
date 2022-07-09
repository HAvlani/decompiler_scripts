
int save_cwd(saved_cwd *cwd)

{
  int iVar1;
  char *pcVar2;
  
  cwd->name = (char *)0x0;
  iVar1 = open_safer(".",0x80000);
  cwd->desc = iVar1;
  if (-1 < iVar1) {
    return 0;
  }
  pcVar2 = getcwd((char *)0x0,0);
  cwd->name = pcVar2;
  return -(uint)(pcVar2 == (char *)0x0);
}

