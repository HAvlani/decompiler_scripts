
/* WARNING: Could not reconcile some variable overlaps */

ulong mpz_gcd_ui(__mpz_struct *g,__mpz_struct *u,ulong v)

{
  int iVar1;
  long lVar2;
  mp_limb_t *pmVar3;
  ulong uVar4;
  long in_FS_OFFSET;
  mpz_t t;
  
  lVar2 = *(long *)(in_FS_OFFSET + 0x28);
  t[0]._0_8_ = 0;
  t[0]._mp_d = &dummy_limb_5449;
  if (v == 0) {
    uVar4 = 0;
    mpz_gcd(t,u,t);
  }
  else {
    mpz_set_ui(t,v);
    mpz_gcd(t,u,t);
    uVar4 = 0;
    if (t[0]._mp_size != 0) {
      uVar4 = *t[0]._mp_d;
    }
  }
  iVar1 = t[0]._mp_alloc;
  if (g != (__mpz_struct *)0x0) {
    pmVar3 = g->_mp_d;
    iVar1 = g->_mp_alloc;
    g->_mp_alloc = t[0]._mp_alloc;
    g->_mp_d = t[0]._mp_d;
    t[0]._0_8_ = CONCAT44(g->_mp_size,iVar1);
    g->_mp_size = t[0]._mp_size;
    t[0]._mp_d = pmVar3;
  }
  if (iVar1 != 0) {
    (*gmp_free_func)(t[0]._mp_d,(long)iVar1 << 3);
  }
  if (lVar2 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

