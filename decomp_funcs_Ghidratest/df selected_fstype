
_Bool selected_fstype(char *fstype)

{
  fs_type_list **ppfVar1;
  int iVar2;
  fs_type_list *pfVar3;
  bool bVar4;
  
  bVar4 = fs_select_list == (fs_type_list *)0x0;
  pfVar3 = fs_select_list;
  if (fstype != (char *)0x0 && !bVar4) {
    do {
      iVar2 = strcmp(fstype,pfVar3->fs_name);
      if (iVar2 == 0) {
        return true;
      }
      ppfVar1 = &pfVar3->fs_next;
      pfVar3 = *ppfVar1;
    } while (*ppfVar1 != (fs_type_list *)0x0);
  }
  return fstype == (char *)0x0 || bVar4;
}

