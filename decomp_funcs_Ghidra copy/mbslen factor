
size_t mbslen(char *string)

{
  long lVar1;
  char *s;
  int iVar2;
  size_t sVar3;
  size_t maxlen;
  size_t n;
  long in_FS_OFFSET;
  mbui_iterator_t iter;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  sVar3 = __ctype_get_mb_cur_max();
  if (sVar3 < 2) {
    sVar3 = strlen(string);
LAB_00115e27:
    if (lVar1 == *(long *)(in_FS_OFFSET + 0x28)) {
      return sVar3;
    }
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  sVar3 = 0;
  iter.in_shift = false;
  iter.state = 0;
  iter.cur.ptr = string;
  do {
    iter.next_done = false;
    if (iter.in_shift == false) {
      if ((*(uint *)(is_basic_table + (ulong)((byte)*iter.cur.ptr >> 5) * 4) >>
           (*iter.cur.ptr & 0x1fU) & 1) == 0) {
        iVar2 = mbsinit((mbstate_t *)&iter.state);
        if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
          __assert_fail("mbsinit (&iter->state)","lib/mbuiter.h",0x8f,"mbuiter_multi_next");
        }
        iter.in_shift = true;
        goto with_shift;
      }
      iter.cur.bytes = 1;
      iter.cur.wc = (wchar_t)*iter.cur.ptr;
      iter.cur.wc_valid = true;
LAB_00115eaa:
      if (iter.cur.wc == 0) goto LAB_00115e27;
    }
    else {
with_shift:
      maxlen = __ctype_get_mb_cur_max();
      s = iter.cur.ptr;
      n = strnlen1(iter.cur.ptr,maxlen);
      iter.cur.bytes = rpl_mbrtowc(&iter.cur.wc,s,n,&iter.state);
      if (iter.cur.bytes == 0xffffffffffffffff) {
        iter.cur.bytes = 1;
        iter.cur.wc_valid = false;
      }
      else {
        if (iter.cur.bytes != 0xfffffffffffffffe) {
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
          iVar2 = mbsinit((mbstate_t *)&iter.state);
          if (iVar2 != 0) {
            iter.in_shift = false;
          }
          goto LAB_00115eaa;
        }
        iter.cur.bytes = strlen(iter.cur.ptr);
        iter.cur.wc_valid = false;
      }
    }
    iter.cur.ptr = iter.cur.ptr + iter.cur.bytes;
    sVar3 = sVar3 + 1;
  } while( true );
}

