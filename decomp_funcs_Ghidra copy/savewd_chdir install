
int savewd_chdir(savewd_conflict2 *wd,char *dir,int options,int *open_result)

{
  anon_enum_32_conflict2 aVar1;
  int iVar2;
  int __fd;
  int iVar3;
  int *piVar4;
  bool bVar5;
  
  if (open_result == (int *)0x0) {
    __fd = -1;
    if ((options & 1U) != 0) {
      __fd = __open_2();
      goto LAB_001115e8;
    }
LAB_001116de:
    aVar1 = wd->state;
    if (aVar1 == FADVISE_WILLNEED) {
      if ((int)wd->val < 0) {
        iVar3 = fork();
        wd->val = iVar3;
        if (iVar3 != 0) {
LAB_00111868:
          if (0 < iVar3) {
            bVar5 = true;
            iVar3 = -2;
            goto LAB_00111681;
          }
          wd->state = ERROR_STATE;
          piVar4 = __errno_location();
          wd->val = *piVar4;
          goto LAB_0011163a;
        }
      }
    }
    else if ((uint)aVar1 < 4) {
      if (aVar1 == FADVISE_NORMAL) goto LAB_00111615;
    }
    else if (1 < (uint)(aVar1 + ~FADVISE_WILLNEED)) {
LAB_0011170c:
                    /* WARNING: Subroutine does not return */
      __assert_fail("0","lib/savewd.c",0x5c,"savewd_save");
    }
LAB_00111640:
    iVar3 = chdir(dir);
    if (iVar3 != 0) {
      return iVar3;
    }
LAB_0011164f:
    aVar1 = wd->state;
    if (aVar1 == FADVISE_WILLNEED) {
      iVar3 = wd->val;
      if (iVar3 != 0) {
                    /* WARNING: Subroutine does not return */
        __assert_fail("wd->val.child == 0","lib/savewd.c",0x94,"savewd_chdir");
      }
LAB_001116c6:
      bVar5 = open_result == (int *)0x0;
      goto LAB_00111681;
    }
    if ((uint)aVar1 < 4) {
      if (aVar1 == FADVISE_RANDOM) {
        wd->state = FADVISE_SEQUENTIAL;
      }
      else if (aVar1 != FADVISE_SEQUENTIAL) goto LAB_00111739;
    }
    else if (1 < (uint)(aVar1 + ~FADVISE_WILLNEED)) {
LAB_00111739:
                    /* WARNING: Subroutine does not return */
      __assert_fail("0","lib/savewd.c",0x98,"savewd_chdir");
    }
  }
  else {
    __fd = __open_2();
    *open_result = __fd;
    piVar4 = __errno_location();
    open_result[1] = *piVar4;
LAB_001115e8:
    if (__fd < 0) {
      piVar4 = __errno_location();
      if (*piVar4 != 0xd) {
        return -1;
      }
      goto LAB_001116de;
    }
    if ((options & 2U) == 0) {
      aVar1 = wd->state;
      if (aVar1 == FADVISE_WILLNEED) {
        if ((int)wd->val < 0) {
          iVar3 = fork();
          wd->val = iVar3;
          if (iVar3 == 0) goto LAB_001116b8;
          goto LAB_00111868;
        }
      }
      else {
        if (3 < (uint)aVar1) {
          if (1 < (uint)(aVar1 + ~FADVISE_WILLNEED)) goto LAB_0011170c;
          goto LAB_001116b8;
        }
        if (aVar1 != FADVISE_NORMAL) goto LAB_001116b8;
LAB_00111615:
        iVar3 = open_safer(".",0);
        if (iVar3 < 0) {
          piVar4 = __errno_location();
          if ((*piVar4 == 0xd) || (*piVar4 == 0x74)) {
            *wd = (savewd_conflict2)0xffffffff00000003;
            iVar3 = fork();
            wd->val = iVar3;
            if (iVar3 != 0) goto LAB_00111868;
          }
          else {
            wd->state = ERROR_STATE;
            wd->val = *piVar4;
          }
        }
        else {
          wd->state = FADVISE_RANDOM;
          wd->val = iVar3;
        }
LAB_0011163a:
        if (__fd < 0) goto LAB_00111640;
      }
LAB_001116b8:
      iVar3 = fchdir(__fd);
      if (iVar3 == 0) goto LAB_0011164f;
      goto LAB_001116c6;
    }
  }
  bVar5 = open_result == (int *)0x0;
  iVar3 = 0;
LAB_00111681:
  if ((-1 < __fd) && (bVar5)) {
    piVar4 = __errno_location();
    iVar2 = *piVar4;
    close(__fd);
    *piVar4 = iVar2;
  }
  return iVar3;
}

