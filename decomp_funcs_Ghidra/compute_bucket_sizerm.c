
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention yet parameter storage is locked */

size_t compute_bucket_size(void)

{
  ulong uVar1;
  ulong uVar2;
  char in_SIL;
  ulong uVar3;
  ulong in_RDI;
  long lVar4;
  ulong uVar5;
  float in_XMM0_Da;
  float fVar6;
  
  if (in_SIL == '\0') {
    if ((long)in_RDI < 0) {
      fVar6 = (float)(in_RDI >> 1 | (ulong)((uint)in_RDI & 1));
      fVar6 = fVar6 + fVar6;
    }
    else {
      fVar6 = (float)in_RDI;
    }
    fVar6 = fVar6 / in_XMM0_Da;
    if (_DAT_0010d1c8 <= fVar6) {
      return 0;
    }
    if (fVar6 < _DAT_0010d1cc) {
      in_RDI = (ulong)fVar6;
    }
    else {
      in_RDI = (long)(fVar6 - _DAT_0010d1cc) ^ 0x8000000000000000;
    }
  }
  uVar5 = 10;
  if (9 < in_RDI) {
    uVar5 = in_RDI;
  }
  uVar5 = uVar5 | 1;
  do {
    if (uVar5 == 0xffffffffffffffff) {
      return 0;
    }
    uVar1 = uVar5 - (uVar5 / 3 +
                    (SUB168(ZEXT816(uVar5) * ZEXT816(0xaaaaaaaaaaaaaaab) >> 0x40,0) &
                    0xfffffffffffffffe));
    if (uVar5 < 10) {
LAB_001075b0:
      if (uVar1 != 0) {
        if ((uVar5 >> 0x3c & 1) != 0) {
          return 0;
        }
        if (uVar5 >> 0x3d != 0) {
          return 0;
        }
        return uVar5;
      }
    }
    else if (uVar1 != 0) {
      lVar4 = 0x10;
      uVar3 = 9;
      uVar2 = 3;
      do {
        uVar2 = uVar2 + 2;
        uVar3 = uVar3 + lVar4;
        uVar1 = uVar5 % uVar2;
        if (uVar5 <= uVar3) goto LAB_001075b0;
        lVar4 = lVar4 + 8;
      } while (uVar1 != 0);
    }
    uVar5 = uVar5 + 2;
  } while( true );
}

