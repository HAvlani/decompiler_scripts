
void mpz_mul_2exp(__mpz_struct *r,__mpz_struct *u,mp_bitcnt_t bits)

{
  uint uVar1;
  mp_srcptr up;
  int iVar2;
  long lVar3;
  mp_ptr pmVar4;
  mp_ptr pmVar5;
  mp_limb_t mVar6;
  ulong uVar7;
  long n;
  long size;
  bool bVar8;
  
  uVar1 = u->_mp_size;
  if (uVar1 != 0) {
    uVar7 = bits >> 6;
    n = (long)(int)((uVar1 ^ (int)uVar1 >> 0x1f) - ((int)uVar1 >> 0x1f));
    size = n + uVar7 + (ulong)((bits & 0x3f) != 0);
    if (r->_mp_alloc < size) {
      pmVar5 = mpz_realloc(r,size);
    }
    else {
      pmVar5 = r->_mp_d;
    }
    up = u->_mp_d;
    lVar3 = n + -1;
    if ((bits & 0x3f) == 0) {
      do {
        (pmVar5 + uVar7)[lVar3] = up[lVar3];
        lVar3 = lVar3 + -1;
      } while (lVar3 != -1);
    }
    else {
      mVar6 = mpn_lshift(pmVar5 + uVar7,up,n,(uint)bits & 0x3f);
      pmVar5[size + -1] = mVar6;
      size = size - (ulong)(mVar6 == 0);
    }
    pmVar4 = pmVar5 + (uVar7 - 1);
    if (uVar7 - 1 != -1) {
      do {
        *pmVar4 = 0;
        bVar8 = pmVar5 != pmVar4;
        pmVar4 = pmVar4 + -1;
      } while (bVar8);
    }
    iVar2 = -(int)size;
    if (-1 < u->_mp_size) {
      iVar2 = (int)size;
    }
    r->_mp_size = iVar2;
    return;
  }
  r->_mp_size = 0;
  return;
}

