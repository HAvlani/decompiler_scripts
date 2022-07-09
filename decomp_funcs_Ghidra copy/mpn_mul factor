
mp_limb_t mpn_mul(mp_ptr rp,mp_srcptr up,mp_size_t un,mp_srcptr vp,mp_size_t vn)

{
  mp_limb_t *pmVar1;
  mp_limb_t mVar2;
  long lVar3;
  
  if (un < vn) {
                    /* WARNING: Subroutine does not return */
    __assert_fail("un >= vn","lib/mini-gmp.c",0x26a,"mpn_mul");
  }
  if (vn < 1) {
                    /* WARNING: Subroutine does not return */
    __assert_fail("vn >= 1","lib/mini-gmp.c",0x26b,"mpn_mul");
  }
  if ((up < rp + un + vn) && (rp < up + un)) {
                    /* WARNING: Subroutine does not return */
    __assert_fail("!GMP_MPN_OVERLAP_P(rp, un + vn, up, un)","lib/mini-gmp.c",0x26c,"mpn_mul");
  }
  if ((vp < rp + un + vn) && (rp < vp + vn)) {
                    /* WARNING: Subroutine does not return */
    __assert_fail("!GMP_MPN_OVERLAP_P(rp, un + vn, vp, vn)","lib/mini-gmp.c",0x26d,"mpn_mul");
  }
  mVar2 = mpn_mul_1(rp,up,un,*vp);
  rp[un] = mVar2;
  for (lVar3 = vn + -1; lVar3 != 0; lVar3 = lVar3 + -1) {
    rp = rp + 1;
    pmVar1 = vp + 1;
    vp = vp + 1;
    mVar2 = mpn_addmul_1(rp,up,un,*pmVar1);
    rp[un] = mVar2;
  }
  return mVar2;
}

