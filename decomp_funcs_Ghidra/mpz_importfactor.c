
void mpz_import(__mpz_struct *r,size_t count,int order,size_t size,int endian,size_t nails,void *src
               )

{
  char cVar1;
  ulong size_00;
  long lVar2;
  mp_ptr pmVar3;
  byte *pbVar4;
  size_t sVar5;
  mp_limb_t mVar6;
  ulong uVar7;
  size_t sVar8;
  
  if (nails != 0) {
                    /* WARNING: Subroutine does not return */
    gmp_die("mpz_import: Nails not supported.");
  }
  if ((order + 1U & 0xfffffffd) != 0) {
                    /* WARNING: Subroutine does not return */
    __assert_fail("order == 1 || order == -1","lib/mini-gmp.c",0x1173,"mpz_import");
  }
  if (2 < endian + 1U) {
                    /* WARNING: Subroutine does not return */
    __assert_fail("endian >= -1 && endian <= 1","lib/mini-gmp.c",0x1174,"mpz_import");
  }
  if (endian == 0) {
    endian = -1;
  }
  sVar8 = size * 2;
  if (endian == order) {
    sVar8 = nails;
  }
  if (order == 1) {
    sVar8 = -sVar8;
    src = (void *)((long)src + (count - 1) * size);
  }
  if (endian == 1) {
    src = (byte *)((long)src + (size - 1));
  }
  size_00 = size * count + 7 >> 3;
  if ((long)r->_mp_alloc < (long)size_00) {
    pmVar3 = mpz_realloc(r,size_00);
  }
  else {
    pmVar3 = r->_mp_d;
  }
  if (count == 0) {
    if (size_00 != 0) goto LAB_0010f4ab;
  }
  else {
    lVar2 = 0;
    mVar6 = 0;
    uVar7 = 0;
    do {
      sVar5 = 0;
      pbVar4 = (byte *)src;
      if (size != 0) {
        do {
          cVar1 = (char)lVar2;
          lVar2 = lVar2 + 1;
          mVar6 = mVar6 | (ulong)*pbVar4 << (cVar1 * '\b' & 0x3fU);
          if (lVar2 == 8) {
            pmVar3[uVar7] = mVar6;
            lVar2 = 0;
            uVar7 = uVar7 + 1;
            mVar6 = 0;
          }
          sVar5 = sVar5 + 1;
          pbVar4 = pbVar4 + -(long)endian;
        } while (size != sVar5);
        src = (void *)((long)src + size * -(long)endian);
      }
      src = (void *)((long)src + sVar8);
      count = count - 1;
    } while (count != 0);
    if ((lVar2 != 0) + uVar7 != size_00) {
LAB_0010f4ab:
                    /* WARNING: Subroutine does not return */
      __assert_fail("i + (bytes > 0) == rn","lib/mini-gmp.c",0x119a,"mpz_import");
    }
    if (mVar6 != 0) {
      pmVar3[uVar7] = mVar6;
      uVar7 = (ulong)((int)uVar7 + 1);
      goto LAB_0010f42b;
    }
    for (; uVar7 != 0; uVar7 = uVar7 - 1) {
      if (pmVar3[uVar7 - 1] != 0) goto LAB_0010f42b;
    }
  }
  uVar7 = 0;
LAB_0010f42b:
  r->_mp_size = (int)uVar7;
  return;
}

