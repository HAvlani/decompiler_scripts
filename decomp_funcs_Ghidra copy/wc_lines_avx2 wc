
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

_Bool wc_lines_avx2(char *file,int fd,uintmax_t *lines_out,uintmax_t *bytes_out)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  size_t sVar6;
  undefined (*pauVar7) [32];
  undefined8 uVar8;
  int *piVar9;
  undefined (*pauVar10) [32];
  uintmax_t uVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  uintmax_t uVar16;
  long in_FS_OFFSET;
  undefined auVar17 [16];
  undefined auVar18 [32];
  undefined auVar19 [32];
  undefined auVar20 [16];
  undefined in_YMM1 [32];
  undefined auVar21 [32];
  undefined in_YMM2 [32];
  undefined auVar22 [16];
  undefined in_YMM3 [32];
  undefined auVar23 [32];
  __m256i avx_buf [510];
  undefined local_4020 [64];
  undefined auStack16352 [16280];
  long local_48;
  
  local_48 = *(long *)(in_FS_OFFSET + 0x28);
  bVar1 = lines_out == (uintmax_t *)0x0 || bytes_out == (uintmax_t *)0x0;
  if (bVar1) {
    bVar1 = false;
  }
  else {
    uVar11 = 0;
    uVar16 = 0;
    while( true ) {
      auVar20 = SUB3216(in_YMM2,0);
      auVar17 = SUB3216(in_YMM1,0);
      auVar22 = SUB3216(in_YMM3,0);
      vzeroupper_avx();
      sVar6 = safe_read(fd,(undefined (*) [32])local_4020,0x3fc0);
      if (sVar6 == 0) break;
      if (sVar6 == 0xffffffffffffffff) {
        vzeroupper_avx();
        uVar8 = quotearg_n_style_colon(0,3,file);
        piVar9 = __errno_location();
        error(0,*piVar9,"%s",uVar8);
        goto LAB_00108213;
      }
      uVar11 = uVar11 + sVar6;
      if (sVar6 < 0x40) {
        auVar17 = vpxor_avx(auVar17,auVar17);
        auVar19 = ZEXT1632(auVar17);
        pauVar10 = (undefined (*) [32])local_4020;
        auVar23 = auVar19;
      }
      else {
        auVar17 = vpxor_avx(auVar22,auVar22);
        auVar23 = ZEXT1632(auVar17);
        pauVar7 = (undefined (*) [32])local_4020;
        auVar19 = auVar23;
        do {
          auVar21 = vpcmpeqb_avx2(_DAT_0010a540,*pauVar7);
          auVar18 = vpcmpeqb_avx2(_DAT_0010a540,pauVar7[1]);
          pauVar7 = pauVar7[2];
          auVar23 = vpsubb_avx2(auVar23,auVar21);
          auVar19 = vpsubb_avx2(auVar19,auVar18);
          auVar20 = SUB3216(auVar23,0);
          pauVar10 = (undefined (*) [32])(auStack16352 + (sVar6 - 0x40 & 0xffffffffffffffc0));
        } while (pauVar7 != (undefined (*) [32])(auStack16352 + (sVar6 - 0x40 & 0xffffffffffffffc0))
                );
      }
      auVar17 = vpxor_avx(auVar20,auVar20);
      auVar18 = vpsadbw_avx2(auVar23,ZEXT1632(auVar17));
      auVar23 = vpsadbw_avx2(auVar19,ZEXT1632(auVar17));
      in_YMM3 = auVar18 & (undefined  [32])0xffffffffffffffff;
      auVar20 = vextracti128_avx2(auVar18,1);
      in_YMM1 = CONCAT1616(SUB3216(auVar18 >> 0x80,0),auVar20);
      in_YMM2 = auVar23 & (undefined  [32])0xffffffffffffffff;
      iVar12 = vpextrw_avx(SUB3216(in_YMM3,0),0);
      iVar2 = vpextrw_avx(SUB3216(in_YMM3,0),4);
      auVar17 = vextracti128_avx2(auVar23,1);
      iVar13 = vpextrw_avx(auVar20,0);
      iVar14 = vpextrw_avx(SUB3216(in_YMM2,0),0);
      iVar3 = vpextrw_avx(auVar20,4);
      iVar4 = vpextrw_avx(SUB3216(in_YMM2,0),4);
      iVar15 = vpextrw_avx(auVar17,0);
      iVar5 = vpextrw_avx(auVar17,4);
      uVar16 = uVar16 + (long)(iVar5 + iVar15 + iVar4 + iVar14) +
                        (long)(iVar3 + iVar13 + iVar2 + iVar12);
      for (; (undefined (*) [32])((long)*(undefined (*) [32])local_4020 + sVar6) != pauVar10;
          pauVar10 = (undefined (*) [32])((long)*pauVar10 + 1)) {
        uVar16 = uVar16 + ((*pauVar10)[0] == '\n');
      }
    }
    bVar1 = true;
    *lines_out = uVar16;
    *bytes_out = uVar11;
    vzeroupper_avx();
  }
LAB_00108213:
  if (local_48 == *(long *)(in_FS_OFFSET + 0x28)) {
    return bVar1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

