
/* WARNING: Removing unreachable block (ram,0x00102fcc) */
/* WARNING: Could not reconcile some variable overlaps */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int main(int argc,char **argv)

{
  _Bool _Var1;
  char cVar2;
  int iVar3;
  uint uVar4;
  char *pcVar5;
  long lVar6;
  size_t sVar7;
  size_t sVar8;
  void *pvVar9;
  undefined8 uVar10;
  long lVar11;
  long lVar12;
  long extraout_RDX;
  uintmax_t step_00;
  ulong uVar13;
  undefined1 *format;
  char *pcVar14;
  undefined8 in_R8;
  uint uVar15;
  long in_R10;
  char *pcVar16;
  operand *unaff_R15;
  ulong uVar17;
  long in_FS_OFFSET;
  bool bVar18;
  undefined uVar19;
  byte bVar20;
  ushort in_FPUControlWord;
  float10 fVar21;
  undefined auVar22 [16];
  uint local_128;
  undefined4 uStack292;
  undefined2 auStack288 [4];
  undefined local_118 [8];
  undefined2 uStack272;
  uint local_108;
  undefined4 uStack260;
  undefined2 uStack256;
  char local_f8;
  undefined7 uStack247;
  undefined2 uStack240;
  undefined8 local_e8;
  undefined2 uStack224;
  undefined6 uStack222;
  float10 local_d8;
  float local_c0;
  ushort local_bc;
  char *s1;
  char *s2;
  char *x_str;
  char *x0_str;
  longdouble x_val;
  operand step;
  undefined4 local_68;
  undefined4 uStack100;
  undefined2 uStack96;
  undefined4 uStack92;
  uint local_58;
  undefined4 uStack84;
  uint uStack80;
  undefined4 uStack76;
  long local_40;
  
  bVar20 = 0;
  fVar21 = (float10)1;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  step.value._0_4_ = SUB104(fVar21,0);
  step.value._4_4_ = (undefined4)((unkuint10)fVar21 >> 0x20);
  step.value._8_2_ = (undefined2)((unkuint10)fVar21 >> 0x40);
  step.width = 1;
  step.precision = 0;
  set_program_name(*argv);
  pcVar5 = setlocale(6,"");
  locale_ok = pcVar5 != (char *)0x0;
  bindtextdomain("coreutils");
  textdomain("coreutils");
  atexit(close_stdout);
  local_118._0_4_ = (uint)in_R8;
  equal_width = false;
  separator = "\n";
  pcVar5 = separator;
  pcVar16 = (char *)0x0;
  while (format = pcVar16, separator = pcVar5, uVar17 = (ulong)(int)optind, (int)optind < argc) {
    local_118._0_4_ = (uint)in_R8;
    if ((*argv[(int)optind] == '-') &&
       ((cVar2 = argv[(int)optind][1], cVar2 == '.' || ((int)cVar2 - 0x30U < 10)))) break;
    in_R8 = 0;
    iVar3 = getopt_long(argc,argv,"+f:s:w");
    local_118._0_4_ = (uint)in_R8;
    if (iVar3 == -1) {
      uVar17 = (ulong)(int)optind;
      break;
    }
    pcVar5 = separator;
    pcVar16 = optarg;
    if (iVar3 != 0x66) {
      if (iVar3 < 0x67) {
        if (iVar3 == -0x83) {
          version_etc((FILE *)stdout,"seq","GNU coreutils",Version,"Ulrich Drepper",0);
                    /* WARNING: Subroutine does not return */
          exit(0);
        }
        if (iVar3 == -0x82) {
                    /* WARNING: Subroutine does not return */
          usage(0);
        }
        goto LAB_0010344c;
      }
      pcVar5 = optarg;
      pcVar16 = format;
      if (iVar3 != 0x73) {
        if (iVar3 != 0x77) goto LAB_0010344c;
        equal_width = true;
        pcVar5 = separator;
      }
    }
  }
  local_128 = argc - (int)uVar17;
  if (local_128 == 0) {
    uVar10 = dcgettext(0,"missing operand",5);
    error(0,0,uVar10);
LAB_0010344c:
                    /* WARNING: Subroutine does not return */
    usage(1);
  }
  if (3 < local_128) {
    pcVar5 = quote(argv[uVar17 + 3]);
    pcVar16 = "extra operand %s";
LAB_00103434:
    uVar10 = dcgettext(0,pcVar16,5);
    error(0,0,uVar10,pcVar5);
    goto LAB_0010344c;
  }
  if (format != (char *)0x0) {
    lVar12 = 1;
    lVar6 = 0;
    do {
      lVar11 = lVar12 + -1;
      if (format[lVar6] == '%') {
        if (format[lVar6 + 1] != '%') goto LAB_00102ce0;
        lVar11 = 2;
      }
      else {
        if (format[lVar6] == '\0') goto LAB_001033e3;
        lVar11 = 1;
      }
      lVar6 = lVar6 + lVar11;
      lVar12 = lVar12 + 1;
    } while( true );
  }
  pcVar16 = (char *)0x0;
  lVar11 = 0;
LAB_001029a2:
  uVar4 = (uint)uVar17;
  lVar6 = (long)(int)uVar4;
  if (local_128 == 3) {
    pcVar5 = argv[lVar6 + 1];
    _local_118 = (float10)CONCAT64(stack0xfffffffffffffeec,uVar4);
    _Var1 = all_digits_p(pcVar5);
    local_c0 = 0.0;
    if (((_Var1 == false) ||
        (_Var1 = xstrtold(pcVar5,(char **)0x0,&step.value,cl_strtold), local_118._0_4_ = optind,
        _Var1 == false)) ||
       (fVar21 = (float10)CONCAT28(step.value._8_2_,CONCAT44(step.value._4_4_,step.value._0_4_)),
       fVar21 <= (float10)0)) {
      local_f8 = false;
    }
    else {
      local_f8 = fVar21 <= (float10)_DAT_0010a8ac;
    }
    pcVar5 = argv[(int)local_118._0_4_];
    _local_118 = (float10)CONCAT28(uStack272,(long)(int)local_118._0_4_);
    local_108 = local_118._0_4_;
    _Var1 = all_digits_p(pcVar5);
    lVar6 = (long)(int)local_108;
    if (_Var1 == false) goto LAB_001029e0;
    _local_118 = (float10)CONCAT64(stack0xfffffffffffffeec,local_108);
    lVar6 = ((long)local_118 + 1) * 8;
    local_108 = (uint)lVar6;
    uStack260 = (undefined4)((ulong)lVar6 >> 0x20);
    _Var1 = all_digits_p(argv[(long)local_118 + 1]);
    lVar6 = (long)(int)local_118._0_4_;
    if ((_Var1 == false) || (local_f8 == '\0')) goto LAB_001029e0;
    cVar2 = all_digits_p(*(char **)((long)argv + CONCAT44(uStack260,local_108) + 8));
joined_r0x00102eb6:
    lVar6 = (long)(int)local_118._0_4_;
    if (cVar2 == '\0') goto LAB_001029e0;
  }
  else {
    pcVar5 = argv[lVar6];
    _local_118 = (float10)CONCAT28(uStack272,lVar6);
    local_108 = uVar4;
    _Var1 = all_digits_p(pcVar5);
    lVar6 = (long)(int)local_108;
    if (_Var1 == false) {
      local_c0 = 0.0;
      goto LAB_001029e0;
    }
    local_c0 = 0.0;
    if (local_128 != 1) {
      _local_118 = (float10)CONCAT64(stack0xfffffffffffffeec,local_108);
      cVar2 = all_digits_p(argv[(long)local_118 + 1]);
      goto joined_r0x00102eb6;
    }
  }
  if ((equal_width != true) && (format == (char *)0x0)) {
    lVar12 = -1;
    pcVar14 = separator;
    do {
      if (lVar12 == 0) break;
      lVar12 = lVar12 + -1;
      cVar2 = *pcVar14;
      pcVar14 = pcVar14 + (ulong)bVar20 * -2 + 1;
    } while (cVar2 != '\0');
    if (lVar12 == -3) {
      fVar21 = (float10)CONCAT28(step.value._8_2_,CONCAT44(step.value._4_4_,step.value._0_4_));
      if (local_128 == 1) {
        pcVar5 = "1";
      }
      if ((float10)_DAT_0010a8b0 <= fVar21) {
        local_bc = in_FPUControlWord & 0xff | (ushort)(byte)((ulong)in_FPUControlWord >> 8) << 8;
        uVar13 = (ulong)ROUND(fVar21 - (float10)_DAT_0010a8b0);
        uVar17 = uVar13 ^ 0x8000000000000000;
      }
      else {
        local_bc = in_FPUControlWord & 0xff | (ushort)(byte)((ulong)in_FPUControlWord >> 8) << 8;
        uVar17 = (ulong)ROUND(fVar21);
        uVar13 = uVar17;
      }
      local_bc = local_bc | 0xc00;
      _local_118 = (float10)CONCAT28(uStack272,uVar13);
      seq_fast(pcVar5,argv[(local_128 - 1) + (int)lVar6],uVar17);
      lVar6 = (long)(int)optind;
    }
  }
LAB_001029e0:
  unaff_R15 = (operand *)&local_68;
  optind = (int)lVar6 + 1;
  scan_arg(unaff_R15,argv[lVar6]);
  local_e8 = CONCAT44(uStack100,local_68);
  lVar12 = (long)(int)optind;
  lVar6 = CONCAT44(uStack84,local_58);
  uStack224 = uStack96;
  if ((int)optind < argc) {
    optind = optind + 1;
    _local_118 = (float10)CONCAT64(stack0xfffffffffffffeec,uStack80);
    local_128 = local_58;
    uStack292 = uStack84;
    scan_arg(unaff_R15,argv[lVar12]);
    in_R10 = CONCAT44(uStack292,local_128);
    local_f8 = (char)local_68;
    uStack247 = (undefined7)(CONCAT44(uStack100,local_68) >> 8);
    if ((int)optind < argc) {
      lVar6 = (long)(int)optind;
      pcVar5 = (char *)(lVar6 * 8);
      step.value._0_4_ = local_68;
      step.value._4_4_ = uStack100;
      step.value._8_2_ = uStack96;
      step.value._12_4_ = uStack92;
      step.width = CONCAT44(uStack84,local_58);
      step.precision = uStack80;
      step._28_4_ = uStack76;
      uVar19 = (float10)CONCAT28(uStack96,CONCAT44(uStack100,local_68)) == (float10)0;
      uVar4 = optind;
      goto LAB_00103415;
    }
    lVar6 = CONCAT44(uStack84,local_58);
    goto LAB_00102fa4;
  }
  local_f8 = (char)local_68;
  uStack247 = (undefined7)((ulong)local_e8 >> 8);
  if ((uStack80 | step.precision) == 0) {
    in_R10 = 1;
    local_e8 = SUB108((float10)1,0);
    uStack224 = (undefined2)((unkuint10)(float10)1 >> 0x40);
    goto LAB_001032dd;
  }
  local_118._0_4_ = 0;
  in_R10 = 1;
  local_e8 = SUB108((float10)1,0);
  uStack224 = (undefined2)((unkuint10)(float10)1 >> 0x40);
  uVar4 = uStack80;
LAB_00102a54:
  uStack240 = uStack96;
  if (format == (char *)0x0) goto LAB_0010327a;
LAB_00102a5d:
  local_d8 = (float10)CONCAT28(step.value._8_2_,CONCAT44(step.value._4_4_,step.value._0_4_));
LAB_00102a68:
  if (local_d8 < (float10)0) {
    argv = (char **)((ulong)argv & 0xffffffffffffff00 |
                    (ulong)((float10)CONCAT28(uStack224,local_e8) <
                           (float10)CONCAT28(uStack240,CONCAT71(uStack247,local_f8))));
  }
  else {
    argv = (char **)((ulong)argv & 0xffffffffffffff00 |
                    (ulong)((float10)CONCAT28(uStack240,CONCAT71(uStack247,local_f8)) <
                           (float10)CONCAT28(uStack224,local_e8)));
  }
  if ((char)argv != '\0') {
LAB_00102c89:
    if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
    return 0;
  }
  unaff_R15 = (operand *)&x_str;
  local_108 = (uint)local_e8;
  uStack260 = (undefined4)((ulong)local_e8 >> 0x20);
  uStack256 = uStack224;
  _local_118 = (float10)1;
LAB_00102c04:
  local_118._0_4_ = local_108;
  iVar3 = __printf_chk(1,format);
  if (iVar3 < 0) goto LAB_001033de;
  if ((char)argv == '\0') {
    fVar21 = (float10)CONCAT28(uStack224,local_e8) + _local_118 * local_d8;
    local_128 = SUB104(fVar21,0);
    uStack292 = (undefined4)((unkuint10)fVar21 >> 0x20);
    auStack288[0] = (undefined2)((unkuint10)fVar21 >> 0x40);
    if ((float10)0 <= local_d8) {
      argv = (char **)((ulong)argv & 0xffffffffffffff00 |
                      (ulong)((float10)CONCAT28(uStack240,CONCAT71(uStack247,local_f8)) < fVar21));
    }
    else {
      argv = (char **)((ulong)argv & 0xffffffffffffff00 |
                      (ulong)(fVar21 < (float10)CONCAT28(uStack240,CONCAT71(uStack247,local_f8))));
    }
    if ((char)argv == '\0') {
LAB_00102bd5:
      iVar3 = fputs_unlocked(separator,stdout);
      if (iVar3 == -1) goto LAB_001033de;
      _local_118 = (float10)1 + _local_118;
      local_108 = local_128;
      uStack260 = uStack292;
      uStack256 = auStack288[0];
      goto LAB_00102c04;
    }
    if (locale_ok != false) {
      setlocale(1,"C");
    }
    iVar3 = rpl_asprintf((char **)unaff_R15,format);
    if (locale_ok != false) {
      setlocale(1,"");
    }
    if (iVar3 < 0) goto LAB_001034b3;
    x_str[(long)iVar3 - (long)pcVar16] = '\0';
    _Var1 = xstrtold(x_str + lVar11,(char **)0x0,&x_val,cl_strtold);
    if ((_Var1 != false) &&
       (x_val._0_10_ == (float10)CONCAT28(uStack240,CONCAT71(uStack247,local_f8)))) {
      x0_str = (char *)0x0;
      iVar3 = rpl_asprintf(&x0_str,format);
      if (-1 < iVar3) {
        x0_str[(long)iVar3 - (long)pcVar16] = '\0';
        local_108 = (uint)x0_str;
        uStack260 = (undefined4)((ulong)x0_str >> 0x20);
        iVar3 = strcmp(x0_str,x_str);
        rpl_free((void *)CONCAT44(uStack260,local_108));
        rpl_free(x_str);
        if (iVar3 != 0) goto LAB_00102bd5;
        goto LAB_00102c6d;
      }
      goto LAB_001034b3;
    }
    rpl_free(x_str);
  }
LAB_00102c6d:
  iVar3 = fputs_unlocked("\n",stdout);
  if (iVar3 != -1) goto LAB_00102c89;
  goto LAB_001033de;
LAB_00102ce0:
  sVar7 = strspn(format + lVar6 + 1,"-+#0 \'");
  lVar6 = lVar6 + 1 + sVar7;
  sVar7 = strspn(format + lVar6,"0123456789");
  sVar7 = lVar6 + sVar7;
  if (format[sVar7] == '.') {
    sVar8 = strspn(format + sVar7 + 1,"0123456789");
    sVar7 = sVar7 + 1 + sVar8;
  }
  lVar6 = sVar7 + (format[sVar7] == 'L');
  pcVar5 = format + lVar6;
  cVar2 = *pcVar5;
  local_108 = (uint)pcVar5;
  uStack260 = (undefined4)((ulong)pcVar5 >> 0x20);
  if (cVar2 != '\0') {
    _local_118 = (float10)CONCAT64(stack0xfffffffffffffeec,(int)cVar2);
    pcVar5 = strchr("efgaEFGA",(int)cVar2);
    lVar6 = lVar6 + 1;
    pcVar16 = (char *)0x0;
    if (pcVar5 != (char *)0x0) {
      do {
        if (format[lVar6] == '%') {
          if (format[lVar6 + 1] != '%') {
            pcVar5 = quote(format);
            uVar10 = dcgettext(0,"format %s has too many %% directives",5);
            error(1,0,uVar10,pcVar5);
LAB_001034ea:
            uVar10 = dcgettext(0,
                               "format string may not be specified when printing equal width strings"
                               ,5);
            error(0,0,uVar10);
                    /* WARNING: Subroutine does not return */
            usage(1);
          }
          lVar12 = 2;
        }
        else {
          if (format[lVar6] == '\0') {
            pvVar9 = xmalloc(lVar6 + 2);
            pvVar9 = memcpy(pvVar9,format,sVar7);
            *(undefined *)((long)pvVar9 + sVar7) = 0x4c;
            _local_118 = (float10)CONCAT28(uStack272,pvVar9);
            strcpy((char *)((long)pvVar9 + sVar7 + 1),(char *)CONCAT44(uStack260,local_108));
            if (equal_width != false) goto LAB_001034ea;
            uVar17 = (ulong)optind;
            format = local_118;
            goto LAB_001029a2;
          }
          lVar12 = 1;
        }
        lVar6 = lVar6 + lVar12;
        pcVar16 = pcVar16 + 1;
      } while( true );
    }
    local_128 = local_118._0_4_;
    pcVar5 = quote(format);
    uVar10 = dcgettext(0,"format %s has unknown %%%c directive",5);
    error(1,0,uVar10,pcVar5,local_128);
  }
  pcVar5 = quote(format);
  uVar10 = dcgettext(0,"format %s ends in %%",5);
  auVar22 = error(1,0,uVar10,pcVar5);
  uVar10 = CONCAT44(uStack292,local_128);
  local_128 = SUB164(auVar22,0);
  uStack292 = SUB164(auVar22 >> 0x20,0);
  (*(code *)PTR___libc_start_main_0010dfc8)
            (main,uVar10,auStack288,__libc_csu_init,__libc_csu_fini,SUB168(auVar22 >> 0x40,0),
             &local_128);
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
LAB_001033de:
  io_error();
LAB_001033e3:
  pcVar16 = quote(format);
  uVar10 = dcgettext(0,"format %s has no %% directive",5);
  uVar19 = 1;
  pcVar5 = pcVar16;
  uVar4 = error(1,0,uVar10);
  lVar6 = extraout_RDX;
LAB_00103415:
  if ((bool)uVar19) {
    pcVar5 = quote(*(char **)((long)(argv + -1) + (long)pcVar5));
    pcVar16 = "invalid Zero increment value: %s";
    goto LAB_00103434;
  }
  optind = uVar4 + 1;
  local_128 = (uint)in_R10;
  uStack292 = (undefined4)((ulong)in_R10 >> 0x20);
  scan_arg(unaff_R15,argv[lVar6]);
  lVar6 = CONCAT44(uStack84,local_58);
  in_R10 = CONCAT44(uStack292,local_128);
  local_f8 = (char)local_68;
  uStack247 = (undefined7)(CONCAT44(uStack100,local_68) >> 8);
LAB_00102fa4:
  uVar4 = uStack80;
  if ((step.precision | local_118._0_4_ | uStack80) != 0) goto LAB_00102a54;
  fVar21 = (float10)local_c0;
  if (((float10)CONCAT28(uStack224,local_e8) * fVar21 != fVar21) ||
     ((float10)CONCAT28(uStack224,local_e8) < fVar21)) {
    uStack240 = uStack96;
    if (format != (char *)0x0) goto LAB_00102a5d;
    uVar15 = 0;
    if (-1 < step.precision) {
      uVar15 = step.precision;
    }
    uVar4 = 0;
    local_118._0_4_ = 0;
  }
  else {
LAB_001032dd:
    if (((((float10)CONCAT28(uStack96,CONCAT71(uStack247,local_f8)) < (float10)0) ||
         (local_d8 = (float10)CONCAT28(step.value._8_2_,CONCAT44(step.value._4_4_,step.value._0_4_))
         , local_d8 <= (float10)0)) || ((float10)_DAT_0010a8ac < local_d8)) ||
       (equal_width != false)) {
      uVar4 = 0;
      local_118._0_4_ = 0;
      goto LAB_00102a54;
    }
    uStack240 = uStack96;
    if (format != (char *)0x0) goto LAB_00102a68;
    lVar12 = -1;
    pcVar5 = separator;
    do {
      if (lVar12 == 0) break;
      lVar12 = lVar12 + -1;
      cVar2 = *pcVar5;
      pcVar5 = pcVar5 + (ulong)bVar20 * -2 + 1;
    } while (cVar2 != '\0');
    if (lVar12 != -3) {
      format = "%Lg";
      uVar15 = 0;
      if (-1 < step.precision) {
        uVar15 = step.precision;
      }
      if (step.precision == 0x7fffffff) goto LAB_00102a68;
      goto LAB_00103366;
    }
    local_128 = (uint)in_R10;
    uStack292 = (undefined4)((ulong)in_R10 >> 0x20);
    argv = (char **)CONCAT62(uStack222,uStack224);
    iVar3 = rpl_asprintf(&s1,"%0.Lf");
    if (iVar3 < 0) {
LAB_001034b3:
                    /* WARNING: Subroutine does not return */
      xalloc_die();
    }
    if ((float10)CONCAT28(uStack240,CONCAT71(uStack247,local_f8)) * (float10)0 == (float10)0) {
      iVar3 = rpl_asprintf(&s2,"%0.Lf");
      if (iVar3 < 0) goto LAB_001034b3;
    }
    else {
      s2 = xstrdup("inf");
    }
    if ((*s1 != '-') && (*s2 != '-')) {
      fVar21 = (float10)CONCAT28(step.value._8_2_,CONCAT44(step.value._4_4_,step.value._0_4_));
      if ((float10)_DAT_0010a8b0 <= fVar21) {
        local_bc = in_FPUControlWord & 0xff | (ushort)(byte)((ulong)in_FPUControlWord >> 8) << 8;
        step_00 = (long)ROUND(fVar21 - (float10)_DAT_0010a8b0) ^ 0x8000000000000000;
      }
      else {
        local_bc = in_FPUControlWord & 0xff | (ushort)(byte)((ulong)in_FPUControlWord >> 8) << 8;
        step_00 = (uintmax_t)ROUND(fVar21);
      }
      local_bc = local_bc | 0xc00;
      seq_fast(s1,s2,step_00);
    }
    rpl_free(s1);
    rpl_free(s2);
    in_R10 = CONCAT44(uStack292,local_128);
    uVar4 = 0;
    local_118._0_4_ = 0;
LAB_0010327a:
    uVar15 = local_118._0_4_;
    if ((int)local_118._0_4_ <= step.precision) {
      uVar15 = step.precision;
    }
    if ((uVar4 == 0x7fffffff) || (uVar15 == 0x7fffffff)) {
      local_d8 = (float10)CONCAT28(step.value._8_2_,CONCAT44(step.value._4_4_,step.value._0_4_));
      format = "%Lg";
      goto LAB_00102a68;
    }
  }
  if (equal_width == false) {
LAB_00103366:
    __sprintf_chk(format_buf_7248,1,0x1c,"%%.%dLf",uVar15);
    local_d8 = (float10)CONCAT28(step.value._8_2_,CONCAT44(step.value._4_4_,step.value._0_4_));
    format = format_buf_7248;
    goto LAB_00102a68;
  }
  uVar17 = (int)(uVar15 - local_118._0_4_) + in_R10;
  uVar13 = lVar6 + (int)(uVar15 - uVar4);
  bVar18 = uVar15 != 0;
  if (bVar18) {
    if (uVar4 == 0) goto LAB_00103030;
  }
  else {
    if (uVar4 != 0) {
      uVar13 = uVar13 - 1;
      goto LAB_00103043;
    }
LAB_00103030:
    uVar13 = (uVar13 + 1) - (ulong)!bVar18;
  }
  if (local_118._0_4_ == 0) {
    uVar17 = (uVar17 + 1) - (ulong)!bVar18;
  }
LAB_00103043:
  format = "%Lg";
  if (uVar17 < uVar13) {
    uVar17 = uVar13;
  }
  if (0x7fffffff < uVar17) goto LAB_00102a5d;
  __sprintf_chk(format_buf_7248,1,0x1c,"%%0%d.%dLf",uVar17 & 0xffffffff);
  local_d8 = (float10)CONCAT28(step.value._8_2_,CONCAT44(step.value._4_4_,step.value._0_4_));
  format = format_buf_7248;
  goto LAB_00102a68;
}

