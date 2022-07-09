
/* WARNING: Could not reconcile some variable overlaps */

undefined8 knuth_morris_pratt_multibyte(byte *param_1,byte *param_2,byte **param_3)

{
  char cVar1;
  byte *pbVar2;
  int iVar3;
  ulong uVar4;
  size_t sVar5;
  byte **ppbVar6;
  byte **ppbVar7;
  undefined8 uVar8;
  byte *pbVar9;
  byte **ppbVar10;
  byte **ppbVar11;
  size_t sVar12;
  mbuiter_multi *iter;
  byte **ppbVar13;
  byte *pbVar14;
  long lVar15;
  byte *pbVar16;
  long in_FS_OFFSET;
  byte *local_128;
  byte **local_120;
  byte *local_118;
  byte *local_110;
  char local_108;
  mbstate_t local_104;
  undefined local_fc;
  byte *local_f8;
  byte *local_f0;
  undefined local_e8;
  int local_e4;
  byte local_e0 [24];
  char local_c8;
  mbstate_t local_c4;
  char local_bc;
  byte *local_b8;
  size_t local_b0;
  char local_a8;
  undefined local_a4 [32];
  mbstate_t local_84;
  char local_7c;
  byte *local_78;
  byte *local_70;
  char local_68;
  int local_64;
  long local_40;
  
  ppbVar10 = &local_128;
  ppbVar13 = &local_128;
  ppbVar11 = &local_128;
  ppbVar7 = &local_128;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_128 = param_1;
  local_120 = param_3;
  local_118 = (byte *)mbslen((char *)param_2);
  ppbVar6 = &local_128;
  if ((-1 < SUB168(ZEXT816(0x38) * ZEXT816(local_118),0)) &&
     (ppbVar6 = &local_128, SUB168(ZEXT816(0x38) * ZEXT816(local_118) >> 0x40,0) == 0)) {
    sVar12 = (long)local_118 * 0x38;
    if (sVar12 < 0xfa1) {
      ppbVar11 = &local_128;
      while (ppbVar10 != (byte **)((long)&local_128 - (sVar12 + 0x36 & 0xfffffffffffff000))) {
        ppbVar13 = (byte **)((long)ppbVar11 + -0x1000);
        *(undefined8 *)((long)ppbVar11 + -8) = *(undefined8 *)((long)ppbVar11 + -8);
        ppbVar10 = (byte **)((long)ppbVar11 + -0x1000);
        ppbVar11 = (byte **)((long)ppbVar11 + -0x1000);
      }
      uVar4 = (ulong)((uint)(sVar12 + 0x36) & 0xff0);
      lVar15 = -uVar4;
      ppbVar11 = (byte **)((long)ppbVar13 + lVar15);
      ppbVar7 = (byte **)((long)ppbVar13 + lVar15);
      if (uVar4 != 0) {
        *(undefined8 *)((long)ppbVar13 + -8) = *(undefined8 *)((long)ppbVar13 + -8);
      }
      ppbVar13 = (byte **)(((ulong)((long)ppbVar13 + lVar15 + 0xf) & 0xfffffffffffffff0) + 0x1f &
                          0xffffffffffffffe0);
      pbVar2 = local_118;
    }
    else {
      ppbVar13 = (byte **)mmalloca(sVar12);
      pbVar2 = local_118;
    }
    ppbVar6 = ppbVar7;
    local_118 = pbVar2;
    if (ppbVar13 != (byte **)0x0) {
      local_108 = '\0';
      local_104 = (mbstate_t)0x0;
      ppbVar7 = ppbVar13;
      local_f8 = param_2;
      do {
        local_fc = 0;
        if (local_108 == '\0') {
          if ((*(uint *)(is_basic_table + (ulong)(*local_f8 >> 5) * 4) >> (*local_f8 & 0x1f) & 1) ==
              0) {
            *(undefined8 *)((long)ppbVar11 + -8) = 0x1142ef;
            iVar3 = mbsinit(&local_104);
            if (iVar3 == 0) {
LAB_0011476e:
                    /* WARNING: Subroutine does not return */
              *(undefined8 *)((long)ppbVar11 + -8) = 0x11478d;
              __assert_fail("mbsinit (&iter->state)","lib/mbuiter.h",0x8f,"mbuiter_multi_next");
            }
            local_108 = '\x01';
            goto with_shift;
          }
          local_f0 = (byte *)0x1;
          local_e4 = (int)(char)*local_f8;
          local_e8 = 1;
          if (local_e4 == 0) goto LAB_00114065;
LAB_00113f58:
          local_110._0_1_ = 1;
        }
        else {
with_shift:
          *(undefined8 *)((long)ppbVar11 + -8) = 0x113fc2;
          sVar5 = __ctype_get_mb_cur_max();
          pbVar14 = local_f8;
          *(undefined8 *)((long)ppbVar11 + -8) = 0x113fd4;
          sVar12 = strnlen1((char *)local_f8,sVar5);
          iter = (mbuiter_multi *)&local_e4;
          *(undefined8 *)((long)ppbVar11 + -8) = 0x113fe9;
          local_f0 = (byte *)rpl_mbrtowc((wchar_t *)iter,(char *)pbVar14,sVar12,
                                         (mbstate_t *)&local_104);
          if (local_f0 == (byte *)0xffffffffffffffff) {
            local_f0 = (byte *)0x1;
            local_110._0_1_ = 0;
            local_e8 = 0;
          }
          else {
            if (local_f0 != (byte *)0xfffffffffffffffe) {
              if (local_f0 == (byte *)0x0) {
                local_f0 = (byte *)0x1;
                if (*local_f8 != 0) {
LAB_0011478d:
                    /* WARNING: Subroutine does not return */
                  *(undefined8 *)((long)ppbVar11 + -8) = 0x1147ac;
                  __assert_fail("*iter->cur.ptr == \'\\0\'","lib/mbuiter.h",0xab,
                                "mbuiter_multi_next");
                }
                if (local_e4 != 0) goto LAB_001147ac;
              }
              local_e8 = 1;
              *(undefined8 *)((long)ppbVar11 + -8) = 0x114043;
              iVar3 = mbsinit(&local_104);
              if (iVar3 != 0) {
                local_108 = '\0';
              }
              if (local_e4 != 0) goto LAB_00113f58;
              goto LAB_00114065;
            }
            *(undefined8 *)((long)ppbVar11 + -8) = 0x11435c;
            local_f0 = (byte *)strlen((char *)local_f8);
            local_e8 = 0;
            local_110._0_1_ = 0;
          }
        }
        pbVar16 = local_f0;
        pbVar14 = local_f8;
        local_fc = 1;
        if (local_f8 == local_e0) {
          local_110 = (byte *)((ulong)local_110 & 0xffffffffffffff00 | (ulong)(byte)local_110);
          *(undefined8 *)((long)ppbVar11 + -8) = 0x11431d;
          pbVar9 = (byte *)memcpy(ppbVar7 + 3,local_f8,(size_t)local_f0);
          *ppbVar7 = pbVar9;
        }
        else {
          *ppbVar7 = local_f8;
        }
        ppbVar7[1] = pbVar16;
        *(byte *)(ppbVar7 + 2) = (byte)local_110;
        if ((byte)local_110 != 0) {
          *(int *)((long)ppbVar7 + 0x14) = local_e4;
        }
        local_f8 = pbVar14 + (long)pbVar16;
        ppbVar7 = ppbVar7 + 6;
      } while( true );
    }
  }
  ppbVar11 = ppbVar6;
  uVar8 = 0;
LAB_00113e92:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar8;
  }
