
void mpz_va_init(anon_subr_void___mpz_struct_ptr *mpz_single_init,...)

{
  long lVar1;
  __mpz_struct *p_Var2;
  ulong uVar3;
  undefined8 in_RCX;
  undefined8 in_RDX;
  undefined8 in_RSI;
  undefined8 in_R8;
  undefined8 in_R9;
  long in_FS_OFFSET;
  va_list ap;
  __mpz_struct *local_38 [4];
  undefined8 local_18;
  undefined8 local_10;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  ap[0].overflow_arg_area = &stack0x00000008;
  ap[0].gp_offset = 8;
  local_38[1] = (__mpz_struct *)in_RSI;
  local_38[2] = (__mpz_struct *)in_RDX;
  local_38[3] = (__mpz_struct *)in_RCX;
  local_18 = in_R8;
  local_10 = in_R9;
  while( true ) {
    uVar3 = (ulong)ap[0].gp_offset;
    if (ap[0].gp_offset < 0x30) {
      ap[0].gp_offset = ap[0].gp_offset + 8;
      p_Var2 = *(__mpz_struct **)((long)local_38 + uVar3);
    }
    else {
                    /* WARNING: Load size is inaccurate */
      p_Var2 = *ap[0].overflow_arg_area;
      ap[0].overflow_arg_area = (void *)((long)ap[0].overflow_arg_area + 8);
    }
    if (p_Var2 == (__mpz_struct *)0x0) break;
    (*mpz_single_init)(p_Var2);
  }
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

