
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Could not reconcile some variable overlaps */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 process_field(byte *param_1,ulong param_2)

{
  long lVar1;
  byte bVar2;
  round_type rVar3;
  _Bool _Var4;
  int iVar5;
  simple_strtod_error sVar6;
  int iVar7;
  simple_strtod_error sVar8;
  round_type rVar9;
  uint uVar10;
  uint uVar11;
  field_range_pair *pfVar12;
  size_t sVar13;
  size_t sVar14;
  ushort **ppuVar15;
  char *pcVar16;
  char *pcVar17;
  undefined8 uVar18;
  long lVar19;
  char cVar21;
  ulong uVar22;
  int iVar23;
  long *plVar24;
  long *plVar25;
  scale_type sVar26;
  float *pfVar27;
  float10 *pfVar28;
  long *plVar29;
  long *arg;
  ulong uVar30;
  undefined4 *puVar31;
  byte *pbVar32;
  long in_FS_OFFSET;
  bool bVar33;
  undefined2 in_FPUControlWord;
  float10 in_ST0;
  float10 fVar34;
  float10 fVar35;
  float10 fVar36;
  unkbyte10 Var37;
  unkbyte10 Var38;
  float10 in_ST1;
  float10 fVar39;
  float10 fVar40;
  float10 fVar41;
  float10 in_ST2;
  float10 in_ST3;
  float10 fVar42;
  long lStack432;
  byte *local_1a8 [2];
  undefined8 local_198 [2];
  double local_188 [2];
  undefined local_178 [8];
  undefined2 uStack368;
  ushort local_14c [9];
  _Bool local_13a;
  _Bool local_139;
  char *local_138;
  char *local_130;
  undefined8 local_128;
  undefined2 uStack288;
  float10 local_118;
  undefined local_108 [200];
  undefined8 local_40;
  ulong uVar20;
  
  pcVar16 = suffix;
  pfVar28 = (float10 *)local_198;
  plVar29 = local_198;
  pfVar27 = (float *)local_198;
  local_40 = *(undefined8 *)(in_FS_OFFSET + 0x28);
  pfVar12 = frp;
  if (frp != (field_range_pair *)0x0) {
    for (; pfVar12->lo != 0xffffffffffffffff; pfVar12 = pfVar12 + 1) {
      if ((pfVar12->lo <= param_2) && (param_2 < pfVar12->hi || param_2 == pfVar12->hi))
      goto LAB_00103a06;
    }
LAB_001039b8:
    uVar18 = 1;
    fputs_unlocked((char *)param_1,stdout);
LAB_001039cd:
    if (*(long *)((long)pfVar28 + 0x158) == *(long *)(in_FS_OFFSET + 0x28)) {
      return uVar18;
    }
                    /* WARNING: Subroutine does not return */
    *(undefined8 *)((long)pfVar28 + -8) = 0x105051;
    __stack_chk_fail();
  }
  if (param_2 != 1) goto LAB_001039b8;
LAB_00103a06:
  if (suffix != (char *)0x0) {
    sVar13 = strlen((char *)param_1);
    sVar14 = strlen(pcVar16);
    if (sVar14 < sVar13) {
      iVar5 = strcmp(pcVar16,(char *)(param_1 + (sVar13 - sVar14)));
      _Var4 = dev_debug;
      if (iVar5 == 0) {
        param_1[sVar13 - sVar14] = 0;
        if (_Var4 != false) {
          pcVar16 = quote(pcVar16);
          __fprintf_chk(stderr,1,"trimming suffix %s\n",pcVar16);
        }
      }
      else if (dev_debug != false) {
        fwrite("no valid suffix found\n",1,0x16,stderr);
      }
    }
  }
  bVar2 = *param_1;
  pbVar32 = param_1;
  if (bVar2 == 0) {
    iVar5 = 0;
  }
  else {
    ppuVar15 = __ctype_b_loc();
    do {
      if ((*(byte *)(*ppuVar15 + bVar2) & 1) == 0) break;
      bVar2 = pbVar32[1];
      pbVar32 = pbVar32 + 1;
    } while (bVar2 != 0);
    iVar5 = (int)param_1 - (int)pbVar32;
  }
  if (auto_padding == 0) {
LAB_00103ca8:
    sVar26 = scale_from;
    local_138 = (char *)0x0;
    local_198[0]._0_4_ = 0.0;
    local_128 = SUB108((float10)0.0,0);
    uStack288 = (undefined2)((unkuint10)(float10)0.0 >> 0x40);
    iVar5 = (-(uint)(scale_from + ~scale_SI < 2) & 0x18) + 1000;
    if (dev_debug != false) {
      pcVar16 = quote_n(1,decimal_point);
      pcVar17 = quote_n(0,(char *)pbVar32);
      __fprintf_chk(stderr,1,
                    "simple_strtod_human:\n  input string: %s\n  locale decimal-point: %s\n  MAX_UNSCALED_DIGITS: %d\n"
                    ,pcVar17,pcVar16,0x12);
    }
  }
  else {
    if ((iVar5 == 0) && ((long)param_2 < 2)) {
      padding_width = 0;
    }
    else {
      padding_width = strlen((char *)param_1);
      if (padding_buffer_size <= (ulong)padding_width) {
        setup_padding_buffer(padding_width);
      }
    }
    if (dev_debug != false) {
      __fprintf_chk(stderr,1,"setting Auto-Padding to %ld characters\n",padding_width);
      goto LAB_00103ca8;
    }
    local_138 = (char *)0x0;
    local_198[0]._0_4_ = 0.0;
    local_128 = SUB108((float10)0.0,0);
    uStack288 = (undefined2)((unkuint10)(float10)0.0 >> 0x40);
    iVar5 = (-(uint)(scale_from + ~scale_SI < 2) & 0x18) + 1000;
    sVar26 = scale_from;
  }
  sVar6 = simple_strtod_int((char *)pbVar32,&local_138,(longdouble *)&local_128,&local_13a);
  pcVar16 = local_138;
  sVar8 = sVar6;
  if (sVar6 < SSE_OVERFLOW) {
    _local_178 = (float10)CONCAT28(uStack368,(long)decimal_point_length);
    iVar7 = strncmp(local_138,decimal_point,(long)decimal_point_length);
    local_188[0] = 0.0;
    if (iVar7 != 0) {
LAB_00103b54:
      if (dev_debug != false) {
        __fprintf_chk(stderr,1,"  parsed numeric value: %Lf\n  input precision = %d\n");
      }
      pcVar16 = local_138;
      _local_178 = (float10)CONCAT91(stack0xfffffffffffffe89,*local_138);
      if (*local_138 == '\0') {
        if (sVar26 != scale_IEC_I) {
          local_188[0]._0_4_ = 0;
          fVar39 = (float10)1;
LAB_00103b8b:
          if (dev_debug == false) {
            fVar39 = (float10)CONCAT28(uStack288,local_128) * fVar39;
            local_128 = SUB108(fVar39,0);
            uStack288 = (undefined2)((unkuint10)fVar39 >> 0x40);
          }
          else {
            _local_178 = fVar39;
            __fprintf_chk(stderr,1,"  suffix power=%d^%d = %Lf\n",iVar5,local_188[0]._0_4_);
            fVar39 = _local_178 * (float10)CONCAT28(uStack288,local_128);
            local_128 = SUB108(fVar39,0);
            uStack288 = (undefined2)((unkuint10)fVar39 >> 0x40);
            if (dev_debug != false) {
              __fprintf_chk(stderr,1,"  returning value: %Lf (%LG)\n");
            }
          }
          if ((local_138 != (char *)0x0) && (*local_138 != '\0')) {
            if (inval_style != inval_ignore) {
              pcVar16 = quote_n(1,local_138);
              pcVar17 = quote_n(0,(char *)pbVar32);
              uVar18 = dcgettext(0,"invalid suffix in input %s: %s",5);
              error(conv_exit_code,0,uVar18,pcVar17,pcVar16);
            }
            sVar6 = SSE_INVALID_SUFFIX;
            pfVar28 = (float10 *)local_198;
            goto LAB_00103c12;
          }
          pfVar28 = (float10 *)local_198;
          if (sVar6 != SSE_OK_PRECISION_LOSS) goto LAB_00103c12;
          pfVar28 = (float10 *)local_198;
          if (debug == false) goto LAB_00103c12;
          quote((char *)pbVar32);
          uVar18 = dcgettext(0,"large input value %s: possible precision loss",5);
          error(0,0,uVar18);
          pfVar28 = (float10 *)local_198;
          goto LAB_00103c12;
        }
        pcVar16 = "missing \'i\' suffix in input: %s (e.g Ki/Mi/Gi)";
        pfVar27 = (float *)local_198;
        sVar6 = SSE_MISSING_I_SUFFIX;
      }
      else {
        ppuVar15 = __ctype_b_loc();
        while (pcVar17 = pcVar16 + 1, (*(byte *)(*ppuVar15 + local_178[0]) & 1) != 0) {
          local_178[0] = pcVar16[1];
          pcVar16 = pcVar17;
          local_138 = pcVar17;
        }
        pcVar17 = strchr("KMGTPEZY",(int)(char)local_178[0]);
        if (pcVar17 == (char *)0x0) {
          pcVar16 = "invalid suffix in input: %s";
          pfVar27 = (float *)local_198;
          sVar6 = SSE_INVALID_SUFFIX;
        }
        else {
          if (sVar26 != scale_none) {
            local_188[0]._0_4_ = 0;
            if ((byte)(local_178[0] + 0xbb) < 0x16) {
              local_188[0]._0_4_ = *(uint *)(CSWTCH_313 + (ulong)(byte)(local_178[0] + 0xbb) * 4);
            }
            local_138 = pcVar16 + 1;
            if (sVar26 == scale_auto) {
              if (pcVar16[1] == 'i') {
                local_138 = pcVar16 + 2;
                if (dev_debug == false) {
                  fVar39 = (float10)_DAT_0010cdb8;
                  iVar5 = 0x400;
                }
                else {
                  local_188[0] = (double)((ulong)local_188[0] & 0xffffffff00000000 |
                                         (ulong)local_188[0]._0_4_);
                  iVar5 = 0x400;
                  __fprintf_chk(stderr,1,"  Auto-scaling, found \'i\', switching to base %d\n");
                  fVar39 = (float10)_DAT_0010cdb8;
                }
              }
              else {
                fVar39 = (float10)iVar5;
              }
            }
            else {
              if (sVar26 == scale_IEC_I) {
                if (pcVar16[1] != 'i') goto LAB_00105089;
                local_138 = pcVar16 + 2;
              }
              fVar39 = (float10)iVar5;
            }
            if (local_188[0]._0_4_ == 0) {
              local_188[0] = 0.0;
              fVar39 = (float10)1;
            }
            else {
              iVar7 = local_188[0]._0_4_ - 1;
              fVar34 = fVar39;
              if (iVar7 == 0) {
                local_188[0] = 0.0;
                local_188[0]._0_4_ = 1;
              }
              else {
                do {
                  fVar34 = fVar34 * fVar39;
                  iVar7 = iVar7 + -1;
                } while (iVar7 != 0);
                local_188[0] = 0.0;
                fVar39 = fVar34;
              }
            }
            goto LAB_00103b8b;
          }
          pcVar16 = "rejecting suffix in input: %s (consider using --from)";
          pfVar27 = (float *)local_198;
          sVar6 = SSE_VALID_BUT_FORBIDDEN_SUFFIX;
        }
      }
      goto LAB_00103fa0;
    }
    local_118 = (float10)(float)local_198[0];
    local_138 = pcVar16 + local_178;
    sVar8 = simple_strtod_int(local_138,&local_130,(longdouble *)&local_118,&local_139);
    if (SSE_OK_PRECISION_LOSS < sVar8) goto LAB_00103f70;
    if (sVar8 == SSE_OK_PRECISION_LOSS) {
      sVar6 = SSE_OK_PRECISION_LOSS;
    }
    if (local_139 == false) {
      local_188[0] = (double)((long)local_130 - (long)local_138);
      iVar7 = (int)((long)local_130 - (long)local_138);
      fVar39 = local_118;
      if (iVar7 != 0) {
        iVar7 = iVar7 + -1;
        if (iVar7 == 0) {
          fVar39 = local_118 / (float10)_DAT_0010cdb4;
        }
        else {
          fVar39 = (float10)_DAT_0010cdb4;
          do {
            fVar39 = fVar39 * (float10)_DAT_0010cdb4;
            iVar7 = iVar7 + -1;
          } while (iVar7 != 0);
          fVar39 = local_118 / fVar39;
        }
      }
      if (local_13a == false) {
        fVar39 = (float10)CONCAT28(uStack288,local_128) + fVar39;
      }
      else {
        fVar39 = (float10)CONCAT28(uStack288,local_128) - fVar39;
      }
      local_128 = SUB108(fVar39,0);
      uStack288 = (undefined2)((unkuint10)fVar39 >> 0x40);
      local_138 = local_130;
      goto LAB_00103b54;
    }
switchD_00103f89_caseD_3:
    local_188[0] = 0.0;
    pcVar16 = "invalid number: %s";
    pfVar27 = (float *)local_198;
    sVar6 = SSE_INVALID_NUMBER;
  }
  else {
LAB_00103f70:
    sVar6 = sVar8;
    switch(sVar8) {
    default:
      local_188[0] = 0.0;
      pcVar16 = (char *)0x0;
      pfVar27 = (float *)local_198;
      break;
    case SSE_OVERFLOW:
      local_188[0] = 0.0;
      pcVar16 = "value too large to be converted: %s";
      break;
    case SSE_INVALID_NUMBER:
      goto switchD_00103f89_caseD_3;
    case SSE_VALID_BUT_FORBIDDEN_SUFFIX:
      local_188[0] = 0.0;
      pcVar16 = "rejecting suffix in input: %s (consider using --from)";
      pfVar27 = (float *)local_198;
      break;
    case SSE_INVALID_SUFFIX:
      local_188[0] = 0.0;
      pcVar16 = "invalid suffix in input: %s";
      pfVar27 = (float *)local_198;
      break;
    case SSE_MISSING_I_SUFFIX:
      local_188[0] = 0.0;
      pcVar16 = "missing \'i\' suffix in input: %s (e.g Ki/Mi/Gi)";
      pfVar27 = (float *)local_198;
    }
  }
LAB_00103fa0:
  pfVar28 = (float10 *)pfVar27;
  if (inval_style != inval_ignore) {
    *(undefined8 *)((long)pfVar27 + -8) = 0x103fb5;
    quote((char *)pbVar32);
    *(undefined8 *)((long)pfVar27 + -8) = 0x103fc7;
    uVar18 = dcgettext(0,pcVar16,5);
    *(undefined8 *)((long)pfVar27 + -8) = 0x103fdc;
    error(conv_exit_code,0,uVar18);
  }
LAB_00103c12:
  sVar26 = scale_to;
  iVar7 = grouping;
  rVar3 = round_style;
  iVar5 = conv_exit_code;
  fVar39 = *(float10 *)((long)pfVar28 + 0x70);
  if ((from_unit_size != 1) || (to_unit_size != 1)) {
    *(uintmax_t *)((long)pfVar28 + 0x20) = from_unit_size;
    fVar34 = (float10)*(long *)((long)pfVar28 + 0x20);
    if ((long)from_unit_size < 0) {
      fVar34 = fVar34 + (float10)_DAT_0010cdbc;
    }
    *(uintmax_t *)((long)pfVar28 + 0x20) = to_unit_size;
    fVar35 = (float10)*(long *)((long)pfVar28 + 0x20);
    if ((long)to_unit_size < 0) {
      fVar35 = fVar35 + (float10)_DAT_0010cdbc;
    }
    fVar39 = (fVar34 * fVar39) / fVar35;
  }
  if (sVar6 < SSE_OVERFLOW) {
    lVar19 = user_precision;
    if (user_precision == -1) {
      lVar19 = *(long *)((long)pfVar28 + 0x10);
    }
    *(long *)((long)pfVar28 + 0x10) = lVar19;
    if ((_DAT_0010cde0 <= fVar39) && (fVar39 <= _DAT_0010cdf0)) {
      uVar11 = 0;
      fVar34 = fVar39;
      while( true ) {
        fVar35 = -fVar34;
        if ((float10)0 <= fVar34) {
          fVar35 = fVar34;
        }
        if (fVar35 < (float10)_DAT_0010cdb4) break;
        fVar34 = (float10)_DAT_0010cdb4 / fVar34;
        uVar11 = uVar11 + 1;
      }
      if ((scale_to == scale_none) && (0x12 < (ulong)uVar11 + *(long *)((long)pfVar28 + 0x10)))
      goto LAB_00104499;
      in_ST3 = in_ST2;
      if (uVar11 < 0x1b) goto LAB_001040e6;
      *pfVar28 = fVar39;
      if (inval_style != inval_ignore) {
        *(undefined8 *)((long)pfVar28 + -8) = 0x1040aa;
        uVar18 = dcgettext(0,"value too large to be printed: \'%Lg\' (cannot handle values > 999Y)",
                           5);
        *(float10 *)((long)pfVar28 + -0x10) = *pfVar28;
        *(undefined8 *)((long)pfVar28 + -0x18) = 0x1040c6;
        error(conv_exit_code,0,uVar18);
      }
      goto LAB_00103c70;
    }
    if ((scale_to == scale_none) && (0x12 < *(ulong *)((long)pfVar28 + 0x10))) {
LAB_00104499:
      if (inval_style != inval_ignore) {
        lVar19 = *(long *)((long)pfVar28 + 0x10);
        *pfVar28 = fVar39;
        if (lVar19 == 0) {
          *(undefined8 *)((long)pfVar28 + -8) = 0x104f02;
          uVar18 = dcgettext(0,"value too large to be printed: \'%Lg\' (consider using --to)",5);
          *(float10 *)((long)pfVar28 + -0x10) = *pfVar28;
          *(undefined8 *)((long)pfVar28 + -0x18) = 0x104f1b;
          error(iVar5,0,uVar18);
        }
        else {
          *(undefined8 *)((long)pfVar28 + -8) = 0x1044d1;
          uVar18 = dcgettext(0,
                             "value/precision too large to be printed: \'%Lg/%lu\' (consider using --to)"
                             ,5);
          *(float10 *)((long)pfVar28 + -0x10) = *pfVar28;
          *(undefined8 *)((long)pfVar28 + -0x18) = 0x1044ed;
          error(iVar5,0,uVar18,lVar19);
        }
      }
      goto LAB_00103c70;
    }
LAB_001040e6:
    uVar22 = (ulong)scale_to;
    *(undefined *)((long)pfVar28 + 0x90) = 0x25;
    puVar31 = (undefined4 *)((long)pfVar28 + 0x91);
    if (grouping != 0) {
      *(undefined *)((long)pfVar28 + 0x91) = 0x27;
      puVar31 = (undefined4 *)((long)pfVar28 + 0x92);
    }
    if (zero_padding_width != 0) {
      *(float10 *)((long)pfVar28 + 0x20) = fVar39;
      *(undefined8 *)((long)pfVar28 + -8) = 0x10448b;
      iVar5 = __snprintf_chk(puVar31,0x3e,1,0x3f,&DAT_0010b0d7);
      fVar39 = *(float10 *)((long)pfVar28 + 0x20);
      puVar31 = (undefined4 *)((long)puVar31 + (long)iVar5);
    }
    if (dev_debug != false) {
      *(float10 *)((long)pfVar28 + 0x20) = fVar39;
      *(undefined8 *)((long)pfVar28 + -8) = 0x104457;
      fwrite("double_to_human:\n",1,0x11,stderr);
      fVar39 = *(float10 *)((long)pfVar28 + 0x20);
    }
    if (sVar26 != scale_none) {
      if (sVar26 + ~scale_SI < 2) {
        *(undefined4 *)((long)pfVar28 + 0x10) = 0x400;
        lVar19 = DAT_0010cdc8;
      }
      else {
        *(undefined4 *)((long)pfVar28 + 0x10) = 1000;
        lVar19 = DAT_0010cdd0;
      }
      fVar34 = fVar39;
      if ((fVar39 < _DAT_0010cde0) || (_DAT_0010cdf0 < fVar39)) {
        iVar5 = 0;
      }
      else {
        iVar5 = 0;
        while( true ) {
          fVar35 = -fVar34;
          if ((float10)0 <= fVar34) {
            fVar35 = fVar34;
          }
          in_ST3 = in_ST2;
          if (fVar35 < (float10)*(int *)((long)pfVar28 + 0x10)) break;
          fVar34 = fVar34 / (float10)*(int *)((long)pfVar28 + 0x10);
          iVar5 = iVar5 + 1;
        }
      }
      if (dev_debug != false) {
        *(float10 *)((long)pfVar28 + 0x30) = fVar39;
        *(long *)((long)pfVar28 + 0x10) = lVar19;
        *(float10 *)((long)pfVar28 + -0x10) = fVar34;
        *(float10 *)((long)pfVar28 + 0x20) = fVar34;
        *(undefined8 *)((long)pfVar28 + -0x18) = 0x104e6c;
        __fprintf_chk(stderr,1,"  scaled value to %Lf * %0.f ^ %u\n");
        lVar19 = *(long *)((long)pfVar28 + 0x10);
        fVar39 = *(float10 *)((long)pfVar28 + 0x30);
        fVar34 = *(float10 *)((long)pfVar28 + 0x20);
      }
      uVar22 = (ulong)dev_debug;
      fVar35 = in_ST2;
      cVar21 = dev_debug;
      if (user_precision != -1) {
        uVar20 = (ulong)(uint)(iVar5 * 3);
        if (user_precision < (long)(ulong)(uint)(iVar5 * 3)) {
          uVar20 = user_precision;
        }
        rVar9 = (round_type)uVar20;
        if (rVar9 == round_ceiling) goto LAB_00104c21;
        iVar7 = rVar9 + ~round_ceiling;
        if (iVar7 == 0) goto LAB_00104dda;
        fVar35 = (float10)_DAT_0010cdb4;
        iVar23 = iVar7;
        do {
          fVar35 = fVar35 * (float10)_DAT_0010cdb4;
          iVar23 = iVar23 + -1;
        } while (iVar23 != 0);
        *(undefined2 *)((long)pfVar28 + 0x4e) = in_FPUControlWord;
        *(ushort *)((long)pfVar28 + 0x4c) =
             *(ushort *)((long)pfVar28 + 0x4e) & 0xff |
             (ushort)(byte)((ulong)*(ushort *)((long)pfVar28 + 0x4e) >> 8) << 8 | 0xc00;
        *(long *)((long)pfVar28 + 0x10) = (long)ROUND((fVar35 * fVar34) / _DAT_0010ce00);
        lVar1 = *(long *)((long)pfVar28 + 0x10);
        *(long *)((long)pfVar28 + 0x10) = lVar19;
        fVar40 = (float10)lVar1 * _DAT_0010ce00;
        fVar34 = fVar35 * fVar34 - fVar40;
        fVar36 = (float10)*(double *)((long)pfVar28 + 0x10);
        switch(rVar3) {
        case round_ceiling:
          goto LAB_0010450c;
        case round_floor:
          goto LAB_001048d6;
        case round_from_zero:
          goto LAB_00104881;
        case round_to_zero:
          *(long *)((long)pfVar28 + 0x10) = (long)ROUND(fVar34);
          fVar41 = (float10)*(long *)((long)pfVar28 + 0x10) + fVar40;
          break;
        case round_nearest:
          goto LAB_001045ec;
        default:
          fVar41 = (float10)0;
        }
        goto LAB_0010454f;
      }
      fVar36 = -fVar34;
      if ((float10)0 <= fVar34) {
        fVar36 = fVar34;
      }
      in_ST3 = in_ST2;
      if ((float10)_DAT_0010cdb4 <= fVar36) {
LAB_00104c21:
        *(undefined2 *)((long)pfVar28 + 0x4e) = in_FPUControlWord;
        *(ushort *)((long)pfVar28 + 0x4c) =
             *(ushort *)((long)pfVar28 + 0x4e) & 0xff |
             (ushort)(byte)((ulong)*(ushort *)((long)pfVar28 + 0x4e) >> 8) << 8 | 0xc00;
        *(long *)((long)pfVar28 + 0x10) = (long)ROUND(fVar34 / _DAT_0010ce00);
        lVar1 = *(long *)((long)pfVar28 + 0x10);
        *(long *)((long)pfVar28 + 0x10) = lVar19;
        fVar40 = (float10)lVar1 * _DAT_0010ce00;
        fVar34 = fVar34 - fVar40;
        fVar36 = (float10)*(double *)((long)pfVar28 + 0x10);
        switch(rVar3) {
        case round_ceiling:
          rVar9 = rVar3;
          goto LAB_0010450c;
        case round_floor:
          rVar9 = round_ceiling;
          goto LAB_001048d6;
        case round_from_zero:
          rVar9 = round_ceiling;
          goto LAB_00104881;
        case round_to_zero:
          *(long *)((long)pfVar28 + 0x10) = (long)ROUND(fVar34);
          fVar41 = (float10)*(long *)((long)pfVar28 + 0x10) + fVar40;
          fVar40 = in_ST1;
          break;
        case round_nearest:
          rVar9 = round_ceiling;
          goto LAB_001045ec;
        default:
          fVar41 = (float10)0;
          fVar40 = in_ST1;
          goto LAB_0010456d;
        }
        goto LAB_00104563;
      }
LAB_00104dda:
      fVar35 = (float10)_DAT_0010cdb4;
      *(undefined2 *)((long)pfVar28 + 0x4e) = in_FPUControlWord;
      *(ushort *)((long)pfVar28 + 0x4c) =
           *(ushort *)((long)pfVar28 + 0x4e) & 0xff |
           (ushort)(byte)((ulong)*(ushort *)((long)pfVar28 + 0x4e) >> 8) << 8 | 0xc00;
      *(long *)((long)pfVar28 + 0x10) = (long)ROUND((fVar34 * fVar35) / _DAT_0010ce00);
      lVar1 = *(long *)((long)pfVar28 + 0x10);
      *(long *)((long)pfVar28 + 0x10) = lVar19;
      fVar40 = (float10)lVar1 * _DAT_0010ce00;
      fVar34 = fVar34 * fVar35 - fVar40;
      fVar36 = (float10)*(double *)((long)pfVar28 + 0x10);
      switch(rVar3) {
      case round_ceiling:
        rVar9 = round_floor;
        goto LAB_0010450c;
      case round_floor:
        rVar9 = rVar3;
LAB_001048d6:
        fVar34 = -fVar34;
        *(long *)((long)pfVar28 + 0x10) = (long)ROUND(fVar34);
LAB_0010489d:
        *(ulong *)((long)pfVar28 + 0x10) =
             -(*(long *)((long)pfVar28 + 0x10) +
              (ulong)((float10)*(long *)((long)pfVar28 + 0x10) < fVar34));
        fVar41 = (float10)*(long *)((long)pfVar28 + 0x10);
        break;
      case round_from_zero:
        rVar9 = round_floor;
LAB_00104881:
        if (fVar34 < (float10)0) {
          fVar34 = -fVar34;
          *(long *)((long)pfVar28 + 0x10) = (long)ROUND(fVar34);
          goto LAB_0010489d;
        }
LAB_0010450c:
        *(long *)((long)pfVar28 + 0x10) = (long)ROUND(fVar34);
        fVar41 = (float10)*(long *)((long)pfVar28 + 0x10);
        if (fVar41 < fVar34) {
          *(long *)((long)pfVar28 + 0x10) = *(long *)((long)pfVar28 + 0x10) + 1;
          fVar41 = (float10)*(long *)((long)pfVar28 + 0x10);
        }
        break;
      case round_to_zero:
        goto switchD_00104e30_caseD_3;
      case round_nearest:
        rVar9 = round_floor;
LAB_001045ec:
        if (fVar34 < (float10)0) {
          *(long *)((long)pfVar28 + 0x10) = (long)ROUND(fVar34 - (float10)_DAT_0010cdc0);
          fVar41 = (float10)*(long *)((long)pfVar28 + 0x10);
        }
        else {
          *(long *)((long)pfVar28 + 0x10) = (long)ROUND(fVar34 + (float10)_DAT_0010cdc0);
          fVar41 = (float10)*(long *)((long)pfVar28 + 0x10);
        }
        break;
      default:
        fVar41 = (float10)0;
        fVar40 = in_ST1;
        fVar35 = in_ST2;
        in_ST3 = in_ST2;
        goto LAB_0010456d;
      }
      fVar41 = fVar41 + fVar40;
      fVar40 = in_ST1;
      fVar35 = in_ST2;
      in_ST3 = in_ST2;
      if (rVar9 != round_ceiling) {
        fVar35 = (float10)_DAT_0010cdb4;
        iVar7 = rVar9 + ~round_ceiling;
        if (iVar7 == 0) goto LAB_00104b66;
LAB_0010454f:
        fVar34 = (float10)_DAT_0010cdb4;
        do {
          fVar34 = fVar34 * (float10)_DAT_0010cdb4;
          iVar7 = iVar7 + -1;
        } while (iVar7 != 0);
        fVar41 = fVar41 / fVar34;
        fVar40 = in_ST1;
        fVar35 = in_ST2;
        in_ST3 = in_ST2;
      }
LAB_00104563:
      do {
        cVar21 = (char)uVar22;
        if (fVar41 < (float10)0) {
          fVar34 = -fVar41;
          if (fVar36 <= -fVar41) goto LAB_00104575;
LAB_00104c00:
          fVar36 = in_ST0;
          uVar11 = (uint)(iVar5 != 0 && fVar34 < (float10)_DAT_0010cdb4);
          fVar34 = in_ST3;
        }
        else {
LAB_0010456d:
          if (fVar36 <= fVar41) {
LAB_00104575:
            iVar5 = iVar5 + 1;
            fVar41 = fVar41 / fVar36;
          }
          if (fVar41 != (float10)0) {
            fVar34 = fVar41;
            if (fVar41 < (float10)0) {
              fVar34 = -fVar41;
            }
            goto LAB_00104c00;
          }
          uVar11 = 0;
          fVar36 = in_ST0;
          fVar34 = in_ST3;
        }
        fVar42 = fVar34;
        in_ST0 = fVar34;
        if (cVar21 != '\0') {
          *(float10 *)((long)pfVar28 + 0x10) = fVar39;
          *(uint *)((long)pfVar28 + 0x20) = uVar11;
          *(float10 *)((long)pfVar28 + -0x10) = fVar41;
          *pfVar28 = fVar41;
          *(undefined8 *)((long)pfVar28 + -0x18) = 0x104da0;
          __fprintf_chk(stderr,1,"  after rounding, value=%Lf * %0.f ^ %u\n",iVar5);
          fVar39 = *(float10 *)((long)pfVar28 + 0x10);
          fVar41 = *pfVar28;
        }
        *puVar31 = 0x664c2a2e;
        *(undefined2 *)(puVar31 + 1) = 0x7325;
        *(undefined *)((long)puVar31 + 6) = 0;
        switch(iVar5) {
        case 0:
          *(float10 *)((long)pfVar28 + 0x10) = fVar39;
          uVar22 = 0x80;
          *(char **)((long)pfVar28 + -0x10) = "";
          *(float10 *)((long)pfVar28 + -0x20) = fVar41;
          *pfVar28 = fVar41;
          *(undefined8 *)(pfVar28 + -4) = 0x104b06;
          uVar11 = __snprintf_chk((undefined *)((long)pfVar28 + 0xd0),0x7f,1);
          Var38 = *pfVar28;
          Var37 = *(unkbyte10 *)((long)pfVar28 + 0x10);
          fVar39 = fVar42;
          if (uVar11 < 0x7f) goto LAB_00104a1b;
          goto LAB_00104b21;
        case 1:
          pcVar16 = "K";
          break;
        case 2:
          pcVar16 = "M";
          break;
        case 3:
          pcVar16 = "G";
          break;
        case 4:
          pcVar16 = "T";
          break;
        case 5:
          pcVar16 = "P";
          break;
        case 6:
          pcVar16 = "E";
          break;
        case 7:
          pcVar16 = "Z";
          break;
        case 8:
          pcVar16 = "Y";
          break;
        default:
          pcVar16 = "(error)";
        }
        *(float10 *)((long)pfVar28 + 0x10) = fVar39;
        uVar22 = 0x80;
        *(char **)((long)pfVar28 + -0x10) = pcVar16;
        *(float10 *)((long)pfVar28 + -0x20) = fVar41;
        *pfVar28 = fVar41;
        *(undefined8 *)(pfVar28 + -4) = 0x1049f2;
        uVar11 = __snprintf_chk((undefined *)((long)pfVar28 + 0xd0),0x7f,1);
        Var38 = *pfVar28;
        Var37 = *(unkbyte10 *)((long)pfVar28 + 0x10);
        fVar39 = fVar42;
        if (uVar11 < 0x7f) {
          if ((sVar26 == scale_IEC_I) && (iVar5 != 0)) {
            *pfVar28 = (float10)Var37;
            *(undefined8 *)((long)pfVar28 + -8) = 0x104f43;
            __strncat_chk((undefined *)((long)pfVar28 + 0xd0),&DAT_0010b37e,0x7f - (long)(int)uVar11
                         );
            Var37 = *pfVar28;
          }
LAB_00104a1b:
          arg = (long *)((long)pfVar28 + 0xd0);
          if (dev_debug != false) {
            *pfVar28 = (float10)Var37;
            *(undefined8 *)((long)pfVar28 + -8) = 0x104eb7;
            quote((char *)arg);
            *(undefined8 *)((long)pfVar28 + -8) = 0x104ed4;
            __fprintf_chk(stderr,1,"  returning value: %s\n");
            Var37 = *pfVar28;
            goto LAB_00104711;
          }
          plVar25 = arg;
          if (suffix != (char *)0x0) goto LAB_00104720;
          goto LAB_001047b7;
        }
LAB_00104b21:
        *pfVar28 = (float10)Var38;
        *(undefined8 *)((long)pfVar28 + -8) = 0x104b37;
        in_ST1 = in_ST0;
        uVar18 = dcgettext(0,"failed to prepare value \'%Lf\' for printing",5);
        *(ulong *)((long)pfVar28 + -8) = uVar22;
        *(ulong *)((long)pfVar28 + -0x10) = uVar22;
        *(float10 *)((long)pfVar28 + -0x10) = *pfVar28;
        *(undefined8 *)((long)pfVar28 + -0x18) = 0x104b50;
        in_ST2 = in_ST1;
        error(1,0,uVar18);
        pfVar28 = (float10 *)((long)pfVar28 + -0x10);
switchD_00104e30_caseD_3:
        *(long *)((long)pfVar28 + 0x10) = (long)ROUND(fVar34);
        fVar41 = (float10)*(long *)((long)pfVar28 + 0x10) + fVar40;
LAB_00104b66:
        fVar41 = fVar41 / fVar35;
        fVar40 = in_ST1;
        fVar35 = in_ST2;
        in_ST3 = in_ST2;
      } while( true );
    }
    iVar5 = (int)*(long *)((long)pfVar28 + 0x10);
    if (iVar5 == 0) {
      *(undefined2 *)((long)pfVar28 + 0x4e) = in_FPUControlWord;
      *(ushort *)((long)pfVar28 + 0x4c) =
           *(ushort *)((long)pfVar28 + 0x4e) & 0xff |
           (ushort)(byte)((ulong)*(ushort *)((long)pfVar28 + 0x4e) >> 8) << 8 | 0xc00;
      *(long *)((long)pfVar28 + 0x20) = (long)ROUND(fVar39 / _DAT_0010ce00);
      in_FPUControlWord = *(undefined2 *)((long)pfVar28 + 0x4e);
      fVar35 = (float10)*(long *)((long)pfVar28 + 0x20) * _DAT_0010ce00;
      fVar34 = fVar39 - fVar35;
      switch(rVar3) {
      case round_ceiling:
        goto switchD_00104cfb_caseD_0;
      case round_floor:
        goto switchD_00104cfb_caseD_1;
      case round_from_zero:
        goto switchD_001043ff_caseD_2;
      case round_to_zero:
        goto switchD_00104cfb_caseD_3;
      case round_nearest:
        goto switchD_001043ff_caseD_4;
      default:
        fVar36 = (float10)0;
      }
    }
    else {
      iVar23 = iVar5 + -1;
      if (iVar23 == 0) {
        *(undefined2 *)((long)pfVar28 + 0x4e) = in_FPUControlWord;
        *(ushort *)((long)pfVar28 + 0x4c) =
             *(ushort *)((long)pfVar28 + 0x4e) & 0xff |
             (ushort)(byte)((ulong)*(ushort *)((long)pfVar28 + 0x4e) >> 8) << 8 | 0xc00;
        *(long *)((long)pfVar28 + 0x20) =
             (long)ROUND((fVar39 * (float10)_DAT_0010cdb4) / _DAT_0010ce00);
        in_FPUControlWord = *(undefined2 *)((long)pfVar28 + 0x4e);
        fVar35 = (float10)*(long *)((long)pfVar28 + 0x20) * _DAT_0010ce00;
        fVar34 = fVar39 * (float10)_DAT_0010cdb4 - fVar35;
        switch(rVar3) {
        case round_ceiling:
          goto switchD_00104cfb_caseD_0;
        case round_floor:
          goto switchD_00104cfb_caseD_1;
        case round_from_zero:
          goto switchD_001043ff_caseD_2;
        case round_to_zero:
          goto switchD_00104cfb_caseD_3;
        case round_nearest:
          goto switchD_001043ff_caseD_4;
        default:
          fVar36 = (float10)0;
          goto LAB_0010464b;
        }
      }
      fVar34 = (float10)_DAT_0010cdb4;
      do {
        fVar34 = fVar34 * (float10)_DAT_0010cdb4;
        iVar23 = iVar23 + -1;
      } while (iVar23 != 0);
      *(undefined2 *)((long)pfVar28 + 0x4e) = in_FPUControlWord;
      *(ushort *)((long)pfVar28 + 0x4c) =
           *(ushort *)((long)pfVar28 + 0x4e) & 0xff |
           (ushort)(byte)((ulong)*(ushort *)((long)pfVar28 + 0x4e) >> 8) << 8 | 0xc00;
      *(long *)((long)pfVar28 + 0x20) = (long)ROUND((fVar34 * fVar39) / _DAT_0010ce00);
      in_FPUControlWord = *(undefined2 *)((long)pfVar28 + 0x4e);
      fVar35 = (float10)*(long *)((long)pfVar28 + 0x20) * _DAT_0010ce00;
      fVar34 = fVar34 * fVar39 - fVar35;
      in_ST3 = in_ST2;
      switch(rVar3) {
      case round_ceiling:
        in_ST3 = in_ST2;
switchD_00104cfb_caseD_0:
        *(long *)pfVar28 = (long)ROUND(fVar34);
        in_FPUControlWord = *(undefined2 *)((long)pfVar28 + 0x4e);
        fVar36 = (float10)*(long *)pfVar28;
        if (fVar36 < fVar34) {
LAB_0010493b:
          *(long *)pfVar28 = *(long *)pfVar28 + 1;
          fVar36 = (float10)*(long *)pfVar28;
        }
        break;
      case round_floor:
        in_ST3 = in_ST2;
switchD_00104cfb_caseD_1:
        fVar34 = -fVar34;
        *(long *)pfVar28 = (long)ROUND(fVar34);
        in_FPUControlWord = *(undefined2 *)((long)pfVar28 + 0x4e);
LAB_001048f9:
        *(ulong *)pfVar28 = -(*(long *)pfVar28 + (ulong)((float10)*(long *)pfVar28 < fVar34));
        fVar36 = (float10)*(long *)pfVar28;
        break;
      case round_from_zero:
switchD_001043ff_caseD_2:
        if (fVar34 < (float10)0) {
          fVar34 = -fVar34;
          *(long *)pfVar28 = (long)ROUND(fVar34);
          in_FPUControlWord = *(undefined2 *)((long)pfVar28 + 0x4e);
          goto LAB_001048f9;
        }
        *(long *)pfVar28 = (long)ROUND(fVar34);
        in_FPUControlWord = *(undefined2 *)((long)pfVar28 + 0x4e);
        fVar36 = (float10)*(long *)pfVar28;
        if (fVar34 <= fVar36) break;
        goto LAB_0010493b;
      case round_to_zero:
        in_ST3 = in_ST2;
switchD_00104cfb_caseD_3:
        *(long *)pfVar28 = (long)ROUND(fVar34);
        in_FPUControlWord = *(undefined2 *)((long)pfVar28 + 0x4e);
        fVar36 = (float10)*(long *)pfVar28;
        break;
      case round_nearest:
switchD_001043ff_caseD_4:
        if (fVar34 < (float10)0) {
          *(long *)pfVar28 = (long)ROUND(fVar34 - (float10)_DAT_0010cdc0);
          in_FPUControlWord = *(undefined2 *)((long)pfVar28 + 0x4e);
          fVar36 = (float10)*(long *)pfVar28;
        }
        else {
          *(long *)pfVar28 = (long)ROUND(fVar34 + (float10)_DAT_0010cdc0);
          in_FPUControlWord = *(undefined2 *)((long)pfVar28 + 0x4e);
          fVar36 = (float10)*(long *)pfVar28;
        }
        break;
      default:
        fVar36 = (float10)0;
        in_ST3 = in_ST2;
        goto LAB_0010463a;
      }
      fVar36 = fVar36 + fVar35;
      if (iVar5 != 0) {
        if (iVar5 == 1) {
          fVar36 = fVar36 / (float10)_DAT_0010cdb4;
        }
        else {
LAB_0010463a:
          iVar5 = iVar5 + -1;
          fVar34 = (float10)_DAT_0010cdb4;
          do {
            fVar34 = fVar34 * (float10)_DAT_0010cdb4;
            iVar5 = iVar5 + -1;
          } while (iVar5 != 0);
          fVar36 = fVar36 / fVar34;
        }
      }
    }
LAB_0010464b:
    uVar20 = *(ulong *)((long)pfVar28 + 0x10);
    uVar30 = uVar20 & 0xffffffff;
    if (dev_debug != false) {
      *(float10 *)((long)pfVar28 + 0x10) = fVar39;
      pcVar16 = "  no scaling, returning (grouped) value: %\'.*Lf\n";
      *(int *)((long)pfVar28 + 0x20) = (int)uVar20;
      if (iVar7 == 0) {
        pcVar16 = "  no scaling, returning value: %.*Lf\n";
      }
      *(float10 *)((long)pfVar28 + -0x10) = fVar36;
      *pfVar28 = fVar36;
      *(undefined8 *)((long)pfVar28 + -0x18) = 0x104698;
      __fprintf_chk(stderr,1,pcVar16,uVar20 & 0xffffffff);
      fVar36 = *pfVar28;
      fVar39 = *(float10 *)((long)pfVar28 + 0x10);
      uVar30 = (ulong)*(uint *)((long)pfVar28 + 0x20);
    }
    *(float10 *)((long)pfVar28 + 0x10) = fVar39;
    arg = (long *)((long)pfVar28 + 0xd0);
    *puVar31 = 0x664c2a2e;
    *(undefined *)(puVar31 + 1) = 0;
    *(float10 *)((long)pfVar28 + -0x10) = fVar36;
    *pfVar28 = fVar36;
    *(undefined8 *)((long)pfVar28 + -0x18) = 0x1046f4;
    uVar11 = __snprintf_chk(arg,0x80,1,0x80,(long *)((long)pfVar28 + 0x90),uVar30);
    param_1 = *(byte **)((long)pfVar28 + -0x10);
    pbVar32 = *(byte **)((long)pfVar28 + -8);
    if (0x7f < uVar11) goto LAB_0010505a;
    Var37 = *(unkbyte10 *)((long)pfVar28 + 0x10);
LAB_00104711:
    plVar25 = arg;
    cVar21 = dev_debug;
    if (suffix != (char *)0x0) {
LAB_00104720:
      do {
        plVar24 = plVar25;
        cVar21 = dev_debug;
        uVar10 = *(uint *)plVar24 + 0xfefefeff & ~*(uint *)plVar24;
        uVar11 = uVar10 & 0x80808080;
        plVar25 = (long *)((long)plVar24 + 4);
      } while (uVar11 == 0);
      *pfVar28 = (float10)Var37;
      bVar33 = (uVar10 & 0x8080) == 0;
      if (bVar33) {
        uVar11 = uVar11 >> 0x10;
      }
      if (bVar33) {
        plVar25 = (long *)((long)plVar24 + 6);
      }
      *(undefined8 *)((long)pfVar28 + -8) = 0x10476e;
      __strncat_chk(arg,suffix,
                    (long)arg +
                    (0x7f - ((long)plVar25 + (-3 - (ulong)CARRY1((byte)uVar11,(byte)uVar11)))));
      Var37 = *pfVar28;
    }
    plVar25 = arg;
    if (cVar21 != '\0') {
      *pfVar28 = (float10)Var37;
      *(undefined8 *)((long)pfVar28 + -8) = 0x104780;
      quote((char *)arg);
      *(float10 *)((long)pfVar28 + -0x10) = *pfVar28;
      *(undefined8 *)((long)pfVar28 + -0x18) = 0x1047a7;
      __fprintf_chk(stderr,1,"formatting output:\n  value: %Lf\n  humanized: %s\n");
    }
LAB_001047b7:
    do {
      plVar24 = plVar25;
      uVar10 = *(uint *)plVar24 + 0xfefefeff & ~*(uint *)plVar24;
      uVar11 = uVar10 & 0x80808080;
      plVar25 = (long *)((long)plVar24 + 4);
    } while (uVar11 == 0);
    bVar33 = (uVar10 & 0x8080) == 0;
    if (bVar33) {
      uVar11 = uVar11 >> 0x10;
    }
    if (bVar33) {
      plVar25 = (long *)((long)plVar24 + 6);
    }
    uVar22 = (long)plVar25 + ((-3 - (ulong)CARRY1((byte)uVar11,(byte)uVar11)) - (long)arg);
    if ((padding_width == 0) || ((ulong)padding_width <= uVar22)) {
      uVar22 = uVar22 + 1;
      if (padding_buffer_size <= uVar22) {
        *(undefined8 *)((long)pfVar28 + -8) = 0x104811;
        setup_padding_buffer(uVar22);
      }
      *(undefined8 *)((long)pfVar28 + -8) = 0x104820;
      strcpy(padding_buffer,(char *)arg);
    }
    else {
      *(long *)((long)pfVar28 + 0x80) = padding_width;
      *(undefined8 *)((long)pfVar28 + -8) = 0x104d2d;
      mbsalign((char *)arg,padding_buffer,padding_buffer_size,(size_t *)((long)pfVar28 + 0x80),
               padding_alignment,2);
      if (dev_debug != false) {
        *(undefined8 *)((long)pfVar28 + -8) = 0x104d46;
        pcVar16 = quote(padding_buffer);
        *(undefined8 *)((long)pfVar28 + -8) = 0x104d63;
        __fprintf_chk(stderr,1,"  After padding: %s\n",pcVar16);
      }
    }
    if (format_str_prefix != (char *)0x0) {
      *(undefined8 *)((long)pfVar28 + -8) = 0x104838;
      fputs_unlocked(format_str_prefix,stdout);
    }
    uVar18 = 1;
    *(undefined8 *)((long)pfVar28 + -8) = 0x104851;
    fputs_unlocked(padding_buffer,stdout);
    if (format_str_suffix != (char *)0x0) {
      *(undefined8 *)((long)pfVar28 + -8) = 0x10486d;
      fputs_unlocked(format_str_suffix,stdout);
    }
  }
  else {
LAB_00103c70:
    uVar18 = 0;
    *(undefined8 *)((long)pfVar28 + -8) = 0x103c82;
    fputs_unlocked((char *)param_1,stdout);
  }
  goto LAB_001039cd;
LAB_0010505a:
  *pfVar28 = *pfVar28;
  *(undefined8 *)((long)pfVar28 + -8) = 0x105070;
  uVar18 = dcgettext(0,"failed to prepare value \'%Lf\' for printing",5);
  *(ulong *)((long)pfVar28 + -8) = uVar22;
  plVar29 = (long *)((long)pfVar28 + -0x10);
  *(ulong *)((long)pfVar28 + -0x10) = uVar22;
  *(float10 *)((long)pfVar28 + -0x10) = *pfVar28;
  *(undefined8 *)((long)pfVar28 + -0x18) = 0x105089;
  error(1,0,uVar18);
LAB_00105089:
  *(undefined8 *)((long)plVar29 + 0x10) = 0;
  pcVar16 = "missing \'i\' suffix in input: %s (e.g Ki/Mi/Gi)";
  pfVar27 = (float *)plVar29;
  sVar6 = SSE_MISSING_I_SUFFIX;
  goto LAB_00103fa0;
}

