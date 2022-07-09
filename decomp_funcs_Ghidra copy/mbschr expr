
char * mbschr(char *string,int c)

{
  byte bVar1;
  long lVar2;
  int iVar3;
  char *pcVar4;
  size_t sVar5;
  size_t n;
  byte *pbVar6;
  long in_FS_OFFSET;
  mbui_iterator_t iter;
  
  lVar2 = *(long *)(in_FS_OFFSET + 0x28);
  sVar5 = __ctype_get_mb_cur_max();
  if ((sVar5 < 2) || ((byte)c < 0x30)) {
    if (lVar2 == *(long *)(in_FS_OFFSET + 0x28)) {
      pcVar4 = (char *)(*(code *)PTR_strchr_00128e40)(string,c);
      return pcVar4;
    }
LAB_0010e17b:
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  iter.in_shift = false;
  iter.state = 0;
  iter.cur.ptr = string;
LAB_0010e006:
  iter.next_done = false;
  if (iter.in_shift == false) {
    if ((*(uint *)(is_basic_table + (ulong)((byte)*iter.cur.ptr >> 5) * 4) >>
         (*iter.cur.ptr & 0x1fU) & 1) == 0) {
      iVar3 = mbsinit((mbstate_t *)&iter.state);
      if (iVar3 == 0) {
                    /* WARNING: Subroutine does not return */
        __assert_fail("mbsinit (&iter->state)","lib/mbuiter.h",0x8f,"mbuiter_multi_next");
      }
      iter.in_shift = true;
      goto with_shift;
    }
    iter.cur.bytes = 1;
    iter.cur.wc = (wchar_t)*iter.cur.ptr;
    iter.cur.wc_valid = true;
    pbVar6 = (byte *)iter.cur.ptr;
    if (*iter.cur.ptr == '\0') {
LAB_0010e158:
      pbVar6 = (byte *)0x0;
LAB_0010e110:
      iter.next_done = true;
      if (lVar2 == *(long *)(in_FS_OFFSET + 0x28)) {
        return (char *)pbVar6;
      }
      goto LAB_0010e17b;
    }
LAB_0010dfe9:
    bVar1 = *pbVar6;
joined_r0x0010e100:
    if (bVar1 == (byte)c) goto LAB_0010e110;
  }
  else {
with_shift:
    sVar5 = __ctype_get_mb_cur_max();
    pcVar4 = iter.cur.ptr;
    n = strnlen1(iter.cur.ptr,sVar5);
    iter.cur.bytes = rpl_mbrtowc(&iter.cur.wc,pcVar4,n,&iter.state);
    pbVar6 = (byte *)iter.cur.ptr;
    if (iter.cur.bytes == 0xffffffffffffffff) {
      iter.cur.wc_valid = false;
      iter.cur.bytes = 1;
      bVar1 = *iter.cur.ptr;
      goto joined_r0x0010e100;
    }
    if (iter.cur.bytes == 0xfffffffffffffffe) {
      iter.cur.bytes = strlen(iter.cur.ptr);
      iter.cur.wc_valid = false;
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
      iVar3 = mbsinit((mbstate_t *)&iter.state);
      if (iVar3 != 0) {
        iter.in_shift = false;
      }
      pbVar6 = (byte *)iter.cur.ptr;
      if (iter.cur.wc == 0) goto LAB_0010e158;
    }
    if (iter.cur.bytes == 1) goto LAB_0010dfe9;
  }
  iter.cur.ptr = (char *)(pbVar6 + iter.cur.bytes);
  goto LAB_0010e006;
}

