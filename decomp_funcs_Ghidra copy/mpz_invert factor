
/* WARNING: Could not reconcile some variable overlaps */

int mpz_invert(__mpz_struct *r,__mpz_struct *u,__mpz_struct *m)

{
  int iVar1;
  int iVar2;
  long lVar3;
  mp_limb_t *pmVar4;
  long in_FS_OFFSET;
  mpz_t g;
  mpz_t tr;
  
  g[0]._mp_size = u->_mp_size;
  lVar3 = *(long *)(in_FS_OFFSET + 0x28);
  if (g[0]._mp_size == 0) goto LAB_0010c746;
  g[0]._mp_size = m->_mp_size;
  if ((g[0]._mp_size >> 0x1f ^ g[0]._mp_size) - (g[0]._mp_size >> 0x1f) < 2) {
    if (g[0]._mp_size == 0) goto LAB_0010c746;
    if ((uint)(1 < *m->_mp_d) - (uint)(*m->_mp_d == 0) != 1) {
      g[0]._mp_size = 0;
      goto LAB_0010c746;
    }
  }
  g[0]._0_8_ = 0;
  g[0]._mp_d = &dummy_limb_5449;
  tr[0]._0_8_ = 0;
  tr[0]._mp_d = &dummy_limb_5449;
  mpz_gcdext(g,tr,(__mpz_struct *)0x0,u,m);
  if (((g[0]._mp_size < 2) && (g[0]._mp_size == 1)) && (1 < *g[0]._mp_d == (*g[0]._mp_d == 0))) {
    if (tr[0]._0_8_ < 0) {
      if (m->_mp_size < 0) {
        mpz_sub(tr,tr,m);
      }
      else {
        mpz_add(tr,tr,m);
      }
    }
    iVar1 = r->_mp_alloc;
    pmVar4 = r->_mp_d;
    r->_mp_alloc = tr[0]._mp_alloc;
    iVar2 = r->_mp_size;
    r->_mp_d = tr[0]._mp_d;
    r->_mp_size = tr[0]._mp_size;
    tr[0]._0_8_ = CONCAT44(iVar2,iVar1);
    tr[0]._mp_d = pmVar4;
  }
  else {
    g[0]._mp_size = 0;
  }
  if (g[0]._mp_alloc != 0) {
    (*gmp_free_func)(g[0]._mp_d,(long)g[0]._mp_alloc << 3);
  }
  if (tr[0]._mp_alloc != 0) {
    (*gmp_free_func)(tr[0]._mp_d,(long)tr[0]._mp_alloc << 3);
  }
LAB_0010c746:
  if (lVar3 == *(long *)(in_FS_OFFSET + 0x28)) {
    return g[0]._mp_size;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

