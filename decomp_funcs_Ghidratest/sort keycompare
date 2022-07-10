
/* WARNING: Removing unreachable block (ram,0x00108521) */
/* WARNING: Removing unreachable block (ram,0x00108534) */
/* WARNING: Removing unreachable block (ram,0x0010853c) */
/* WARNING: Removing unreachable block (ram,0x00108542) */
/* WARNING: Removing unreachable block (ram,0x00108d0c) */
/* WARNING: Could not reconcile some variable overlaps */

int keycompare(line *a_1,line *b_1)

{
  byte *pbVar1;
  md5_ctx *ctx;
  char cVar2;
  long lVar3;
  char *pcVar4;
  _Bool *p_Var5;
  byte bVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  byte *pbVar11;
  byte *__nptr;
  size_t sVar12;
  ulong uVar13;
  size_t sVar14;
  ulong uVar15;
  byte *pbVar16;
  byte *pbVar17;
  byte *dest;
  ulong len;
  size_t len_00;
  byte *pbVar18;
  ulong uVar19;
  keyfield *pkVar20;
  byte *src;
  long in_FS_OFFSET;
  float10 in_ST0;
  float10 fVar21;
  float10 in_ST1;
  float10 fVar22;
  float10 in_ST2;
  float10 fVar23;
  float10 in_ST3;
  float10 fVar24;
  float10 in_ST4;
  float10 fVar25;
  float10 in_ST5;
  float10 fVar26;
  float10 in_ST6;
  float10 fVar27;
  float10 in_ST7;
  byte local_21ba;
  byte local_21b9;
  undefined local_21b8 [32];
  byte *local_2198;
  byte *local_2190;
  size_t local_2180;
  byte *local_2178;
  char *ea;
  char *eb;
  longdouble a;
  longdouble b;
  uint32_t dig [2] [4];
  md5_ctx s [2];
  char stackbuf [4000];
  char stackbuf_1 [4000];
  
  pbVar16 = (byte *)b_1->keybeg;
  pbVar17 = (byte *)a_1->keylim;
  pbVar11 = (byte *)b_1->keylim;
  lVar3 = *(long *)(in_FS_OFFSET + 0x28);
  __nptr = (byte *)a_1->keybeg;
  pkVar20 = keylist;
LAB_00107e40:
  pcVar4 = pkVar20->translate;
  p_Var5 = pkVar20->ignore;
  if (pbVar17 <= __nptr) {
    pbVar17 = __nptr;
  }
  if (pbVar11 <= pbVar16) {
    pbVar11 = pbVar16;
  }
  len = (long)pbVar17 - (long)__nptr;
  len_00 = (long)pbVar11 - (long)pbVar16;
  if (((hard_LC_COLLATE != false) || ((*(ulong *)&pkVar20->skipsblanks & 0xffffffffff0000) != 0)) ||
     (pkVar20->version != false)) {
    if (((ulong)pcVar4 | (ulong)p_Var5) == 0) {
      local_21ba = *pbVar17;
      *pbVar17 = 0;
      local_21b9 = *pbVar11;
      *pbVar11 = 0;
      pbVar11 = pbVar16;
    }
    else {
      uVar15 = len + 2 + len_00;
      pbVar17 = (byte *)stackbuf;
      local_2198 = (byte *)0x0;
      if (uVar15 < 0xfa1) {
        pbVar11 = (byte *)(stackbuf + len + 1);
        if (len == 0) goto LAB_001084ae;
LAB_001081c1:
        pbVar18 = __nptr + len;
        len = 0;
        do {
          bVar6 = *__nptr;
          if (p_Var5 == (_Bool *)0x0) {
LAB_001081f9:
            bVar6 = pcVar4[bVar6];
LAB_001081db:
            pbVar17[len] = bVar6;
            len = len + 1;
          }
          else if (p_Var5[bVar6] == false) {
            if (pcVar4 != (char *)0x0) goto LAB_001081f9;
            goto LAB_001081db;
          }
          __nptr = __nptr + 1;
        } while (pbVar18 != __nptr);
        pbVar17[len] = 0;
        __nptr = pbVar17;
      }
      else {
        local_21b8._0_10_ = (float10)CONCAT28(local_21b8._8_2_,len);
        pbVar17 = (byte *)xmalloc(uVar15);
        pbVar11 = pbVar17 + len + 1;
        local_2198 = pbVar17;
        if (len != 0) goto LAB_001081c1;
LAB_001084ae:
        *pbVar17 = 0;
        __nptr = pbVar17;
      }
      pbVar17 = pbVar11;
      if (len_00 != 0) {
        pbVar17 = pbVar16 + len_00;
        len_00 = 0;
        do {
          bVar6 = *pbVar16;
          if (p_Var5 == (_Bool *)0x0) {
LAB_00108249:
            bVar6 = pcVar4[bVar6];
LAB_0010822b:
            pbVar11[len_00] = bVar6;
            len_00 = len_00 + 1;
          }
          else if (p_Var5[bVar6] == false) {
            if (pcVar4 != (char *)0x0) goto LAB_00108249;
            goto LAB_0010822b;
          }
          pbVar16 = pbVar16 + 1;
        } while (pbVar17 != pbVar16);
        pbVar17 = pbVar11 + len_00;
      }
      *pbVar17 = 0;
    }
    if (pkVar20->numeric == false) {
      if (pkVar20->general_numeric == false) {
        if (pkVar20->human_numeric == false) {
          if (pkVar20->month == false) {
            if (pkVar20->random == false) {
              if (pkVar20->version == false) {
                fVar21 = in_ST0;
                fVar22 = in_ST1;
                fVar23 = in_ST2;
                fVar24 = in_ST3;
                fVar25 = in_ST4;
                fVar26 = in_ST5;
                fVar27 = in_ST6;
                if (len == 0) {
                  uVar7 = -(uint)(len_00 != 0);
                }
                else {
                  uVar7 = 1;
                  if (len_00 != 0) {
                    local_21b8._0_10_ = (float10)CONCAT28(local_21b8._8_2_,len);
                    uVar7 = xmemcoll0((char *)__nptr,len + 1,(char *)pbVar11,len_00 + 1);
                    fVar21 = in_ST0;
                    fVar22 = in_ST1;
                    fVar23 = in_ST2;
                    fVar24 = in_ST3;
                    fVar25 = in_ST4;
                    fVar26 = in_ST5;
                    fVar27 = in_ST6;
                  }
                }
              }
              else {
                local_21b8._0_10_ = (float10)CONCAT28(local_21b8._8_2_,len);
                uVar7 = filenvercmp((char *)__nptr,len,(char *)pbVar11,len_00);
                fVar21 = in_ST0;
                fVar22 = in_ST1;
                fVar23 = in_ST2;
                fVar24 = in_ST3;
                fVar25 = in_ST4;
                fVar26 = in_ST5;
                fVar27 = in_ST6;
              }
            }
            else {
              s[1].B = random_md5_state.B;
              s[1].C = random_md5_state.C;
              s[1].D = random_md5_state.D;
              s[1].total[0] = random_md5_state.total[0];
              s[1].total[1] = random_md5_state.total[1];
              s[1].buflen = random_md5_state.buflen;
              s[1].buffer[0] = random_md5_state.buffer[0];
              s[1].buffer[1] = random_md5_state.buffer[1];
              s[1].buffer[2] = random_md5_state.buffer[2];
              s[1].buffer[3] = random_md5_state.buffer[3];
              s[1].buffer[4] = random_md5_state.buffer[4];
              s[1].buffer[5] = random_md5_state.buffer[5];
              s[1].buffer[6] = random_md5_state.buffer[6];
              s[1].buffer[7] = random_md5_state.buffer[7];
              s[1].buffer[8] = random_md5_state.buffer[8];
              s[1].buffer._116_8_ = random_md5_state.buffer._116_8_;
              s[1].buffer[31] = random_md5_state.buffer[31];
              s[0].buffer._116_8_ = random_md5_state.buffer._116_8_;
              s[1].buffer[9] = random_md5_state.buffer[9];
              s[1].buffer[10] = random_md5_state.buffer[10];
              s[1].buffer[11] = random_md5_state.buffer[11];
              s[1].buffer[12] = random_md5_state.buffer[12];
              s[1].buffer[13] = random_md5_state.buffer[13];
              s[1].buffer[14] = random_md5_state.buffer[14];
              s[1].buffer[15] = random_md5_state.buffer[15];
              s[1].buffer[16] = random_md5_state.buffer[16];
              s[1].buffer[17] = random_md5_state.buffer[17];
              s[1].buffer[18] = random_md5_state.buffer[18];
              s[1].buffer[19] = random_md5_state.buffer[19];
              s[1].buffer[20] = random_md5_state.buffer[20];
              s[1].buffer[21] = random_md5_state.buffer[21];
              s[1].buffer[22] = random_md5_state.buffer[22];
              s[1].buffer[23] = random_md5_state.buffer[23];
              s[1].buffer[24] = random_md5_state.buffer[24];
              s[1].buffer[25] = random_md5_state.buffer[25];
              s[1].buffer[26] = random_md5_state.buffer[26];
              s[1].buffer[27] = random_md5_state.buffer[27];
              s[1].buffer[28] = random_md5_state.buffer[28];
              s[0].A = random_md5_state.A;
              s[0].B = random_md5_state.B;
              s[0].C = random_md5_state.C;
              s[0].D = random_md5_state.D;
              s[0].total[0] = random_md5_state.total[0];
              s[0].total[1] = random_md5_state.total[1];
              s[0].buflen = random_md5_state.buflen;
              s[0].buffer[0] = random_md5_state.buffer[0];
              s[0].buffer[1] = random_md5_state.buffer[1];
              s[0].buffer[2] = random_md5_state.buffer[2];
              s[0].buffer[3] = random_md5_state.buffer[3];
              s[0].buffer[4] = random_md5_state.buffer[4];
              s[0].buffer[5] = random_md5_state.buffer[5];
              s[0].buffer[6] = random_md5_state.buffer[6];
              s[0].buffer[7] = random_md5_state.buffer[7];
              s[0].buffer[8] = random_md5_state.buffer[8];
              s[0].buffer[9] = random_md5_state.buffer[9];
              s[0].buffer[10] = random_md5_state.buffer[10];
              s[0].buffer[11] = random_md5_state.buffer[11];
              s[0].buffer[12] = random_md5_state.buffer[12];
              s[0].buffer[13] = random_md5_state.buffer[13];
              s[0].buffer[14] = random_md5_state.buffer[14];
              s[0].buffer[15] = random_md5_state.buffer[15];
              s[0].buffer[16] = random_md5_state.buffer[16];
              s[0].buffer[17] = random_md5_state.buffer[17];
              s[0].buffer[18] = random_md5_state.buffer[18];
              s[0].buffer[19] = random_md5_state.buffer[19];
              s[0].buffer[20] = random_md5_state.buffer[20];
              s[0].buffer[21] = random_md5_state.buffer[21];
              s[0].buffer[22] = random_md5_state.buffer[22];
              s[0].buffer[23] = random_md5_state.buffer[23];
              s[0].buffer[24] = random_md5_state.buffer[24];
              s[0].buffer[25] = random_md5_state.buffer[25];
              s[0].buffer[26] = random_md5_state.buffer[26];
              s[0].buffer[27] = random_md5_state.buffer[27];
              s[0].buffer[28] = random_md5_state.buffer[28];
              s._152_8_ = CONCAT44(random_md5_state.A,random_md5_state.buffer[31]);
              if (hard_LC_COLLATE == false) {
                md5_process_bytes(__nptr,len,s);
                md5_finish_ctx(s,dig);
                md5_process_bytes(pbVar11,len_00,s + 1);
                md5_finish_ctx(s + 1,dig[1]);
                uVar7 = memcmp(dig,dig[1],0x10);
                local_2178 = (byte *)0x0;
                if (uVar7 == 0) {
                  local_2178 = (byte *)0x0;
                  pbVar17 = __nptr;
                  local_2190 = pbVar11;
                  local_2180 = len_00;
                  local_21b8._0_8_ = len;
                  goto LAB_00108ae5;
                }
              }
              else {
                pbVar1 = __nptr + len;
                local_2178 = (byte *)0x0;
                pbVar16 = pbVar11 + len_00;
                uVar15 = (len + len_00) * 3 + 2;
                ctx = s + 1;
                local_21b8._0_10_ = (float10)CONCAT28(local_21b8._8_2_,4000);
                uVar10 = 0;
                pbVar17 = (byte *)stackbuf_1;
                pbVar18 = pbVar11;
                src = __nptr;
LAB_00108718:
                if (local_21b8._0_8_ < uVar15) goto LAB_001087f2;
LAB_00108728:
                if (src < pbVar1) goto LAB_0010883d;
LAB_00108733:
                if (pbVar18 < pbVar16) {
                  uVar13 = 0;
                  dest = pbVar17;
                  goto LAB_0010886c;
                }
                uVar13 = 0;
                local_2180 = 0;
                local_2190 = pbVar17;
LAB_0010874e:
                local_21b8._0_8_ = uVar13;
                if (pbVar18 < pbVar16) {
LAB_00108759:
                  do {
                    sVar12 = strlen((char *)pbVar18);
                    pbVar18 = pbVar18 + sVar12 + 1;
                    do {
                      while( true ) {
                        if ((pbVar1 <= src) && (local_21b8._0_8_ = uVar13, pbVar16 <= pbVar18))
                        goto LAB_00108921;
                        md5_process_bytes(pbVar17,uVar13,s);
                        md5_process_bytes(local_2190,local_2180,ctx);
                        if (uVar10 != 0) goto LAB_00108718;
                        uVar19 = local_2180;
                        if (uVar13 < local_2180) {
                          uVar19 = uVar13;
                        }
                        uVar10 = memcmp(pbVar17,local_2190,uVar19);
                        if (uVar10 != 0) goto LAB_00108718;
                        uVar10 = (uint)(local_2180 < uVar13) - (uint)(uVar13 < local_2180);
                        if (uVar15 <= local_21b8._0_8_) goto LAB_00108728;
LAB_001087f2:
                        uVar13 = local_21b8._0_8_ * 3 >> 1;
                        if (uVar13 <= uVar15) {
                          uVar13 = uVar15;
                        }
                        local_21b8._0_10_ = (float10)CONCAT28(local_21b8._8_2_,uVar13);
                        rpl_free(local_2178);
                        pbVar17 = (byte *)malloc(uVar13);
                        local_2178 = pbVar17;
                        if (pbVar17 == (byte *)0x0) {
                          local_21b8._0_10_ = (float10)CONCAT28(local_21b8._8_2_,4000);
                          pbVar17 = (byte *)stackbuf_1;
                          goto LAB_00108728;
                        }
                        if (pbVar1 <= src) goto LAB_00108733;
LAB_0010883d:
                        sVar14 = xstrxfrm((char *)pbVar17,(char *)src,local_21b8._0_8_);
                        uVar13 = sVar14 + 1;
                        if (pbVar16 <= pbVar18) break;
                        if (local_21b8._0_8_ < uVar13) {
                          local_21b8._0_8_ = 0;
                          dest = (byte *)0x0;
                        }
                        else {
                          local_21b8._0_8_ = local_21b8._0_8_ - uVar13;
                          dest = pbVar17 + uVar13;
                        }
LAB_0010886c:
                        local_2180 = xstrxfrm((char *)dest,(char *)pbVar18,local_21b8._0_8_);
                        local_2180 = local_2180 + 1;
                        uVar19 = local_2180 + uVar13;
                        if (uVar13 <= local_21b8._0_8_) goto LAB_00108c85;
LAB_0010888c:
                        if (uVar19 < 0x5555555555555555) {
                          uVar19 = uVar19 * 3 >> 1;
                        }
                        rpl_free(local_2178);
                        pbVar17 = (byte *)xmalloc(uVar19);
                        local_2178 = pbVar17;
                        if (src < pbVar1) {
                          strxfrm((char *)pbVar17,(char *)src,uVar13);
                          local_2190 = pbVar17 + uVar13;
                          if (pbVar18 < pbVar16) {
                            strxfrm((char *)local_2190,(char *)pbVar18,local_2180);
                            sVar12 = strlen((char *)src);
                            local_21b8._0_10_ = (float10)CONCAT28(local_21b8._8_2_,uVar19);
                            src = src + sVar12 + 1;
                            goto LAB_00108759;
                          }
                        }
                        else {
                          local_2190 = pbVar17 + uVar13;
                          if (pbVar18 < pbVar16) {
                            strxfrm((char *)local_2190,(char *)pbVar18,local_2180);
                            local_21b8._0_10_ = (float10)CONCAT28(local_21b8._8_2_,uVar19);
                            goto LAB_00108759;
                          }
                        }
                        local_2190 = pbVar17 + uVar13;
                        local_21b8._0_8_ = uVar13;
                        if (pbVar1 <= src) goto LAB_00108921;
                        sVar12 = strlen((char *)src);
                        local_21b8._0_10_ = (float10)CONCAT28(local_21b8._8_2_,uVar19);
                        src = src + sVar12 + 1;
                      }
                      local_2180 = 0;
                      uVar19 = uVar13;
                      if (local_21b8._0_8_ < uVar13) goto LAB_0010888c;
LAB_00108c85:
                      if (local_21b8._0_8_ < uVar19) goto LAB_0010888c;
                      local_2190 = pbVar17 + uVar13;
                      if (pbVar1 <= src) goto LAB_0010874e;
                      sVar12 = strlen((char *)src);
                      src = src + sVar12 + 1;
                    } while (pbVar16 <= pbVar18);
                  } while( true );
                }
LAB_00108921:
                md5_process_bytes(pbVar17,local_21b8._0_8_,s);
                md5_finish_ctx(s,dig);
                md5_process_bytes(local_2190,local_2180,ctx);
                md5_finish_ctx(ctx,dig[1]);
                uVar7 = memcmp(dig,dig[1],0x10);
                if ((uVar7 == 0) && (uVar7 = uVar10, uVar10 == 0)) {
LAB_00108ae5:
                  uVar15 = local_2180;
                  if (local_21b8._0_8_ <= local_2180) {
                    uVar15 = local_21b8._0_8_;
                  }
                  uVar7 = memcmp(pbVar17,local_2190,uVar15);
                  if (uVar7 == 0) {
                    uVar7 = (uint)(local_21b8._0_8_ >= local_2180 && local_21b8._0_8_ != local_2180)
                            - (uint)(local_21b8._0_8_ < local_2180);
                  }
                }
              }
              local_21b8._0_10_ = (float10)(unkuint10)len;
              rpl_free(local_2178);
              fVar21 = in_ST0;
              fVar22 = in_ST1;
              fVar23 = in_ST2;
              fVar24 = in_ST3;
              fVar25 = in_ST4;
              fVar26 = in_ST5;
              fVar27 = in_ST6;
            }
          }
          else {
            local_21b8._0_10_ = (float10)CONCAT28(local_21b8._8_2_,len);
            iVar8 = getmonth((char *)__nptr,(char **)0x0);
            iVar9 = getmonth((char *)pbVar11,(char **)0x0);
            uVar7 = iVar8 - iVar9;
            fVar21 = in_ST0;
            fVar22 = in_ST1;
            fVar23 = in_ST2;
            fVar24 = in_ST3;
            fVar25 = in_ST4;
            fVar26 = in_ST5;
            fVar27 = in_ST6;
          }
        }
        else {
          cVar2 = blanks[*__nptr];
          pbVar17 = __nptr;
          while (cVar2 != '\0') {
            pbVar16 = pbVar17 + 1;
            pbVar17 = pbVar17 + 1;
            cVar2 = blanks[*pbVar16];
          }
          cVar2 = blanks[*pbVar11];
          pbVar16 = pbVar11;
          while (cVar2 != '\0') {
            pbVar18 = pbVar16 + 1;
            pbVar16 = pbVar16 + 1;
            cVar2 = blanks[*pbVar18];
          }
          local_21b8._0_10_ = (float10)CONCAT28(local_21b8._8_2_,len);
          iVar8 = find_unit_order((char *)pbVar17);
          iVar9 = find_unit_order((char *)pbVar16);
          uVar7 = iVar8 - iVar9;
          fVar21 = in_ST0;
          fVar22 = in_ST1;
          fVar23 = in_ST2;
          fVar24 = in_ST3;
          fVar25 = in_ST4;
          fVar26 = in_ST5;
          fVar27 = in_ST6;
          if (uVar7 == 0) {
            uVar7 = strnumcmp((char *)pbVar17,(char *)pbVar16,(int)decimal_point,thousands_sep);
            fVar21 = in_ST0;
            fVar22 = in_ST1;
            fVar23 = in_ST2;
            fVar24 = in_ST3;
            fVar25 = in_ST4;
            fVar26 = in_ST5;
            fVar27 = in_ST6;
          }
        }
      }
      else {
        strtold((char *)__nptr,&ea);
        strtold((char *)pbVar11,&eb);
        fVar21 = in_ST2;
        fVar22 = in_ST3;
        fVar23 = in_ST4;
        fVar24 = in_ST5;
        fVar25 = in_ST6;
        fVar26 = in_ST7;
        fVar27 = in_ST7;
        local_21b8._0_10_ = in_ST0;
        if (__nptr == (byte *)ea) {
          uVar7 = -(uint)((byte *)eb != pbVar11);
        }
        else if (pbVar11 == (byte *)eb) {
          uVar7 = 1;
        }
        else if (in_ST0 < in_ST1) {
LAB_00108d75:
          uVar7 = 0xffffffff;
        }
        else {
          uVar7 = 1;
          if (in_ST0 <= in_ST1) {
            if (in_ST0 != in_ST1) goto LAB_00108d75;
            uVar7 = 0;
          }
        }
      }
    }
    else {
      cVar2 = blanks[*__nptr];
      pbVar17 = __nptr;
      while (cVar2 != '\0') {
        pbVar16 = pbVar17 + 1;
        pbVar17 = pbVar17 + 1;
        cVar2 = blanks[*pbVar16];
      }
      cVar2 = blanks[*pbVar11];
      pbVar16 = pbVar11;
      while (cVar2 != '\0') {
        pbVar18 = pbVar16 + 1;
        pbVar16 = pbVar16 + 1;
        cVar2 = blanks[*pbVar18];
      }
      local_21b8._0_10_ = (float10)CONCAT28(local_21b8._8_2_,len);
      uVar7 = strnumcmp((char *)pbVar17,(char *)pbVar16,(int)decimal_point,thousands_sep);
      fVar21 = in_ST0;
      fVar22 = in_ST1;
      fVar23 = in_ST2;
      fVar24 = in_ST3;
      fVar25 = in_ST4;
      fVar26 = in_ST5;
      fVar27 = in_ST6;
    }
    if (((ulong)pcVar4 | (ulong)p_Var5) == 0) {
      __nptr[len] = local_21ba;
      pbVar11[len_00] = local_21b9;
      in_ST0 = fVar21;
      in_ST1 = fVar22;
      in_ST2 = fVar23;
      in_ST3 = fVar24;
      in_ST4 = fVar25;
      in_ST5 = fVar26;
      in_ST6 = fVar27;
    }
    else {
      rpl_free(local_2198);
      in_ST0 = fVar21;
      in_ST1 = fVar22;
      in_ST2 = fVar23;
      in_ST3 = fVar24;
      in_ST4 = fVar25;
      in_ST5 = fVar26;
      in_ST6 = fVar27;
    }
    goto joined_r0x00107f58;
  }
  if (p_Var5 != (_Bool *)0x0) {
    if (pcVar4 == (char *)0x0) {
      do {
        if ((pbVar17 <= __nptr) || (p_Var5[*__nptr] == false)) {
          pbVar18 = pbVar16;
          if (pbVar11 <= pbVar16) goto LAB_001084d3;
          while (p_Var5[(uint)*pbVar18] != false) {
            pbVar18 = pbVar18 + 1;
            pbVar16 = pbVar11;
            if (pbVar11 == pbVar18) goto LAB_001084d3;
          }
          pbVar16 = pbVar18;
          if ((pbVar17 <= __nptr) || (pbVar11 <= pbVar18)) goto LAB_001084d3;
          uVar7 = (uint)*__nptr - (uint)*pbVar18;
          if (uVar7 != 0) goto not_equal;
          pbVar16 = pbVar18 + 1;
        }
        __nptr = __nptr + 1;
      } while( true );
    }
    do {
      if ((pbVar17 <= __nptr) || (p_Var5[*__nptr] == false)) {
        pbVar18 = pbVar16;
        if (pbVar11 <= pbVar16) goto LAB_0010844b;
        while (p_Var5[*pbVar18] != false) {
          pbVar18 = pbVar18 + 1;
          pbVar16 = pbVar11;
          if (pbVar11 == pbVar18) goto LAB_0010844b;
        }
        pbVar16 = pbVar18;
        if ((pbVar17 <= __nptr) || (pbVar11 <= pbVar18)) goto LAB_0010844b;
        uVar7 = (uint)(byte)pcVar4[*__nptr] - (uint)(byte)pcVar4[*pbVar18];
        if (uVar7 != 0) goto not_equal;
        pbVar16 = pbVar18 + 1;
      }
      __nptr = __nptr + 1;
    } while( true );
  }
  if (len == 0) {
    uVar7 = -(uint)(len_00 != 0);
    goto joined_r0x00107f58;
  }
  if (len_00 == 0) {
    uVar7 = 1;
  }
  else {
    if (pcVar4 == (char *)0x0) {
      uVar15 = len_00;
      if (len <= len_00) {
        uVar15 = len;
      }
      local_21b8._0_10_ = (float10)CONCAT28(local_21b8._8_2_,len_00);
      uVar7 = memcmp(__nptr,pbVar16,uVar15);
      if (uVar7 != 0) goto not_equal;
    }
    else {
      while ((__nptr < pbVar17 && (pbVar16 < pbVar11))) {
        bVar6 = *__nptr;
        __nptr = __nptr + 1;
        uVar7 = (uint)(byte)pcVar4[bVar6] - (uint)(byte)pcVar4[*pbVar16];
        pbVar16 = pbVar16 + 1;
        if (uVar7 != 0) goto not_equal;
      }
    }
    if (len_00 <= len) {
      uVar7 = (uint)(len != len_00);
      goto joined_r0x00107f58;
    }
    uVar7 = 0xffffffff;
  }
  goto not_equal;
LAB_001084d3:
  uVar7 = (uint)(__nptr < pbVar17) - (uint)(pbVar16 < pbVar11);
  goto joined_r0x00107f58;
LAB_0010844b:
  uVar7 = (uint)(__nptr < pbVar17) - (uint)(pbVar16 < pbVar11);
joined_r0x00107f58:
  if (uVar7 != 0) {
not_equal:
    if (pkVar20->reverse != false) {
      uVar7 = -uVar7;
    }
LAB_001080dd:
    if (lVar3 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
    return uVar7;
  }
  pkVar20 = pkVar20->next;
  if (pkVar20 == (keyfield *)0x0) goto LAB_001080dd;
  __nptr = (byte *)a_1->text;
  if (pkVar20->eword == 0xffffffffffffffff) {
    pbVar17 = __nptr + (a_1->length - 1);
    pbVar11 = (byte *)(b_1->text + (b_1->length - 1));
  }
  else {
    pbVar17 = (byte *)limfield();
    pbVar11 = (byte *)limfield();
  }
  if (pkVar20->sword == 0xffffffffffffffff) {
    pbVar16 = (byte *)b_1->text;
    if (pkVar20->skipsblanks != false) {
      if (__nptr < pbVar17) {
        do {
          if (blanks[*__nptr] == false) break;
          __nptr = __nptr + 1;
        } while (pbVar17 != __nptr);
      }
      if (pbVar16 < pbVar11) {
        do {
          if (blanks[*pbVar16] == false) break;
          pbVar16 = pbVar16 + 1;
        } while (pbVar11 != pbVar16);
      }
    }
  }
  else {
    __nptr = (byte *)begfield();
    pbVar16 = (byte *)begfield();
  }
  goto LAB_00107e40;
}

