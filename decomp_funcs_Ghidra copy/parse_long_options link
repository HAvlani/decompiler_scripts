
void parse_long_options(int argc,char **argv,char *command_name,char *package,char *version,
                       anon_subr_void_int *usage_func,...)

{
  long lVar1;
  undefined4 uVar2;
  char in_AL;
  int iVar3;
  long in_FS_OFFSET;
  undefined4 in_XMM0_Da;
  undefined4 in_XMM1_Da;
  undefined4 in_XMM2_Da;
  undefined4 in_XMM3_Da;
  undefined4 in_XMM4_Da;
  undefined4 in_XMM5_Da;
  undefined4 in_XMM6_Da;
  undefined4 in_XMM7_Da;
  va_list authors;
  undefined local_d8 [48];
  undefined4 local_a8;
  undefined4 local_98;
  undefined4 local_88;
  undefined4 local_78;
  undefined4 local_68;
  undefined4 local_58;
  undefined4 local_48;
  undefined4 local_38;
  
  uVar2 = opterr;
  if (in_AL != '\0') {
    local_a8 = in_XMM0_Da;
    local_98 = in_XMM1_Da;
    local_88 = in_XMM2_Da;
    local_78 = in_XMM3_Da;
    local_68 = in_XMM4_Da;
    local_58 = in_XMM5_Da;
    local_48 = in_XMM6_Da;
    local_38 = in_XMM7_Da;
  }
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  opterr = 0;
  if ((int)_argc == 2) {
    iVar3 = getopt_long(_argc,argv,&DAT_00106304,long_options,0);
    if (iVar3 != -1) {
      if (iVar3 == 0x68) {
        (*usage_func)(0);
      }
      else if (iVar3 == 0x76) {
        authors[0].overflow_arg_area = &stack0x00000008;
        authors[0].gp_offset = 0x30;
        authors[0].reg_save_area = local_d8;
        authors[0].fp_offset = 0x30;
        version_etc_va(stdout,command_name,package,version,authors);
                    /* WARNING: Subroutine does not return */
        exit(0);
      }
    }
  }
  optind = 0;
  if (lVar1 == *(long *)(in_FS_OFFSET + 0x28)) {
    optind = 0;
    opterr = uVar2;
    return;
  }
  opterr = uVar2;
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

