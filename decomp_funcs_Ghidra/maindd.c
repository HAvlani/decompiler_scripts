
/* WARNING: Could not reconcile some variable overlaps */

int main(int argc,char **argv)

{
  byte *pbVar1;
  __int32_t *p_Var2;
  bool bVar3;
  off_t oVar4;
  char **ppcVar5;
  char **ppcVar6;
  _Bool _Var7;
  int iVar8;
  int iVar9;
  strtol_error sVar10;
  char *pcVar11;
  long lVar12;
  char *pcVar13;
  code *pcVar14;
  anon_subr_ssize_t_int_char_ptr_idx_t **ppaVar15;
  __int32_t **pp_Var16;
  intmax_t iVar17;
  idx_t iVar18;
  uintmax_t uVar19;
  size_t len;
  xtime_t progress_time;
  long lVar20;
  byte *pbVar21;
  byte *pbVar22;
  __off_t _Var23;
  uintmax_t *length;
  idx_t iVar24;
  anon_subr_ssize_t_int_char_ptr_idx_t **ppaVar25;
  idx_t *piVar26;
  char **ppcVar27;
  char *extraout_RAX;
  char cVar28;
  char *pcVar29;
  uintmax_t uVar30;
  undefined8 extraout_RDX;
  undefined8 extraout_RDX_00;
  ulong extraout_RDX_01;
  ulong extraout_RDX_02;
  ulong extraout_RDX_03;
  ulong extraout_RDX_04;
  ulong extraout_RDX_05;
  ulong extraout_RDX_06;
  ulong extraout_RDX_07;
  ulong extraout_RDX_08;
  ulong extraout_RDX_09;
  ulong extraout_RDX_10;
  ulong extraout_RDX_11;
  ulong extraout_RDX_12;
  ulong extraout_RDX_13;
  ulong extraout_RDX_14;
  ulong extraout_RDX_15;
  ulong uVar31;
  ulong extraout_RDX_16;
  ulong extraout_RDX_17;
  ulong extraout_RDX_18;
  ulong extraout_RDX_19;
  uint uVar32;
  size_t sVar33;
  uint uVar34;
  byte bVar35;
  uintmax_t *ctx;
  char **ptr;
  ulong in_R10;
  char **ppcVar36;
  size_t sVar37;
  char **ppcVar38;
  char *unaff_R14;
  long in_FS_OFFSET;
  bool bVar39;
  bool bVar40;
  undefined8 uVar41;
  undefined8 local_140;
  char **local_138;
  uint local_12c;
  char **local_128;
  uint local_108;
  idx_t blocksize;
  uintmax_t n;
  char *suffix;
  uintmax_t o;
  stat stdout_stat;
  long local_40;
  
  ppcVar36 = (char **)(ulong)(uint)argc;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  pcVar11 = getenv("POSIXLY_CORRECT");
  sigemptyset((sigset_t *)&caught_signals);
  if (pcVar11 == (char *)0x0) {
    sigaddset((sigset_t *)&caught_signals,10);
  }
  sigaction(2,(sigaction *)0x0,(sigaction *)&stdout_stat);
  if (stdout_stat.st_dev != 1) {
    sigaddset((sigset_t *)&caught_signals,2);
  }
  stdout_stat.st_ino._0_4_ = (undefined4)caught_signals.__val[0];
  stdout_stat.st_ino._4_4_ = caught_signals.__val[0]._4_4_;
  stdout_stat.st_nlink._0_4_ = (undefined4)caught_signals.__val[1];
  stdout_stat.st_nlink._4_4_ = caught_signals.__val[1]._4_4_;
  stdout_stat.st_mode = (__mode_t)caught_signals.__val[2];
  stdout_stat.st_uid = caught_signals.__val[2]._4_4_;
  stdout_stat.st_gid = (__gid_t)caught_signals.__val[3];
  stdout_stat.__pad0 = caught_signals.__val[3]._4_4_;
  stdout_stat.st_rdev._0_4_ = (undefined4)caught_signals.__val[4];
  stdout_stat.st_rdev._4_4_ = caught_signals.__val[4]._4_4_;
  stdout_stat.st_size._0_4_ = (undefined4)caught_signals.__val[5];
  stdout_stat.st_size._4_4_ = caught_signals.__val[5]._4_4_;
  stdout_stat.st_blksize._0_4_ = (undefined4)caught_signals.__val[6];
  stdout_stat.st_blksize._4_4_ = caught_signals.__val[6]._4_4_;
  stdout_stat.st_blocks._0_4_ = (undefined4)caught_signals.__val[7];
  stdout_stat.st_blocks._4_4_ = caught_signals.__val[7]._4_4_;
  stdout_stat.st_atim.tv_sec._0_4_ = (undefined4)caught_signals.__val[8];
  stdout_stat.st_atim.tv_sec._4_4_ = caught_signals.__val[8]._4_4_;
  stdout_stat.st_atim.tv_nsec._0_4_ = (undefined4)caught_signals.__val[9];
  stdout_stat.st_atim.tv_nsec._4_4_ = caught_signals.__val[9]._4_4_;
  stdout_stat.st_mtim.tv_sec._0_4_ = (undefined4)caught_signals.__val[10];
  stdout_stat.st_mtim.tv_sec._4_4_ = caught_signals.__val[10]._4_4_;
  stdout_stat.st_mtim.tv_nsec._0_4_ = (undefined4)caught_signals.__val[11];
  stdout_stat.st_mtim.tv_nsec._4_4_ = caught_signals.__val[11]._4_4_;
  stdout_stat.st_ctim.tv_sec._0_4_ = (undefined4)caught_signals.__val[12];
  stdout_stat.st_ctim.tv_sec._4_4_ = caught_signals.__val[12]._4_4_;
  stdout_stat.st_ctim.tv_nsec._0_4_ = (undefined4)caught_signals.__val[13];
  stdout_stat.st_ctim.tv_nsec._4_4_ = caught_signals.__val[13]._4_4_;
  stdout_stat.__glibc_reserved[0]._0_4_ = (undefined4)caught_signals.__val[14];
  stdout_stat.__glibc_reserved[0]._4_4_ = caught_signals.__val[14]._4_4_;
  stdout_stat.__glibc_reserved[1]._0_4_ = (undefined4)caught_signals.__val[15];
  stdout_stat.__glibc_reserved[1]._4_4_ = caught_signals.__val[15]._4_4_;
  iVar8 = sigismember((sigset_t *)&caught_signals,10);
  if (iVar8 != 0) {
    stdout_stat.st_dev = (__dev_t)siginfo_handler;
    stdout_stat.__glibc_reserved[2]._0_4_ = 0;
    sigaction(10,(sigaction *)&stdout_stat,(sigaction *)0x0);
  }
  iVar8 = sigismember((sigset_t *)&caught_signals,2);
  if (iVar8 != 0) {
    stdout_stat.st_dev = (__dev_t)interrupt_handler;
    stdout_stat.__glibc_reserved[2]._0_4_ = -0x40000000;
    sigaction(2,(sigaction *)&stdout_stat,(sigaction *)0x0);
  }
  set_program_name(*argv);
  setlocale(6,"");
  bindtextdomain("coreutils","/root/coreutils-builder/share/locale");
  textdomain("coreutils");
  atexit(maybe_close_stdout);
  uVar41 = 0x102b74;
  iVar8 = getpagesize();
  page_size = (idx_t)iVar8;
  ptr = (char **)0x1;
  parse_gnu_standard_options_only
            (argc,argv,"dd","coreutils",Version,true,usage,"Paul Rubin","David MacKenzie",
             "Stuart Kemp",0,uVar41);
  close_stdout_required = false;
  lVar12 = 0;
  do {
    trans_table[lVar12] = (uchar)lVar12;
    lVar12 = lVar12 + 1;
  } while (lVar12 != 0x100);
  blocksize = 0;
  if (argc <= (int)optind) {
    local_138 = (char **)0x0;
    ppcVar38 = (char **)0x7fffffffffffffff;
    local_140 = (uint *)((ulong)local_140._1_7_ << 8);
    bVar3 = false;
    local_128 = (char **)0x0;
    bVar40 = false;
    goto LAB_00103589;
  }
  bVar40 = false;
  ppcVar38 = (char **)0x7fffffffffffffff;
  local_140 = (uint *)((ulong)local_140._1_7_ << 8);
  ppcVar27 = argv + (int)optind;
  bVar3 = false;
  local_128 = (char **)0x0;
  ppcVar36 = argv + (ulong)(~optind + argc) + (long)(int)optind + 1;
  local_138 = (char **)0x0;
  do {
    unaff_R14 = *ppcVar27;
    pcVar11 = strchr(unaff_R14,0x3d);
    if (pcVar11 == (char *)0x0) {
LAB_00104545:
      pcVar11 = quote(unaff_R14);
      pcVar29 = (char *)dcgettext(0,"unrecognized operand %s",5);
      nl_error(0,0,pcVar29,pcVar11);
                    /* WARNING: Subroutine does not return */
      usage(1);
    }
    argv = (char **)(pcVar11 + 1);
    cVar28 = 'i';
    pcVar29 = "if";
    pcVar11 = unaff_R14;
    do {
      pcVar13 = pcVar11 + 1;
      pcVar29 = pcVar29 + 1;
      if (*pcVar11 != cVar28) goto LAB_00103410;
      cVar28 = *pcVar29;
      pcVar11 = pcVar13;
    } while (cVar28 != '\0');
    cVar28 = *pcVar13;
    ppcVar5 = (char **)output_file;
    ppcVar6 = argv;
    if ((cVar28 != '=') && (ppcVar6 = argv, cVar28 != '\0')) {
LAB_00103410:
      cVar28 = 'o';
      pcVar29 = "of";
      pcVar11 = unaff_R14;
      do {
        pcVar13 = pcVar11 + 1;
        pcVar29 = pcVar29 + 1;
        if (*pcVar11 != cVar28) goto LAB_00103450;
        cVar28 = *pcVar29;
        pcVar11 = pcVar13;
      } while (cVar28 != '\0');
      cVar28 = *pcVar13;
      ppcVar5 = argv;
      ppcVar6 = (char **)input_file;
      if ((cVar28 != '\0') && (ppcVar5 = argv, cVar28 != '=')) {
LAB_00103450:
        cVar28 = 'c';
        pcVar29 = "conv";
        pcVar11 = unaff_R14;
        do {
          pcVar13 = pcVar11 + 1;
          pcVar29 = pcVar29 + 1;
          if (*pcVar11 != cVar28) goto LAB_001034a8;
          cVar28 = *pcVar29;
          pcVar11 = pcVar13;
        } while (cVar28 != '\0');
        cVar28 = *pcVar13;
        if ((cVar28 == '\0') || (cVar28 == '=')) {
          uVar32 = parse_symbols((char *)argv,conversions,false,"invalid conversion");
          conversions_mask = conversions_mask | uVar32;
          ppcVar5 = (char **)output_file;
          ppcVar6 = (char **)input_file;
        }
        else {
LAB_001034a8:
          cVar28 = 'i';
          pcVar29 = "iflag";
          pcVar11 = unaff_R14;
          do {
            pcVar13 = pcVar11 + 1;
            pcVar29 = pcVar29 + 1;
            if (*pcVar11 != cVar28) goto LAB_00103502;
            cVar28 = *pcVar29;
            pcVar11 = pcVar13;
          } while (cVar28 != '\0');
          cVar28 = *pcVar13;
          if ((cVar28 == '\0') || (cVar28 == '=')) {
            uVar32 = parse_symbols((char *)argv,flags,false,"invalid input flag");
            input_flags = input_flags | uVar32;
            ppcVar5 = (char **)output_file;
            ppcVar6 = (char **)input_file;
          }
          else {
LAB_00103502:
            cVar28 = 'o';
            pcVar29 = "oflag";
            pcVar11 = unaff_R14;
            do {
              pcVar13 = pcVar11 + 1;
              pcVar29 = pcVar29 + 1;
              if (*pcVar11 != cVar28) goto LAB_00103d4c;
              cVar28 = *pcVar29;
              pcVar11 = pcVar13;
            } while (cVar28 != '\0');
            cVar28 = *pcVar13;
            if ((cVar28 == '=') || (cVar28 == '\0')) {
              uVar32 = parse_symbols((char *)argv,flags,false,"invalid output flag");
              output_flags = output_flags | uVar32;
              ppcVar5 = (char **)output_file;
              ppcVar6 = (char **)input_file;
            }
            else {
LAB_00103d4c:
              cVar28 = 's';
              pcVar29 = "status";
              pcVar11 = unaff_R14;
              do {
                pcVar13 = pcVar11 + 1;
                pcVar29 = pcVar29 + 1;
                if (cVar28 != *pcVar11) goto LAB_001041ab;
                cVar28 = *pcVar29;
                pcVar11 = pcVar13;
              } while (cVar28 != '\0');
              cVar28 = *pcVar13;
              if ((cVar28 != '\0') && (cVar28 != '=')) {
LAB_001041ab:
                ptr = &suffix;
                n = 0;
                sVar10 = xstrtoumax((char *)argv,ptr,10,&n,suffixes_7579);
                in_R10 = (ulong)sVar10;
                if ((sVar10 & ~LONGINT_OVERFLOW) == LONGINT_INVALID_SUFFIX_CHAR) goto LAB_0010427b;
                goto LAB_001041ee;
              }
              status_level = parse_symbols((char *)argv,statuses,true,"invalid status level");
              ppcVar5 = (char **)output_file;
              ppcVar6 = (char **)input_file;
            }
          }
        }
      }
    }
LAB_00102cae:
    input_file = (char *)ppcVar6;
    output_file = (char *)ppcVar5;
    ppcVar27 = ppcVar27 + 1;
  } while (ppcVar36 != ppcVar27);
  if (blocksize == 0) {
LAB_00103589:
    conversions_mask = conversions_mask | 0x800;
    if (input_blocksize == 0) {
      input_blocksize = 0x200;
    }
    if (output_blocksize == 0) {
      output_blocksize = 0x200;
    }
  }
  else {
    output_blocksize = blocksize;
    input_blocksize = blocksize;
  }
  if (conversion_blocksize == 0) {
    conversions_mask = conversions_mask & 0xffffffe7;
  }
  iVar8 = conversions_mask;
  if ((input_flags & 0x101000U) != 0) {
    input_flags = input_flags | 0x101000;
  }
  if ((output_flags & 1U) != 0) {
    pcVar11 = quote("fullblock");
    uVar41 = dcgettext(0,"invalid output flag",5);
    nl_error(0,0,"%s: %s",uVar41,pcVar11);
                    /* WARNING: Subroutine does not return */
    usage(1);
  }
  if ((char)local_140 != '\0') {
    input_flags = input_flags | 8;
  }
  if ((input_flags & 8U) == 0) {
    if (local_138 != (char **)0x0) {
      skip_records = (intmax_t)local_138;
    }
  }
  else if (local_138 != (char **)0x0) {
    skip_records = (long)local_138 / input_blocksize;
    skip_bytes = (long)local_138 % input_blocksize;
  }
  uVar32 = input_flags | 4;
  if (!bVar3) {
    uVar32 = input_flags;
  }
  if ((uVar32 & 4) == 0) {
    if (ppcVar38 != (char **)0x7fffffffffffffff) {
      max_records = (intmax_t)ppcVar38;
    }
  }
  else if (ppcVar38 != (char **)0x7fffffffffffffff) {
    max_bytes = (long)ppcVar38 % input_blocksize;
    max_records = (long)ppcVar38 / input_blocksize;
  }
  if (bVar40) {
    output_flags = output_flags | 0x10;
  }
  if ((output_flags & 0x10U) == 0) {
    if (local_128 != (char **)0x0) {
      seek_records = (intmax_t)local_128;
    }
  }
  else if (local_128 != (char **)0x0) {
    seek_records = (long)local_128 / output_blocksize;
    seek_bytes = (long)local_128 % output_blocksize;
  }
  ppcVar27 = (char **)(ulong)(uint)conversions_mask;
  if ((conversions_mask & 0x800U | uVar32 & 1) == 0) {
    if (((skip_records == 0) && (0x7ffffffffffffffd < max_records - 1U)) &&
       (((uVar32 | output_flags) & 0x4000) == 0)) {
      warn_partial_read = false;
      pcVar14 = iread;
    }
    else {
      warn_partial_read = true;
      pcVar14 = iread;
    }
  }
  else {
    pcVar14 = iread_fullblock;
    warn_partial_read = false;
    if ((uVar32 & 1) == 0) {
      pcVar14 = iread;
    }
  }
  input_flags = uVar32 & 0xfffffffe;
  iread_fnc = pcVar14;
  if (((conversions_mask & 7U) - 1 & conversions_mask & 7U) != 0) {
    pcVar11 = (char *)dcgettext(0,"cannot combine any two of {ascii,ebcdic,ibm}",5);
    pcVar29 = (char *)0x1;
    nl_error(1,0,pcVar11);
    pcVar11 = extraout_RAX;
LAB_00104741:
    uVar32 = (uint)in_R10;
    if (pcVar29[1] != 'x') goto LAB_001041ee;
    pcVar29 = pcVar29 + 2;
    if (pcVar11[-1] == 'B') goto LAB_0010448d;
LAB_001042a0:
    sVar10 = xstrtoumax(pcVar29,ptr,10,&o,suffixes_7579);
    if ((sVar10 & ~LONGINT_OVERFLOW) == LONGINT_OK) {
      ptr = SUB168(ZEXT816(n) * ZEXT816(o),0);
      if (((long)ptr < 0) || (SUB168(ZEXT816(n) * ZEXT816(o) >> 0x40,0) != 0)) {
        ptr = (char **)0x7fffffffffffffff;
        sVar10 = LONGINT_OVERFLOW;
      }
      else if (ptr == (char **)0x0) {
        sVar10 = sVar10 & ~LONGINT_OVERFLOW;
        iVar8 = strncmp((char *)argv,"0x",2);
        if (iVar8 == 0) {
          pcVar11 = quote_n(1,"00x");
          pcVar29 = quote_n(0,"0x");
          pcVar13 = (char *)dcgettext(0,
                                      "warning: %s is a zero multiplier; use %s if that is intended"
                                      ,5);
          nl_error(0,0,pcVar13,pcVar29,pcVar11);
        }
      }
      else {
        bVar39 = (sVar10 | (strtol_error)in_R10) != LONGINT_INVALID_SUFFIX_CHAR;
        if (bVar39) {
          ptr = (char **)0x7fffffffffffffff;
        }
        sVar10 = (strtol_error)bVar39;
      }
    }
    else {
      ptr = (char **)0x0;
    }
    in_R10 = (ulong)sVar10;
LAB_001041fc:
    uVar32 = (uint)in_R10;
    cVar28 = 'i';
    pcVar29 = "ibs";
    pcVar11 = unaff_R14;
    do {
      pcVar13 = pcVar11 + 1;
      pcVar29 = pcVar29 + 1;
      bVar39 = bVar3;
      if (*pcVar11 != cVar28) goto LAB_0010437c;
      cVar28 = *pcVar29;
      pcVar11 = pcVar13;
    } while (cVar28 != '\0');
    cVar28 = *pcVar13;
    if ((cVar28 == '\0') || (cVar28 == '=')) {
      piVar26 = &input_blocksize;
LAB_00104239:
      if ((long)ptr < 1) goto LAB_00104242;
      if (ptr == (char **)0x7fffffffffffffff) {
        ppcVar27 = (char **)quote((char *)argv);
        uVar41 = dcgettext(0,"invalid number",5);
        iVar8 = 0x4b;
      }
      else {
        if (uVar32 == 0) goto LAB_00104583;
LAB_001045cf:
        local_140 = (uint *)((ulong)local_140 & 0xffffffff00000000 | (ulong)uVar32);
        ppcVar27 = (char **)quote((char *)argv);
        uVar41 = dcgettext(0,"invalid number",5);
        in_R10 = (ulong)(uVar32 - 1);
        iVar8 = 0x4b;
        if (uVar32 - 1 != 0) {
          iVar8 = 0;
        }
      }
      goto LAB_00104265;
    }
LAB_0010437c:
    cVar28 = 'o';
    pcVar29 = "obs";
    pcVar11 = unaff_R14;
    do {
      pcVar13 = pcVar11 + 1;
      pcVar29 = pcVar29 + 1;
      if (*pcVar11 != cVar28) goto LAB_001044c3;
      cVar28 = *pcVar29;
      pcVar11 = pcVar13;
    } while (cVar28 != '\0');
    cVar28 = *pcVar13;
    if ((cVar28 == '\0') || (cVar28 == '=')) {
      piVar26 = &output_blocksize;
      goto LAB_00104239;
    }
LAB_001044c3:
    cVar28 = 'b';
    pcVar29 = "bs";
    pcVar11 = unaff_R14;
    do {
      pcVar13 = pcVar11 + 1;
      pcVar29 = pcVar29 + 1;
      if (*pcVar11 != cVar28) goto LAB_00104610;
      cVar28 = *pcVar29;
      pcVar11 = pcVar13;
    } while (cVar28 != '\0');
    cVar28 = *pcVar13;
    if ((cVar28 == '\0') || (cVar28 == '=')) {
      piVar26 = &blocksize;
      goto LAB_00104239;
    }
LAB_00104610:
    cVar28 = 'c';
    pcVar29 = "cbs";
    pcVar11 = unaff_R14;
    do {
      pcVar13 = pcVar11 + 1;
      pcVar29 = pcVar29 + 1;
      if (*pcVar11 != cVar28) goto LAB_001048df;
      cVar28 = *pcVar29;
      pcVar11 = pcVar13;
    } while (cVar28 != '\0');
    cVar28 = *pcVar13;
    if ((cVar28 == '\0') || (cVar28 == '=')) {
      piVar26 = &conversion_blocksize;
      lVar12 = 1;
    }
    else {
LAB_001048df:
      in_R10 = in_R10 & 0xffffffff;
      pcVar11 = strchr((char *)argv,0x42);
      cVar28 = 's';
      bVar39 = pcVar11 != (char *)0x0;
      pcVar29 = "skip";
      pcVar11 = unaff_R14;
      do {
        pcVar13 = pcVar11 + 1;
        pcVar29 = pcVar29 + 1;
        if (*pcVar11 != cVar28) goto LAB_00104948;
        cVar28 = *pcVar29;
        pcVar11 = pcVar13;
      } while (cVar28 != '\0');
      cVar28 = *pcVar13;
      if ((cVar28 != '\0') && (cVar28 != '=')) {
LAB_00104948:
        cVar28 = 'i';
        pcVar29 = "iseek";
        pcVar11 = unaff_R14;
        do {
          pcVar13 = pcVar11 + 1;
          pcVar29 = pcVar29 + 1;
          if (*pcVar11 != cVar28) goto LAB_00104978;
          cVar28 = *pcVar29;
          pcVar11 = pcVar13;
        } while (cVar28 != '\0');
        cVar28 = *pcVar13;
        if ((cVar28 != '=') && (cVar28 != '\0')) {
LAB_00104978:
          cVar28 = 's';
          pcVar29 = "seek";
          pcVar11 = unaff_R14 + (*unaff_R14 == 'o');
          do {
            pcVar13 = pcVar11 + 1;
            pcVar29 = pcVar29 + 1;
            if (*pcVar11 != cVar28) goto LAB_001049c3;
            cVar28 = *pcVar29;
            pcVar11 = pcVar13;
          } while (cVar28 != '\0');
          cVar28 = *pcVar13;
          if ((cVar28 != '=') && (cVar28 != '\0')) {
LAB_001049c3:
            cVar28 = 'c';
            pcVar29 = "count";
            pcVar11 = unaff_R14;
            do {
              pcVar13 = pcVar11 + 1;
              pcVar29 = pcVar29 + 1;
              if (*pcVar11 != cVar28) goto LAB_00104545;
              cVar28 = *pcVar29;
              pcVar11 = pcVar13;
            } while (cVar28 != '\0');
            cVar28 = *pcVar13;
            if ((cVar28 == '=') || (cVar28 == '\0')) {
              piVar26 = (idx_t *)0x0;
              lVar12 = 0;
              ppcVar38 = ptr;
              goto LAB_00104652;
            }
            goto LAB_00104545;
          }
          piVar26 = (idx_t *)0x0;
          lVar12 = 0;
          local_128 = ptr;
          bVar40 = bVar39;
          bVar39 = bVar3;
          goto LAB_00104652;
        }
      }
      local_140 = (uint *)((ulong)local_140 & 0xffffffffffffff00 | (ulong)bVar39);
      piVar26 = (idx_t *)0x0;
      lVar12 = 0;
      local_138 = ptr;
      bVar39 = bVar3;
    }
LAB_00104652:
    uVar32 = (uint)in_R10;
    if (lVar12 <= (long)ptr) {
      if (uVar32 != 0) goto LAB_001045cf;
      ppcVar5 = (char **)output_file;
      ppcVar6 = (char **)input_file;
      bVar3 = bVar39;
      if (piVar26 != (idx_t *)0x0) {
LAB_00104583:
        *piVar26 = (idx_t)ptr;
        ppcVar5 = (char **)output_file;
        ppcVar6 = (char **)input_file;
        bVar3 = bVar39;
      }
      goto LAB_00102cae;
    }
LAB_00104242:
    ppcVar27 = (char **)quote((char *)argv);
    uVar41 = dcgettext(0,"invalid number",5);
    iVar8 = 0;
LAB_00104265:
    nl_error(1,iVar8,"%s: %s",uVar41,ppcVar27);
    bVar3 = bVar39;
LAB_0010427b:
    uVar32 = (uint)in_R10;
    if (suffix[-1] == 'B') {
      if (*suffix == 'x') {
        pcVar29 = suffix + 1;
LAB_0010448d:
        pcVar11 = strchr(pcVar29,0x42);
        in_R10 = (ulong)uVar32;
        if (pcVar11 == (char *)0x0) goto LAB_001042a0;
      }
    }
    else if (*suffix == 'B') {
      pcVar11 = suffix + 1;
      pcVar13 = suffix + 1;
      pcVar29 = suffix;
      suffix = pcVar11;
      if (*pcVar13 != '\0') goto LAB_00104741;
      in_R10 = (ulong)(uVar32 & 0xfffffffd);
    }
    else if (*suffix == 'x') goto code_r0x0010429c;
LAB_001041ee:
    ptr = (char **)n;
    if ((long)n < 0) {
      ptr = (char **)0x7fffffffffffffff;
      in_R10 = 1;
    }
    goto LAB_001041fc;
  }
  if (((conversions_mask & 0x18U) - 1 & conversions_mask & 0x18U) == 0) {
    if (((conversions_mask & 0x60U) - 1 & conversions_mask & 0x60U) != 0) goto LAB_00104782;
    if (((conversions_mask & 0x3000U) - 1 & conversions_mask & 0x3000U) != 0) goto LAB_001047a6;
    local_108 = (uVar32 & 0x4002) - 1 & uVar32 & 0x4002 |
                (output_flags & 0x4002U) - 1 & output_flags & 0x4002U;
    if (local_108 == 0) {
      if ((uVar32 & 2) != 0) {
        i_nocache_eof = (max_records | max_bytes) == 0;
        i_nocache = true;
        input_flags = uVar32 & 0xfffffffc;
      }
      if ((output_flags & 2U) != 0) {
        o_nocache_eof = (max_records | max_bytes) == 0;
        o_nocache = true;
        output_flags = output_flags & 0xfffffffd;
      }
      if ((conversions_mask & 1U) != 0) {
        ppaVar25 = (anon_subr_ssize_t_int_char_ptr_idx_t **)trans_table;
        do {
          ppaVar15 = (anon_subr_ssize_t_int_char_ptr_idx_t **)((long)ppaVar25 + 1);
          *(char *)ppaVar25 = ""[*(byte *)ppaVar25];
          ppaVar25 = ppaVar15;
        } while (ppaVar15 != &iread_fnc);
        translation_needed = true;
      }
      if ((iVar8 & 0x40U) == 0) {
        if ((iVar8 & 0x20U) != 0) {
          pp_Var16 = __ctype_tolower_loc();
          p_Var2 = *pp_Var16;
          ppaVar25 = (anon_subr_ssize_t_int_char_ptr_idx_t **)trans_table;
          do {
            ppaVar15 = (anon_subr_ssize_t_int_char_ptr_idx_t **)((long)ppaVar25 + 1);
            *(byte *)ppaVar25 = (byte)p_Var2[*(byte *)ppaVar25];
            ppaVar25 = ppaVar15;
          } while (ppaVar15 != &iread_fnc);
          goto LAB_00102f42;
        }
      }
      else {
        pp_Var16 = __ctype_toupper_loc();
        p_Var2 = *pp_Var16;
        ppaVar25 = (anon_subr_ssize_t_int_char_ptr_idx_t **)trans_table;
        do {
          ppaVar15 = (anon_subr_ssize_t_int_char_ptr_idx_t **)((long)ppaVar25 + 1);
          *(byte *)ppaVar25 = (byte)p_Var2[*(byte *)ppaVar25];
          ppaVar25 = ppaVar15;
        } while (ppaVar15 != &iread_fnc);
LAB_00102f42:
        translation_needed = true;
      }
      if ((iVar8 & 2U) == 0) {
        if ((iVar8 & 4U) != 0) {
          ppaVar25 = (anon_subr_ssize_t_int_char_ptr_idx_t **)trans_table;
          do {
            ppaVar15 = (anon_subr_ssize_t_int_char_ptr_idx_t **)((long)ppaVar25 + 1);
            *(char *)ppaVar25 = ""[*(byte *)ppaVar25];
            ppaVar25 = ppaVar15;
          } while (ppaVar15 != &iread_fnc);
          goto LAB_00102f83;
        }
      }
      else {
        ppaVar25 = (anon_subr_ssize_t_int_char_ptr_idx_t **)trans_table;
        do {
          ppaVar15 = (anon_subr_ssize_t_int_char_ptr_idx_t **)((long)ppaVar25 + 1);
          *(char *)ppaVar25 = ""[*(byte *)ppaVar25];
          ppaVar25 = ppaVar15;
        } while (ppaVar15 != &iread_fnc);
LAB_00102f83:
        translation_needed = true;
        newline_character = '%';
        space_character = '@';
      }
      pcVar11 = input_file;
      iVar8 = input_flags;
      pcVar29 = (char *)(ulong)(uint)input_flags;
      local_140 = (uint *)__errno_location();
      if (pcVar11 != (char *)0x0) {
        iVar8 = ifd_reopen(0,pcVar11,iVar8,0);
        unaff_R14 = pcVar29;
        if (-1 < iVar8) goto LAB_00102fd0;
        goto LAB_001047ee;
      }
      input_file = (char *)dcgettext(0,"standard input",5);
      set_fd_flags(0,iVar8,input_file);
LAB_00102fd0:
      input_offset = lseek(0,0,1);
      argv = (char **)output_blocksize;
      unaff_R14 = (char *)seek_records;
      iVar8 = output_flags;
      input_seekable = (_Bool)((byte)~(byte)((ulong)input_offset >> 0x38) >> 7);
      if (input_offset < 0) {
        input_offset = 0;
      }
      input_seek_errno = *local_140;
      if (output_file == (char *)0x0) {
        output_file = (char *)dcgettext(0,"standard output",5);
        set_fd_flags(1,iVar8,output_file);
      }
      else {
        uVar32 = conversions_mask >> 6 & 0x80U | output_flags |
                 (uint)((conversions_mask & 0x1000U) == 0) << 6;
        if (seek_records == 0) {
          uVar32 = uVar32 | -(uint)((conversions_mask & 0x200U) == 0) & 0x200;
          iVar17 = seek_bytes;
LAB_00103075:
          pcVar11 = output_file;
          iVar8 = ifd_reopen(1,output_file,uVar32 | 1,0x1b6);
          if (iVar8 < 0) goto LAB_0010482e;
        }
        else {
          iVar17 = seek_records * output_blocksize;
          if (((SEXT816(iVar17) != SEXT816(seek_records) * SEXT816(output_blocksize)) ||
              (bVar40 = SCARRY8(iVar17,seek_bytes), iVar17 = iVar17 + seek_bytes, bVar40)) &&
             ((conversions_mask & 0x200U) == 0)) goto LAB_0010486e;
          iVar8 = ifd_reopen(1,output_file,uVar32 | 2,0x1b6);
          pcVar11 = output_file;
          if (iVar8 < 0) goto LAB_00103075;
        }
        pcVar29 = unaff_R14;
        if (((seek_records != 0) && ((conversions_mask & 0x200U) == 0)) &&
           (iVar8 = iftruncate(iVar17,(int)pcVar11), iVar8 != 0)) {
          uVar32 = *local_140;
          pcVar29 = (char *)(ulong)uVar32;
          iVar8 = ifstat(1,(stat *)(sigaction *)&stdout_stat);
          if (iVar8 == 0) {
            if (((stdout_stat.st_mode & 0xf000) - 0x4000 & 0xffffb000) == 0) {
              pcVar11 = quotearg_style(shell_escape_always_quoting_style,output_file);
              pcVar13 = (char *)dcgettext(0,"failed to truncate to %ld bytes in output file %s",5);
              nl_error(0,uVar32,pcVar13,iVar17,pcVar11);
            }
          }
          else {
            quotearg_style(shell_escape_always_quoting_style,output_file);
            pcVar11 = (char *)dcgettext(0,"cannot fstat %s",5);
            nl_error(0,*local_140,pcVar11);
          }
        }
      }
      start_time = gethrxtime();
      oVar4 = input_offset;
      next_time = start_time + 1000000000;
      if (skip_records == 0) {
        unaff_R14 = pcVar29;
        if (skip_bytes != 0) {
          lVar12 = 0;
LAB_001030e8:
          bVar40 = SCARRY8(lVar12,skip_bytes);
          lVar12 = lVar12 + skip_bytes;
          goto LAB_001030f6;
        }
      }
      else {
        bVar40 = true;
        lVar12 = skip_records * input_blocksize;
        if (SEXT816(lVar12) == SEXT816(skip_records) * SEXT816(input_blocksize)) goto LAB_001030e8;
LAB_001030f6:
        iVar17 = skip(0,input_file,skip_records,input_blocksize,&skip_bytes);
        unaff_R14 = (char *)oVar4;
        if (((iVar17 != 0) ||
            ((-1 < input_offset && ((bVar40 != false || (input_offset - oVar4 != lVar12)))))) &&
           (status_level != 1)) {
          quotearg_n_style_colon(0,3,input_file);
          pcVar11 = (char *)dcgettext(0,"%s: cannot skip to specified offset",5);
          nl_error(0,0,pcVar11);
        }
      }
      ctx = (uintmax_t *)(seek_records | seek_bytes);
      if (ctx != (uintmax_t *)0x0) {
        ctx = (uintmax_t *)0x1;
        o = seek_bytes;
        iVar17 = skip(1,output_file,seek_records,output_blocksize,(idx_t *)&o);
        uVar30 = output_blocksize;
        if ((iVar17 != 0) || (uVar30 = o, o != 0)) {
          memset(obuf,0,uVar30);
          uVar41 = extraout_RDX;
          while (iVar24 = output_blocksize, iVar8 = (int)uVar41, iVar17 != 0) {
            ctx = (uintmax_t *)obuf;
            iVar18 = iwrite(obuf,output_blocksize,iVar8);
            iVar8 = (int)extraout_RDX_00;
            if (iVar24 != iVar18) goto LAB_00104503;
            iVar17 = iVar17 + -1;
            uVar41 = extraout_RDX_00;
            if (iVar17 == 0) {
              if (o == 0) goto LAB_00103220;
              break;
            }
          }
          uVar30 = o;
          ctx = (uintmax_t *)obuf;
          uVar19 = iwrite(obuf,o,iVar8);
          if (uVar19 == uVar30) goto LAB_00103220;
LAB_00104503:
          pcVar11 = quotearg_style(shell_escape_always_quoting_style,output_file);
          pcVar29 = (char *)dcgettext(0,"writing to %s",5);
          iVar8 = 0;
          nl_error(0,*local_140,pcVar29,pcVar11);
          quit(iVar8);
          goto LAB_00104545;
        }
      }
LAB_00103220:
      iVar8 = 0;
      if ((max_records | max_bytes) == 0) goto LAB_00103a00;
      if (ibuf == (char *)0x0) {
        alloc_ibuf();
      }
      alloc_obuf();
      iVar8 = 0;
      sVar33 = 0;
      local_12c = 0xffffffff;
      uVar31 = extraout_RDX_01;
joined_r0x0010326f:
      do {
        if ((status_level == 4) &&
           (progress_time = gethrxtime(), uVar31 = extraout_RDX_03, next_time <= progress_time)) {
          print_xfer_stats(progress_time);
          next_time = next_time + 1000000000;
          uVar31 = extraout_RDX_04;
        }
        iVar24 = max_bytes;
        iVar17 = max_records;
        lVar12 = r_full + r_partial;
        bVar35 = (byte)local_12c;
        if ((long)((ulong)(max_bytes != 0) + max_records) <= lVar12) goto LAB_00103eee;
        pcVar11 = ibuf;
        if ((conversions_mask & 0x500U) == 0x500) {
          uVar32 = conversions_mask & 0x18;
          if (uVar32 != 0) {
            uVar32 = 0x20;
          }
          pcVar11 = (char *)memset(ibuf,uVar32,input_blocksize);
        }
        if (lVar12 < iVar17) {
          len = (*iread_fnc)(0,pcVar11,input_blocksize);
          if ((long)len < 1) goto LAB_0010364a;
LAB_00103303:
          if ((-1 < input_offset) &&
             (bVar40 = SCARRY8(input_offset,len), input_offset = input_offset + len, bVar40)) {
            input_offset = -1;
          }
          if (i_nocache != false) {
            invalidate_cache(0,len);
          }
          sVar33 = len;
          if (input_blocksize <= (long)len) goto LAB_0010376f;
          goto LAB_0010333c;
        }
        len = (*iread_fnc)(0,pcVar11,iVar24);
        if (0 < (long)len) goto LAB_00103303;
LAB_0010364a:
        if (len == 0) {
          i_nocache_eof = (_Bool)(i_nocache_eof | i_nocache);
          uVar31 = (ulong)o_nocache_eof;
          if (o_nocache != false) {
            local_108 = (uint)((conversions_mask & 0x200U) == 0);
          }
          o_nocache_eof = (_Bool)(((byte)local_108 | o_nocache_eof) & 1);
LAB_00103eee:
          uVar32 = conversions_mask;
          ctx = (uintmax_t *)(ulong)local_12c;
          if (local_12c != 0xffffffff) {
            o = o & 0xffffffffffffff00 | (ulong)bVar35;
            if ((conversions_mask & 8U) == 0) {
              if ((conversions_mask & 0x10U) == 0) {
                ctx = (uintmax_t *)(ulong)bVar35;
                uVar31 = oc + 1;
                obuf[oc] = bVar35;
                oc = uVar31;
                if (output_blocksize <= (long)uVar31) {
                  write_output();
                  uVar31 = extraout_RDX_18;
                  uVar32 = conversions_mask;
                }
              }
              else {
                ctx = &o;
                copy_with_unblock((char *)ctx,1);
                uVar31 = extraout_RDX_17;
                uVar32 = conversions_mask;
              }
            }
            else {
              ctx = &o;
              copy_with_block((char *)ctx,1);
              uVar31 = extraout_RDX_16;
              uVar32 = conversions_mask;
            }
          }
          if (((uVar32 & 8) == 0) || (col < 1)) goto LAB_00103fa1;
          iVar24 = col;
          if (col < conversion_blocksize) goto LAB_00103f6d;
          goto LAB_00103fb1;
        }
        if (((conversions_mask & 0x100U) == 0) || (status_level != 1)) {
          quotearg_style(shell_escape_always_quoting_style,input_file);
          pcVar11 = (char *)dcgettext(0,"error reading %s",5);
          nl_error(0,*local_140,pcVar11);
          if ((conversions_mask & 0x100U) == 0) {
            iVar8 = 1;
            uVar31 = extraout_RDX_07;
            goto LAB_00103eee;
          }
        }
        print_stats();
        lVar12 = input_blocksize - sVar33;
        invalidate_cache(0,lVar12);
        if (input_seekable == false) {
          uVar31 = extraout_RDX_08;
          if (input_seek_errno == 0x1d) goto LAB_00103746;
          *local_140 = input_seek_errno;
          goto LAB_001036ee;
        }
        if (input_offset < 0) {
LAB_001037da:
          quotearg_style(shell_escape_always_quoting_style,input_file);
          pcVar11 = (char *)dcgettext(0,"offset overflow while reading file %s",5);
          nl_error(0,0,pcVar11);
          uVar31 = extraout_RDX_11;
LAB_0010372d:
          input_seekable = false;
          input_seek_errno = 0x1d;
          iVar8 = 1;
        }
        else {
          lVar20 = input_offset + lVar12;
          if (SCARRY8(input_offset,lVar12)) {
            input_offset = -1;
            goto LAB_001037da;
          }
          input_offset = lVar20;
          if (lVar20 < 0) goto LAB_001037da;
          _Var23 = lseek(0,0,1);
          if (_Var23 < 0) {
LAB_001036ee:
            quotearg_n_style_colon(0,3,input_file);
            pcVar11 = (char *)dcgettext(0,"%s: cannot seek",5);
            nl_error(0,*local_140,pcVar11);
            uVar31 = extraout_RDX_09;
            goto LAB_0010372d;
          }
          uVar31 = extraout_RDX_12;
          if (lVar20 != _Var23) {
            lVar20 = lVar20 - _Var23;
            if (((lVar20 < 0) || (lVar12 < lVar20)) && (status_level != 1)) {
              pcVar11 = (char *)dcgettext(0,"warning: invalid file offset after failed read",5);
              nl_error(0,0,pcVar11);
            }
            _Var23 = lseek(0,lVar20,1);
            uVar31 = extraout_RDX_13;
            if (_Var23 < 0) {
              if (*local_140 == 0) {
                pcVar11 = (char *)dcgettext(0,"cannot work around kernel bug after all",5);
                nl_error(0,0,pcVar11);
              }
              goto LAB_001036ee;
            }
          }
        }
LAB_00103746:
      } while (((conversions_mask & 0x400U) == 0) || (sVar33 != 0));
      len = 0;
      sVar33 = len;
      if (input_blocksize < 1) {
LAB_0010376f:
        r_full = r_full + 1;
        sVar33 = 0;
      }
      else {
LAB_0010333c:
        r_partial = r_partial + 1;
        len = sVar33;
        if (((conversions_mask & 0x400U) != 0) &&
           (len = input_blocksize, (conversions_mask & 0x100U) == 0)) {
          uVar32 = conversions_mask & 0x18;
          if (uVar32 != 0) {
            uVar32 = 0x20;
          }
          memset(ibuf + sVar33,uVar32,input_blocksize - sVar33);
          len = input_blocksize;
        }
      }
      pcVar29 = ibuf;
      pcVar11 = obuf;
      if (ibuf == obuf) {
        sVar37 = iwrite(ibuf,len,(int)input_blocksize);
        w_bytes = w_bytes + sVar37;
        if (sVar37 == len) {
          uVar31 = extraout_RDX_14;
          if (input_blocksize == len) {
            w_full = w_full + 1;
          }
          else {
            w_partial = w_partial + 1;
          }
          goto joined_r0x0010326f;
        }
        goto LAB_00103b3b;
      }
      uVar32 = conversions_mask;
      if (translation_needed == false) {
        if ((conversions_mask & 0x80U) == 0) goto LAB_001033b9;
        if (len != 0) goto LAB_00103853;
      }
      else {
        if (len != 0) {
          pbVar1 = (byte *)(ibuf + len);
          pbVar21 = (byte *)ibuf;
          do {
            pbVar22 = pbVar21 + 1;
            *pbVar21 = trans_table[*pbVar21];
            pbVar21 = pbVar22;
          } while (pbVar22 != pbVar1);
          uVar32 = conversions_mask;
          if ((conversions_mask & 0x80U) == 0) goto LAB_001033b9;
LAB_00103853:
          uVar32 = conversions_mask;
          uVar34 = 0xffffffff;
          sVar37 = len;
          if (((byte)len & 1) != (byte)~(byte)(local_12c >> 0x18) >> 7) {
            sVar37 = len - 1;
            uVar34 = (uint)(byte)pcVar29[sVar37];
            len = sVar37;
          }
          for (; 1 < (long)sVar37; sVar37 = sVar37 - 2) {
            pcVar29[sVar37] = pcVar29[sVar37 - 2];
          }
          if (local_12c == 0xffffffff) {
            pcVar29 = pcVar29 + 1;
            local_12c = uVar34;
          }
          else {
            len = len + 1;
            pcVar29[1] = bVar35;
            local_12c = uVar34;
          }
          goto LAB_001033b9;
        }
        if ((conversions_mask & 0x80U) == 0) goto LAB_001033b9;
      }
      len = 0;
LAB_001033b9:
      if ((uVar32 & 8) == 0) {
        if ((uVar32 & 0x10) == 0) {
          do {
            sVar37 = output_blocksize - oc;
            if ((long)len < output_blocksize - oc) {
              sVar37 = len;
            }
            len = len - sVar37;
            lVar12 = sVar37 + oc;
            memcpy(pcVar11 + oc,pcVar29,sVar37);
            uVar31 = extraout_RDX_06;
            oc = lVar12;
            if (output_blocksize <= lVar12) {
              write_output();
              uVar31 = extraout_RDX_05;
            }
            pcVar11 = obuf;
            pcVar29 = pcVar29 + sVar37;
          } while (len != 0);
        }
        else {
          copy_with_unblock(pcVar29,len);
          uVar31 = extraout_RDX_02;
        }
      }
      else {
        copy_with_block(pcVar29,len);
        uVar31 = extraout_RDX_10;
      }
      goto joined_r0x0010326f;
    }
  }
  else {
    pcVar11 = (char *)dcgettext(0,"cannot combine block and unblock",5);
    nl_error(1,0,pcVar11);
LAB_00104782:
    pcVar11 = (char *)dcgettext(0,"cannot combine lcase and ucase",5);
    nl_error(1,0,pcVar11);
LAB_001047a6:
    pcVar11 = (char *)dcgettext(0,"cannot combine excl and nocreat",5);
    nl_error(1,0,pcVar11);
  }
  pcVar11 = (char *)dcgettext(0,"cannot combine direct and nocache",5);
  nl_error(1,0,pcVar11);
LAB_001047ee:
  pcVar11 = quotearg_style(shell_escape_always_quoting_style,input_file);
  pcVar29 = (char *)dcgettext(0,"failed to open %s",5);
  nl_error(1,*local_140,pcVar29,pcVar11);
LAB_0010482e:
  pcVar11 = quotearg_style(shell_escape_always_quoting_style,output_file);
  pcVar29 = (char *)dcgettext(0,"failed to open %s",5);
  nl_error(1,*local_140,pcVar29,pcVar11);
LAB_0010486e:
  pcVar11 = (char *)dcgettext(0,
                              "offset too large: cannot truncate to a length of seek=%ld (%td-byte) blocks"
                              ,5);
  nl_error(1,0,pcVar11,unaff_R14,argv);
  goto LAB_00104898;
code_r0x0010429c:
  pcVar29 = suffix + 1;
  goto LAB_001042a0;
LAB_00103f6d:
  do {
    lVar12 = oc + 1;
    obuf[oc] = space_character;
    uVar31 = oc;
    oc = lVar12;
    if (output_blocksize <= lVar12) {
      write_output();
      uVar31 = extraout_RDX_15;
    }
    iVar24 = iVar24 + 1;
  } while (iVar24 < conversion_blocksize);
LAB_00103fa1:
  uVar32 = conversions_mask;
  if (col != 0) {
LAB_00103fb1:
    if ((uVar32 & 0x10) != 0) {
      lVar12 = oc + 1;
      obuf[oc] = newline_character;
      uVar31 = oc;
      oc = lVar12;
      if (output_blocksize <= lVar12) {
        write_output();
        uVar31 = extraout_RDX_19;
      }
    }
  }
  if (oc != 0) {
    ctx = (uintmax_t *)obuf;
    iVar24 = iwrite(obuf,oc,(int)uVar31);
    w_bytes = w_bytes + iVar24;
    if (iVar24 != 0) {
      w_partial = w_partial + 1;
    }
    if (iVar24 != oc) {
LAB_00103b3b:
      pcVar11 = quotearg_style(shell_escape_always_quoting_style,output_file);
      pcVar29 = (char *)dcgettext(0,"error writing %s",5);
      ctx = (uintmax_t *)0x0;
      nl_error(0,*local_140,pcVar29,pcVar11);
      iVar8 = 1;
      goto LAB_00103a00;
    }
  }
  if (final_op_was_seek != false) {
    ctx = (uintmax_t *)0x1;
    iVar9 = ifstat(1,(stat *)(sigaction *)&stdout_stat);
    if (iVar9 != 0) {
      pcVar11 = quotearg_style(shell_escape_always_quoting_style,output_file);
      pcVar29 = (char *)dcgettext(0,"cannot fstat %s",5);
      ctx = (uintmax_t *)0x0;
      nl_error(0,*local_140,pcVar29,pcVar11);
LAB_001039f5:
      iVar8 = 1;
      goto LAB_00103a00;
    }
    if ((stdout_stat.st_mode & 0xf000) == 0x8000) {
      iVar9 = 0;
      ctx = (uintmax_t *)0x1;
      length = (uintmax_t *)lseek(1,0,1);
      if (((-1 < (long)length) &&
          (CONCAT44(stdout_stat.st_size._4_4_,(undefined4)stdout_stat.st_size) < (long)length)) &&
         (ctx = length, iVar9 = iftruncate((off_t)length,iVar9), iVar9 != 0)) {
        pcVar11 = quotearg_style(shell_escape_always_quoting_style,output_file);
        pcVar29 = (char *)dcgettext(0,"failed to truncate to %ld bytes in output file %s",5);
        ctx = (uintmax_t *)0x0;
        nl_error(0,*local_140,pcVar29,length,pcVar11);
        goto LAB_001039f5;
      }
    }
  }
  if ((((conversions_mask & 0xc000U) != 0) && (status_level == 4)) &&
     ((-1 < reported_w_bytes && (reported_w_bytes < w_bytes)))) {
    ctx = (uintmax_t *)0x0;
    print_xfer_stats(0);
  }
LAB_00103a00:
  iVar9 = synchronize_output();
  if (iVar9 == 0) {
    iVar9 = iVar8;
  }
  if ((max_records | max_bytes) == 0) {
    if (i_nocache != false) {
      ctx = (uintmax_t *)0x0;
      _Var7 = invalidate_cache(0,0);
      if (_Var7 == false) {
        uVar41 = quotearg_n_style_colon(0,3,input_file);
        pcVar11 = (char *)dcgettext(0,"failed to discard cache for: %s",5);
        ctx = (uintmax_t *)0x0;
        nl_error(0,*local_140,pcVar11,uVar41);
        iVar9 = 1;
      }
    }
    if (o_nocache != false) {
      ctx = (uintmax_t *)0x1;
      _Var7 = invalidate_cache(1,0);
      if (_Var7 == false) {
        uVar41 = quotearg_n_style_colon(0,3,output_file);
        pcVar11 = (char *)dcgettext(0,"failed to discard cache for: %s",5);
        ctx = (uintmax_t *)0x0;
        nl_error(0,*local_140,pcVar11,uVar41);
        iVar9 = 1;
      }
    }
  }
  else {
    if ((i_nocache != false) || (i_nocache_eof != false)) {
      ctx = (uintmax_t *)0x0;
      invalidate_cache(0,0);
    }
    if ((o_nocache != false) || (o_nocache_eof != false)) {
      ctx = (uintmax_t *)0x1;
      invalidate_cache(1,0);
    }
  }
  process_signals();
  cleanup((EVP_PKEY_CTX *)ctx);
  print_stats();
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return iVar9;
  }
LAB_00104898:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

