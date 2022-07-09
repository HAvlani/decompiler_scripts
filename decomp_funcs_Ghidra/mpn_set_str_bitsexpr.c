
mp_size_t mpn_set_str_bits(mp_ptr rp,uchar *sp,size_t sn,uint bits)

{
  uint uVar1;
  uint uVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  
  lVar3 = sn - 1;
  uVar2 = 0;
  uVar4 = 0;
  lVar5 = 0;
  if (sn != 0) {
    do {
      uVar1 = uVar2 + bits;
      uVar4 = uVar4 | (ulong)sp[lVar3] << ((byte)uVar2 & 0x3f);
      uVar2 = uVar1;
      if (0x3f < uVar1) {
        rp[lVar5] = uVar4;
        uVar2 = uVar1 - 0x40;
        lVar5 = lVar5 + 1;
        uVar4 = (ulong)(sp[lVar3] >> ((char)bits - (char)uVar2 & 0x1fU));
      }
      lVar3 = lVar3 + -1;
    } while (lVar3 != -1);
    if (uVar4 != 0) {
      rp[lVar5] = uVar4;
      return lVar5 + 1;
    }
    for (; lVar5 != 0; lVar5 = lVar5 + -1) {
      if (rp[lVar5 + -1] != 0) {
        return lVar5;
      }
    }
  }
  return 0;
}

