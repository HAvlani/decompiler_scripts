
mbuiter_multi * mbsstr_trimmed_wordbounded(byte *param_1,char *param_2)

{
  byte bVar1;
  bool bVar2;
  byte *pbVar3;
  char cVar4;
  int iVar5;
  byte *__s;
  ushort **ppuVar6;
  byte *pbVar7;
  size_t sVar8;
  size_t sVar9;
  mbuiter_multi *__s_00;
  size_t sVar10;
  mbuiter_multi *pmVar11;
  mbuiter_multi *iter;
  wint_t wVar12;
  long in_FS_OFFSET;
  bool local_c9;
  mbstate_t local_c4;
  char local_bc;
  byte *local_b8;
  size_t local_b0;
  char local_a8;
  undefined local_a4 [32];
  mbstate_t local_84;
  char local_7c;
  byte *local_78;
  size_t local_70;
  char local_68;
  int local_64 [9];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  __s = (byte *)trim2(param_2,2);
  bVar1 = *param_1;
joined_r0x0010f8aa:
  while ((bVar1 != 0 && (pbVar7 = (byte *)mbsstr(param_1,__s), pbVar7 != (byte *)0x0))) {
    sVar8 = __ctype_get_mb_cur_max();
    if (1 < sVar8) {
      bVar2 = false;
      local_c4 = (mbstate_t)0x0;
      local_b8 = param_1;
      if (param_1 < pbVar7) {
        do {
          local_bc = '\0';
          if (bVar2) {
with_shift:
            sVar8 = __ctype_get_mb_cur_max();
            pbVar3 = local_b8;
            sVar9 = strnlen1((char *)local_b8,sVar8);
            local_b0 = rpl_mbrtowc((wchar_t *)local_a4,(char *)pbVar3,sVar9,(mbstate_t *)&local_c4);
            wVar12 = local_a4._0_4_;
            pbVar3 = local_b8;
            if (local_b0 == 0xffffffffffffffff) {
              local_a8 = '\0';
              local_b0 = 1;
              local_b8 = pbVar3;
            }
            else {
              if (local_b0 != 0xfffffffffffffffe) {
                if (local_b0 == 0) {
                  local_b0 = 1;
                  if (*local_b8 != 0) goto LAB_001100d6;
                  if (local_a4._0_4_ != 0) goto LAB_001100f5;
                }
                local_a8 = '\x01';
                iVar5 = mbsinit(&local_c4);
                if (iVar5 != 0) {
                  bVar2 = false;
                }
                goto LAB_0010f9a3;
              }
              local_b0 = strlen((char *)local_b8);
              local_a8 = '\0';
              local_b8 = pbVar3;
              wVar12 = local_a4._0_4_;
            }
          }
          else {
            if ((*(uint *)(is_basic_table + (ulong)(*local_b8 >> 5) * 4) >> (*local_b8 & 0x1f) & 1)
                == 0) {
              iVar5 = mbsinit(&local_c4);
              if (iVar5 != 0) {
                bVar2 = true;
                goto with_shift;
              }
              goto LAB_001100b7;
            }
            local_b0 = 1;
            wVar12 = (wint_t)(char)*local_b8;
            local_a8 = '\x01';
            local_a4._0_4_ = wVar12;
LAB_0010f9a3:
            local_bc = '\x01';
            if (wVar12 == 0) goto mbsstr_trimmed_wordbounded_cold;
          }
          local_b8 = local_b8 + local_b0;
          local_bc = 0;
        } while (local_b8 < pbVar7);
        if (local_a8 != '\0') {
          iVar5 = iswalnum(wVar12);
          local_c9 = iVar5 == 0;
          goto LAB_0010fab7;
        }
      }
      local_c9 = true;
LAB_0010fab7:
      bVar2 = false;
      local_c4 = (mbstate_t)0x0;
      local_a4[28] = '\0';
      local_84 = (mbstate_t)0x0;
      local_b8 = pbVar7;
      local_78 = __s;
      do {
        local_7c = '\0';
        local_bc = '\0';
        if (local_a4[28] == '\0') {
          if ((*(uint *)(is_basic_table + (ulong)(*local_78 >> 5) * 4) >> (*local_78 & 0x1f) & 1) ==
              0) {
            iVar5 = mbsinit(&local_84);
            if (iVar5 != 0) {
              local_a4[28] = '\x01';
              goto with_shift;
            }
            goto LAB_001100b7;
          }
          local_70 = 1;
          local_64[0] = (int)(char)*local_78;
          local_68 = '\x01';
joined_r0x0010fb2f:
          if (local_64[0] == 0) goto LAB_0010fc49;
        }
        else {
with_shift:
          sVar8 = __ctype_get_mb_cur_max();
          pbVar3 = local_78;
          sVar9 = strnlen1((char *)local_78,sVar8);
          local_70 = rpl_mbrtowc(local_64,(char *)pbVar3,sVar9,(mbstate_t *)&local_84);
          if (local_70 == 0xffffffffffffffff) {
            local_70 = 1;
            local_68 = '\0';
          }
          else {
            if (local_70 != 0xfffffffffffffffe) {
              if (local_70 == 0) {
                local_70 = 1;
                if (*local_78 != 0) goto LAB_001100d6;
                if (local_64[0] != 0) {
LAB_001100f5:
                    /* WARNING: Subroutine does not return */
                  __assert_fail("iter->cur.wc == 0","lib/mbuiter.h",0xac,"mbuiter_multi_next");
                }
              }
              local_68 = '\x01';
              iVar5 = mbsinit(&local_84);
              if (iVar5 != 0) {
                local_a4[28] = '\0';
              }
              goto joined_r0x0010fb2f;
            }
            local_70 = strlen((char *)local_78);
            local_68 = '\0';
          }
        }
        local_7c = '\x01';
        if (local_bc == '\0') {
          if (!bVar2) {
            if ((*(uint *)(is_basic_table + (ulong)(*local_b8 >> 5) * 4) >> (*local_b8 & 0x1f) & 1)
                != 0) {
              local_b0 = 1;
              local_a4._0_4_ = (wint_t)(char)*local_b8;
              local_a8 = '\x01';
              local_bc = '\x01';
              goto LAB_0010fb84;
            }
            iVar5 = mbsinit(&local_c4);
            if (iVar5 == 0) goto LAB_001100b7;
            bVar2 = true;
          }
          sVar8 = __ctype_get_mb_cur_max();
          pbVar3 = local_b8;
          sVar9 = strnlen1((char *)local_b8,sVar8);
          local_b0 = rpl_mbrtowc((wchar_t *)local_a4,(char *)pbVar3,sVar9,(mbstate_t *)&local_c4);
          if (local_b0 == 0xffffffffffffffff) {
            local_b0 = 1;
            local_a8 = '\0';
          }
          else {
            if (local_b0 != 0xfffffffffffffffe) {
              if (local_b0 == 0) {
                local_b0 = 1;
                if (*local_b8 != 0) goto LAB_001100d6;
                if (local_a4._0_4_ != 0) goto LAB_001100f5;
              }
              local_a8 = '\x01';
              iVar5 = mbsinit(&local_c4);
              if (iVar5 != 0) {
                bVar2 = false;
              }
              local_bc = '\x01';
              goto LAB_0010fb84;
            }
            local_b0 = strlen((char *)local_b8);
            local_a8 = '\0';
          }
        }
        else if (local_a8 != '\0') {
LAB_0010fb84:
          if (local_a4._0_4_ == 0) {
mbsstr_trimmed_wordbounded_cold:
                    /* WARNING: Subroutine does not return */
            abort();
          }
        }
        local_b8 = local_b8 + local_b0;
        local_78 = local_78 + local_70;
      } while( true );
    }
    sVar8 = strlen((char *)__s);
    if (((pbVar7 <= param_1) ||
        (ppuVar6 = __ctype_b_loc(), (*(byte *)(*ppuVar6 + pbVar7[-1]) & 8) == 0)) &&
       ((bVar1 = pbVar7[sVar8], bVar1 == 0 ||
        (ppuVar6 = __ctype_b_loc(), (*(byte *)(*ppuVar6 + bVar1) & 8) == 0)))) {
      local_c9 = true;
      goto LAB_0010fd1b;
    }
    if (*pbVar7 == 0) break;
    bVar1 = pbVar7[1];
    param_1 = pbVar7 + 1;
  }
LAB_0010fd16:
  local_c9 = false;
LAB_0010fd1b:
  rpl_free(__s);
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return (mbuiter_multi *)(ulong)local_c9;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
LAB_0010fc49:
  local_7c = '\x01';
  if (local_bc == '\0') {
    if (!bVar2) {
      if ((*(uint *)(is_basic_table + (ulong)(*local_b8 >> 5) * 4) >> (*local_b8 & 0x1f) & 1) != 0)
      {
        local_b0 = 1;
        local_a4._0_4_ = (wint_t)(char)*local_b8;
        local_a8 = '\x01';
        local_bc = '\x01';
        wVar12 = local_a4._0_4_;
        goto LAB_0010fc98;
      }
      iVar5 = mbsinit(&local_c4);
      if (iVar5 == 0) goto LAB_001100b7;
    }
    sVar8 = __ctype_get_mb_cur_max();
    pbVar3 = local_b8;
    sVar9 = strnlen1((char *)local_b8,sVar8);
    iter = (mbuiter_multi *)local_a4;
    local_b0 = rpl_mbrtowc((wchar_t *)iter,(char *)pbVar3,sVar9,(mbstate_t *)&local_c4);
    wVar12 = local_a4._0_4_;
    if (local_b0 == 0xffffffffffffffff) {
      local_b0 = 1;
      local_a8 = '\0';
      local_bc = '\x01';
    }
    else {
      if (local_b0 != 0xfffffffffffffffe) {
        if (local_b0 == 0) {
          local_b0 = 1;
          if (*local_b8 != 0) goto LAB_001100d6;
          if (local_a4._0_4_ != 0) goto LAB_00110119;
        }
        local_a8 = '\x01';
        mbsinit(&local_c4);
        local_bc = '\x01';
        goto LAB_0010fc98;
      }
      local_b0 = strlen((char *)local_b8);
      local_a8 = '\0';
      local_bc = '\x01';
      wVar12 = local_a4._0_4_;
    }
LAB_0010fc9c:
    if ((local_a8 == '\0') || (iVar5 = iswalnum(wVar12), iVar5 == 0)) goto LAB_0010fcae;
  }
  else {
    wVar12 = local_a4._0_4_;
    if (local_a8 == '\0') goto LAB_0010fc9c;
LAB_0010fc98:
    if (wVar12 != 0) goto LAB_0010fc9c;
LAB_0010fcae:
    if (local_c9 != false) goto LAB_0010fd1b;
  }
  local_c4 = (mbstate_t)0x0;
  local_bc = '\0';
  if ((*(uint *)(is_basic_table + (ulong)(*pbVar7 >> 5) * 4) >> (*pbVar7 & 0x1f) & 1) == 0) {
    local_b8 = pbVar7;
    iVar5 = mbsinit(&local_c4);
    if (iVar5 == 0) {
LAB_001100b7:
                    /* WARNING: Subroutine does not return */
      __assert_fail("mbsinit (&iter->state)","lib/mbuiter.h",0x8f,"mbuiter_multi_next");
    }
    sVar8 = __ctype_get_mb_cur_max();
    pbVar3 = local_b8;
    sVar9 = strnlen1((char *)local_b8,sVar8);
    iter = (mbuiter_multi *)local_a4;
    local_b0 = rpl_mbrtowc((wchar_t *)iter,(char *)pbVar3,sVar9,(mbstate_t *)&local_c4);
    if (local_b0 == 0xffffffffffffffff) {
      local_b0 = 1;
      goto LAB_0010fd05;
    }
    if (local_b0 == 0xfffffffffffffffe) {
      local_b0 = strlen((char *)local_b8);
      goto LAB_0010fd05;
    }
    if (local_b0 == 0) {
      local_b0 = 1;
      if (*local_b8 != 0) {
LAB_001100d6:
                    /* WARNING: Subroutine does not return */
        __assert_fail("*iter->cur.ptr == \'\\0\'","lib/mbuiter.h",0xab,"mbuiter_multi_next");
      }
      if (local_a4._0_4_ != 0) {
LAB_00110119:
        local_b0 = 1;
        mbuiter_multi_next(iter);
        __s_00 = (mbuiter_multi *)dcgettext(0,iter,5);
        if ((iter != __s_00) && (cVar4 = mbsstr_trimmed_wordbounded(__s_00,iter), cVar4 == '\0')) {
          sVar8 = strlen((char *)__s_00);
          sVar10 = strlen(&iter->in_shift);
          pmVar11 = (mbuiter_multi *)xmalloc(sVar8 + 4 + sVar10);
          __sprintf_chk(pmVar11,1,0xffffffffffffffff,"%s (%s)",__s_00,iter);
          return pmVar11;
        }
        return __s_00;
      }
    }
  }
  else {
    local_b0 = 1;
    local_a4._0_4_ = (wint_t)(char)*pbVar7;
    local_b8 = pbVar7;
  }
  local_a8 = '\x01';
  if (local_a4._0_4_ == 0) goto LAB_0010fd16;
LAB_0010fd05:
  param_1 = pbVar7 + local_b0;
  bVar1 = *param_1;
  goto joined_r0x0010f8aa;
}