LAB_001147b1:
                    /* WARNING: Subroutine does not return */
  *(undefined **)((long)ppbVar11 + -8) = &UNK_001147b6;
  __stack_chk_fail();
LAB_00114065:
  local_fc = 1;
  lVar15 = 0;
  ppbVar13[(long)pbVar2 * 6 + 1] = (byte *)0x1;
  local_110 = (byte *)0x2;
  ppbVar7 = ppbVar13;
  if (local_118 < (byte *)0x3) {
LAB_0011411a:
    local_a4[28] = '\0';
    local_c8 = '\0';
    *local_120 = (byte *)0x0;
    local_c4 = (mbstate_t)0x0;
    local_bc = '\0';
    local_84 = (mbstate_t)0x0;
    local_7c = '\0';
    local_b8 = local_128;
    local_78 = local_128;
    pbVar14 = (byte *)0x0;
    do {
      do {
        if (local_7c == '\0') goto LAB_00114234;
        if (local_68 != '\0') goto LAB_0011427b;
LAB_0011417a:
        ppbVar7 = ppbVar13 + (long)pbVar14 * 6;
LAB_00114185:
        pbVar16 = ppbVar7[1];
        if (pbVar16 == local_70) {
          pbVar9 = *ppbVar7;
          *(undefined8 *)((long)ppbVar11 + -8) = 0x11443c;
          iVar3 = memcmp(pbVar9,local_78,(size_t)pbVar16);
          if (iVar3 == 0) goto LAB_001142a0;
        }
joined_r0x00114447:
        if (pbVar14 == (byte *)0x0) {
          if (local_bc == '\0') {
            if (local_c8 == '\0') {
              if ((*(uint *)(is_basic_table + (ulong)(*local_b8 >> 5) * 4) >> (*local_b8 & 0x1f) & 1
                  ) != 0) {
                local_b0 = 1;
                local_a4._0_4_ = (uint)(char)*local_b8;
                local_a8 = '\x01';
                local_bc = '\x01';
                goto LAB_00114205;
              }
              *(undefined8 *)((long)ppbVar11 + -8) = 0x114647;
              iVar3 = mbsinit(&local_c4);
              if (iVar3 == 0) goto LAB_0011476e;
              local_c8 = '\x01';
            }
            *(undefined8 *)((long)ppbVar11 + -8) = 0x11465b;
            sVar5 = __ctype_get_mb_cur_max();
            local_110 = local_b8;
            *(undefined8 *)((long)ppbVar11 + -8) = 0x114674;
            sVar12 = strnlen1((char *)local_b8,sVar5);
            iter = (mbuiter_multi *)local_a4;
            *(undefined8 *)((long)ppbVar11 + -8) = 0x114690;
            local_b0 = rpl_mbrtowc((wchar_t *)iter,(char *)local_110,sVar12,(mbstate_t *)&local_c4);
            if (local_b0 == 0xffffffffffffffff) {
              local_b0 = 1;
              local_a8 = '\0';
              goto LAB_00114213;
            }
            if (local_b0 == 0xfffffffffffffffe) {
              *(undefined8 *)((long)ppbVar11 + -8) = 0x11475b;
              local_b0 = strlen((char *)local_b8);
              local_a8 = '\0';
              goto LAB_00114213;
            }
            if (local_b0 == 0) {
              local_b0 = 1;
              if (*local_b8 != 0) goto LAB_0011478d;
              if (local_a4._0_4_ != 0) goto LAB_001147ac;
            }
            local_a8 = '\x01';
            *(undefined8 *)((long)ppbVar11 + -8) = 0x1146e8;
            iVar3 = mbsinit(&local_c4);
            if (iVar3 != 0) {
              local_c8 = '\0';
            }
            local_bc = '\x01';
          }
          else if (local_a8 == '\0') goto LAB_00114213;
LAB_00114205:
          if (local_a4._0_4_ == 0) {
                    /* WARNING: Subroutine does not return */
            *(code **)((long)ppbVar11 + -8) = mbsstr_cold;
            abort();
          }
LAB_00114213:
          local_b8 = local_b8 + local_b0;
          local_78 = local_78 + (long)local_70;
          local_bc = '\0';
          local_7c = '\0';
LAB_00114234:
          if (local_a4[28] == '\0') {
            if ((*(uint *)(is_basic_table + (ulong)(*local_78 >> 5) * 4) >> (*local_78 & 0x1f) & 1)
                == 0) {
              *(undefined8 *)((long)ppbVar11 + -8) = 0x11438c;
              iVar3 = mbsinit(&local_84);
              if (iVar3 != 0) {
                local_a4[28] = '\x01';
                goto with_shift;
              }
              goto LAB_0011476e;
            }
            local_70 = (byte *)0x1;
            local_64 = (int)(char)*local_78;
            local_68 = '\x01';
            local_7c = '\x01';
          }
          else {
with_shift:
            *(undefined8 *)((long)ppbVar11 + -8) = 0x11439d;
            sVar5 = __ctype_get_mb_cur_max();
            local_110 = local_78;
            *(undefined8 *)((long)ppbVar11 + -8) = 0x1143b3;
            sVar12 = strnlen1((char *)local_78,sVar5);
            iter = (mbuiter_multi *)&local_64;
            *(undefined8 *)((long)ppbVar11 + -8) = 0x1143cc;
            local_70 = (byte *)rpl_mbrtowc((wchar_t *)iter,(char *)local_110,sVar12,
                                           (mbstate_t *)&local_84);
            if (local_70 == (byte *)0xffffffffffffffff) {
              local_70 = (byte *)0x1;
              local_68 = '\0';
              local_7c = '\x01';
              goto LAB_0011417a;
            }
            if (local_70 == (byte *)0xfffffffffffffffe) {
              *(undefined8 *)((long)ppbVar11 + -8) = 0x114709;
              local_70 = (byte *)strlen((char *)local_78);
              local_68 = '\0';
              local_7c = '\x01';
              goto LAB_0011417a;
            }
            if (local_70 == (byte *)0x0) {
              local_70 = (byte *)0x1;
              if (*local_78 != 0) goto LAB_0011478d;
              if (local_64 != 0) goto LAB_001147ac;
            }
            local_68 = '\x01';
            *(undefined8 *)((long)ppbVar11 + -8) = 0x114415;
            iVar3 = mbsinit(&local_84);
            if (iVar3 != 0) {
              local_a4[28] = '\0';
            }
            local_7c = '\x01';
          }
LAB_0011427b:
          if (local_64 == 0) goto LAB_001142ce;
          ppbVar7 = ppbVar13 + (long)pbVar14 * 6;
          if (*(char *)(ppbVar7 + 2) == '\0') goto LAB_00114185;
          if (*(int *)((long)ppbVar7 + 0x14) == local_64) goto LAB_001142a0;
          goto joined_r0x00114447;
        }
        pbVar16 = ppbVar13[(long)(pbVar14 + (long)pbVar2 * 6)];
        local_110 = pbVar14 + -(long)pbVar16;
      } while (pbVar16 == (byte *)0x0);
      if (local_bc == '\0') goto LAB_0011449c;
      if (local_a8 != '\0') goto LAB_001144f4;
      while( true ) {
        local_bc = '\0';
        local_b8 = local_b8 + local_b0;
        pbVar16 = pbVar16 + -1;
        pbVar14 = local_110;
        if (pbVar16 == (byte *)0x0) break;
LAB_0011449c:
        if (local_c8 == '\0') {
          if ((*(uint *)(is_basic_table + (ulong)(*local_b8 >> 5) * 4) >> (*local_b8 & 0x1f) & 1) ==
              0) {
            *(undefined8 *)((long)ppbVar11 + -8) = 0x11452f;
            iVar3 = mbsinit(&local_c4);
            if (iVar3 != 0) {
              local_c8 = '\x01';
              goto with_shift;
            }
            goto LAB_0011476e;
          }
          local_b0 = 1;
          local_a4._0_4_ = (uint)(char)*local_b8;
          local_a8 = '\x01';
          local_bc = '\x01';
LAB_001144f4:
          if (local_a4._0_4_ == 0) {
            uVar8 = knuth_morris_pratt_multibyte_cold();
            return uVar8;
          }
        }
        else {
with_shift:
          *(undefined8 *)((long)ppbVar11 + -8) = 0x114543;
          sVar5 = __ctype_get_mb_cur_max();
          pbVar14 = local_b8;
          *(undefined8 *)((long)ppbVar11 + -8) = 0x114555;
          sVar12 = strnlen1((char *)local_b8,sVar5);
          *(undefined8 *)((long)ppbVar11 + -8) = 0x11456a;
          local_b0 = rpl_mbrtowc((wchar_t *)local_a4,(char *)pbVar14,sVar12,(mbstate_t *)&local_c4);
          if (local_b0 == 0xffffffffffffffff) {
            local_b0 = 1;
            local_a8 = '\0';
          }
          else {
            if (local_b0 != 0xfffffffffffffffe) {
              if (local_b0 == 0) {
                local_b0 = 1;
                if (*local_b8 != 0) goto LAB_0011478d;
                iter = (mbuiter_multi *)(ulong)local_a4._0_4_;
                if (local_a4._0_4_ != 0) goto LAB_001147ac;
              }
              local_a8 = '\x01';
              *(undefined8 *)((long)ppbVar11 + -8) = 0x1145be;
              iVar3 = mbsinit(&local_c4);
              if (iVar3 != 0) {
                local_c8 = '\0';
              }
              local_bc = '\x01';
              goto LAB_001144f4;
            }
            *(undefined8 *)((long)ppbVar11 + -8) = 0x11460c;
            local_b0 = strlen((char *)local_b8);
            local_a8 = '\0';
          }
        }
      }
    } while( true );
  }
