
VALUE * eval6(_Bool evaluate)

{
  mbstate_t *__ps;
  long lVar1;
  char *pcVar2;
  char *pcVar3;
  _Bool _Var4;
  char cVar5;
  int iVar6;
  VALUE *pVVar7;
  VALUE *pVVar8;
  VALUE *v;
  size_t sVar9;
  size_t sVar10;
  size_t sVar11;
  size_t sVar12;
  size_t sVar13;
  ulong uVar14;
  size_t sVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  char *pcVar18;
  VALUE *pVVar19;
  mbuiter_multi *iter_00;
  long in_FS_OFFSET;
  char *local_120;
  char *s;
  mbui_iterator_t iter_1;
  mbui_iterator_t aiter;
  mbui_iterator_t iter;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  _Var4 = nextarg("+");
  if (_Var4 != false) {
    require_more_args();
LAB_00103b3d:
    pcVar2 = *args;
    args = args + 1;
    pVVar19 = str_value(pcVar2);
    goto LAB_00103b06;
  }
  _Var4 = nextarg("length");
  if (_Var4 != false) {
    pVVar7 = eval6(evaluate);
    tostring(pVVar7);
    sVar10 = mbslen(*(char **)&pVVar7->u);
    pVVar19 = (VALUE *)xmalloc(0x18);
    pVVar19->type = integer;
    mpz_init_set_ui((__mpz_struct *)&pVVar19->u,sVar10);
    freev(pVVar7);
    goto LAB_00103b06;
  }
  _Var4 = nextarg("match");
  if (_Var4 == false) {
    _Var4 = nextarg("index");
    if (_Var4 == false) {
      _Var4 = nextarg("substr");
      if (_Var4 != false) {
        pVVar7 = eval6(evaluate);
        pVVar8 = eval6(evaluate);
        v = eval6(evaluate);
        tostring(pVVar7);
        cVar5 = toarith(pVVar8);
        if ((cVar5 == '\0') || (cVar5 = toarith(v), cVar5 == '\0')) {
          pVVar19 = str_value("");
        }
        else {
          sVar9 = getsize((__mpz_struct *)&pVVar8->u);
          sVar10 = getsize((__mpz_struct *)&v->u);
          pcVar2 = *(char **)&pVVar7->u;
          sVar11 = strlen(pcVar2);
          sVar12 = __ctype_get_mb_cur_max();
          sVar13 = sVar11;
          if (1 < sVar12) {
            sVar13 = mbslen(pcVar2);
          }
          if (((sVar13 < sVar9) || (sVar9 == 0)) || (0xfffffffffffffffd < sVar10 - 1)) {
            s = xstrdup("");
          }
          else {
            uVar14 = (sVar13 - sVar9) + 1;
            if (uVar14 <= sVar10) {
              sVar10 = uVar14;
            }
            sVar13 = __ctype_get_mb_cur_max();
            if (sVar13 != 1) {
              s = (char *)xmalloc(sVar11 + 1);
              uVar14 = 1;
              iter.in_shift = false;
              iter.state = 0;
              local_120 = s;
              iter.cur.ptr = pcVar2;
              do {
                iter.next_done = false;
                if (iter.in_shift == false) {
                  if ((*(uint *)(is_basic_table + (ulong)((byte)*iter.cur.ptr >> 5) * 4) >>
                       (*iter.cur.ptr & 0x1fU) & 1) == 0) {
                    iVar6 = mbsinit((mbstate_t *)&iter.state);
                    if (iVar6 != 0) {
                      iter.in_shift = true;
                      goto with_shift;
                    }
                    goto LAB_001041a4;
                  }
                  iter.cur.bytes = 1;
                  iter.cur.wc = (wchar_t)*iter.cur.ptr;
                  iter.cur.wc_valid = true;
LAB_0010398d:
                  iter.next_done = true;
                  if (iter.cur.wc == 0) goto LAB_0010416b;
                }
                else {
with_shift:
                  sVar13 = __ctype_get_mb_cur_max();
                  pcVar2 = iter.cur.ptr;
                  sVar15 = strnlen1(iter.cur.ptr,sVar13);
                  iter_00 = (mbuiter_multi *)&iter.cur.wc;
                  iter.cur.bytes = rpl_mbrtowc((wchar_t *)iter_00,pcVar2,sVar15,&iter.state);
                  if (iter.cur.bytes == 0xffffffffffffffff) {
                    iter.cur.bytes = 1;
                    iter.cur.wc_valid = false;
                  }
                  else {
                    if (iter.cur.bytes != 0xfffffffffffffffe) {
                      if (iter.cur.bytes == 0) {
                        iter.cur.bytes = 1;
                        if (*iter.cur.ptr != '\0') goto LAB_00104202;
                        if (iter.cur.wc != 0) goto LAB_001041fd;
                      }
                      iter.cur.wc_valid = true;
                      iVar6 = mbsinit((mbstate_t *)&iter.state);
                      if (iVar6 != 0) {
                        iter.in_shift = false;
                      }
                      goto LAB_0010398d;
                    }
                    iter.cur.bytes = strlen(iter.cur.ptr);
                    iter.cur.wc_valid = false;
                  }
                }
                sVar15 = iter.cur.bytes;
                pcVar2 = iter.cur.ptr;
                iter.next_done = true;
                if (sVar10 == 0) goto LAB_0010416b;
                if (sVar9 <= uVar14) {
                  sVar10 = sVar10 - 1;
                  local_120 = (char *)mempcpy(local_120,iter.cur.ptr,iter.cur.bytes);
                }
                iter.cur.ptr = pcVar2 + sVar15;
                uVar14 = uVar14 + 1;
              } while( true );
            }
            s = (char *)xmalloc(sVar10 + 1);
            local_120 = (char *)mempcpy(s,pcVar2 + (sVar9 - 1),sVar10);
LAB_0010416b:
            *local_120 = '\0';
          }
          pVVar19 = str_value(s);
          rpl_free(s);
        }
        freev(pVVar7);
        freev(pVVar8);
        freev(v);
        goto LAB_00103b06;
      }
      require_more_args();
      _Var4 = nextarg("(");
      if (_Var4 != false) {
        pVVar19 = eval(evaluate);
        if (*args == (char *)0x0) {
          uVar16 = quotearg_n_style(0,8,args[-1]);
          uVar17 = dcgettext(0,"syntax error: expecting \')\' after %s",5);
                    /* WARNING: Subroutine does not return */
          error(2,0,uVar17,uVar16);
        }
        _Var4 = nextarg(")");
        if (_Var4 == false) {
          uVar16 = quotearg_n_style(0,8,*args);
          uVar17 = dcgettext(0,"syntax error: expecting \')\' instead of %s",5);
                    /* WARNING: Subroutine does not return */
          error(2,0,uVar17,uVar16);
        }
        goto LAB_00103b06;
      }
      _Var4 = nextarg(")");
      if (_Var4 != false) {
        uVar16 = dcgettext(0,"syntax error: unexpected \')\'",5);
                    /* WARNING: Subroutine does not return */
        error(2,0,uVar16);
      }
      goto LAB_00103b3d;
    }
    pVVar8 = eval6(evaluate);
    pVVar7 = eval6(evaluate);
    tostring(pVVar8);
    tostring(pVVar7);
    pcVar2 = *(char **)&pVVar7->u;
    if (*pcVar2 == '\0') {
LAB_00103b95:
      uVar14 = 0;
    }
    else {
      pcVar3 = *(char **)&pVVar8->u;
      sVar13 = __ctype_get_mb_cur_max();
      if (1 < sVar13) {
        iter_1.in_shift = false;
        uVar14 = 0;
        iter_1.state = 0;
        iter_1.cur.ptr = pcVar3;
LAB_00103d02:
        iter_1.next_done = false;
        if ((*(uint *)(is_basic_table + (ulong)((byte)*iter_1.cur.ptr >> 5) * 4) >>
             (*iter_1.cur.ptr & 0x1fU) & 1) == 0) {
          iVar6 = mbsinit((mbstate_t *)&iter_1.state);
          if (iVar6 != 0) {
            iter_1.in_shift = true;
            goto with_shift;
          }
LAB_001041a4:
                    /* WARNING: Subroutine does not return */
          __assert_fail("mbsinit (&iter->state)","./lib/mbuiter.h",0x8f,"mbuiter_multi_next");
        }
        iter_1.cur.bytes = 1;
        iter_1.cur.wc = (wchar_t)*iter_1.cur.ptr;
        iter_1.cur.wc_valid = true;
        iter_1.next_done = true;
        if (*iter_1.cur.ptr != '\0') {
          uVar14 = uVar14 + 1;
          while( true ) {
            pcVar3 = iter_1.cur.ptr;
            iter_1.next_done = true;
            pcVar18 = mbschr(pcVar2,(int)*iter_1.cur.ptr);
            if (pcVar18 != (char *)0x0) break;
            iter_1.cur.ptr = pcVar3;
            sVar10 = 1;
LAB_00103d68:
            iter_1.cur.ptr = iter_1.cur.ptr + sVar10;
            iter_1.next_done = false;
            if (iter_1.in_shift == false) goto LAB_00103d02;
with_shift:
            sVar13 = __ctype_get_mb_cur_max();
            pcVar3 = iter_1.cur.ptr;
            sVar10 = strnlen1(iter_1.cur.ptr,sVar13);
            iter_1.cur.bytes = rpl_mbrtowc(&iter_1.cur.wc,pcVar3,sVar10,&iter_1.state);
            if (iter_1.cur.bytes == 0xffffffffffffffff) {
              iter_1.cur.wc_valid = false;
              uVar14 = uVar14 + 1;
              iter_1.cur.bytes = 1;
            }
            else {
              if (iter_1.cur.bytes == 0xfffffffffffffffe) {
                iter_1.cur.bytes = strlen(iter_1.cur.ptr);
                iter_1.cur.wc_valid = false;
              }
              else {
                if (iter_1.cur.bytes == 0) {
                  iter_1.cur.bytes = 1;
                  if (*iter_1.cur.ptr != '\0') goto LAB_00104202;
                  iter_00 = (mbuiter_multi *)iter_1.cur.ptr;
                  if (iter_1.cur.wc != 0) goto LAB_001041fd;
                }
                iter_1.cur.wc_valid = true;
                iVar6 = mbsinit((mbstate_t *)&iter_1.state);
                if (iVar6 != 0) {
                  iter_1.in_shift = false;
                }
                iter_1.next_done = true;
                if (iter_1.cur.wc == 0) goto LAB_00103b95;
              }
              iter_1.next_done = true;
              uVar14 = uVar14 + 1;
              if (iter_1.cur.bytes != 1) {
                __ps = &aiter.state;
                aiter.in_shift = false;
                aiter.state = 0;
                aiter.cur.ptr = pcVar2;
                do {
                  aiter.next_done = false;
                  if (aiter.in_shift == false) {
                    if ((*(uint *)(is_basic_table + (ulong)((byte)*aiter.cur.ptr >> 5) * 4) >>
                         (*aiter.cur.ptr & 0x1fU) & 1) == 0) {
                      iVar6 = mbsinit((mbstate_t *)__ps);
                      if (iVar6 != 0) {
                        aiter.in_shift = true;
                        goto with_shift;
                      }
                      goto LAB_001041a4;
                    }
                    aiter.cur.bytes = 1;
                    aiter.cur.wc = (wchar_t)*aiter.cur.ptr;
                    aiter.cur.wc_valid = true;
LAB_00103ed4:
                    aiter.next_done = true;
                    sVar10 = iter_1.cur.bytes;
                    if (aiter.cur.wc == 0) goto LAB_00103d68;
                    if (iter_1.cur.wc_valid == false) goto LAB_00103fb6;
                    sVar10 = aiter.cur.bytes;
                    if (iter_1.cur.wc == aiter.cur.wc) goto LAB_00103b98;
                  }
                  else {
with_shift:
                    sVar13 = __ctype_get_mb_cur_max();
                    pcVar3 = aiter.cur.ptr;
                    sVar10 = strnlen1(aiter.cur.ptr,sVar13);
                    aiter.cur.bytes = rpl_mbrtowc(&aiter.cur.wc,pcVar3,sVar10,__ps);
                    if (aiter.cur.bytes == 0xffffffffffffffff) {
                      aiter.cur.bytes = 1;
                      aiter.cur.wc_valid = false;
                    }
                    else {
                      if (aiter.cur.bytes != 0xfffffffffffffffe) {
                        if (aiter.cur.bytes == 0) {
                          aiter.cur.bytes = 1;
                          if (*aiter.cur.ptr != '\0') goto LAB_00104202;
                          iter_00 = (mbuiter_multi *)(ulong)(uint)aiter.cur.wc;
                          if (aiter.cur.wc != 0) goto LAB_001041fd;
                        }
                        aiter.cur.wc_valid = true;
                        iVar6 = mbsinit((mbstate_t *)__ps);
                        if (iVar6 != 0) {
                          aiter.in_shift = false;
                        }
                        goto LAB_00103ed4;
                      }
                      aiter.cur.bytes = strlen(aiter.cur.ptr);
                      aiter.cur.wc_valid = false;
                    }
LAB_00103fb6:
                    sVar10 = aiter.cur.bytes;
                    aiter.next_done = true;
                    if ((aiter.cur.bytes == iter_1.cur.bytes) &&
                       (iVar6 = memcmp(aiter.cur.ptr,iter_1.cur.ptr,aiter.cur.bytes), iVar6 == 0))
                    goto LAB_00103b98;
                  }
                  aiter.cur.ptr = aiter.cur.ptr + sVar10;
                } while( true );
              }
            }
          }
          goto LAB_00103b98;
        }
        goto LAB_00103b95;
      }
      sVar13 = strcspn(pcVar3,pcVar2);
      if (pcVar3[sVar13] == '\0') goto LAB_00103b95;
      uVar14 = sVar13 + 1;
    }
LAB_00103b98:
    pVVar19 = (VALUE *)xmalloc(0x18);
    pVVar19->type = integer;
    mpz_init_set_ui((__mpz_struct *)&pVVar19->u,uVar14);
    freev(pVVar8);
  }
  else {
    pVVar8 = eval6(evaluate);
    pVVar7 = eval6(evaluate);
    pVVar19 = pVVar8;
    if (evaluate != false) {
      pVVar19 = docolon(pVVar8,pVVar7);
      freev(pVVar8);
    }
  }
  freev(pVVar7);
LAB_00103b06:
  if (lVar1 == *(long *)(in_FS_OFFSET + 0x28)) {
    return pVVar19;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
LAB_001041fd:
  mbuiter_multi_next(iter_00);
LAB_00104202:
                    /* WARNING: Subroutine does not return */
  __assert_fail("*iter->cur.ptr == \'\\0\'","./lib/mbuiter.h",0xab,"mbuiter_multi_next");
}

