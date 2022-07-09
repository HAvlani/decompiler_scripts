
size_t mpn_get_str_bits(uchar *sp,uint bits,mp_srcptr up,mp_size_t un)

{
  ulong uVar1;
  mp_bitcnt_t mVar2;
  ulong uVar3;
  byte bVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  uint uVar8;
  uint uVar9;
  long lVar10;
  
  uVar1 = (ulong)bits;
  mVar2 = mpn_limb_size_in_base_2(up[un + -1]);
  uVar5 = (uVar1 - 1) + (un + -1) * 0x40 + mVar2;
  uVar3 = uVar5 / uVar1;
  if (uVar1 <= uVar5) {
    lVar10 = uVar3 - 1;
    uVar9 = 0;
    lVar6 = 0;
    do {
      uVar8 = uVar9 + bits;
      bVar4 = (byte)(up[lVar6] >> ((byte)uVar9 & 0x3f));
      lVar7 = lVar6;
      uVar9 = uVar8;
      if ((0x3f < uVar8) && (lVar7 = lVar6 + 1, lVar7 < un)) {
        uVar9 = uVar8 - 0x40;
        bVar4 = (byte)(up[lVar6 + 1] << ((byte)bits - (char)uVar9 & 0x3f)) | bVar4;
      }
      sp[lVar10] = bVar4 & (char)(1 << ((byte)bits & 0x1f)) - 1U;
      lVar10 = lVar10 + -1;
      lVar6 = lVar7;
    } while (lVar10 != -1);
  }
  return uVar3;
}

