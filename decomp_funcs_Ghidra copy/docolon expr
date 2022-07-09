
VALUE * docolon(VALUE *sv,VALUE *pv)

{
  long lVar1;
  int iVar2;
  size_t sVar3;
  char *pcVar4;
  ulong uVar5;
  VALUE *pVVar6;
  size_t n;
  undefined8 uVar7;
  int *piVar8;
  char *pcVar9;
  mbuiter_multi *iter_00;
  ulong x;
  long in_FS_OFFSET;
  re_registers re_regs;
  re_pattern_buffer re_buffer;
  mbui_iterator_t iter;
  char fastmap [256];
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  tostring();
  tostring(pv);
  pcVar4 = *(char **)&pv->u;
  re_buffer.fastmap = fastmap;
  re_regs.num_regs = 0;
  re_regs.start = (regoff_t *)0x0;
  re_regs.end = (regoff_t *)0x0;
  re_buffer.buffer = (re_dfa_t *)0x0;
  re_buffer.allocated = 0;
  re_buffer.translate = (uchar *)0x0;
  rpl_re_syntax_options = 0x2c6;
  sVar3 = strlen(pcVar4);
  pcVar4 = rpl_re_compile_pattern(pcVar4,sVar3,&re_buffer);
  if (pcVar4 != (char *)0x0) {
                    /* WARNING: Subroutine does not return */
    error(2,0,"%s",pcVar4);
  }
  pcVar4 = *(char **)&sv->u;
  re_buffer._56_1_ = re_buffer._56_1_ & 0x7f;
  sVar3 = strlen(pcVar4);
  uVar5 = rpl_re_match(&re_buffer,pcVar4,sVar3,0,&re_regs);
  if ((long)uVar5 < 0) {
    if (uVar5 != 0xffffffffffffffff) {
      uVar7 = dcgettext(0,"error in regular expression matcher",5);
      iVar2 = 0x4b;
      if (uVar5 == 0xfffffffffffffffe) {
        piVar8 = __errno_location();
        iVar2 = *piVar8;
      }
                    /* WARNING: Subroutine does not return */
      error(3,iVar2,uVar7);
    }
    if (re_buffer.re_nsub == 0) {
      pVVar6 = (VALUE *)xmalloc(0x18);
      pVVar6->type = integer;
      mpz_init_set_ui((__mpz_struct *)&pVVar6->u,0);
      goto joined_r0x001034e5;
    }
  }
  else {
    if (re_buffer.re_nsub == 0) {
      sVar3 = __ctype_get_mb_cur_max();
      x = uVar5;
      if (sVar3 != 1) {
        pcVar4 = *(char **)&sv->u;
        iter.in_shift = false;
        iter.state = 0;
        x = re_buffer.re_nsub;
        iter.cur.ptr = pcVar4;
        do {
          iter.next_done = false;
          if (iter.in_shift == false) {
            if ((*(uint *)(is_basic_table + (ulong)((byte)*iter.cur.ptr >> 5) * 4) >>
                 (*iter.cur.ptr & 0x1fU) & 1) == 0) {
              iVar2 = mbsinit((mbstate_t *)&iter.state);
              if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
                __assert_fail("mbsinit (&iter->state)","./lib/mbuiter.h",0x8f,"mbuiter_multi_next");
              }
              iter.in_shift = true;
              goto with_shift;
            }
            iter.cur.bytes = 1;
            iter.cur.wc = (wchar_t)*iter.cur.ptr;
            iter.cur.wc_valid = true;
LAB_0010358f:
            pcVar9 = iter.cur.ptr;
            if (iter.cur.wc == 0) break;
          }
          else {
with_shift:
            sVar3 = __ctype_get_mb_cur_max();
            pcVar9 = iter.cur.ptr;
            n = strnlen1(iter.cur.ptr,sVar3);
            iter_00 = (mbuiter_multi *)&iter.cur.wc;
            iter.cur.bytes = rpl_mbrtowc((wchar_t *)iter_00,pcVar9,n,&iter.state);
            pcVar9 = iter.cur.ptr;
            if (iter.cur.bytes == 0xffffffffffffffff) {
              iter.cur.bytes = 1;
              iter.cur.wc_valid = false;
            }
            else {
              if (iter.cur.bytes != 0xfffffffffffffffe) {
                if (iter.cur.bytes == 0) {
                  iter.cur.bytes = 1;
                  if (*iter.cur.ptr != '\0') {
LAB_00103777:
                    /* WARNING: Subroutine does not return */
                    __assert_fail("*iter->cur.ptr == \'\\0\'","./lib/mbuiter.h",0xab,
                                  "mbuiter_multi_next");
                  }
                  if (iter.cur.wc != 0) {
                    mbuiter_multi_next(iter_00);
                    goto LAB_00103777;
                  }
                }
                iter.cur.wc_valid = true;
                iVar2 = mbsinit((mbstate_t *)&iter.state);
                if (iVar2 != 0) {
                  iter.in_shift = false;
                }
                goto LAB_0010358f;
              }
              iter.cur.bytes = strlen(iter.cur.ptr);
              iter.cur.wc_valid = false;
            }
          }
          if (uVar5 <= (ulong)((long)pcVar9 - (long)pcVar4)) break;
          iter.cur.ptr = pcVar9 + iter.cur.bytes;
          x = x + 1;
        } while( true );
      }
      pVVar6 = (VALUE *)xmalloc(0x18);
      pVVar6->type = integer;
      mpz_init_set_ui((__mpz_struct *)&pVVar6->u,x);
      goto joined_r0x001034e5;
    }
    if (-1 < re_regs.end[1]) {
      *(undefined *)(*(long *)&sv->u + re_regs.end[1]) = 0;
      pVVar6 = str_value((char *)(re_regs.start[1] + *(long *)&sv->u));
      goto joined_r0x001034e5;
    }
  }
  pVVar6 = str_value("");
joined_r0x001034e5:
  if (re_regs.num_regs != 0) {
    rpl_free(re_regs.start);
    rpl_free(re_regs.end);
  }
  re_buffer.fastmap = (char *)0x0;
  rpl_regfree(&re_buffer);
  if (lVar1 == *(long *)(in_FS_OFFSET + 0x28)) {
    return pVVar6;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

