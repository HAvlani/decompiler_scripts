
int try_dir(char *tmpl,void *flags)

{
  int iVar1;
  
  iVar1 = mkdir(tmpl,0x1c0);
  return iVar1;
}

