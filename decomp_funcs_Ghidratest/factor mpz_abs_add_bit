
void mpz_abs_add_bit(__mpz_struct *d,mp_bitcnt_t bit_index)

{
  mp_ptr pmVar1;
  mp_ptr pmVar2;
  mp_srcptr in_RDX;
  ulong *puVar3;
  ulong uVar4;
  ulong uVar5;
  int iVar6;
  uint uVar7;
  ulong uVar8;
  long size;
  long lVar9;
  
  uVar8 = bit_index >> 6;
  uVar7 = d->_mp_size;
  uVar4 = 1 << ((byte)bit_index & 0x3f);
  iVar6 = ((int)uVar7 >> 0x1f ^ uVar7) - ((int)uVar7 >> 0x1f);
  lVar9 = (long)iVar6;
  if ((long)uVar8 < lVar9) {
    pmVar1 = d->_mp_d;
    pmVar2 = (mp_ptr)(lVar9 - uVar8);
    if ((long)pmVar2 < 1) {
      mpn_add_1((mp_limb_t)d,bit_index,in_RDX,pmVar2);
                    /* WARNING: Subroutine does not return */
      __assert_fail("n > 0","lib/mini-gmp.c",0x1ed,"mpn_sub_1");
    }
    puVar3 = pmVar1 + uVar8;
    do {
      uVar5 = uVar4 + *puVar3;
      uVar4 = (ulong)CARRY8(uVar4,*puVar3);
      *puVar3 = uVar5;
      puVar3 = puVar3 + 1;
    } while (pmVar1 + uVar8 + (long)pmVar2 != puVar3);
    size = lVar9;
    if (uVar4 != 0) {
      size = lVar9 + 1;
      if (d->_mp_alloc <= iVar6) {
        pmVar1 = mpz_realloc(d,size);
        uVar7 = d->_mp_size;
      }
      pmVar1[lVar9] = 1;
    }
  }
  else {
    size = uVar8 + 1;
    if ((long)uVar8 < (long)d->_mp_alloc) {
      pmVar1 = d->_mp_d;
    }
    else {
      pmVar1 = mpz_realloc(d,size);
      uVar7 = d->_mp_size;
    }
    pmVar1[uVar8] = uVar4;
    pmVar2 = pmVar1 + lVar9;
    if (lVar9 < (long)uVar8) {
      do {
        *pmVar2 = 0;
        pmVar2 = pmVar2 + 1;
      } while (pmVar1 + uVar8 != pmVar2);
    }
  }
  iVar6 = (int)size;
  if ((int)uVar7 < 0) {
    iVar6 = -(int)size;
  }
  d->_mp_size = iVar6;
  return;
}

