
/* WARNING: Unknown calling convention yet parameter storage is locked */

size_t mpn_get_str_other(void)

{
  uchar uVar1;
  size_t sVar2;
  mp_limb_t w;
  mp_limb_t *in_RCX;
  uint *in_RDX;
  uchar *puVar3;
  long lVar4;
  int in_ESI;
  uchar *in_RDI;
  uchar *puVar6;
  uchar *puVar7;
  mp_ptr in_R8;
  long in_R9;
  long lVar8;
  long in_FS_OFFSET;
  gmp_div_inverse local_88;
  gmp_div_inverse local_68;
  long local_40;
  long lVar5;
  
  lVar4 = 0;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  mpn_div_qr_1_invert(&local_88,(long)in_ESI);
  puVar3 = in_RDI;
  if (1 < in_R9) {
    mpn_div_qr_1_invert(&local_68,*in_RCX);
    lVar8 = 0;
    do {
      w = mpn_div_qr_1_preinv(in_R8,in_R8,in_R9,&local_68);
      in_R9 = in_R9 - (ulong)(in_R8[in_R9 + -1] == 0);
      sVar2 = mpn_limb_get_str(in_RDI + lVar8,w,&local_88);
      lVar4 = lVar8 + sVar2;
      lVar5 = lVar4;
      if (sVar2 < *in_RDX) {
        do {
          lVar4 = lVar5 + 1;
          in_RDI[lVar5] = '\0';
          lVar5 = lVar4;
        } while ((ulong)(lVar4 - lVar8) < (ulong)*in_RDX);
      }
      lVar8 = lVar4;
    } while (in_R9 != 1);
    puVar3 = in_RDI + lVar4;
  }
  sVar2 = mpn_limb_get_str(puVar3,*in_R8,&local_88);
  sVar2 = sVar2 + lVar4;
  if (1 < sVar2) {
    puVar3 = in_RDI + (sVar2 - 1);
    puVar6 = in_RDI;
    do {
      uVar1 = *puVar6;
      puVar7 = puVar6 + 1;
      *puVar6 = *puVar3;
      *puVar3 = uVar1;
      puVar3 = puVar3 + -1;
      puVar6 = puVar7;
    } while (puVar7 != in_RDI + (sVar2 - 2 >> 1) + 1);
  }
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return sVar2;
}

