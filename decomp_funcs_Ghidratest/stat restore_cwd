
int restore_cwd(saved_cwd *cwd)

{
  int iVar1;
  
  if (-1 < cwd->desc) {
    iVar1 = fchdir(cwd->desc);
    return iVar1;
  }
  iVar1 = chdir_long(cwd->name);
  return iVar1;
}

