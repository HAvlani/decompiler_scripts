
/* WARNING: Could not reconcile some variable overlaps */

ulong mpz_div_qr_ui(__mpz_struct *q,__mpz_struct *r,__mpz_struct *n,ulong d,mpz_div_round_mode mode)

{
  int iVar1;
  int iVar2;
  long lVar3;
  mp_limb_t *pmVar4;
  ulong uVar5;
  long in_FS_OFFSET;
  mpz_t rr;
  mpz_t dd;
  
  lVar3 = *(long *)(in_FS_OFFSET + 0x28);
  rr[0]._0_8_ = 0;
  rr[0]._mp_d = &dummy_limb_5449;
  dd[0]._0_8_ = 0;
  dd[0]._mp_d = &dummy_limb_5449;
  if (d != 0) {
    mpz_set_ui(dd,d);
  }
  mpz_div_qr(q,rr,n,dd,mode);
  if (dd[0]._mp_alloc != 0) {
    (*gmp_free_func)(dd[0]._mp_d,(long)dd[0]._mp_alloc << 3);
  }
  uVar5 = 0;
  if (rr[0]._mp_size != 0) {
    uVar5 = *rr[0]._mp_d;
  }
  iVar1 = rr[0]._mp_alloc;
  if (r != (__mpz_struct *)0x0) {
    iVar1 = r->_mp_alloc;
    r->_mp_alloc = rr[0]._mp_alloc;
    pmVar4 = r->_mp_d;
    iVar2 = r->_mp_size;
    r->_mp_d = rr[0]._mp_d;
    r->_mp_size = rr[0]._mp_size;
    rr[0]._0_8_ = CONCAT44(iVar2,iVar1);
    rr[0]._mp_d = pmVar4;
  }
  if (iVar1 != 0) {
    (*gmp_free_func)(rr[0]._mp_d,(long)iVar1 << 3);
  }
  if (lVar3 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar5;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

