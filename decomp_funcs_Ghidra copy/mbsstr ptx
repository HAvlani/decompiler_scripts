
/* WARNING: Could not reconcile some variable overlaps */

byte * mbsstr(byte *param_1,mbstate_t *param_2)

{
  byte *haystack;
  uint uVar1;
  long lVar2;
  mbstate_t *pmVar3;
  byte bVar4;
  byte bVar5;
  int iVar6;
  size_t sVar7;
  byte *pbVar8;
  size_t sVar9;
  byte bVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  mbstate_t *pmVar14;
  mbuiter_multi *iter;
  ulong uVar15;
  long in_FS_OFFSET;
  bool bVar16;
  long local_1c8;
  ulong local_1c0;
  ulong local_1a0;
  byte *local_190;
  undefined local_188;
  mbstate_t local_184;
  undefined local_17c;
  mbstate_t *local_178;
  size_t local_170;
  char local_168;
  uint local_164;
  char local_148;
  mbstate_t local_144;
  char local_13c;
  mbstate_t *local_138;
  size_t local_130;
  char local_128;
  int local_124;
  undefined4 local_108;
  mbstate_t mStack260;
  undefined4 uStack252;
  byte *local_f8;
  size_t sStack240;
  undefined4 local_e8;
  uint uStack228;
  int iStack224;
  undefined4 uStack220;
  undefined4 local_d8;
  undefined4 uStack212;
  undefined4 uStack208;
  undefined4 uStack204;
  undefined4 local_c8;
  mbstate_t mStack196;
  undefined4 uStack188;
  byte *local_b8;
  size_t sStack176;
  undefined4 local_a8;
  uint uStack164;
  int iStack160;
  undefined4 uStack156;
  undefined4 local_98;
  undefined4 uStack148;
  undefined4 uStack144;
  undefined4 uStack140;
  char local_88;
  mbstate_t local_84;
  char local_7c;
  mbstate_t *local_78;
  size_t local_70;
  char local_68;
  uint local_64;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  sVar7 = __ctype_get_mb_cur_max();
  if (1 < sVar7) {
    bVar5 = *(byte *)&param_2->__count;
    pmVar14 = &local_184;
    local_188 = 0;
    local_17c = 0;
    local_184 = (mbstate_t)0x0;
    local_178 = param_2;
    if ((*(uint *)(is_basic_table + (ulong)(bVar5 >> 5) * 4) >> (bVar5 & 0x1f) & 1) == 0) {
      iVar6 = mbsinit(pmVar14);
      if (iVar6 == 0) {
LAB_0011c099:
                    /* WARNING: Subroutine does not return */
        __assert_fail("mbsinit (&iter->state)","lib/mbuiter.h",0x8f,"mbuiter_multi_next");
      }
      local_188 = 1;
      sVar7 = __ctype_get_mb_cur_max();
      pmVar3 = local_178;
      sVar9 = strnlen1((char *)local_178,sVar7);
      iter = (mbuiter_multi *)&local_164;
      local_170 = rpl_mbrtowc((wchar_t *)iter,(char *)pmVar3,sVar9,(mbstate_t *)pmVar14);
      if (local_170 == 0xffffffffffffffff) {
        local_170 = 1;
        local_168 = '\0';
        goto LAB_0011b344;
      }
      if (local_170 == 0xfffffffffffffffe) {
        local_170 = strlen((char *)local_178);
        local_168 = '\0';
        goto LAB_0011b344;
      }
      if (local_170 != 0) goto LAB_0011bfb0;
      local_170 = 1;
      if (*(char *)&local_178->__count == '\0') {
        if (local_164 == 0) goto LAB_0011bfb0;
        goto LAB_0011bfaa;
      }
LAB_0011c0bd:
                    /* WARNING: Subroutine does not return */
      __assert_fail("*iter->cur.ptr == \'\\0\'","lib/mbuiter.h",0xab,"mbuiter_multi_next");
    }
    local_170 = 1;
    local_168 = '\x01';
    local_164 = (int)(char)bVar5;
LAB_0011b2b5:
    local_17c = 1;
    pbVar8 = param_1;
    if (local_164 != 0) {
LAB_0011b344:
      local_17c = 1;
      local_148 = '\0';
      local_144 = (mbstate_t)0x0;
      local_13c = '\0';
      local_108 = local_108 & 0xffffff00;
      mStack260 = 0;
      local_1c0 = 0;
      local_1a0 = 0;
      bVar5 = 1;
      uVar12 = 0;
      local_138 = param_2;
      local_f8 = param_1;
      uVar1 = uStack252;
LAB_0011b3d0:
      uStack252 = uVar1 & 0xffffff00;
      if ((char)local_108 != '\0') {
LAB_0011b9a8:
        pmVar14 = &mStack260;
        sVar7 = __ctype_get_mb_cur_max();
        pbVar8 = local_f8;
        sVar9 = strnlen1((char *)local_f8,sVar7);
        iter = (mbuiter_multi *)&uStack228;
        sStack240 = rpl_mbrtowc((wchar_t *)iter,(char *)pbVar8,sVar9,(mbstate_t *)pmVar14);
        if (sStack240 == 0xffffffffffffffff) {
          sStack240 = 1;
          local_e8 = (uint)local_e8._1_3_;
        }
        else {
          if (sStack240 != 0xfffffffffffffffe) {
            if (sStack240 == 0) {
              sStack240 = 1;
              if (*local_f8 != 0) goto LAB_0011c0bd;
              if (uStack228 != 0) goto LAB_0011bfaa;
            }
            local_e8 = CONCAT31(local_e8._1_3_,1);
            iVar6 = mbsinit(pmVar14);
            if (iVar6 != 0) {
              local_108 = local_108 & 0xffffff00;
            }
            goto LAB_0011b42d;
          }
          sStack240 = strlen((char *)local_f8);
          local_e8 = local_e8 >> 8;
        }
        local_e8 = local_e8 << 8;
        uStack252 = CONCAT31(uStack252._1_3_,1);
        bVar10 = 9 < local_1c0 & bVar5;
        if ((bVar10 != 0) && (bVar5 = bVar10, local_1c0 * 5 <= uVar12)) goto LAB_0011bad8;
LAB_0011b929:
        sVar7 = sStack240;
        uVar13 = uVar12 + 1;
        if ((sStack240 == local_170) && (iVar6 = memcmp(local_f8,local_178,sStack240), iVar6 == 0))
        {
LAB_0011b487:
          uVar13 = uVar12 + 1;
          bVar10 = *(byte *)&param_2->__count;
          local_84 = (mbstate_t)0x0;
          local_88 = '\0';
          sStack176 = sStack240;
          local_b8 = local_f8 + sStack240;
          local_c8 = local_108;
          mStack196.__count = mStack260.__count;
          mStack196.__value = mStack260.__value;
          uStack188 = uStack252 & 0xffffff00;
          local_7c = '\0';
          local_a8 = local_e8;
          uStack164 = uStack228;
          iStack160 = iStack224;
          uStack156 = uStack220;
          local_98 = local_d8;
          uStack148 = uStack212;
          uStack144 = uStack208;
          uStack140 = uStack204;
          local_78 = param_2;
          if ((*(uint *)(is_basic_table + (ulong)(bVar10 >> 5) * 4) >> (bVar10 & 0x1f) & 1) == 0) {
            iVar6 = mbsinit(&local_84);
            if (iVar6 == 0) goto LAB_0011c099;
            local_88 = '\x01';
            sVar7 = __ctype_get_mb_cur_max();
            pmVar14 = local_78;
            sVar9 = strnlen1((char *)local_78,sVar7);
            local_70 = rpl_mbrtowc((wchar_t *)(mbuiter_multi *)&local_64,(char *)pmVar14,sVar9,
                                   (mbstate_t *)&local_84);
            if (local_70 == 0xffffffffffffffff) {
              local_70 = 1;
              local_68 = '\0';
              goto LAB_0011b54e;
            }
            if (local_70 == 0xfffffffffffffffe) {
              local_70 = strlen((char *)local_78);
              local_68 = '\0';
              goto LAB_0011b54e;
            }
            if (local_70 == 0) {
              local_70 = 1;
              if (*(char *)&local_78->__count != '\0') goto LAB_0011c0bd;
              iter = (mbuiter_multi *)(ulong)local_64;
              if (local_64 != 0) goto LAB_0011bfaa;
            }
            local_68 = '\x01';
            iVar6 = mbsinit(&local_84);
            if (iVar6 != 0) {
              local_88 = '\0';
            }
          }
          else {
            local_70 = 1;
            local_68 = '\x01';
            local_64 = (int)(char)bVar10;
          }
          local_7c = '\x01';
          if (local_64 == 0) {
                    /* WARNING: Subroutine does not return */
            abort();
          }
LAB_0011b54e:
          local_78 = (mbstate_t *)((long)&local_78->__count + local_70);
          do {
            local_7c = '\0';
            uVar13 = uVar13 + 1;
            if (local_88 == '\0') {
              if ((*(uint *)(is_basic_table + (ulong)(*(byte *)&local_78->__count >> 5) * 4) >>
                   (*(byte *)&local_78->__count & 0x1f) & 1) == 0) {
                iVar6 = mbsinit(&local_84);
                if (iVar6 != 0) {
                  local_88 = '\x01';
                  goto LAB_0011b6a5;
                }
                goto LAB_0011c099;
              }
              local_70 = 1;
              local_64 = (uint)*(char *)&local_78->__count;
              local_68 = '\x01';
joined_r0x0011b5c0:
              if (local_64 == 0) {
                local_7c = '\x01';
                pbVar8 = local_f8;
                goto LAB_0011b2c4;
              }
            }
            else {
LAB_0011b6a5:
              sVar7 = __ctype_get_mb_cur_max();
              pmVar14 = local_78;
              sVar9 = strnlen1((char *)local_78,sVar7);
              iter = (mbuiter_multi *)&local_64;
              local_70 = rpl_mbrtowc((wchar_t *)(mbuiter_multi *)&local_64,(char *)pmVar14,sVar9,
                                     (mbstate_t *)&local_84);
              if (local_70 == 0xffffffffffffffff) {
                local_70 = 1;
                local_68 = '\0';
              }
              else {
                if (local_70 != 0xfffffffffffffffe) {
                  if (local_70 == 0) {
                    local_70 = 1;
                    if (*(char *)&local_78->__count != '\0') goto LAB_0011c0bd;
                    if (local_64 != 0) goto LAB_0011bfaa;
                  }
                  local_68 = '\x01';
                  iVar6 = mbsinit(&local_84);
                  if (iVar6 != 0) {
                    local_88 = '\0';
                  }
                  goto joined_r0x0011b5c0;
                }
                local_70 = strlen((char *)local_78);
                local_68 = '\0';
              }
            }
            local_7c = '\x01';
            if ((char)uStack188 == '\0') {
              if ((char)local_c8 == '\0') {
                if ((*(uint *)(is_basic_table + (ulong)(*local_b8 >> 5) * 4) >> (*local_b8 & 0x1f) &
                    1) != 0) {
                  sStack176 = 1;
                  uStack164 = (uint)(char)*local_b8;
                  local_a8 = CONCAT31(local_a8._1_3_,1);
                  uStack188 = CONCAT31(uStack188._1_3_,1);
                  goto LAB_0011b631;
                }
                iVar6 = mbsinit(&mStack196);
                if (iVar6 == 0) goto LAB_0011c099;
                local_c8 = CONCAT31(local_c8._1_3_,1);
              }
              pmVar14 = &mStack196;
              sVar7 = __ctype_get_mb_cur_max();
              pbVar8 = local_b8;
              sVar9 = strnlen1((char *)local_b8,sVar7);
              iter = (mbuiter_multi *)&uStack164;
              sStack176 = rpl_mbrtowc((wchar_t *)(mbuiter_multi *)&uStack164,(char *)pbVar8,sVar9,
                                      (mbstate_t *)pmVar14);
              if (sStack176 == 0xffffffffffffffff) {
                sStack176 = 1;
                local_a8 = (uint)local_a8._1_3_ << 8;
                uStack188 = CONCAT31(uStack188._1_3_,1);
              }
              else {
                if (sStack176 != 0xfffffffffffffffe) {
                  if (sStack176 == 0) {
                    sStack176 = 1;
                    if (*local_b8 != 0) goto LAB_0011c0bd;
                    if (uStack164 != 0) goto LAB_0011bfaa;
                  }
                  local_a8 = CONCAT31(local_a8._1_3_,1);
                  iVar6 = mbsinit(pmVar14);
                  if (iVar6 != 0) {
                    local_c8 = local_c8 & 0xffffff00;
                  }
                  uStack188 = CONCAT31(uStack188._1_3_,1);
                  goto LAB_0011b631;
                }
                sStack176 = strlen((char *)local_b8);
                local_a8 = local_a8 & 0xffffff00;
                uStack188 = CONCAT31(uStack188._1_3_,1);
              }
LAB_0011b77c:
              sVar7 = sStack240;
              if (sStack176 != local_70) break;
              iVar6 = memcmp(local_b8,local_78,sStack176);
              bVar16 = iVar6 != 0;
            }
            else {
              if ((char)local_a8 == '\0') goto LAB_0011b77c;
LAB_0011b631:
              if (uStack164 == 0) goto LAB_0011b32d;
              if (local_68 == '\0') goto LAB_0011b77c;
              bVar16 = local_64 != uStack164;
            }
            sVar7 = sStack240;
            if (bVar16) break;
            local_b8 = local_b8 + sStack176;
            local_78 = (mbstate_t *)((long)&local_78->__count + local_70);
            uStack188 = uStack188 & 0xffffff00;
          } while( true );
        }
        goto LAB_0011b79a;
      }
      if ((*(uint *)(is_basic_table + (ulong)(*local_f8 >> 5) * 4) >> (*local_f8 & 0x1f) & 1) == 0)
      {
        iVar6 = mbsinit(&mStack260);
        if (iVar6 != 0) {
          local_108 = CONCAT31(local_108._1_3_,1);
          goto LAB_0011b9a8;
        }
        goto LAB_0011c099;
      }
      sStack240 = 1;
      uStack228 = (uint)(char)*local_f8;
      local_e8 = CONCAT31(local_e8._1_3_,1);
      uStack252._1_3_ = (undefined3)(uVar1 >> 8);
LAB_0011b42d:
      uStack252 = CONCAT31(uStack252._1_3_,1);
      if (uStack228 == 0) goto LAB_0011b32d;
      bVar10 = 9 < local_1c0 & bVar5;
      if ((bVar10 != 0) && (bVar5 = bVar10, local_1c0 * 5 <= uVar12)) {
LAB_0011bad8:
        local_1c8 = uVar12 - local_1a0;
        if (local_1c8 == 0) {
          if (local_13c == '\0') goto LAB_0011bd08;
          if (local_128 != '\0') {
LAB_0011bd65:
            if (local_124 == 0) goto LAB_0011bb9b;
          }
LAB_0011bd76:
          bVar5 = 1;
        }
        else {
          if (local_13c == '\0') goto LAB_0011bb23;
          if (local_128 != '\0') goto LAB_0011bb7c;
LAB_0011bb00:
          do {
            local_138 = (mbstate_t *)((long)&local_138->__count + local_130);
            local_1c8 = local_1c8 + -1;
            local_13c = '\0';
            if (local_1c8 == 0) goto LAB_0011bd08;
LAB_0011bb23:
            if (local_148 == '\0') {
              if ((*(uint *)(is_basic_table + (ulong)(*(byte *)&local_138->__count >> 5) * 4) >>
                   (*(byte *)&local_138->__count & 0x1f) & 1) == 0) {
                iVar6 = mbsinit(&local_144);
                if (iVar6 != 0) {
                  local_148 = '\x01';
                  goto LAB_0011bbe8;
                }
                goto LAB_0011c099;
              }
              local_130 = 1;
              local_124 = (int)*(char *)&local_138->__count;
              local_128 = '\x01';
              local_13c = '\x01';
            }
            else {
LAB_0011bbe8:
              pmVar14 = &local_144;
              sVar7 = __ctype_get_mb_cur_max();
              pmVar3 = local_138;
              sVar9 = strnlen1((char *)local_138,sVar7);
              iter = (mbuiter_multi *)&local_124;
              local_130 = rpl_mbrtowc((wchar_t *)iter,(char *)pmVar3,sVar9,(mbstate_t *)pmVar14);
              if (local_130 == 0xffffffffffffffff) {
                local_130 = 1;
                local_128 = '\0';
                goto LAB_0011bb00;
              }
              if (local_130 == 0xfffffffffffffffe) {
                local_130 = strlen((char *)local_138);
                local_128 = '\0';
                goto LAB_0011bb00;
              }
              if (local_130 == 0) {
                local_130 = 1;
                if (*(char *)&local_138->__count != '\0') goto LAB_0011c0bd;
                if (local_124 != 0) goto LAB_0011bfaa;
              }
              local_128 = '\x01';
              iVar6 = mbsinit(pmVar14);
              if (iVar6 != 0) {
                local_148 = '\0';
              }
              local_13c = '\x01';
            }
LAB_0011bb7c:
          } while (local_124 != 0);
          if (local_13c == '\0') {
LAB_0011bd08:
            if (local_148 == '\0') {
              if ((*(uint *)(is_basic_table + (ulong)(*(byte *)&local_138->__count >> 5) * 4) >>
                   (*(byte *)&local_138->__count & 0x1f) & 1) != 0) {
                local_130 = 1;
                local_124 = (int)*(char *)&local_138->__count;
                local_128 = '\x01';
                local_13c = '\x01';
                goto LAB_0011bd65;
              }
              iVar6 = mbsinit(&local_144);
              if (iVar6 == 0) goto LAB_0011c099;
              local_148 = '\x01';
            }
            pmVar14 = &local_144;
            sVar7 = __ctype_get_mb_cur_max();
            pmVar3 = local_138;
            sVar9 = strnlen1((char *)local_138,sVar7);
            iter = (mbuiter_multi *)&local_124;
            local_130 = rpl_mbrtowc((wchar_t *)iter,(char *)pmVar3,sVar9,(mbstate_t *)pmVar14);
            if (local_130 != 0xffffffffffffffff) {
              if (local_130 == 0xfffffffffffffffe) {
                local_130 = strlen((char *)local_138);
                local_128 = '\0';
                local_13c = '\x01';
                goto LAB_0011bd76;
              }
              if (local_130 == 0) {
                local_130 = 1;
                if (*(char *)&local_138->__count != '\0') goto LAB_0011c0bd;
                if (local_124 != 0) goto LAB_0011bfaa;
              }
              local_128 = '\x01';
              iVar6 = mbsinit(pmVar14);
              if (iVar6 != 0) {
                local_148 = '\0';
              }
              local_13c = '\x01';
              goto LAB_0011bd65;
            }
            local_130 = 1;
            local_128 = '\0';
            local_13c = '\x01';
            goto LAB_0011bd76;
          }
LAB_0011bb9b:
          bVar5 = knuth_morris_pratt_multibyte(param_1,param_2,&local_190);
          pbVar8 = local_190;
          if (bVar5 != 0) goto LAB_0011b2c4;
        }
        local_1a0 = uVar12;
        if ((char)local_e8 == '\0') goto LAB_0011b929;
      }
      uVar13 = uVar12 + 1;
      if (local_168 == '\0') goto LAB_0011b929;
      sVar7 = sStack240;
      if (uStack228 == local_164) goto LAB_0011b487;
LAB_0011b79a:
      local_f8 = local_f8 + sVar7;
      local_1c0 = local_1c0 + 1;
      uVar12 = uVar13;
      uVar1 = uStack252;
      goto LAB_0011b3d0;
    }
    goto LAB_0011b2c4;
  }
  bVar5 = *(byte *)&param_2->__count;
  pbVar8 = param_1;
  if (bVar5 != 0) {
    bVar10 = *param_1;
    if (bVar10 != 0) {
      uVar15 = 0;
      uVar13 = 0;
      uVar12 = 0;
      bVar4 = 1;
      pmVar14 = param_2;
      while( true ) {
        uVar15 = uVar15 + 1;
        uVar11 = uVar13 + 1;
        haystack = param_1 + 1;
        if (bVar5 == bVar10) {
          bVar10 = *(byte *)((long)&param_2->__count + 1);
          pbVar8 = param_1;
          if (bVar10 == 0) goto LAB_0011b2c4;
          while( true ) {
            lVar2 = uVar11 - uVar13;
            if (param_1[lVar2] == 0) goto LAB_0011b32d;
            uVar11 = uVar11 + 1;
            if (param_1[lVar2] != bVar10) break;
            bVar10 = *(byte *)((long)param_2 + (uVar11 - uVar13));
            if (bVar10 == 0) goto LAB_0011b2c4;
          }
        }
        uVar13 = uVar11;
        if (*haystack == 0) break;
        bVar10 = 9 < uVar15 & bVar4;
        if ((bVar10 != 0) && (bVar4 = bVar10, uVar15 * 5 <= uVar13)) {
          if (pmVar14 != (mbstate_t *)0x0) {
            sVar7 = strnlen((char *)pmVar14,uVar13 - uVar12);
            pmVar14 = (mbstate_t *)((long)&pmVar14->__count + sVar7);
            uVar12 = uVar13;
            if (*(char *)&pmVar14->__count != '\0') goto LAB_0011b210;
          }
          sVar7 = strlen((char *)param_2);
          bVar4 = knuth_morris_pratt(haystack,(uchar *)param_2,sVar7,&local_190);
          pbVar8 = local_190;
          if ((_Bool)bVar4 != false) goto LAB_0011b2c4;
          pmVar14 = (mbstate_t *)0x0;
        }
LAB_0011b210:
        bVar10 = *haystack;
        param_1 = haystack;
      }
    }
LAB_0011b32d:
    pbVar8 = (byte *)0x0;
  }
LAB_0011b2c4:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return pbVar8;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
LAB_0011bfaa:
  mbuiter_multi_next(iter);
LAB_0011bfb0:
  local_168 = '\x01';
  iVar6 = mbsinit(pmVar14);
  if (iVar6 != 0) {
    local_188 = 0;
  }
  goto LAB_0011b2b5;
}

