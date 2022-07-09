
/* WARNING: Could not reconcile some variable overlaps */

void mpz_gcd(__mpz_struct *g,__mpz_struct *u,__mpz_struct *v)

{
  int iVar1;
  long lVar2;
  mp_limb_t *pmVar3;
  int iVar4;
  uint uVar5;
  mp_bitcnt_t bits;
  mp_bitcnt_t mVar6;
  ulong *puVar7;
  byte bVar8;
  ulong uVar9;
  long lVar10;
  __mpz_struct *x;
  ulong uVar11;
  ulong uVar12;
  char cVar13;
  ulong uVar14;
  long in_FS_OFFSET;
  mpz_t tu;
  mpz_t tv;
  
  lVar2 = *(long *)(in_FS_OFFSET + 0x28);
  x = v;
  if ((u->_mp_size == 0) || (x = u, v->_mp_size == 0)) {
    mpz_set(g,x);
    uVar5 = g->_mp_size >> 0x1f;
    g->_mp_size = g->_mp_size ^ uVar5;
    g->_mp_size = g->_mp_size - uVar5;
  }
  else {
    tu[0]._0_8_ = 0;
    tu[0]._mp_d = &dummy_limb_5449;
    tv[0]._mp_d = &dummy_limb_5449;
    tv[0]._0_8_ = 0;
    mpz_set(tu,u);
    tu[0]._0_8_ = tu[0]._0_8_ & 0xffffffff |
                  (ulong)(uint)((tu[0]._mp_size ^ tu[0]._mp_size >> 0x1f) - (tu[0]._mp_size >> 0x1f)
                               ) << 0x20;
    bits = mpz_make_odd(tu);
    mpz_set(tv,v);
    tv[0]._0_8_ = tv[0]._0_8_ & 0xffffffff |
                  (ulong)(uint)((tv[0]._mp_size ^ tv[0]._mp_size >> 0x1f) - (tv[0]._mp_size >> 0x1f)
                               ) << 0x20;
    mVar6 = mpz_make_odd(tv);
    pmVar3 = tv[0]._mp_d;
    uVar11 = tu[0]._0_8_;
    if (mVar6 < bits) {
      bits = mVar6;
    }
    if (tu[0]._mp_size < tv[0]._mp_size) {
      tv[0]._mp_d = tu[0]._mp_d;
      tu[0]._mp_d = pmVar3;
      tu[0]._0_8_ = tv[0]._0_8_;
      tv[0]._0_8_ = uVar11;
    }
    mpz_div_qr((__mpz_struct *)0x0,tu,tu,tv,GMP_DIV_TRUNC);
    if (tu[0]._mp_size != 0) {
LAB_0010b679:
      mpz_make_odd(tu);
      iVar4 = mpz_cmp(tu,tv);
      pmVar3 = tu[0]._mp_d;
      uVar11 = tu[0]._0_8_;
      if (iVar4 == 0) {
        iVar4 = g->_mp_alloc;
        lVar10 = (long)iVar4;
        g->_mp_alloc = tu[0]._mp_alloc;
        pmVar3 = g->_mp_d;
        g->_mp_d = tu[0]._mp_d;
        iVar1 = g->_mp_size;
        g->_mp_size = tu[0]._mp_size;
        tu[0]._0_8_ = CONCAT44(iVar1,iVar4);
        tu[0]._mp_d = pmVar3;
      }
      else {
        if (iVar4 < 0) {
          tu[0]._mp_d = tv[0]._mp_d;
          tv[0]._mp_d = pmVar3;
          tu[0]._0_8_ = tv[0]._0_8_;
          tv[0]._0_8_ = uVar11;
          tv[0]._mp_size = tu[0]._mp_size;
        }
        if (tv[0]._mp_size != 1) goto code_r0x0010b66b;
        mpz_div_qr((__mpz_struct *)0x0,tu,tu,tv,GMP_DIV_TRUNC);
        if (g->_mp_alloc < 1) {
          puVar7 = mpz_realloc(g,1);
        }
        else {
          puVar7 = g->_mp_d;
        }
        uVar11 = *tv[0]._mp_d;
        uVar9 = *tu[0]._mp_d;
        uVar14 = uVar11 | uVar9;
        if (uVar14 == 0) {
                    /* WARNING: Subroutine does not return */
          __assert_fail("(u | v) > 0","lib/mini-gmp.c",0xa66,__PRETTY_FUNCTION___6025);
        }
        uVar12 = uVar11;
        if ((uVar9 != 0) && (uVar12 = uVar9, uVar11 != 0)) {
          cVar13 = '\0';
          for (uVar14 = -uVar14 & uVar14; (uVar14 & 0xff00000000000000) == 0; uVar14 = uVar14 << 8)
          {
            cVar13 = cVar13 + '\b';
          }
          for (; -1 < (long)uVar14; uVar14 = uVar14 * 2) {
            cVar13 = cVar13 + '\x01';
          }
          bVar8 = 0x3f - cVar13;
          uVar9 = uVar9 >> (bVar8 & 0x3f);
          uVar11 = uVar11 >> (bVar8 & 0x3f);
          uVar14 = uVar9;
          if ((uVar9 & 1) == 0) goto LAB_0010b7a8;
          while (uVar9 = uVar11, uVar11 = uVar14, (uVar9 & 1) == 0) {
LAB_0010b7a8:
            uVar14 = uVar11;
            uVar11 = uVar9 >> 1;
          }
          while (uVar11 != uVar9) {
            if (uVar9 < uVar11) {
              uVar11 = uVar11 - uVar9;
              do {
                uVar11 = uVar11 >> 1;
              } while ((uVar11 & 1) == 0);
            }
            else {
              uVar9 = uVar9 - uVar11;
              do {
                uVar9 = uVar9 >> 1;
              } while ((uVar9 & 1) == 0);
            }
          }
          uVar12 = uVar9 << (bVar8 & 0x3f);
        }
        *puVar7 = uVar12;
        lVar10 = (long)tu[0]._mp_alloc;
        g->_mp_size = (uint)(uVar12 != 0);
      }
      goto LAB_0010b5ce;
    }
    iVar4 = g->_mp_alloc;
    lVar10 = (long)tu[0]._mp_alloc;
    g->_mp_alloc = tv[0]._mp_alloc;
    pmVar3 = g->_mp_d;
    g->_mp_d = tv[0]._mp_d;
    iVar1 = g->_mp_size;
    g->_mp_size = (int)(tv[0]._0_8_ >> 0x20);
    tv[0]._0_8_ = CONCAT44(iVar1,iVar4);
    tv[0]._mp_d = pmVar3;
LAB_0010b5ce:
    if ((int)lVar10 != 0) {
      (*gmp_free_func)(tu[0]._mp_d,lVar10 << 3);
    }
    if (tv[0]._mp_alloc != 0) {
      (*gmp_free_func)(tv[0]._mp_d,(long)tv[0]._mp_alloc << 3);
    }
    mpz_mul_2exp(g,g,bits);
  }
  if (lVar2 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
code_r0x0010b66b:
  mpz_sub(tu,tu,tv);
  goto LAB_0010b679;
}

