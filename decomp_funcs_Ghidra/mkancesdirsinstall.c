
ptrdiff_t mkancesdirs(char *file,savewd_conflict *wd,
                     anon_subr_int_char_ptr_char_ptr_void_ptr *make_dir,void *make_dir_arg)

{
  char cVar1;
  bool bVar2;
  int iVar3;
  int *piVar4;
  char cVar5;
  uint options;
  char *pcVar6;
  char *pcVar7;
  char *dir;
  char *pcVar8;
  bool bVar9;
  int local_3c;
  
  cVar5 = *file;
  if (cVar5 == '\0') {
    return 0;
  }
  pcVar6 = file + 1;
  bVar2 = false;
  pcVar8 = (char *)0x0;
  dir = file;
  do {
    cVar1 = *pcVar6;
    pcVar7 = dir;
    if (cVar1 == '/') {
      bVar9 = cVar5 != '/';
      cVar5 = cVar1;
      if (bVar9) {
        pcVar8 = pcVar6;
      }
    }
    else {
      bVar9 = cVar1 != '\0' && cVar5 == '/';
      if (bVar9) {
        cVar5 = cVar1;
        if (pcVar8 == (char *)0x0) goto LAB_0010e1b9;
        if ((long)pcVar8 - (long)dir == 1) {
          pcVar7 = pcVar6;
          if (*dir == '.') goto LAB_0010e1b9;
          *pcVar8 = '\0';
LAB_0010e1f4:
          iVar3 = (*make_dir)(file,dir,make_dir_arg);
          local_3c = 0;
          options = 1;
          if (iVar3 < 0) {
            piVar4 = __errno_location();
            local_3c = *piVar4;
            options = (uint)bVar2;
            bVar9 = bVar2;
          }
        }
        else {
          *pcVar8 = '\0';
          if ((((long)pcVar8 - (long)dir != 2) || (*dir != '.')) || (dir[1] != '.'))
          goto LAB_0010e1f4;
          local_3c = 0;
          bVar9 = false;
          options = 0;
        }
        iVar3 = savewd_chdir((savewd_conflict2 *)wd,dir,options,(int *)0x0);
        if ((iVar3 == -1) || (*pcVar8 = '/', iVar3 != 0)) {
          if ((local_3c != 0) && (piVar4 = __errno_location(), *piVar4 == 2)) {
            *piVar4 = local_3c;
          }
          return (long)iVar3;
        }
        cVar1 = *pcVar6;
        dir = pcVar6;
        bVar2 = bVar9;
      }
      pcVar7 = dir;
      cVar5 = cVar1;
      if (cVar1 == '\0') {
        return (long)dir - (long)file;
      }
    }
LAB_0010e1b9:
    pcVar6 = pcVar6 + 1;
    dir = pcVar7;
  } while( true );
}