LAB_00114090:
  cVar1 = *(char *)(ppbVar7 + 8);
  do {
    ppbVar6 = ppbVar13 + lVar15 * 6;
    if ((cVar1 == '\0') || (*(char *)(ppbVar6 + 2) == '\0')) {
      pbVar14 = ppbVar7[7];
      if (pbVar14 == ppbVar6[1]) {
        pbVar16 = *ppbVar6;
        pbVar9 = ppbVar7[6];
        *(undefined8 *)((long)ppbVar11 + -8) = 0x1140e1;
        iVar3 = memcmp(pbVar9,pbVar16,(size_t)pbVar14);
        if (iVar3 == 0) goto LAB_001140e5;
      }
    }
    else if (*(int *)((long)ppbVar7 + 0x44) == *(int *)((long)ppbVar6 + 0x14)) {
LAB_001140e5:
      lVar15 = lVar15 + 1;
      ppbVar13[(long)(local_110 + (long)pbVar2 * 6)] = local_110 + -lVar15;
      goto LAB_001140fa;
    }
    if (lVar15 == 0) break;
    lVar15 = lVar15 - (long)ppbVar13[(long)pbVar2 * 6 + lVar15];
  } while( true );
  ppbVar13[(long)(local_110 + (long)pbVar2 * 6)] = local_110;
LAB_001140fa:
  local_110 = local_110 + 1;
  ppbVar7 = ppbVar7 + 6;
  if (local_118 == local_110) goto LAB_0011411a;
  goto LAB_00114090;
LAB_001142a0:
  local_7c = '\0';
  pbVar14 = pbVar14 + 1;
  local_78 = local_78 + (long)local_70;
  if (local_118 == pbVar14) {
    *local_120 = local_b8;
LAB_001142ce:
    *(undefined8 *)((long)ppbVar11 + -8) = 0x1142d6;
    freea(ppbVar13);
    uVar8 = 1;
    goto LAB_00113e92;
  }
  goto LAB_00114234;
LAB_001147ac:
  *(undefined8 *)((long)ppbVar11 + -8) = 0x1147b1;
  mbuiter_multi_next(iter);
  goto LAB_001147b1;
}

