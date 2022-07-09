
void mpz_set(__mpz_struct *r,__mpz_struct *x)

{
  uint uVar1;
  mp_limb_t *pmVar2;
  int iVar3;
  mp_ptr pmVar4;
  long lVar5;
  uint uVar6;
  
  if (r != x) {
    uVar1 = x->_mp_size;
    iVar3 = ((int)uVar1 >> 0x1f ^ uVar1) - ((int)uVar1 >> 0x1f);
    if (r->_mp_alloc < iVar3) {
      pmVar4 = mpz_realloc(r,(long)iVar3);
      uVar6 = x->_mp_size;
    }
    else {
      pmVar4 = r->_mp_d;
      uVar6 = uVar1;
    }
    pmVar2 = x->_mp_d;
    lVar5 = 0;
    if (uVar1 != 0) {
      do {
        pmVar4[lVar5] = pmVar2[lVar5];
        lVar5 = lVar5 + 1;
      } while (iVar3 != lVar5);
    }
    r->_mp_size = uVar6;
    return;
  }
  return;
}

