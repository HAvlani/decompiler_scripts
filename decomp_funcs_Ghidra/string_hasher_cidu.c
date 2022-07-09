
size_t string_hasher_ci(void *data,size_t n_buckets)

{
  long lVar1;
  char *pcVar2;
  wint_t wVar3;
  int iVar4;
  size_t maxlen;
  size_t n;
  ulong uVar5;
  long in_FS_OFFSET;
  mbui_iterator_t iter;
  
  uVar5 = 0;
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  iter.in_shift = false;
  iter.state = 0;
  iter.cur.ptr = (char *)data;
  do {
    iter.next_done = false;
    if (iter.in_shift == false) {
      if ((*(uint *)(is_basic_table + (ulong)((byte)*iter.cur.ptr >> 5) * 4) >>
           (*iter.cur.ptr & 0x1fU) & 1) == 0) {
        iVar4 = mbsinit((mbstate_t *)&iter.state);
        if (iVar4 == 0) {
                    /* WARNING: Subroutine does not return */
          __assert_fail("mbsinit (&iter->state)","lib/mbuiter.h",0x8f,"mbuiter_multi_next");
        }
        iter.in_shift = true;
        goto with_shift;
      }
      iter.cur.bytes = 1;
      iter.cur.wc = (wchar_t)*iter.cur.ptr;
      iter.cur.wc_valid = true;
      wVar3 = iter.cur.wc;
      if (*iter.cur.ptr == '\0') goto LAB_00106753;
    }
    else {
with_shift:
      maxlen = __ctype_get_mb_cur_max();
      pcVar2 = iter.cur.ptr;
      n = strnlen1(iter.cur.ptr,maxlen);
      iter.cur.bytes = rpl_mbrtowc(&iter.cur.wc,pcVar2,n,&iter.state);
      wVar3 = iter.cur.wc;
      if (iter.cur.bytes == 0xffffffffffffffff) {
        iter.cur.bytes = 1;
        iter.cur.wc_valid = false;
      }
      else if (iter.cur.bytes == 0xfffffffffffffffe) {
        iter.cur.bytes = strlen(iter.cur.ptr);
        iter.cur.wc_valid = false;
        wVar3 = iter.cur.wc;
      }
      else {
        if (iter.cur.bytes == 0) {
          iter.cur.bytes = 1;
          if (*iter.cur.ptr != '\0') {
                    /* WARNING: Subroutine does not return */
            __assert_fail("*iter->cur.ptr == \'\\0\'","lib/mbuiter.h",0xab,"mbuiter_multi_next");
          }
          if (iter.cur.wc != 0) {
                    /* WARNING: Subroutine does not return */
            __assert_fail("iter->cur.wc == 0","lib/mbuiter.h",0xac,"mbuiter_multi_next");
          }
        }
        iter.cur.wc_valid = true;
        iVar4 = mbsinit((mbstate_t *)&iter.state);
        if (iVar4 != 0) {
          iter.in_shift = false;
        }
        if (wVar3 == 0) {
LAB_00106753:
          iter.next_done = true;
          if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
            __stack_chk_fail();
          }
          return uVar5 % n_buckets;
        }
      }
    }
    pcVar2 = iter.cur.ptr;
    iter.next_done = true;
    if (iter.cur.wc_valid == false) {
      wVar3 = (wint_t)*iter.cur.ptr;
    }
    else {
      wVar3 = towlower(wVar3);
    }
    iter.cur.ptr = pcVar2 + iter.cur.bytes;
    uVar5 = uVar5 * 0x1f + (long)(int)wVar3;
  } while( true );
}

