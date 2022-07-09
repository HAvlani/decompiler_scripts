
void * mpz_export(void *r,size_t *countp,int order,size_t size,int endian,size_t nails,
                 __mpz_struct *u)

{
  uint uVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  undefined *puVar7;
  undefined *puVar8;
  ulong uVar9;
  size_t sVar10;
  long lVar11;
  ulong uVar12;
  bool bVar13;
  
  if (nails != 0) {
                    /* WARNING: Subroutine does not return */
    gmp_die("mpz_export: Nails not supported.");
  }
  if ((order + 1U & 0xfffffffd) != 0) {
                    /* WARNING: Subroutine does not return */
    __assert_fail("order == 1 || order == -1","lib/mini-gmp.c",0x11ad,"mpz_export");
  }
  if (2 < endian + 1U) {
                    /* WARNING: Subroutine does not return */
    __assert_fail("endian >= -1 && endian <= 1","lib/mini-gmp.c",0x11ae,"mpz_export");
  }
  uVar1 = u->_mp_size;
  if (size == 0) {
    if (uVar1 != 0) {
                    /* WARNING: Subroutine does not return */
      __assert_fail("size > 0 || u->_mp_size == 0","lib/mini-gmp.c",0x11af,"mpz_export");
    }
  }
  else {
    if (uVar1 != 0) {
      uVar12 = (ulong)((uVar1 ^ (int)uVar1 >> 0x1f) - ((int)uVar1 >> 0x1f));
      uVar2 = u->_mp_d[uVar12 - 1];
      if (uVar2 == 0) {
                    /* WARNING: Subroutine does not return */
        __assert_fail("limb != 0","lib/mini-gmp.c",0x11c3,"mpz_export");
      }
      do {
        sVar10 = nails;
        uVar2 = uVar2 >> 8;
        nails = sVar10 + 1;
      } while (uVar2 != 0);
      uVar2 = (size - 8) + uVar12 * 8 + sVar10;
      uVar3 = uVar2 / size;
      if (r == (void *)0x0) {
        r = (*gmp_allocate_func)(size * uVar3);
      }
      if (endian == 0) {
        endian = -1;
      }
      lVar4 = 0;
      if (endian != order) {
        lVar4 = size * 2;
      }
      puVar8 = (undefined *)r;
      if (order == 1) {
        lVar4 = -lVar4;
        puVar8 = (undefined *)((long)r + (uVar3 - 1) * size);
      }
      if (endian == 1) {
        puVar8 = puVar8 + (size - 1);
      }
      if (size <= uVar2) {
        lVar11 = 0;
        uVar9 = 0;
        uVar6 = 0;
        uVar5 = 0;
        do {
          sVar10 = 0;
          puVar7 = puVar8;
          do {
            if (lVar11 == 0) {
              lVar11 = 7;
              if ((long)uVar6 < (long)uVar12) {
                uVar5 = u->_mp_d[uVar6];
                uVar6 = uVar6 + 1;
              }
            }
            else {
              lVar11 = lVar11 + -1;
            }
            sVar10 = sVar10 + 1;
            *puVar7 = (char)uVar5;
            uVar5 = uVar5 >> 8;
            puVar7 = puVar7 + -(long)endian;
          } while (size != sVar10);
          uVar9 = uVar9 + 1;
          puVar8 = puVar8 + (lVar4 - (long)endian * size);
        } while (uVar9 < uVar3);
        bVar13 = size <= uVar2;
        size = 1;
        if (bVar13) {
          size = uVar3;
        }
        if (uVar6 == uVar12) {
          if (uVar3 != size) {
                    /* WARNING: Subroutine does not return */
            __assert_fail("k == count","lib/mini-gmp.c",0x1203,"mpz_export");
          }
          goto LAB_0010f547;
        }
      }
                    /* WARNING: Subroutine does not return */
      __assert_fail("i == un","lib/mini-gmp.c",0x1202,"mpz_export");
    }
    size = 0;
  }
LAB_0010f547:
  if (countp != (size_t *)0x0) {
    *countp = size;
  }
  return (undefined *)r;
}

