
char * mpz_get_str(char *sp,int base,__mpz_struct *u)

{
  long lVar1;
  mp_limb_t *pmVar2;
  bool bVar3;
  uint uVar4;
  size_t sVar5;
  void *pvVar6;
  ulong uVar7;
  byte *pbVar8;
  byte *pbVar9;
  long lVar10;
  char *pcVar11;
  ulong uVar12;
  ulong uVar13;
  long un;
  uchar *sp_00;
  size_t sVar14;
  long in_FS_OFFSET;
  mpn_base_info info;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  if (base < 2) {
    if (base < -1) {
      bVar3 = base < -0x24;
      base = -base;
      if (bVar3) goto LAB_0010ee98;
      goto LAB_0010ec66;
    }
    pcVar11 = "0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
    base = 10;
  }
  else if (base < 0x25) {
    pcVar11 = "0123456789abcdefghijklmnopqrstuvwxyz";
  }
  else {
    if (0x3e < base) {
LAB_0010ee98:
      sp = (char *)0x0;
      goto LAB_0010eded;
    }
LAB_0010ec66:
    pcVar11 = "0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
  }
  sVar14 = 0;
  sVar5 = mpz_sizeinbase(u,base);
  if (sp == (char *)0x0) {
    sVar14 = sVar5 + 2;
    sp = (char *)(*gmp_allocate_func)(sVar14);
  }
  uVar4 = u->_mp_size;
  if (uVar4 == 0) {
    *sp = '0';
    uVar13 = 1;
  }
  else {
    sp_00 = (uchar *)sp;
    if ((int)uVar4 < 0) {
      *sp = '-';
      sp_00 = (uchar *)sp + 1;
    }
    uVar12 = (ulong)((int)uVar4 < 0);
    un = (long)(int)((uVar4 ^ (int)uVar4 >> 0x1f) - ((int)uVar4 >> 0x1f));
    uVar4 = mpn_base_power_of_two_p(base);
    if (uVar4 == 0) {
      uVar7 = (ulong)base;
      uVar13 = uVar7;
      do {
        uVar13 = uVar13 * uVar7;
      } while (SUB168(ZEXT816(uVar13) * ZEXT816(uVar7) >> 0x40,0) == 0);
      pvVar6 = (*gmp_allocate_func)(un * 8);
      pmVar2 = u->_mp_d;
      lVar10 = 0;
      do {
        *(mp_limb_t *)((long)pvVar6 + lVar10 * 8) = pmVar2[lVar10];
        lVar10 = lVar10 + 1;
      } while (lVar10 < un);
      sVar5 = mpn_get_str_other();
      (*gmp_free_func)(pvVar6,un * 8);
    }
    else {
      sVar5 = mpn_get_str_bits(sp_00,uVar4,u->_mp_d,un);
    }
    uVar13 = sVar5 + uVar12;
    pbVar8 = (uchar *)sp + uVar12;
    if (uVar12 < uVar13) {
      do {
        pbVar9 = pbVar8 + 1;
        *pbVar8 = pcVar11[*pbVar8];
        pbVar8 = pbVar9;
      } while ((uchar *)sp + uVar13 != pbVar9);
    }
  }
  ((uchar *)sp)[uVar13] = '\0';
  if ((sVar14 != 0) && (uVar13 + 1 != sVar14)) {
    sp = (char *)(*gmp_reallocate_func)(sp,sVar14,uVar13 + 1);
  }
LAB_0010eded:
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return (char *)(uchar *)sp;
}

