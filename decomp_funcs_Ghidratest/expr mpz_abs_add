
mp_size_t mpz_abs_add(__mpz_struct *r,__mpz_struct *a,__mpz_struct *b)

{
  uint uVar1;
  mp_limb_t mVar2;
  mp_limb_t *rp;
  uint uVar3;
  long lVar4;
  long an;
  __mpz_struct *p_Var5;
  long bn;
  
  uVar3 = a->_mp_size >> 0x1f;
  uVar1 = b->_mp_size >> 0x1f;
  lVar4 = (long)(int)((a->_mp_size ^ uVar3) - uVar3);
  bn = (long)(int)((b->_mp_size ^ uVar1) - uVar1);
  an = lVar4;
  p_Var5 = b;
  if (lVar4 < bn) {
    an = bn;
    p_Var5 = a;
    bn = lVar4;
    a = b;
  }
  if (an < r->_mp_alloc) {
    rp = r->_mp_d;
  }
  else {
    rp = mpz_realloc(r,an + 1);
  }
  mVar2 = mpn_add(rp,a->_mp_d,an,p_Var5->_mp_d,bn);
  rp[an] = mVar2;
  return mVar2 + an;
}

