
int chdir_long(char *dir)

{
  long lVar1;
  int iVar2;
  int *piVar3;
  size_t sVar4;
  size_t sVar5;
  undefined *puVar6;
  char *pcVar7;
  char *dir_00;
  long in_FS_OFFSET;
  cd_buf cdb;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  iVar2 = chdir(dir);
  if ((iVar2 == 0) || (piVar3 = __errno_location(), *piVar3 != 0x24)) goto LAB_0010c810;
  sVar4 = strlen(dir);
  cdb = -100;
  if (sVar4 == 0) {
                    /* WARNING: Subroutine does not return */
    __assert_fail("0 < len","lib/chdir-long.c",0x7e,"chdir_long");
  }
  if (sVar4 < 0x1000) {
                    /* WARNING: Subroutine does not return */
    __assert_fail("4096 <= len","lib/chdir-long.c",0x7f,"chdir_long");
  }
  sVar5 = strspn(dir,"/");
  if (sVar5 == 2) {
    puVar6 = (undefined *)memchr(dir + 3,0x2f,sVar4 - 3);
    if (puVar6 != (undefined *)0x0) {
      *puVar6 = 0;
      iVar2 = cdb_advance_fd(&cdb,dir);
      *puVar6 = 0x2f;
      if (iVar2 != 0) goto Fail;
      sVar5 = strspn(puVar6 + 1,"/");
      dir_00 = puVar6 + 1 + sVar5;
      goto LAB_0010c766;
    }
  }
  else {
    dir_00 = dir;
    if (sVar5 == 0) {
LAB_0010c766:
      if (*dir_00 == '/') {
                    /* WARNING: Subroutine does not return */
        __assert_fail("*dir != \'/\'","lib/chdir-long.c",0xa2,"chdir_long");
      }
      pcVar7 = dir + sVar4;
      if (pcVar7 < dir_00) {
                    /* WARNING: Subroutine does not return */
        __assert_fail("dir <= dir_end","lib/chdir-long.c",0xa3,"chdir_long");
      }
      while (0xfff < (long)pcVar7 - (long)dir_00) {
        puVar6 = (undefined *)memrchr(dir_00,0x2f,0x1000);
        if (puVar6 == (undefined *)0x0) {
          *piVar3 = 0x24;
          iVar2 = -1;
          goto LAB_0010c810;
        }
        *puVar6 = 0;
        if (0xfff < (long)puVar6 - (long)dir_00) {
                    /* WARNING: Subroutine does not return */
          __assert_fail("slash - dir < 4096","lib/chdir-long.c",0xb3,"chdir_long");
        }
        iVar2 = cdb_advance_fd(&cdb,dir_00);
        *puVar6 = 0x2f;
        if (iVar2 != 0) goto Fail;
        sVar4 = strspn(puVar6 + 1,"/");
        dir_00 = puVar6 + 1 + sVar4;
      }
      if (((pcVar7 <= dir_00) || (iVar2 = cdb_advance_fd(&cdb,dir_00), iVar2 == 0)) &&
         (iVar2 = fchdir(cdb), iVar2 == 0)) {
        cdb_free((cd_buf *)(ulong)(uint)cdb);
        goto LAB_0010c810;
      }
    }
    else {
      iVar2 = cdb_advance_fd(&cdb,"/");
      if (iVar2 == 0) {
        dir_00 = dir + sVar5;
        goto LAB_0010c766;
      }
    }
Fail:
    iVar2 = *piVar3;
    cdb_free((cd_buf *)(ulong)(uint)cdb);
    *piVar3 = iVar2;
  }
  iVar2 = -1;
LAB_0010c810:
  if (lVar1 == *(long *)(in_FS_OFFSET + 0x28)) {
    return iVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

