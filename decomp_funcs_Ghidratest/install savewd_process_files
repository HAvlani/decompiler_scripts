
int savewd_process_files
              (int n_files,char **file,anon_subr_int_char_ptr_savewd_conflict2_ptr_void_ptr *act,
              void *options)

{
  long lVar1;
  int iVar2;
  long lVar3;
  int iVar4;
  int iVar5;
  int status;
  char **ppcVar6;
  long in_FS_OFFSET;
  savewd_conflict2 wd;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  iVar5 = n_files + -1;
  wd.state = FADVISE_NORMAL;
  if (-1 < iVar5) {
    lVar3 = (long)iVar5;
    do {
      iVar4 = (int)lVar3;
      if (*file[lVar3] != '/') break;
      iVar4 = iVar4 + -1;
      lVar3 = lVar3 + -1;
    } while (-1 < (int)lVar3);
    if (0 < iVar4) {
      status = 0;
      ppcVar6 = file;
      do {
        if (((wd.state != FADVISE_WILLNEED) || (wd.val < 1)) &&
           (iVar2 = (*act)(*ppcVar6,&wd,options), status < iVar2)) {
          status = iVar2;
        }
        if ((*ppcVar6[1] != '/') && (iVar2 = savewd_restore(&wd,status), status < iVar2)) {
          status = iVar2;
        }
        ppcVar6 = ppcVar6 + 1;
      } while (ppcVar6 != file + (ulong)(iVar4 - 1) + 1);
      goto LAB_00111b80;
    }
  }
  status = 0;
  iVar4 = 0;
LAB_00111b80:
  savewd_finish(&wd);
  if (iVar4 < n_files) {
    ppcVar6 = file + iVar4;
    do {
      iVar2 = (*act)(*ppcVar6,&wd,options);
      if (status < iVar2) {
        status = iVar2;
      }
      ppcVar6 = ppcVar6 + 1;
    } while (ppcVar6 != file + (long)iVar4 + (ulong)(uint)(iVar5 - iVar4) + 1);
  }
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return status;
}

