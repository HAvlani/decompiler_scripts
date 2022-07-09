
_Bool year(int *digit_pair,idx_t n,uint syntax_bits,tm *tm)

{
  int iVar1;
  tm *ptVar2;
  undefined4 in_register_00000014;
  long in_FS_OFFSET;
  time_t local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  if (CONCAT44(in_register_00000014,syntax_bits) == 1) {
    iVar1 = *(int *)n;
    ptVar2 = (tm *)0x1;
    *digit_pair = iVar1;
    if (0x44 < *(int *)n) goto LAB_0010c046;
    if (((ulong)tm & 8) == 0) {
      *digit_pair = iVar1 + 100;
      goto LAB_0010c046;
    }
  }
  else {
    if (CONCAT44(in_register_00000014,syntax_bits) != 2) {
      local_18 = time((time_t *)0x0);
      ptVar2 = localtime(&local_18);
      if (ptVar2 != (tm *)0x0) {
        *digit_pair = ptVar2->tm_year;
        ptVar2 = (tm *)0x1;
      }
      goto LAB_0010c046;
    }
    if (((ulong)tm & 2) != 0) {
      *digit_pair = *(int *)n * 100 + *(int *)(n + 4) + -0x76c;
      ptVar2 = (tm *)0x1;
      goto LAB_0010c046;
    }
  }
  ptVar2 = (tm *)0x0;
LAB_0010c046:
  if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
    return SUB81(ptVar2,0);
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

