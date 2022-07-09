
int savewd_restore(savewd_conflict2 *wd,int status)

{
  anon_enum_32_conflict2 aVar1;
  __pid_t __pid;
  uint uVar2;
  __pid_t _Var3;
  int *piVar4;
  int iVar5;
  long in_FS_OFFSET;
  int child_status;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  aVar1 = wd->state;
  if (aVar1 == FADVISE_WILLNEED) {
    __pid = wd->val;
    if (__pid == 0) {
                    /* WARNING: Subroutine does not return */
      _exit(status);
    }
    if (0 < __pid) {
      while (_Var3 = waitpid(__pid,&child_status,0), _Var3 < 0) {
        piVar4 = __errno_location();
        if (*piVar4 != 4) {
                    /* WARNING: Subroutine does not return */
          __assert_fail("(*__errno_location ()) == 4","lib/savewd.c",0xd1,"savewd_restore");
        }
      }
      wd->val = 0xffffffff;
      if ((child_status & 0x7fU) != 0) {
        raise(child_status & 0x7fU);
      }
      uVar2 = (uint)child_status >> 8 & 0xff;
      goto LAB_0011193a;
    }
LAB_00111938:
    uVar2 = 0;
  }
  else {
    if ((uint)aVar1 < 4) {
      if (aVar1 != FADVISE_SEQUENTIAL) goto LAB_00111938;
      uVar2 = fchdir(wd->val);
      if (uVar2 == 0) {
        wd->state = FADVISE_RANDOM;
        goto LAB_0011193a;
      }
      piVar4 = __errno_location();
      iVar5 = *piVar4;
      close(wd->val);
      wd->state = ERROR_STATE;
      wd->val = iVar5;
    }
    else {
      if (aVar1 != ERROR_STATE) {
                    /* WARNING: Subroutine does not return */
        __assert_fail("0","lib/savewd.c",0xdb,"savewd_restore");
      }
      iVar5 = wd->val;
      piVar4 = __errno_location();
    }
    *piVar4 = iVar5;
    uVar2 = 0xffffffff;
  }
LAB_0011193a:
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar2;
}

