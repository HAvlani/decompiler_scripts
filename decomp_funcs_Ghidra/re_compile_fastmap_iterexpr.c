
/* WARNING: Could not reconcile some variable overlaps */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention yet parameter storage is locked */

void re_compile_fastmap_iter(void)

{
  long **pplVar1;
  byte bVar2;
  long *plVar3;
  long *plVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  wchar_t wVar9;
  long lVar10;
  __int32_t **pp_Var11;
  ulong uVar12;
  size_t sVar13;
  size_t sVar14;
  long lVar15;
  undefined4 *in_RCX;
  long *in_RDX;
  undefined *puVar16;
  long lVar17;
  long *in_RSI;
  undefined *puVar18;
  undefined *puVar19;
  long **in_RDI;
  uint uVar20;
  long lVar21;
  size_t sVar22;
  uint uVar23;
  ulong uVar24;
  long in_FS_OFFSET;
  byte *local_190;
  long local_180;
  uint local_154;
  mbstate_t local_150;
  byte local_148;
  undefined local_147 [263];
  long local_40;
  
  uVar20 = 0;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  plVar3 = *in_RDI;
  if (*(int *)((long)plVar3 + 0xb4) == 1) {
    uVar20 = (uint)((ulong)in_RDI[3] >> 0x16) & 1;
  }
  lVar17 = 0;
  if (0 < *in_RSI) {
    do {
      while( true ) {
        uVar8 = _UNK_0012246c;
        uVar7 = _UNK_00122468;
        uVar6 = _UNK_00122464;
        uVar5 = _DAT_00122460;
        lVar21 = *(long *)(*in_RDX + lVar17 * 8);
        lVar15 = *plVar3;
        lVar10 = lVar21 * 0x10;
        pplVar1 = (long **)(lVar15 + lVar10);
        bVar2 = *(byte *)(pplVar1 + 1);
        if (bVar2 == 1) break;
        if (bVar2 == 3) {
          local_180 = 0;
          while( true ) {
            uVar24 = 0;
            lVar21 = local_180 * 8;
            uVar12 = *(ulong *)(*(long *)(lVar15 + lVar10) + local_180);
            do {
              if (((uVar12 >> (uVar24 & 0x3f) & 1) != 0) &&
                 (*(undefined *)((long)in_RCX + lVar21) = 1, uVar20 != 0)) {
                lVar15 = lVar21;
                if ((int)lVar21 + 0x80U < 0x180) {
                  pp_Var11 = __ctype_tolower_loc();
                  lVar15 = (long)(*pp_Var11)[lVar21];
                }
                *(undefined *)((long)in_RCX + lVar15) = 1;
              }
              uVar23 = (int)uVar24 + 1;
              uVar24 = (ulong)uVar23;
              lVar21 = lVar21 + 1;
            } while (uVar23 != 0x40);
            local_180 = local_180 + 8;
            if (local_180 == 0x20) break;
            lVar15 = *plVar3;
          }
        }
        else {
          if (bVar2 != 6) {
            if ((bVar2 & 0xfd) == 5) {
              *in_RCX = _DAT_00122460;
              in_RCX[1] = uVar6;
              in_RCX[2] = uVar7;
              in_RCX[3] = uVar8;
              in_RCX[4] = uVar5;
              in_RCX[5] = uVar6;
              in_RCX[6] = uVar7;
              in_RCX[7] = uVar8;
              in_RCX[8] = uVar5;
              in_RCX[9] = uVar6;
              in_RCX[10] = uVar7;
              in_RCX[0xb] = uVar8;
              in_RCX[0xc] = uVar5;
              in_RCX[0xd] = uVar6;
              in_RCX[0xe] = uVar7;
              in_RCX[0xf] = uVar8;
              in_RCX[0x10] = uVar5;
              in_RCX[0x11] = uVar6;
              in_RCX[0x12] = uVar7;
              in_RCX[0x13] = uVar8;
              in_RCX[0x14] = uVar5;
              in_RCX[0x15] = uVar6;
              in_RCX[0x16] = uVar7;
              in_RCX[0x17] = uVar8;
              in_RCX[0x18] = uVar5;
              in_RCX[0x19] = uVar6;
              in_RCX[0x1a] = uVar7;
              in_RCX[0x1b] = uVar8;
              in_RCX[0x1c] = uVar5;
              in_RCX[0x1d] = uVar6;
              in_RCX[0x1e] = uVar7;
              in_RCX[0x1f] = uVar8;
              in_RCX[0x20] = uVar5;
              in_RCX[0x21] = uVar6;
              in_RCX[0x22] = uVar7;
              in_RCX[0x23] = uVar8;
              in_RCX[0x24] = uVar5;
              in_RCX[0x25] = uVar6;
              in_RCX[0x26] = uVar7;
              in_RCX[0x27] = uVar8;
              in_RCX[0x28] = uVar5;
              in_RCX[0x29] = uVar6;
              in_RCX[0x2a] = uVar7;
              in_RCX[0x2b] = uVar8;
              in_RCX[0x2c] = uVar5;
              in_RCX[0x2d] = uVar6;
              in_RCX[0x2e] = uVar7;
              in_RCX[0x2f] = uVar8;
              in_RCX[0x30] = uVar5;
              in_RCX[0x31] = uVar6;
              in_RCX[0x32] = uVar7;
              in_RCX[0x33] = uVar8;
              in_RCX[0x34] = uVar5;
              in_RCX[0x35] = uVar6;
              in_RCX[0x36] = uVar7;
              in_RCX[0x37] = uVar8;
              in_RCX[0x38] = uVar5;
              in_RCX[0x39] = uVar6;
              in_RCX[0x3a] = uVar7;
              in_RCX[0x3b] = uVar8;
              in_RCX[0x3c] = uVar5;
              in_RCX[0x3d] = uVar6;
              in_RCX[0x3e] = uVar7;
              in_RCX[0x3f] = uVar8;
              if (bVar2 != 2) goto LAB_0011613b;
            }
            else {
              if (bVar2 != 2) goto LAB_00115fd6;
              *in_RCX = _DAT_00122460;
              in_RCX[1] = uVar6;
              in_RCX[2] = uVar7;
              in_RCX[3] = uVar8;
              in_RCX[4] = uVar5;
              in_RCX[5] = uVar6;
              in_RCX[6] = uVar7;
              in_RCX[7] = uVar8;
              in_RCX[8] = uVar5;
              in_RCX[9] = uVar6;
              in_RCX[10] = uVar7;
              in_RCX[0xb] = uVar8;
              in_RCX[0xc] = uVar5;
              in_RCX[0xd] = uVar6;
              in_RCX[0xe] = uVar7;
              in_RCX[0xf] = uVar8;
              in_RCX[0x10] = uVar5;
              in_RCX[0x11] = uVar6;
              in_RCX[0x12] = uVar7;
              in_RCX[0x13] = uVar8;
              in_RCX[0x14] = uVar5;
              in_RCX[0x15] = uVar6;
              in_RCX[0x16] = uVar7;
              in_RCX[0x17] = uVar8;
              in_RCX[0x18] = uVar5;
              in_RCX[0x19] = uVar6;
              in_RCX[0x1a] = uVar7;
              in_RCX[0x1b] = uVar8;
              in_RCX[0x1c] = uVar5;
              in_RCX[0x1d] = uVar6;
              in_RCX[0x1e] = uVar7;
              in_RCX[0x1f] = uVar8;
              in_RCX[0x20] = uVar5;
              in_RCX[0x21] = uVar6;
              in_RCX[0x22] = uVar7;
              in_RCX[0x23] = uVar8;
              in_RCX[0x24] = uVar5;
              in_RCX[0x25] = uVar6;
              in_RCX[0x26] = uVar7;
              in_RCX[0x27] = uVar8;
              in_RCX[0x28] = uVar5;
              in_RCX[0x29] = uVar6;
              in_RCX[0x2a] = uVar7;
              in_RCX[0x2b] = uVar8;
              in_RCX[0x2c] = uVar5;
              in_RCX[0x2d] = uVar6;
              in_RCX[0x2e] = uVar7;
              in_RCX[0x2f] = uVar8;
              in_RCX[0x30] = uVar5;
              in_RCX[0x31] = uVar6;
              in_RCX[0x32] = uVar7;
              in_RCX[0x33] = uVar8;
              in_RCX[0x34] = uVar5;
              in_RCX[0x35] = uVar6;
              in_RCX[0x36] = uVar7;
              in_RCX[0x37] = uVar8;
              in_RCX[0x38] = uVar5;
              in_RCX[0x39] = uVar6;
              in_RCX[0x3a] = uVar7;
              in_RCX[0x3b] = uVar8;
              in_RCX[0x3c] = uVar5;
              in_RCX[0x3d] = uVar6;
              in_RCX[0x3e] = uVar7;
              in_RCX[0x3f] = uVar8;
            }
            *(byte *)(in_RDI + 7) = *(byte *)(in_RDI + 7) | 1;
            goto LAB_0011613b;
          }
          plVar4 = *pplVar1;
          if ((*(int *)((long)plVar3 + 0xb4) < 2) ||
             (((plVar4[9] == 0 && ((*(byte *)(plVar4 + 4) & 1) == 0)) && (plVar4[8] == 0)))) {
            lVar21 = 0;
            if (0 < plVar4[5]) {
              do {
                local_150 = (mbstate_t)0x0;
                sVar14 = wcrtomb((char *)&local_148,*(wchar_t *)(*plVar4 + lVar21 * 4),&local_150);
                if (sVar14 != 0xffffffffffffffff) {
                  uVar12 = (ulong)local_148;
                  *(undefined *)((long)in_RCX + uVar12) = 1;
                  if (uVar20 != 0) {
                    pp_Var11 = __ctype_tolower_loc();
                    *(undefined *)((long)in_RCX + (long)(*pp_Var11)[uVar12]) = 1;
                  }
                }
                if (((*(byte *)((long)in_RDI + 0x1a) & 0x40) != 0) &&
                   (1 < *(int *)((long)plVar3 + 0xb4))) {
                  wVar9 = towlower(*(wint_t *)(*plVar4 + lVar21 * 4));
                  sVar14 = wcrtomb((char *)&local_148,wVar9,&local_150);
                  if (sVar14 != 0xffffffffffffffff) {
                    *(undefined *)((long)in_RCX + (ulong)local_148) = 1;
                  }
                }
                lVar21 = lVar21 + 1;
              } while (lVar21 < plVar4[5]);
            }
          }
          else {
            local_154 = local_154 & 0xffffff00;
            do {
              local_150 = (mbstate_t)0x0;
              sVar22 = rpl_mbrtowc((wchar_t *)0x0,(char *)&local_154,1,(mbstate_t *)&local_150);
              if (sVar22 == 0xfffffffffffffffe) {
                *(undefined *)((long)in_RCX + (ulong)(byte)local_154) = 1;
              }
              local_154 = local_154 & 0xffffff00 | (uint)(byte)((byte)local_154 + 1);
            } while ((byte)((byte)local_154 + 1) != 0);
          }
        }
LAB_00115fd6:
        lVar17 = lVar17 + 1;
        if (*in_RSI <= lVar17) goto LAB_0011613b;
      }
      bVar2 = *(byte *)pplVar1;
      *(undefined *)((long)in_RCX + (ulong)bVar2) = 1;
      if (uVar20 != 0) {
        pp_Var11 = __ctype_tolower_loc();
        *(undefined *)((long)in_RCX + (long)(*pp_Var11)[bVar2]) = 1;
      }
      if (((*(byte *)((long)in_RDI + 0x1a) & 0x40) == 0) || (*(int *)((long)plVar3 + 0xb4) < 2))
      goto LAB_00115fd6;
      lVar15 = *plVar3;
      local_148 = *(byte *)(lVar15 + lVar10);
      uVar12 = lVar21 + 1;
      puVar19 = local_147;
      if (uVar12 < (ulong)plVar3[2]) {
        while (puVar16 = (undefined *)(lVar15 + uVar12 * 0x10), puVar18 = puVar19,
              (*(uint *)(puVar16 + 8) & 0x2000ff) == 0x200001) {
          puVar18 = puVar19 + 1;
          uVar12 = uVar12 + 1;
          *puVar19 = *puVar16;
          if ((ulong)plVar3[2] < uVar12 || plVar3[2] == uVar12) break;
          lVar15 = *plVar3;
          puVar19 = puVar18;
        }
        sVar22 = (long)puVar18 - (long)&local_148;
      }
      else {
        sVar22 = 1;
      }
      local_190 = &local_148;
      local_150 = (mbstate_t)0x0;
      sVar13 = rpl_mbrtowc((wchar_t *)&local_154,(char *)local_190,sVar22,(mbstate_t *)&local_150);
      if (sVar13 != sVar22) goto LAB_00115fd6;
      wVar9 = towlower(local_154);
      sVar14 = wcrtomb((char *)local_190,wVar9,&local_150);
      if (sVar14 == 0xffffffffffffffff) goto LAB_00115fd6;
      lVar17 = lVar17 + 1;
      *(undefined *)((long)in_RCX + (ulong)local_148) = 1;
    } while (lVar17 < *in_RSI);
  }
LAB_0011613b:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

