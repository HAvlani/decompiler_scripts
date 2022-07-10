
_Bool excluded_fstype(char *fstype)

{
  fs_type_list **ppfVar1;
  bool bVar2;
  int iVar3;
  fs_type_list *pfVar4;
  
  bVar2 = fstype == (char *)0x0 || fs_exclude_list == (fs_type_list *)0x0;
  pfVar4 = fs_exclude_list;
  if (bVar2) {
    return false;
  }
  do {
    iVar3 = strcmp(fstype,pfVar4->fs_name);
    if (iVar3 == 0) {
      return true;
    }
    ppfVar1 = &pfVar4->fs_next;
    pfVar4 = *ppfVar1;
  } while (*ppfVar1 != (fs_type_list *)0x0);
  return bVar2;
}

