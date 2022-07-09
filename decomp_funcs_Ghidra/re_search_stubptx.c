
regoff_t re_search_stub(re_pattern_buffer *bufp,char *string,Idx length,Idx start,regoff_t range,
                       Idx stop,re_registers *regs,_Bool ret_len)

{
  re_dfa_t *prVar1;
  bool bVar2;
  byte bVar3;
  reg_errcode_t rVar4;
  regmatch_t *pmatch;
  regoff_t *prVar5;
  regoff_t *prVar6;
  ulong uVar7;
  ulong nmatch;
  size_t __size;
  long lVar8;
  char cVar9;
  long last_start;
  uint local_3c;
  
  lVar8 = start + range;
  prVar1 = bufp->buffer;
  if ((start < 0) || (length < start)) {
    return -1;
  }
  last_start = length;
  if (((length < lVar8) || ((-1 < range && (lVar8 < start)))) ||
     ((-1 < lVar8 && ((last_start = lVar8, -1 < range || (lVar8 < start)))))) {
    bVar2 = PTR_pthread_mutexattr_gettype_00124ff0 != (undefined *)0x0 ||
            PTR_thrd_exit_00124fe0 != (undefined *)0x0;
    if (PTR_pthread_mutexattr_gettype_00124ff0 != (undefined *)0x0 ||
        PTR_thrd_exit_00124fe0 != (undefined *)0x0) goto LAB_0011802e;
LAB_0011804e:
    local_3c = (byte)bufp->field_0x38 >> 5 & 3;
    if (((start < last_start) && (bufp->fastmap != (char *)0x0)) && ((bufp->field_0x38 & 8) == 0)) {
      rpl_re_compile_fastmap(bufp);
    }
  }
  else {
    last_start = 0;
    bVar2 = PTR_pthread_mutexattr_gettype_00124ff0 != (undefined *)0x0 ||
            PTR_thrd_exit_00124fe0 != (undefined *)0x0;
    if (bVar2) {
LAB_0011802e:
      pthread_mutex_lock((pthread_mutex_t *)&prVar1->lock);
      bVar2 = true;
      goto LAB_0011804e;
    }
    local_3c = (byte)bufp->field_0x38 >> 5 & 3;
  }
  if ((regs == (re_registers *)0x0) || ((bufp->field_0x38 & 0x10) != 0)) {
LAB_00118238:
    __size = 0x10;
    nmatch = 1;
    regs = (re_registers *)0x0;
  }
  else {
    if (((bufp->field_0x38 & 6) == 4) && (nmatch = regs->num_regs, nmatch <= bufp->re_nsub)) {
      if ((long)nmatch < 1) goto LAB_00118238;
    }
    else {
      nmatch = bufp->re_nsub + 1;
    }
    __size = nmatch << 4;
  }
  pmatch = (regmatch_t *)malloc(__size);
  if (pmatch == (regmatch_t *)0x0) {
    lVar8 = -2;
    goto out;
  }
  rVar4 = re_search_internal(bufp,string,length,start,last_start,stop,nmatch,pmatch,local_3c);
  if (rVar4 == _REG_NOERROR) {
    if (regs != (re_registers *)0x0) {
      uVar7 = nmatch + 1;
      bVar3 = (byte)bufp->field_0x38 >> 1;
      if ((bVar3 & 3) == 0) {
        prVar5 = (regoff_t *)malloc(uVar7 * 8);
        regs->start = prVar5;
        if (prVar5 != (regoff_t *)0x0) {
          prVar6 = (regoff_t *)malloc(uVar7 * 8);
          regs->end = prVar6;
          if (prVar6 != (regoff_t *)0x0) {
            regs->num_regs = uVar7;
            cVar9 = '\x01';
            goto LAB_0011816c;
          }
          rpl_free(prVar5);
        }
LAB_001183a1:
        cVar9 = '\0';
      }
      else {
        cVar9 = '\x02';
        if (((bVar3 & 3) == 1) && (cVar9 = '\x01', regs->num_regs < uVar7)) {
          prVar5 = (regoff_t *)realloc(regs->start,uVar7 * 8);
          if (prVar5 == (regoff_t *)0x0) goto LAB_001183a1;
          prVar6 = (regoff_t *)realloc(regs->end,uVar7 * 8);
          if (prVar6 == (regoff_t *)0x0) {
            cVar9 = '\0';
            rpl_free(prVar5);
            goto LAB_001181dd;
          }
          regs->start = prVar5;
          regs->end = prVar6;
          regs->num_regs = uVar7;
        }
LAB_0011816c:
        if ((long)nmatch < 1) {
          nmatch = 0;
        }
        else {
          prVar5 = regs->start;
          prVar6 = regs->end;
          lVar8 = 0;
          do {
            *(undefined8 *)((long)prVar5 + lVar8) =
                 *(undefined8 *)((long)&pmatch->rm_so + lVar8 * 2);
            *(undefined8 *)((long)prVar6 + lVar8) =
                 *(undefined8 *)((long)&pmatch->rm_eo + lVar8 * 2);
            lVar8 = lVar8 + 8;
          } while (lVar8 != nmatch * 8);
        }
        if (nmatch <= regs->num_regs && regs->num_regs != nmatch) {
          prVar5 = regs->end;
          prVar6 = regs->start;
          do {
            uVar7 = nmatch + 1;
            prVar5[nmatch] = -1;
            prVar6[nmatch] = -1;
            nmatch = uVar7;
          } while (uVar7 <= regs->num_regs && regs->num_regs != uVar7);
        }
      }
LAB_001181dd:
      bufp->field_0x38 = bufp->field_0x38 & 0xf9 | cVar9 * '\x02';
      if ((cVar9 * '\x02' & 6U) == 0) goto LAB_00118105;
    }
    lVar8 = pmatch->rm_so;
    if (ret_len != false) {
      lVar8 = pmatch->rm_eo - lVar8;
    }
  }
  else {
    lVar8 = -1;
    if (rVar4 != _REG_NOMATCH) {
LAB_00118105:
      lVar8 = -2;
    }
  }
  rpl_free(pmatch);
out:
  if (bVar2) {
    pthread_mutex_unlock((pthread_mutex_t *)&prVar1->lock);
  }
  return lVar8;
}

