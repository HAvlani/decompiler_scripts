
int getfileconat(int fd,char *file,char **con)

{
  long lVar1;
  int iVar2;
  int *piVar3;
  char *p;
  long in_FS_OFFSET;
  saved_cwd saved_cwd;
  char proc_buf [4032];
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  piVar3 = __errno_location();
  if ((fd != -100) && (*file != '/')) {
    p = openat_proc_name(proc_buf,fd,file);
    if ((p != (char *)0x0) && (*piVar3 = 0x5f, p != proc_buf)) {
      rpl_free(p);
    }
    iVar2 = save_cwd(&saved_cwd);
    if (iVar2 != 0) {
                    /* WARNING: Subroutine does not return */
      openat_save_fail(*piVar3);
    }
    if ((-1 < fd) && (saved_cwd.desc == fd)) {
      free_cwd(&saved_cwd);
      *piVar3 = 9;
      goto LAB_001090fa;
    }
    iVar2 = fchdir(fd);
    if (iVar2 != 0) {
      iVar2 = *piVar3;
      free_cwd(&saved_cwd);
      *piVar3 = iVar2;
      goto LAB_001090fa;
    }
    *piVar3 = 0x5f;
    iVar2 = restore_cwd(&saved_cwd);
    if (iVar2 != 0) {
                    /* WARNING: Subroutine does not return */
      openat_restore_fail(*piVar3);
    }
    free_cwd(&saved_cwd);
  }
  *piVar3 = 0x5f;
LAB_001090fa:
  if (lVar1 == *(long *)(in_FS_OFFSET + 0x28)) {
    return -1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

