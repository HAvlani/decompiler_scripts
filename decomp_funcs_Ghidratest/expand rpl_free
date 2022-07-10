
void rpl_free(void *p)

{
  long lVar1;
  int *piVar2;
  long in_FS_OFFSET;
  int err [2];
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  piVar2 = __errno_location();
  err[0] = *piVar2;
  *piVar2 = 0;
  err[1] = err[0];
  free(p);
  *piVar2 = err[*piVar2 == 0];
  if (lVar1 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

