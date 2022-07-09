
/* WARNING: Could not reconcile some variable overlaps */

int mpz_probab_prime_p(__mpz_struct *n_1,int reps)

{
  long lVar1;
  mp_limb_t mVar2;
  undefined8 uVar3;
  mp_limb_t *pmVar4;
  ulong uVar5;
  mp_bitcnt_t k;
  ulong uVar6;
  mp_bitcnt_t mVar7;
  size_t sVar8;
  long lVar9;
  uint uVar10;
  ulong uVar11;
  int iVar12;
  ulong uVar13;
  int iVar14;
  uint uVar15;
  ulong d;
  long in_FS_OFFSET;
  bool bVar16;
  int local_e4;
  ulong uu;
  mpz_t nm1;
  mpz_t q;
  mpz_t y;
  mpz_t V;
  mpz_t n;
  mpz_t U;
  
  uVar5 = *n_1->_mp_d;
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  uVar10 = n_1->_mp_size;
  iVar12 = ((int)uVar10 >> 0x1f ^ uVar10) - ((int)uVar10 >> 0x1f);
  if (((uint)(uVar10 != 0) & (uint)uVar5) == 0) {
    if (((iVar12 < 2) && (uVar10 != 0)) && (2 < uVar5 == uVar5 < 2)) {
LAB_0010c90f:
      uu._0_4_ = 2;
      goto LAB_0010c735;
    }
  }
  else {
    if ((iVar12 == 1) && ((uint)(0x40 < uVar5) - (uint)(uVar5 < 0x40) == -1)) {
      uu._0_4_ = (uint)(0xc96996dc >> ((byte)(uVar5 >> 1) & 0x3f)) & 2;
      goto LAB_0010c735;
    }
    uVar5 = mpz_gcd_ui((__mpz_struct *)0x0,n_1,0xc0cfd797);
    if (uVar5 == 1) {
      uVar10 = n_1->_mp_size;
      if (((int)(((int)uVar10 >> 0x1f ^ uVar10) - ((int)uVar10 >> 0x1f)) < 2) &&
         ((uVar10 == 0 || ((uint)(0x3c1 < *n_1->_mp_d) - (uint)(*n_1->_mp_d < 0x3c1) == -1))))
      goto LAB_0010c90f;
      nm1[0]._0_8_ = 0;
      nm1[0]._mp_d = &dummy_limb_5449;
      q[0]._0_8_ = 0;
      q[0]._mp_d = &dummy_limb_5449;
      mpz_set(nm1,n_1);
      mVar2 = *nm1[0]._mp_d;
      nm1[0]._0_8_ = nm1[0]._0_8_ & 0xffffffff |
                     (ulong)(uint)((nm1[0]._mp_size ^ nm1[0]._mp_size >> 0x1f) -
                                  (nm1[0]._mp_size >> 0x1f)) << 0x20;
      *nm1[0]._mp_d = mVar2 - 1;
      k = mpn_common_scan(mVar2 - 1,0,nm1[0]._mp_d,0,0);
      mpz_div_q_2exp();
      y[0]._0_8_ = 0;
      y[0]._mp_d = &dummy_limb_5449;
      mpz_set_ui(y,2);
      iVar12 = gmp_millerrabin(n_1,nm1,y,q,k);
      if (iVar12 != 0) {
        uVar10 = n_1->_mp_size;
        n[0]._mp_d = n_1->_mp_d;
        n[0]._mp_alloc = 0;
        n[0]._mp_size = ((int)uVar10 >> 0x1f ^ uVar10) - ((int)uVar10 >> 0x1f);
        uu._0_4_ = (uint)(uVar10 != 0) & *(uint *)n[0]._mp_d;
        if ((uint)uu == 0) {
                    /* WARNING: Subroutine does not return */
          __assert_fail("mpz_odd_p (n)","lib/mini-gmp.c",0xdaf,"gmp_stronglucas");
        }
        iVar12 = mpz_root(y,n,2);
        if (iVar12 == 0) {
          uVar5 = 0xffffffffffffffff;
          if (y[0]._mp_size == 1) {
            uVar5 = *y[0]._mp_d - 1;
          }
          d = 3;
LAB_0010c9e8:
          if (d < uVar5) {
            d = d + 2;
            uVar6 = mpz_div_qr_ui((__mpz_struct *)0x0,(__mpz_struct *)0x0,n,d,GMP_DIV_TRUNC);
            iVar12 = n[0]._mp_size;
            if (uVar6 != 0) {
              iVar14 = 0;
              uVar13 = d >> 1;
              for (uVar11 = -uVar6 & uVar6; (uVar11 & 0xff00000000000000) == 0; uVar11 = uVar11 << 8
                  ) {
                iVar14 = iVar14 + 8;
              }
              for (; -1 < (long)uVar11; uVar11 = uVar11 * 2) {
                iVar14 = iVar14 + 1;
              }
              uVar6 = uVar6 >> 1;
              uVar10 = 0x3f - iVar14;
              uVar15 = 0;
              do {
                uVar11 = uVar6 >> ((byte)uVar10 & 0x3f);
                uVar15 = uVar15 ^ uVar10 & ((uint)(uVar13 >> 1) ^ (uint)uVar13);
                if (uVar11 < uVar13) {
                  if (uVar11 == 0) goto LAB_0010cb10;
                  uVar15 = uVar15 ^ (uint)uVar13 & (uint)uVar11;
                  uVar6 = uVar13 - uVar11;
                  uVar13 = uVar11;
                }
                else {
                  uVar6 = uVar11 - uVar13;
                  if (uVar6 == 0) {
                    /* WARNING: Subroutine does not return */
                    __assert_fail("a != 0","lib/mini-gmp.c",0xd51,"gmp_jacobi_coprime");
                  }
                }
                iVar14 = 0;
                for (uVar11 = -uVar6 & uVar6; (uVar11 & 0xff00000000000000) == 0;
                    uVar11 = uVar11 << 8) {
                  iVar14 = iVar14 + 8;
                }
                for (; -1 < (long)uVar11; uVar11 = uVar11 * 2) {
                  iVar14 = iVar14 + 1;
                }
                uVar10 = 0x40 - iVar14;
              } while( true );
            }
            goto LAB_0010c84a;
          }
          uVar10 = (uint)(0 < reps + -0x18);
          goto LAB_0010ce29;
        }
      }
LAB_0010c84a:
      uu._0_4_ = 0;
      goto LAB_0010c850;
    }
  }
  uu._0_4_ = 0;
  goto LAB_0010c735;
LAB_0010cb10:
  if ((uVar15 & 1) != 0) goto code_r0x0010cb19;
  goto LAB_0010c9e8;
code_r0x0010cb19:
  V[0]._0_8_ = 0;
  uVar5 = *n[0]._mp_d;
  V[0]._mp_d = &dummy_limb_5449;
  mVar7 = mpn_common_scan(~uVar5,0,n[0]._mp_d,(long)n[0]._mp_size,0xffffffffffffffff);
  lVar9 = -(d >> 2);
  if ((d & 2) != 0) {
    lVar9 = (d >> 2) + 1;
  }
  if (mVar7 == 0) {
                    /* WARNING: Subroutine does not return */
    __assert_fail("b0 > 0","lib/mini-gmp.c",0xd71,"gmp_lucas_mod");
  }
  if ((iVar12 < 0) ||
     ((iVar12 < 2 && ((iVar12 == 0 || ((uint)(4 < uVar5) - (uint)(uVar5 < 4) != 1)))))) {
                    /* WARNING: Subroutine does not return */
    __assert_fail("mpz_cmp_ui (n, 4) > 0","lib/mini-gmp.c",0xd74,"gmp_lucas_mod");
  }
  uu._0_4_ = (uint)uVar5;
  uu._0_4_ = (uint)uu & iVar12 != 0;
  if ((uint)uu == 0) {
                    /* WARNING: Subroutine does not return */
    __assert_fail("mpz_odd_p (n)","lib/mini-gmp.c",0xd75,"gmp_lucas_mod");
  }
  U[0]._mp_d = &dummy_limb_5449;
  U[0]._0_8_ = 0;
  mpz_set_ui(U,1);
  mpz_set_ui(V,1);
  mpz_set_si(y,lVar9);
  sVar8 = mpz_sizeinbase(n,2);
  uVar5 = sVar8 - 2;
  if (mVar7 <= sVar8 - 2) {
    do {
      mpz_mul(U,U,V);
      gmp_lucas_step_k_2k(V,y,n);
      if ((mVar7 == uVar5) || (iVar12 = mpz_tstbit(n,uVar5), iVar12 != 0)) {
        mpz_mul_si(y,y,lVar9);
        pmVar4 = U[0]._mp_d;
        uVar3 = U[0]._0_8_;
        U[0]._mp_d = V[0]._mp_d;
        V[0]._mp_d = pmVar4;
        U[0]._0_8_ = V[0]._0_8_;
        V[0]._0_8_ = uVar3;
        mpz_add(U,U,V);
        if ((*(uint *)U[0]._mp_d & (uint)(U[0]._mp_size != 0)) != 0) {
          mpz_add(U,U,n);
        }
        mpz_div_q_2exp();
        mpz_mul_si(V,V,lVar9 * -2);
        mpz_add(V,U,V);
        mpz_div_qr((__mpz_struct *)0x0,V,V,n,GMP_DIV_TRUNC);
      }
      mpz_div_qr((__mpz_struct *)0x0,U,U,n,GMP_DIV_TRUNC);
      bVar16 = mVar7 != uVar5;
      uVar5 = uVar5 - 1;
    } while (bVar16);
  }
  if (U[0]._mp_alloc != 0) {
    (*gmp_free_func)(U[0]._mp_d,(long)U[0]._mp_alloc * 8);
  }
  bVar16 = 0 < reps + -0x18;
  uVar10 = (uint)bVar16;
  if ((U[0]._mp_size != 0) && (V[0]._mp_size != 0)) {
    lVar9 = mVar7 - 1;
    if (lVar9 != 0) {
      uVar10 = (uint)bVar16;
      do {
        gmp_lucas_step_k_2k(V,y,n);
        if (V[0]._mp_size == 0) goto LAB_0010cf5c;
        lVar9 = lVar9 + -1;
      } while (lVar9 != 0);
    }
    uu._0_4_ = 0;
    uVar10 = 0;
  }
LAB_0010cf5c:
  if (V[0]._mp_alloc != 0) {
    (*gmp_free_func)(V[0]._mp_d,(long)V[0]._mp_alloc * 8);
  }
LAB_0010ce29:
  local_e4 = reps + -0x18;
  if (uVar10 != 0) {
    lVar9 = 0;
    uu._0_4_ = uVar10;
    do {
      iVar12 = (int)lVar9;
      mpz_set_ui(y,lVar9 * (lVar9 + 1) + 0x29);
      iVar14 = mpz_cmp(y,nm1);
      if (-1 < iVar14) {
        if (iVar12 < 0x1e) {
                    /* WARNING: Subroutine does not return */
          __assert_fail("j >= 30","lib/mini-gmp.c",0xe2c,"mpz_probab_prime_p");
        }
        break;
      }
      uu._0_4_ = gmp_millerrabin(n_1,nm1,y,q,k);
      lVar9 = lVar9 + 1;
    } while ((iVar12 + 1 < local_e4 & (uint)uu) != 0);
  }
LAB_0010c850:
  if (nm1[0]._mp_alloc != 0) {
    (*gmp_free_func)(nm1[0]._mp_d,(long)nm1[0]._mp_alloc * 8);
  }
  if (q[0]._mp_alloc != 0) {
    (*gmp_free_func)(q[0]._mp_d,(long)q[0]._mp_alloc * 8);
  }
  if (y[0]._mp_alloc != 0) {
    (*gmp_free_func)(y[0]._mp_d,(long)y[0]._mp_alloc * 8);
  }
LAB_0010c735:
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return (uint)uu;
}

