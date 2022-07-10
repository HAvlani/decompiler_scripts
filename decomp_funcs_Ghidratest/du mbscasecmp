
int mbscasecmp(char *s1,char *s2)

{
  byte bVar1;
  long lVar2;
  ushort *puVar3;
  char *pcVar4;
  wchar_t __wc;
  wint_t wVar5;
  wint_t wVar6;
  int iVar7;
  size_t sVar8;
  size_t sVar9;
  ushort **ppuVar10;
  __int32_t **pp_Var11;
  byte bVar12;
  mbuiter_multi *iter;
  long in_FS_OFFSET;
  mbui_iterator_t iter1;
  mbui_iterator_t iter2;
  
  lVar2 = *(long *)(in_FS_OFFSET + 0x28);
  if (s1 == s2) {
    iVar7 = 0;
  }
  else {
    sVar8 = __ctype_get_mb_cur_max();
    if (1 < sVar8) {
      iter1.in_shift = false;
      iter1.state = 0;
      iter2.in_shift = false;
      iter2.state = 0;
      iter1.cur.ptr = s1;
      iter2.cur.ptr = s2;
LAB_0010de8d:
      iter2.next_done = false;
      iter1.next_done = false;
      if (iter1.in_shift != false) {
with_shift:
        sVar8 = __ctype_get_mb_cur_max();
        pcVar4 = iter1.cur.ptr;
        sVar9 = strnlen1(iter1.cur.ptr,sVar8);
        iter = (mbuiter_multi *)&iter1.cur.wc;
        iter1.cur.bytes = rpl_mbrtowc((wchar_t *)iter,pcVar4,sVar9,&iter1.state);
        if (iter1.cur.bytes != 0xffffffffffffffff) {
          if (iter1.cur.bytes == 0xfffffffffffffffe) {
            iter1.cur.bytes = strlen(iter1.cur.ptr);
            iter1.cur.wc_valid = false;
            goto LAB_0010dde4;
          }
          if (iter1.cur.bytes != 0) {
LAB_0010df07:
            iter1.cur.wc_valid = true;
            iVar7 = mbsinit((mbstate_t *)&iter1.state);
            if (iVar7 != 0) {
              iter1.in_shift = false;
            }
            goto LAB_0010ddd8;
          }
          iter1.cur.bytes = 1;
          if (*iter1.cur.ptr != '\0') goto LAB_0010e3cc;
          if (iter1.cur.wc == 0) goto LAB_0010df07;
LAB_0010e3eb:
          mbuiter_multi_next(iter);
          goto LAB_0010e3f0;
        }
        iter1.cur.bytes = 1;
        iter1.cur.wc_valid = false;
LAB_0010dde4:
        iter1.next_done = true;
        if (iter2.next_done == false) {
          if (iter2.in_shift == false) {
            if ((*(uint *)(is_basic_table + (ulong)((byte)*iter2.cur.ptr >> 5) * 4) >>
                 (*iter2.cur.ptr & 0x1fU) & 1) != 0) {
              iter2.cur.bytes = 1;
              iter2.cur.wc = (wchar_t)*iter2.cur.ptr;
              iter2.cur.wc_valid = true;
              iter2.next_done = true;
              goto LAB_0010de37;
            }
            iVar7 = mbsinit((mbstate_t *)&iter2.state);
            if (iVar7 == 0) goto LAB_0010e3ad;
            iter2.in_shift = true;
          }
          sVar8 = __ctype_get_mb_cur_max();
          pcVar4 = iter2.cur.ptr;
          sVar9 = strnlen1(iter2.cur.ptr,sVar8);
          iter = (mbuiter_multi *)&iter2.cur.wc;
          iter2.cur.bytes = rpl_mbrtowc((wchar_t *)iter,pcVar4,sVar9,&iter2.state);
          if (iter2.cur.bytes == 0xffffffffffffffff) {
            iter2.cur.bytes = 1;
            iter2.cur.wc_valid = false;
            iter2.next_done = true;
          }
          else {
            if (iter2.cur.bytes != 0xfffffffffffffffe) {
              if (iter2.cur.bytes == 0) {
                iter2.cur.bytes = 1;
                if (*iter2.cur.ptr != '\0') goto LAB_0010e3cc;
                if (iter2.cur.wc != 0) goto LAB_0010e3eb;
              }
              iter2.cur.wc_valid = true;
              iVar7 = mbsinit((mbstate_t *)&iter2.state);
              if (iVar7 != 0) {
                iter2.in_shift = false;
              }
              iter2.next_done = true;
              goto LAB_0010de37;
            }
            iter2.cur.bytes = strlen(iter2.cur.ptr);
            iter2.cur.wc_valid = false;
            iter2.next_done = true;
          }
LAB_0010e073:
          if (iter1.cur.wc_valid != false) goto LAB_0010e2d0;
          if (iter1.cur.bytes != iter2.cur.bytes) {
            if (iter1.cur.bytes < iter2.cur.bytes) {
              iVar7 = memcmp(iter1.cur.ptr,iter2.cur.ptr,iter1.cur.bytes);
              if (0 < iVar7) {
LAB_0010e170:
                iVar7 = 1;
                goto LAB_0010df98;
              }
            }
            else {
              iVar7 = memcmp(iter1.cur.ptr,iter2.cur.ptr,iter2.cur.bytes);
              if (-1 < iVar7) goto LAB_0010e170;
            }
            goto LAB_0010e2d0;
          }
          iVar7 = memcmp(iter1.cur.ptr,iter2.cur.ptr,iter1.cur.bytes);
        }
        else {
          if (iter2.cur.wc_valid == false) goto LAB_0010e073;
LAB_0010de37:
          __wc = iter2.cur.wc;
          if (iter2.cur.wc == 0) {
            if (iter1.next_done == false) {
              if (iter1.in_shift == false) {
                if ((*(uint *)(is_basic_table + (ulong)((byte)*iter1.cur.ptr >> 5) * 4) >>
                     (*iter1.cur.ptr & 0x1fU) & 1) != 0) {
                  iter1.cur.bytes = 1;
                  iter1.cur.wc = (wchar_t)*iter1.cur.ptr;
                  iter1.cur.wc_valid = true;
                  iter1.next_done = true;
                  goto LAB_0010e266;
                }
                iVar7 = mbsinit((mbstate_t *)&iter1.state);
                if (iVar7 == 0) goto LAB_0010e3ad;
                iter1.in_shift = true;
              }
              sVar8 = __ctype_get_mb_cur_max();
              pcVar4 = iter1.cur.ptr;
              sVar9 = strnlen1(iter1.cur.ptr,sVar8);
              iter = (mbuiter_multi *)&iter1.cur.wc;
              iter1.cur.bytes = rpl_mbrtowc((wchar_t *)iter,pcVar4,sVar9,&iter1.state);
              if ((iter1.cur.bytes != 0xffffffffffffffff) && (iter1.cur.bytes != 0xfffffffffffffffe)
                 ) {
                if (iter1.cur.bytes == 0) {
                  iter1.cur.bytes = 1;
                  if (*iter1.cur.ptr != '\0') goto LAB_0010e3cc;
                  if (iter1.cur.wc != 0) goto LAB_0010e3eb;
                }
                iter1.cur.wc_valid = true;
                iVar7 = mbsinit((mbstate_t *)&iter1.state);
                if (iVar7 != 0) {
                  iter1.in_shift = false;
                }
                iter1.next_done = true;
                goto LAB_0010e266;
              }
            }
            else if (iter1.cur.wc_valid != false) {
LAB_0010e266:
              if (iter1.cur.wc == 0) goto LAB_0010e272;
            }
            goto LAB_0010e170;
          }
          if (iter1.cur.wc_valid == false) goto LAB_0010e170;
          wVar5 = towlower(iter1.cur.wc);
          wVar6 = towlower(__wc);
          iVar7 = wVar5 - wVar6;
        }
        if (iVar7 != 0) goto LAB_0010df98;
        iter1.cur.ptr = iter1.cur.ptr + iter1.cur.bytes;
        iter2.cur.ptr = iter2.cur.ptr + iter2.cur.bytes;
        goto LAB_0010de8d;
      }
      if ((*(uint *)(is_basic_table + (ulong)((byte)*iter1.cur.ptr >> 5) * 4) >>
           (*iter1.cur.ptr & 0x1fU) & 1) == 0) {
        iVar7 = mbsinit((mbstate_t *)&iter1.state);
        if (iVar7 == 0) goto LAB_0010e3ad;
        iter1.in_shift = true;
        goto with_shift;
      }
      iter1.cur.bytes = 1;
      iter1.cur.wc = (wchar_t)*iter1.cur.ptr;
      iter1.cur.wc_valid = true;
LAB_0010ddd8:
      iter1.next_done = true;
      if (iter1.cur.wc != 0) goto LAB_0010dde4;
LAB_0010e272:
      if (iter2.next_done == false) {
        if (iter2.in_shift == false) {
          if ((*(uint *)(is_basic_table + (ulong)((byte)*iter2.cur.ptr >> 5) * 4) >>
               (*iter2.cur.ptr & 0x1fU) & 1) != 0) {
            iter2.cur.bytes = 1;
            iter2.cur.wc = (wchar_t)*iter2.cur.ptr;
            iter2.cur.wc_valid = true;
            goto LAB_0010e2c2;
          }
          iVar7 = mbsinit((mbstate_t *)&iter2.state);
          if (iVar7 == 0) {
LAB_0010e3ad:
                    /* WARNING: Subroutine does not return */
            __assert_fail("mbsinit (&iter->state)","lib/mbuiter.h",0x8f,"mbuiter_multi_next");
          }
          iter2.in_shift = true;
        }
        sVar8 = __ctype_get_mb_cur_max();
        pcVar4 = iter2.cur.ptr;
        sVar9 = strnlen1(iter2.cur.ptr,sVar8);
        iter = (mbuiter_multi *)&iter2.cur.wc;
        iter2.cur.bytes = rpl_mbrtowc((wchar_t *)iter,pcVar4,sVar9,&iter2.state);
        if (iter2.cur.bytes < 0xfffffffffffffffe) {
          if (iter2.cur.bytes == 0) {
            iter2.cur.bytes = 1;
            if (*iter2.cur.ptr != '\0') {
LAB_0010e3cc:
                    /* WARNING: Subroutine does not return */
              __assert_fail("*iter->cur.ptr == \'\\0\'","lib/mbuiter.h",0xab,"mbuiter_multi_next");
            }
            if (iter2.cur.wc != 0) goto LAB_0010e3eb;
          }
          iter2.cur.wc_valid = true;
LAB_0010e2c2:
          iVar7 = iter2.cur.wc;
          if (iter2.cur.wc != 0) goto LAB_0010e2d0;
          goto LAB_0010df98;
        }
      }
      else if (iter2.cur.wc_valid != false) goto LAB_0010e2c2;
LAB_0010e2d0:
      iVar7 = -1;
      goto LAB_0010df98;
    }
    ppuVar10 = __ctype_b_loc();
    puVar3 = *ppuVar10;
    do {
      bVar12 = *s1;
      if ((*(byte *)((long)puVar3 + (ulong)bVar12 * 2 + 1) & 1) != 0) {
        pp_Var11 = __ctype_tolower_loc();
        bVar12 = *(byte *)(*pp_Var11 + bVar12);
      }
      bVar1 = *s2;
      if ((*(byte *)((long)puVar3 + (ulong)bVar1 * 2 + 1) & 1) != 0) {
        pp_Var11 = __ctype_tolower_loc();
        bVar1 = *(byte *)(*pp_Var11 + bVar1);
      }
      if (bVar12 == 0) {
        iVar7 = -(uint)bVar1;
        goto LAB_0010df98;
      }
      s1 = (char *)((byte *)s1 + 1);
      s2 = (char *)((byte *)s2 + 1);
    } while (bVar12 == bVar1);
    iVar7 = (uint)bVar12 - (uint)bVar1;
  }
LAB_0010df98:
  if (lVar2 == *(long *)(in_FS_OFFSET + 0x28)) {
    return iVar7;
  }
LAB_0010e3f0:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

