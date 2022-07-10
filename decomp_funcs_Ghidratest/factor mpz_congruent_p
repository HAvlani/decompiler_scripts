
/* WARNING: Could not reconcile some variable overlaps */

int mpz_congruent_p(__mpz_struct *a,__mpz_struct *b,__mpz_struct *m)

{
  long lVar1;
  int iVar2;
  uint uVar3;
  long in_FS_OFFSET;
  mpz_t t;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  if (0 < m->_mp_size == SUB41((uint)m->_mp_size >> 0x1f,0)) {
    iVar2 = mpz_cmp(a,b);
    uVar3 = (uint)(iVar2 == 0);
  }
  else {
    t[0]._mp_d = &dummy_limb_5449;
    t[0]._0_8_ = 0;
    mpz_sub(t,a,b);
    iVar2 = mpz_div_qr((__mpz_struct *)0x0,(__mpz_struct *)0x0,t,m,GMP_DIV_TRUNC);
    uVar3 = (uint)(iVar2 == 0);
    if (t[0]._mp_alloc != 0) {
      (*gmp_free_func)(t[0]._mp_d,(long)t[0]._mp_alloc << 3);
    }
  }
  if (lVar1 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

