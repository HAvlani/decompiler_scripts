
int rpl_asprintf(char **resultp,char *format,...)

{
  long lVar1;
  char in_AL;
  int iVar2;
  undefined8 in_RCX;
  undefined8 in_RDX;
  undefined8 in_R8;
  undefined8 in_R9;
  long in_FS_OFFSET;
  undefined4 in_XMM0_Da;
  undefined4 in_XMM1_Da;
  undefined4 in_XMM2_Da;
  undefined4 in_XMM3_Da;
  undefined4 in_XMM4_Da;
  undefined4 in_XMM5_Da;
  undefined4 in_XMM6_Da;
  undefined4 in_XMM7_Da;
  va_list args;
  undefined local_b8 [16];
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined4 local_88;
  undefined4 local_78;
  undefined4 local_68;
  undefined4 local_58;
  undefined4 local_48;
  undefined4 local_38;
  undefined4 local_28;
  undefined4 local_18;
  
  if (in_AL != '\0') {
    local_88 = in_XMM0_Da;
    local_78 = in_XMM1_Da;
    local_68 = in_XMM2_Da;
    local_58 = in_XMM3_Da;
    local_48 = in_XMM4_Da;
    local_38 = in_XMM5_Da;
    local_28 = in_XMM6_Da;
    local_18 = in_XMM7_Da;
  }
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  args[0].overflow_arg_area = &stack0x00000008;
  args[0].gp_offset = 0x10;
  args[0].reg_save_area = local_b8;
  args[0].fp_offset = 0x30;
  local_a8 = in_RDX;
  local_a0 = in_RCX;
  local_98 = in_R8;
  local_90 = in_R9;
  iVar2 = rpl_vasprintf(resultp,format,args);
  if (lVar1 == *(long *)(in_FS_OFFSET + 0x28)) {
    return iVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

