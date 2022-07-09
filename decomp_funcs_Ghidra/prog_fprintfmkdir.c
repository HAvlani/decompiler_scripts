
void prog_fprintf(FILE *fp,char *fmt,...)

{
  long lVar1;
  char *pcVar2;
  char in_AL;
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
  va_list ap;
  undefined local_c8 [16];
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined4 local_98;
  undefined4 local_88;
  undefined4 local_78;
  undefined4 local_68;
  undefined4 local_58;
  undefined4 local_48;
  undefined4 local_38;
  undefined4 local_28;
  
  if (in_AL != '\0') {
    local_98 = in_XMM0_Da;
    local_88 = in_XMM1_Da;
    local_78 = in_XMM2_Da;
    local_68 = in_XMM3_Da;
    local_58 = in_XMM4_Da;
    local_48 = in_XMM5_Da;
    local_38 = in_XMM6_Da;
    local_28 = in_XMM7_Da;
  }
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  local_b8 = in_RDX;
  local_b0 = in_RCX;
  local_a8 = in_R8;
  local_a0 = in_R9;
  fputs_unlocked(program_name,(FILE *)fp);
  fwrite_unlocked(&DAT_0010a5b1,1,2,(FILE *)fp);
  ap[0].overflow_arg_area = &stack0x00000008;
  ap[0].gp_offset = 0x10;
  ap[0].reg_save_area = local_c8;
  ap[0].fp_offset = 0x30;
  rpl_vfprintf(fp,fmt,ap);
  pcVar2 = fp->_IO_write_ptr;
  if (pcVar2 < fp->_IO_write_end) {
    fp->_IO_write_ptr = pcVar2 + 1;
    *pcVar2 = '\n';
  }
  else {
    __overflow((_IO_FILE *)fp,10);
  }
  if (lVar1 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

