
/* WARNING: Removing unreachable block (ram,0x00106cba) */
/* WARNING: Removing unreachable block (ram,0x00106ca8) */

int crc_sum_stream(FILE *stream,void *resstream,uintmax_t *length)

{
  int *piVar1;
  long lVar2;
  _Bool _Var3;
  int iVar4;
  undefined8 uVar5;
  uint uVar6;
  ulong uVar7;
  ulong uVar8;
  char *pcVar9;
  long in_FS_OFFSET;
  uintmax_t total_bytes;
  ulong local_38;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  total_bytes = 0;
  local_38 = 0;
  if (cksum_fp != (anon_subr__Bool_FILE_ptr_uint_fast32_t_ptr_uintmax_t_ptr *)0x0)
  goto LAB_00106c29;
  piVar1 = (int *)cpuid_basic_info(0);
  uVar6 = piVar1[3];
  if (*piVar1 == 0) {
    if (cksum_debug != false) {
      pcVar9 = "failed to get cpuid";
LAB_00106cf3:
      uVar5 = dcgettext(0,pcVar9,5,uVar6);
      error(0,0,&DAT_0011e11b,uVar5);
    }
  }
  else {
    lVar2 = cpuid_Version_info(1);
    uVar6 = *(uint *)(lVar2 + 0xc) & 0x10000002;
    if (uVar6 == 0x10000002) {
      if (cksum_debug != false) {
        uVar5 = dcgettext(0,"using pclmul hardware support",5);
        error(0,0,&DAT_0011e11b,uVar5);
      }
      cksum_fp = cksum_pclmul;
      goto LAB_00106c29;
    }
    if (cksum_debug != false) {
      pcVar9 = "pclmul support not detected";
      goto LAB_00106cf3;
    }
  }
  cksum_fp = cksum_slice8;
LAB_00106c29:
  _Var3 = (*cksum_fp)(stream,&local_38,&total_bytes);
  if (_Var3 == false) {
    iVar4 = -1;
  }
  else {
    *length = total_bytes;
    uVar8 = local_38;
    for (uVar7 = total_bytes; uVar7 != 0; uVar7 = uVar7 >> 8) {
      uVar8 = uVar8 << 8 ^ crctab[(byte)((byte)(uVar8 >> 0x18) ^ (byte)uVar7)];
    }
    iVar4 = 0;
    *(uint *)resstream = ~(uint)uVar8;
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return iVar4;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

