
/* WARNING: Could not reconcile some variable overlaps */

void mpz_rootrem(__mpz_struct *x,__mpz_struct *r,__mpz_struct *y,ulong z)

{
  uint uVar1;
  int iVar2;
  long lVar3;
  mp_limb_t *pmVar4;
  ulong uVar5;
  int iVar6;
  size_t sVar7;
  long in_FS_OFFSET;
  mpz_t t;
  mpz_t u;
  mpz_t v;
  
  lVar3 = *(long *)(in_FS_OFFSET + 0x28);
  uVar1 = y->_mp_size;
  if ((~z & (ulong)(long)(int)uVar1 >> 0x3f) != 0) {
                    /* WARNING: Subroutine does not return */
    gmp_die("mpz_rootrem: Negative argument, with even root.");
  }
  if (z != 0) {
    if (((int)(((int)uVar1 >> 0x1f ^ uVar1) - ((int)uVar1 >> 0x1f)) < 2) &&
       ((uVar1 == 0 || ((uint)(1 < *y->_mp_d) - (uint)(*y->_mp_d == 0) != 1)))) {
      if (x != (__mpz_struct *)0x0) {
        mpz_set(x,y);
      }
      if (r != (__mpz_struct *)0x0) {
        r->_mp_size = 0;
      }
    }
    else {
      u[0]._0_8_ = 0;
      u[0]._mp_d = &dummy_limb_5449;
      t[0]._0_8_ = 0;
      t[0]._mp_d = &dummy_limb_5449;
      sVar7 = mpz_sizeinbase(y,2);
      mpz_setbit(t,(sVar7 - 1) / z + 1);
      if (z == 2) {
        do {
          pmVar4 = u[0]._mp_d;
          uVar5 = u[0]._0_8_;
          u[0]._mp_d = t[0]._mp_d;
          t[0]._mp_d = pmVar4;
          u[0]._0_8_ = t[0]._0_8_;
          t[0]._0_8_ = uVar5;
          mpz_div_qr(t,(__mpz_struct *)0x0,y,u,GMP_DIV_TRUNC);
          mpz_add(t,t,u);
          mpz_div_q_2exp();
          iVar6 = mpz_cmpabs(t,u);
        } while (iVar6 < 0);
      }
      else {
        v[0]._0_8_ = 0;
        v[0]._mp_d = &dummy_limb_5449;
        if ((int)uVar1 < 0) {
          mpz_set(t,t);
          t[0]._mp_size = -t[0]._mp_size;
        }
        else {
        }
        while( true ) {
          pmVar4 = t[0]._mp_d;
          uVar5 = t[0]._0_8_ & 0xffffffff;
          t[0]._mp_d = u[0]._mp_d;
          u[0]._mp_d = pmVar4;
          t[0]._0_8_ = u[0]._0_8_;
          u[0]._0_8_ = uVar5 | (ulong)(uint)t[0]._mp_size << 0x20;
          mpz_pow_ui(t,u,z - 1);
          mpz_div_qr(t,(__mpz_struct *)0x0,y,t,GMP_DIV_TRUNC);
          mpz_mul_ui(v,u,z - 1);
          mpz_add(t,t,v);
          mpz_div_qr_ui(t,(__mpz_struct *)0x0,t,z,GMP_DIV_TRUNC);
          iVar6 = mpz_cmpabs(t,u);
          if (-1 < iVar6) break;
        }
        if (v[0]._mp_alloc != 0) {
          (*gmp_free_func)(v[0]._mp_d,(long)v[0]._mp_alloc * 8);
        }
      }
      if (r != (__mpz_struct *)0x0) {
        mpz_pow_ui(t,u,z);
        mpz_sub(r,y,t);
      }
      iVar6 = u[0]._mp_alloc;
      if (x != (__mpz_struct *)0x0) {
        iVar6 = x->_mp_alloc;
        x->_mp_alloc = u[0]._mp_alloc;
        pmVar4 = x->_mp_d;
        x->_mp_d = u[0]._mp_d;
        iVar2 = x->_mp_size;
        x->_mp_size = u[0]._mp_size;
        u[0]._0_8_ = CONCAT44(iVar2,iVar6);
        u[0]._mp_d = pmVar4;
      }
      if (iVar6 != 0) {
        (*gmp_free_func)(u[0]._mp_d,(long)iVar6 << 3);
      }
      if (t[0]._mp_alloc != 0) {
        (*gmp_free_func)(t[0]._mp_d,(long)t[0]._mp_alloc << 3);
      }
    }
    if (lVar3 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  gmp_die("mpz_rootrem: Zeroth root.");
}

