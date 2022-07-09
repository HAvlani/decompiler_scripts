
mp_limb_t mpn_div_qr_1_preinv(mp_ptr qp,mp_srcptr np,mp_size_t nn,gmp_div_inverse *inv)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  mp_limb_t mVar5;
  mp_ptr rp;
  uint cnt;
  ulong uVar6;
  mp_limb_t mVar7;
  ulong uVar8;
  long lVar9;
  mp_limb_t mVar10;
  mp_size_t mVar11;
  ulong uVar12;
  mp_ptr local_48;
  
  cnt = inv->shift;
  if (cnt == 0) {
    mVar10 = inv->d1;
    mVar7 = inv->di;
    uVar2 = 0;
    local_48 = (mp_ptr)0x0;
    rp = np;
    mVar11 = 0;
    if (nn + -1 < 0) goto LAB_001062d1;
LAB_001061f3:
    lVar9 = nn + -1;
    do {
      uVar12 = (uVar2 & 0xffffffff) * (mVar7 & 0xffffffff);
      uVar8 = (uVar2 >> 0x20) * (mVar7 & 0xffffffff);
      lVar3 = (uVar2 >> 0x20) * (mVar7 >> 0x20);
      uVar6 = (uVar2 & 0xffffffff) * (mVar7 >> 0x20) + uVar8 + (uVar12 >> 0x20);
      uVar1 = rp[lVar9];
      lVar4 = lVar3 + 0x100000000;
      if (uVar8 < uVar6 || uVar8 - uVar6 == 0) {
        lVar4 = lVar3;
      }
      uVar8 = (uVar6 << 0x20) + (uVar12 & 0xffffffff);
      lVar4 = lVar4 + uVar2 + 1 + (uVar6 >> 0x20) + (ulong)CARRY8(uVar8,uVar1);
      uVar2 = uVar1 - lVar4 * mVar10;
      uVar1 = (ulong)(uVar8 + uVar1 < uVar2);
      mVar5 = lVar4 - uVar1;
      uVar2 = (-uVar1 & mVar10) + uVar2;
      if (mVar10 <= uVar2) {
        uVar2 = uVar2 - mVar10;
        mVar5 = mVar5 + 1;
      }
      if (qp != (mp_ptr)0x0) {
        qp[lVar9] = mVar5;
      }
      lVar9 = lVar9 + -1;
      nn = mVar11;
    } while (lVar9 != -1);
LAB_001062b6:
    if (nn != 0) {
      (*gmp_free_func)(local_48,nn * 8);
    }
  }
  else {
    if (qp == (mp_ptr)0x0) {
      rp = (mp_ptr)(*gmp_allocate_func)(nn * 8);
      uVar2 = mpn_lshift(rp,np,nn,inv->shift);
      mVar10 = inv->d1;
      mVar7 = inv->di;
      mVar11 = nn;
      local_48 = rp;
      if (-1 < nn + -1) goto LAB_001061f3;
      goto LAB_001062b6;
    }
    uVar2 = mpn_lshift(qp,np,nn,cnt);
    mVar10 = inv->d1;
    mVar7 = inv->di;
    rp = qp;
    mVar11 = 0;
    local_48 = qp;
    if (-1 < nn + -1) goto LAB_001061f3;
  }
  cnt = inv->shift;
LAB_001062d1:
  return uVar2 >> ((byte)cnt & 0x3f);
}

