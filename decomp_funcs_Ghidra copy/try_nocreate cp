
int try_nocreate(char *tmpl,void *flags)

{
  long lVar1;
  int iVar2;
  int *piVar3;
  long in_FS_OFFSET;
  stat st;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  iVar2 = __lxstat(1,tmpl,(stat *)&st);
  piVar3 = __errno_location();
  if (iVar2 != 0) {
    if (*piVar3 != 0x4b) {
      iVar2 = -(uint)(*piVar3 != 2);
      goto LAB_0011103b;
    }
  }
  *piVar3 = 0x11;
  iVar2 = -1;
LAB_0011103b:
  if (lVar1 == *(long *)(in_FS_OFFSET + 0x28)) {
    return iVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

