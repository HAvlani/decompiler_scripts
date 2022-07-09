
int savewd_chdir(savewd_conflict1 *wd,char *dir,int options,int *open_result)

{
  anon_enum_32_conflict1 aVar1;
  int iVar2;
  int __fd;
  int iVar3;
  int *piVar4;
  bool bVar5;
  
  if (open_result == (int *)0x0) {
    __fd = -1;
    if ((options & 1U) != 0) {
      __fd = __open_2();
      goto LAB_00105bf8;
    }
LAB_00105cee:
    aVar1 = wd->state;
    if (aVar1 == FORKING_STATE) {
      if ((int)wd->val < 0) {
        iVar3 = fork();
        wd->val = iVar3;
        if (iVar3 != 0) {
LAB_00105e78:
          if (0 < iVar3) {
            bVar5 = true;
            iVar3 = -2;
            goto LAB_00105c91;
          }
          wd->state = ERROR_STATE;
          piVar4 = __errno_location();
          wd->val = *piVar4;
          goto LAB_00105c4a;
        }
      }
    }
    else if ((uint)aVar1 < 4) {
      if (aVar1 == INITIAL_STATE) goto LAB_00105c25;
    }
    else if (1 < (uint)(aVar1 + ~FORKING_STATE)) {
LAB_00105d1c:
                    /* WARNING: Subroutine does not return */
      __assert_fail("0","lib/savewd.c",0x5c,"savewd_save");
    }
LAB_00105c50:
    iVar3 = chdir(dir);
    if (iVar3 != 0) {
      return iVar3;
    }
LAB_00105c5f:
    aVar1 = wd->state;
    if (aVar1 == FORKING_STATE) {
      iVar3 = wd->val;
      if (iVar3 != 0) {
                    /* WARNING: Subroutine does not return */
        __assert_fail("wd->val.child == 0","lib/savewd.c",0x94,"savewd_chdir");
      }
LAB_00105cd6:
      bVar5 = open_result == (int *)0x0;
      goto LAB_00105c91;
    }
    if ((uint)aVar1 < 4) {
      if (aVar1 == FD_STATE) {
        wd->state = FD_POST_CHDIR_STATE;
      }
      else if (aVar1 != FD_POST_CHDIR_STATE) goto LAB_00105d49;
    }
    else if (1 < (uint)(aVar1 + ~FORKING_STATE)) {
LAB_00105d49:
                    /* WARNING: Subroutine does not return */
      __assert_fail("0","lib/savewd.c",0x98,"savewd_chdir");
    }
  }
  else {
    __fd = __open_2();
    *open_result = __fd;
    piVar4 = __errno_location();
    open_result[1] = *piVar4;
LAB_00105bf8:
    if (__fd < 0) {
      piVar4 = __errno_location();
      if (*piVar4 != 0xd) {
        return -1;
      }
      goto LAB_00105cee;
    }
    if ((options & 2U) == 0) {
      aVar1 = wd->state;
      if (aVar1 == FORKING_STATE) {
        if ((int)wd->val < 0) {
          iVar3 = fork();
          wd->val = iVar3;
          if (iVar3 == 0) goto LAB_00105cc8;
          goto LAB_00105e78;
        }
      }
      else {
        if (3 < (uint)aVar1) {
          if (1 < (uint)(aVar1 + ~FORKING_STATE)) goto LAB_00105d1c;
          goto LAB_00105cc8;
        }
        if (aVar1 != INITIAL_STATE) goto LAB_00105cc8;
LAB_00105c25:
        iVar3 = open_safer(".",0);
        if (iVar3 < 0) {
          piVar4 = __errno_location();
          if ((*piVar4 == 0xd) || (*piVar4 == 0x74)) {
            *wd = (savewd_conflict1)0xffffffff00000003;
            iVar3 = fork();
            wd->val = iVar3;
            if (iVar3 != 0) goto LAB_00105e78;
          }
          else {
            wd->state = ERROR_STATE;
            wd->val = *piVar4;
          }
        }
        else {
          wd->state = FD_STATE;
          wd->val = iVar3;
        }
LAB_00105c4a:
        if (__fd < 0) goto LAB_00105c50;
      }
LAB_00105cc8:
      iVar3 = fchdir(__fd);
      if (iVar3 == 0) goto LAB_00105c5f;
      goto LAB_00105cd6;
    }
  }
  bVar5 = open_result == (int *)0x0;
  iVar3 = 0;
LAB_00105c91:
  if ((-1 < __fd) && (bVar5)) {
    piVar4 = __errno_location();
    iVar2 = *piVar4;
    close(__fd);
    *piVar4 = iVar2;
  }
  return iVar3;
}

