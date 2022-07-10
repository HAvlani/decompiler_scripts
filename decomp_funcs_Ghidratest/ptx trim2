
char * trim2(char *s,int how)

{
  byte bVar1;
  long lVar2;
  ushort *puVar3;
  char *pcVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  uint *__dest;
  size_t sVar8;
  ushort **ppuVar9;
  uint *puVar10;
  uint *puVar11;
  size_t sVar12;
  mbiter_multi *iter;
  long in_FS_OFFSET;
  bool bVar13;
  char cVar14;
  uint *local_90;
  mbi_iterator_t i;
  
  lVar2 = *(long *)(in_FS_OFFSET + 0x28);
  __dest = (uint *)strdup(s);
  if (__dest == (uint *)0x0) {
                    /* WARNING: Subroutine does not return */
    xalloc_die();
  }
  sVar8 = __ctype_get_mb_cur_max();
  if (sVar8 < 2) {
    puVar10 = __dest;
    if (how != 0) {
      bVar1 = *(byte *)__dest;
      if (bVar1 != 0) {
        ppuVar9 = __ctype_b_loc();
        do {
          if ((*(byte *)((long)*ppuVar9 + (ulong)bVar1 * 2 + 1) & 0x20) == 0) break;
          bVar1 = *(byte *)((long)puVar10 + 1);
          puVar10 = (uint *)((long)puVar10 + 1);
        } while (bVar1 != 0);
      }
      sVar8 = strlen((char *)puVar10);
      memmove(__dest,puVar10,sVar8 + 1);
      puVar10 = __dest;
      if (how == 1) goto LAB_00118bc9;
    }
    do {
      puVar11 = puVar10;
      uVar5 = *puVar11 + 0xfefefeff & ~*puVar11;
      uVar6 = uVar5 & 0x80808080;
      puVar10 = puVar11 + 1;
    } while (uVar6 == 0);
    bVar13 = (uVar5 & 0x8080) == 0;
    if (bVar13) {
      uVar6 = uVar6 >> 0x10;
    }
    if (bVar13) {
      puVar10 = (uint *)((long)puVar11 + 6);
    }
    puVar10 = (uint *)((long)puVar10 + (-4 - (ulong)CARRY1((byte)uVar6,(byte)uVar6)));
    if (__dest <= puVar10) {
      ppuVar9 = __ctype_b_loc();
      puVar3 = *ppuVar9;
      do {
        if ((*(byte *)((long)puVar3 + (ulong)*(byte *)puVar10 * 2 + 1) & 0x20) == 0) break;
        *(byte *)puVar10 = 0;
        puVar10 = (uint *)((long)puVar10 + -1);
      } while (__dest <= puVar10);
    }
  }
  else {
    puVar10 = __dest;
    if (how != 0) {
      do {
        puVar11 = puVar10;
        uVar5 = *puVar11 + 0xfefefeff & ~*puVar11;
        uVar6 = uVar5 & 0x80808080;
        puVar10 = puVar11 + 1;
      } while (uVar6 == 0);
      i.in_shift = false;
      bVar13 = (uVar5 & 0x8080) == 0;
      i.next_done = false;
      i.state = 0;
      if (bVar13) {
        uVar6 = uVar6 >> 0x10;
      }
      if (bVar13) {
        puVar10 = (uint *)((long)puVar11 + 6);
      }
      i.limit = (char *)((long)puVar10 + (-3 - (ulong)CARRY1((byte)uVar6,(byte)uVar6)));
      puVar10 = __dest;
      i.cur.ptr = (char *)__dest;
      if (__dest < i.limit) {
        do {
          pcVar4 = i.limit;
          i.next_done = false;
          i.cur.ptr = (char *)puVar10;
          if (i.in_shift == false) {
            if ((*(uint *)(is_basic_table + (ulong)(*(byte *)puVar10 >> 5) * 4) >>
                 (*(byte *)puVar10 & 0x1f) & 1) == 0) {
              iVar7 = mbsinit((mbstate_t *)&i.state);
              if (iVar7 != 0) {
                i.in_shift = true;
                goto with_shift;
              }
              goto LAB_00118f3a;
            }
            i.cur.bytes = 1;
            i.cur.wc = (wchar_t)(char)*(byte *)puVar10;
            i.cur.wc_valid = true;
          }
          else {
with_shift:
            iter = (mbiter_multi *)&i.cur.wc;
            i.cur.bytes = rpl_mbrtowc((wchar_t *)iter,(char *)puVar10,(long)pcVar4 - (long)puVar10,
                                      &i.state);
            puVar10 = (uint *)i.cur.ptr;
            if (i.cur.bytes == 0xffffffffffffffff) {
              i.cur.bytes = 1;
              i.cur.wc_valid = false;
              i.next_done = true;
              break;
            }
            if (i.cur.bytes == 0xfffffffffffffffe) {
              i.cur.wc_valid = false;
              i.next_done = true;
              i.cur.bytes = (long)i.limit - (long)i.cur.ptr;
              break;
            }
            if (i.cur.bytes == 0) {
              i.cur.bytes = 1;
              if (*i.cur.ptr != '\0') goto LAB_00118f16;
              if (i.cur.wc != 0) goto LAB_00118f35;
            }
            i.cur.wc_valid = true;
            iVar7 = mbsinit((mbstate_t *)&i.state);
            if (iVar7 != 0) {
              i.in_shift = false;
            }
          }
          i.next_done = true;
          iVar7 = iswspace(i.cur.wc);
          if (iVar7 == 0) break;
          puVar10 = (uint *)((long)puVar10 + i.cur.bytes);
          i.next_done = false;
          i.cur.ptr = (char *)puVar10;
        } while (puVar10 < i.limit);
      }
      sVar8 = strlen((char *)puVar10);
      memmove(__dest,puVar10,sVar8 + 1);
      puVar10 = __dest;
      if (how == 1) goto LAB_00118bc9;
    }
    do {
      puVar11 = puVar10;
      uVar5 = *puVar11 + 0xfefefeff & ~*puVar11;
      uVar6 = uVar5 & 0x80808080;
      puVar10 = puVar11 + 1;
    } while (uVar6 == 0);
    i.in_shift = false;
    bVar13 = (uVar5 & 0x8080) == 0;
    i.next_done = false;
    i.state = 0;
    if (bVar13) {
      uVar6 = uVar6 >> 0x10;
    }
    if (bVar13) {
      puVar10 = (uint *)((long)puVar11 + 6);
    }
    puVar10 = (uint *)((long)puVar10 + (-3 - (ulong)CARRY1((byte)uVar6,(byte)uVar6)));
    cVar14 = '\0';
    puVar11 = __dest;
    i.limit = (char *)puVar10;
    i.cur.ptr = (char *)__dest;
    if (__dest < puVar10) {
      do {
        i.next_done = false;
        i.cur.ptr = (char *)puVar11;
        if (i.in_shift == false) {
          if ((*(uint *)(is_basic_table + (ulong)(*(byte *)puVar11 >> 5) * 4) >>
               (*(byte *)puVar11 & 0x1f) & 1) == 0) {
            iVar7 = mbsinit((mbstate_t *)&i.state);
            if (iVar7 != 0) {
              i.in_shift = true;
              goto with_shift;
            }
            goto LAB_00118f3a;
          }
          i.cur.bytes = 1;
          i.cur.wc = (wchar_t)(char)*(byte *)puVar11;
          sVar12 = 1;
          i.cur.wc_valid = true;
        }
        else {
with_shift:
          iter = (mbiter_multi *)&i.cur.wc;
          i.cur.bytes = rpl_mbrtowc((wchar_t *)iter,(char *)puVar11,(long)puVar10 - (long)puVar11,
                                    &i.state);
          puVar11 = (uint *)i.cur.ptr;
          if (i.cur.bytes == 0xffffffffffffffff) {
            i.cur.wc_valid = false;
            sVar12 = 1;
            i.cur.bytes = 1;
          }
          else if (i.cur.bytes == 0xfffffffffffffffe) {
            i.cur.wc_valid = false;
            sVar12 = (long)i.limit - (long)i.cur.ptr;
            i.cur.bytes = sVar12;
          }
          else {
            if (i.cur.bytes == 0) {
              i.cur.bytes = 1;
              if (*i.cur.ptr != '\0') {
LAB_00118f16:
                i.cur.bytes = 1;
                    /* WARNING: Subroutine does not return */
                __assert_fail("*iter->cur.ptr == \'\\0\'","lib/mbiter.h",0xa2,"mbiter_multi_next");
              }
              if (i.cur.wc != 0) goto LAB_00118f35;
            }
            sVar12 = i.cur.bytes;
            i.cur.wc_valid = true;
            iVar7 = mbsinit((mbstate_t *)&i.state);
            if (iVar7 != 0) {
              i.in_shift = false;
            }
          }
        }
        puVar10 = (uint *)i.limit;
        i.next_done = true;
        if (cVar14 == '\0') {
          cVar14 = '\x01';
          if (i.cur.wc_valid != false) {
            iVar7 = iswspace(i.cur.wc);
            cVar14 = iVar7 == 0;
          }
        }
        else if (cVar14 == '\x01') {
          if ((i.cur.wc_valid != false) && (iVar7 = iswspace(i.cur.wc), iVar7 != 0)) {
            cVar14 = '\x02';
            local_90 = puVar11;
          }
        }
        else if ((cVar14 == '\x02') && (i.cur.wc_valid != false)) {
          iVar7 = iswspace(i.cur.wc);
          if (iVar7 == 0) {
            cVar14 = '\x01';
          }
        }
        else {
          cVar14 = '\x01';
        }
        puVar11 = (uint *)(sVar12 + (long)puVar11);
        i.next_done = false;
      } while (puVar11 < puVar10);
      i.cur.ptr = (char *)puVar11;
      if (cVar14 == '\x02') {
        *(byte *)local_90 = 0;
      }
    }
  }
LAB_00118bc9:
  if (lVar2 == *(long *)(in_FS_OFFSET + 0x28)) {
    return (char *)__dest;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
LAB_00118f35:
  i.cur.bytes = 1;
  mbiter_multi_next(iter);
LAB_00118f3a:
                    /* WARNING: Subroutine does not return */
  __assert_fail("mbsinit (&iter->state)","lib/mbiter.h",0x87,"mbiter_multi_next");
}

