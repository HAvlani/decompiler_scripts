
/* WARNING: Could not reconcile some variable overlaps */

void mpz_lcm(__mpz_struct *r,__mpz_struct *u,__mpz_struct *v)

{
  long lVar1;
  uint uVar2;
  long in_FS_OFFSET;
  mpz_t g;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  if ((u->_mp_size == 0) || (v->_mp_size == 0)) {
    r->_mp_size = 0;
  }
  else {
    g[0]._0_8_ = 0;
    g[0]._mp_d = &dummy_limb_5449;
    mpz_gcd(g,u,v);
    mpz_divexact(g,u,g);
    mpz_mul(r,g,v);
    if (g[0]._mp_alloc != 0) {
      (*gmp_free_func)(g[0]._mp_d,(long)g[0]._mp_alloc << 3);
    }
    mpz_set(r,r);
    uVar2 = r->_mp_size >> 0x1f;
    r->_mp_size = r->_mp_size ^ uVar2;
    r->_mp_size = r->_mp_size - uVar2;
  }
  if (lVar1 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

