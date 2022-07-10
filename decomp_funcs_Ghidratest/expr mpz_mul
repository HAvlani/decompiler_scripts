
void mpz_mul(__mpz_struct *r,__mpz_struct *u,__mpz_struct *v)

{
  long lVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  mp_limb_t *pmVar5;
  mp_limb_t mVar6;
  int iVar7;
  mp_ptr rp;
  ulong un;
  ulong vn;
  long lVar8;
  
  uVar2 = u->_mp_size;
  uVar3 = v->_mp_size;
  if ((uVar2 == 0) || (uVar3 == 0)) {
    r->_mp_size = 0;
  }
  else {
    un = (ulong)((uVar2 ^ (int)uVar2 >> 0x1f) - ((int)uVar2 >> 0x1f));
    vn = (ulong)((uVar3 ^ (int)uVar3 >> 0x1f) - ((int)uVar3 >> 0x1f));
    lVar1 = un + vn;
    lVar8 = (lVar1 * 0x40 - 1U >> 6) + 1;
    rp = (mp_ptr)(*gmp_allocate_func)(lVar8 * 8);
    if (un < vn) {
      mpn_mul(rp,v->_mp_d,vn,u->_mp_d,un);
    }
    else {
      mpn_mul(rp,u->_mp_d,un,v->_mp_d,vn);
    }
    mVar6 = rp[lVar1 + -1];
    iVar4 = r->_mp_alloc;
    pmVar5 = r->_mp_d;
    r->_mp_alloc = (int)lVar8;
    r->_mp_d = rp;
    iVar7 = (uint)(mVar6 == 0) - (int)lVar1;
    if (-1 < (int)(uVar2 ^ uVar3)) {
      iVar7 = (int)lVar1 - (uint)(mVar6 == 0);
    }
    r->_mp_size = iVar7;
    if (iVar4 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00108eab. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*gmp_free_func)(pmVar5,(long)iVar4 << 3);
      return;
    }
  }
  return;
}

