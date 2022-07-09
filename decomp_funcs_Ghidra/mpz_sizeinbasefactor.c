
size_t mpz_sizeinbase(__mpz_struct *u,int base)

{
  size_t sVar1;
  uint uVar2;
  long lVar3;
  mp_limb_t *pmVar4;
  mp_bitcnt_t mVar5;
  mp_ptr qp;
  long lVar6;
  long nn;
  ulong uVar7;
  long in_FS_OFFSET;
  gmp_div_inverse bi;
  
  lVar3 = *(long *)(in_FS_OFFSET + 0x28);
  if (base < 2) {
                    /* WARNING: Subroutine does not return */
    __assert_fail("base >= 2","lib/mini-gmp.c",0x105e,"mpz_sizeinbase");
  }
  if (base < 0x3f) {
    uVar2 = u->_mp_size;
    uVar7 = 1;
    if (uVar2 != 0) {
      pmVar4 = u->_mp_d;
      nn = (long)(int)((uVar2 ^ (int)uVar2 >> 0x1f) - ((int)uVar2 >> 0x1f));
      sVar1 = nn * 8;
      mVar5 = mpn_limb_size_in_base_2(pmVar4[nn + -1]);
      uVar7 = (nn + -1) * 0x40 + mVar5;
      switch(base) {
      default:
        qp = (mp_ptr)(*gmp_allocate_func)(sVar1);
        lVar6 = 0;
        do {
          qp[lVar6] = pmVar4[lVar6];
          lVar6 = lVar6 + 1;
        } while (lVar6 < nn);
        uVar7 = 0;
        mpn_div_qr_1_invert(&bi,(long)base);
        do {
          mpn_div_qr_1_preinv(qp,qp,nn,&bi);
          uVar7 = uVar7 + 1;
          nn = nn - (ulong)(qp[nn + -1] == 0);
        } while (nn != 0);
        (*gmp_free_func)(qp,sVar1);
        break;
      case 2:
        break;
      case 4:
        uVar7 = uVar7 + 1 >> 1;
        break;
      case 8:
        uVar7 = (uVar7 + 2) / 3;
        break;
      case 0x10:
        uVar7 = uVar7 + 3 >> 2;
        break;
      case 0x20:
        uVar7 = (uVar7 + 4) / 5;
      }
    }
    if (lVar3 == *(long *)(in_FS_OFFSET + 0x28)) {
      return uVar7;
    }
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
                    /* WARNING: Subroutine does not return */
  __assert_fail("base <= 62","lib/mini-gmp.c",0x105f,"mpz_sizeinbase");
}

