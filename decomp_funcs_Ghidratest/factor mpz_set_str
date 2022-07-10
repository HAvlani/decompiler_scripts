
int mpz_set_str(__mpz_struct *r,char *sp,int base)

{
  byte bVar1;
  long lVar2;
  byte bVar3;
  int iVar4;
  uint uVar5;
  ushort **ppuVar6;
  size_t sVar7;
  uchar *sp_00;
  mp_size_t mVar8;
  mp_limb_t *rp;
  mp_ptr pmVar9;
  ulong uVar10;
  ulong uVar11;
  ulong sn;
  byte *__s;
  long in_FS_OFFSET;
  mpn_base_info info;
  
  lVar2 = *(long *)(in_FS_OFFSET + 0x28);
  if ((0x3c < base - 2U) && (base != 0)) {
                    /* WARNING: Subroutine does not return */
    __assert_fail("base == 0 || (base >= 2 && base <= 62)","lib/mini-gmp.c",0x10df,"mpz_set_str");
  }
  ppuVar6 = __ctype_b_loc();
  while (bVar1 = *sp, (*(byte *)((long)*ppuVar6 + (ulong)bVar1 * 2 + 1) & 0x20) != 0) {
    sp = (char *)((byte *)sp + 1);
  }
  __s = (byte *)sp + (bVar1 == 0x2d);
  bVar3 = *__s;
  if (base == 0) {
    base = 10;
    if (bVar3 == 0x30) {
      if ((__s[1] & 0xdf) == 0x58) {
        bVar3 = __s[2];
        base = 0x10;
        __s = __s + 2;
        goto LAB_0010efd5;
      }
      if ((__s[1] & 0xdf) == 0x42) {
        bVar3 = __s[2];
        base = 2;
        __s = __s + 2;
        goto LAB_0010efd5;
      }
      base = 8;
    }
    else {
LAB_0010efd5:
      if (bVar3 == 0) goto LAB_0010f01c;
    }
    sVar7 = strlen((char *)__s);
    sp_00 = (uchar *)(*gmp_allocate_func)(sVar7);
    iVar4 = 10;
LAB_0010ef62:
    bVar3 = *__s;
    sn = 0;
    if (bVar3 != 0) {
      do {
        if ((*(byte *)((long)*ppuVar6 + (ulong)bVar3 * 2 + 1) & 0x20) == 0) {
          if ((byte)(bVar3 - 0x30) < 10) {
            uVar5 = (int)(char)bVar3 - 0x30;
          }
          else if ((byte)(bVar3 + 0x9f) < 0x1a) {
            uVar5 = (int)(char)bVar3 + iVar4 + -0x61;
          }
          else {
            if (0x19 < (byte)(bVar3 + 0xbf)) goto LAB_0010f010;
            uVar5 = (int)(char)bVar3 - 0x37;
          }
          if ((uint)base <= uVar5) goto LAB_0010f010;
          sp_00[sn] = (uchar)uVar5;
          sn = sn + 1;
        }
        bVar3 = __s[1];
        __s = __s + 1;
      } while (bVar3 != 0);
      if (sn != 0) {
        uVar5 = mpn_base_power_of_two_p(base);
        if (uVar5 == 0) {
          uVar10 = (ulong)base;
          if (SUB168(ZEXT816(uVar10) * ZEXT816(uVar10) >> 0x40,0) == 0) {
            uVar5 = 1;
            uVar11 = uVar10;
            do {
              uVar11 = uVar11 * uVar10;
              uVar5 = uVar5 + 1;
            } while (SUB168(ZEXT816(uVar11) * ZEXT816(uVar10) >> 0x40,0) == 0);
            sn = ((ulong)uVar5 + (sn - 1)) / (ulong)uVar5;
          }
          if ((long)r->_mp_alloc < (long)sn) {
            pmVar9 = mpz_realloc(r,sn);
          }
          else {
            pmVar9 = r->_mp_d;
          }
          mVar8 = mpn_set_str_other();
          if (mVar8 < 1) {
                    /* WARNING: Subroutine does not return */
            __assert_fail("rn > 0","lib/mini-gmp.c",0x1134,"mpz_set_str");
          }
          mVar8 = mVar8 - (ulong)(pmVar9[mVar8 + -1] == 0);
        }
        else {
          uVar10 = uVar5 * sn + 0x3f >> 6;
          if ((long)r->_mp_alloc < (long)uVar10) {
            rp = mpz_realloc(r,uVar10);
          }
          else {
            rp = r->_mp_d;
          }
          mVar8 = mpn_set_str_bits(rp,sp_00,sn,uVar5);
          sn = uVar10;
        }
        if ((long)sn < mVar8) {
                    /* WARNING: Subroutine does not return */
          __assert_fail("rn <= alloc","lib/mini-gmp.c",0x1137,"mpz_set_str");
        }
        (*gmp_free_func)(sp_00,sVar7);
        iVar4 = (int)mVar8;
        if (bVar1 == 0x2d) {
          iVar4 = -(int)mVar8;
        }
        r->_mp_size = iVar4;
        iVar4 = 0;
        goto LAB_0010f02c;
      }
    }
LAB_0010f010:
    (*gmp_free_func)(sp_00,sVar7);
  }
  else if (bVar3 != 0) {
    sVar7 = strlen((char *)__s);
    sp_00 = (uchar *)(*gmp_allocate_func)(sVar7);
    iVar4 = 10;
    if (0x24 < base) {
      iVar4 = 0x24;
    }
    goto LAB_0010ef62;
  }
LAB_0010f01c:
  r->_mp_size = 0;
  iVar4 = -1;
LAB_0010f02c:
  if (lVar2 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return iVar4;
}

