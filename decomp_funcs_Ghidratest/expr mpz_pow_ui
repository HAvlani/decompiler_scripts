
/* WARNING: Could not reconcile some variable overlaps */

void mpz_pow_ui(__mpz_struct *r,__mpz_struct *b,ulong e)

{
  int iVar1;
  long lVar2;
  mp_limb_t *pmVar3;
  ulong uVar4;
  int iVar5;
  long in_FS_OFFSET;
  mpz_t tr;
  
  iVar5 = 0x40;
  uVar4 = 0x8000000000000000;
  lVar2 = *(long *)(in_FS_OFFSET + 0x28);
  tr[0]._0_8_ = 0;
  tr[0]._mp_d = &dummy_limb_5449;
  mpz_set_ui(tr,1);
  do {
    while( true ) {
      mpz_mul(tr,tr,tr);
      if ((uVar4 & e) == 0) break;
      uVar4 = uVar4 >> 1;
      mpz_mul(tr,tr,b);
      iVar5 = iVar5 + -1;
      if (iVar5 == 0) goto LAB_00109f2b;
    }
    uVar4 = uVar4 >> 1;
    iVar5 = iVar5 + -1;
  } while (iVar5 != 0);
LAB_00109f2b:
  iVar5 = r->_mp_alloc;
  pmVar3 = r->_mp_d;
  r->_mp_alloc = tr[0]._mp_alloc;
  r->_mp_d = tr[0]._mp_d;
  iVar1 = r->_mp_size;
  r->_mp_size = tr[0]._mp_size;
  tr[0]._0_8_ = CONCAT44(iVar1,iVar5);
  tr[0]._mp_d = pmVar3;
  if (iVar5 != 0) {
    (*gmp_free_func)(pmVar3,(long)iVar5 * 8);
  }
  if (lVar2 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

