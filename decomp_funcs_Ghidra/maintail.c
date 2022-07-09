
/* WARNING: Could not reconcile some variable overlaps */

int main(int argc,char **argv)

{
  char cVar1;
  uint fd;
  long lVar2;
  double dVar3;
  __dev_t *p_Var4;
  _Bool _Var5;
  byte bVar6;
  int iVar7;
  uint uVar8;
  strtol_error sVar9;
  int iVar10;
  uint uVar11;
  ptrdiff_t pVar12;
  char *pcVar13;
  long *plVar14;
  stat *psVar15;
  stat *psVar16;
  size_t sVar17;
  void *pvVar18;
  char *pcVar19;
  int *piVar20;
  stat *psVar21;
  stat *psVar22;
  __blksize_t _Var23;
  __off_t _Var24;
  stat *psVar25;
  undefined8 uVar26;
  int *piVar27;
  off_t oVar28;
  uint *puVar29;
  char *pcVar30;
  File_spec *pFVar31;
  File_spec *f;
  uintmax_t uVar32;
  ulong uVar33;
  long lVar34;
  int *piVar35;
  char **ppcVar36;
  stat *p;
  uint uVar37;
  long lVar38;
  File_spec *pFVar39;
  stat *unaff_R15;
  stat *psVar40;
  long *plVar41;
  long in_FS_OFFSET;
  bool bVar42;
  byte bVar43;
  undefined auVar44 [16];
  undefined8 uVar45;
  int *local_258;
  stat *local_250;
  undefined8 local_248;
  stat *local_240;
  undefined8 local_238;
  uint local_22c;
  stat *local_228;
  char *local_220;
  int *local_218;
  File_spec *local_210;
  stat *local_208;
  stat *local_200;
  char *local_1f8;
  stat *local_1f0;
  long local_1e8;
  byte local_1dd;
  uint local_1dc;
  uintmax_t n_units;
  File_spec *prev_fspec;
  File_spec key;
  stat out_stat;
  stat in_stat;
  
  bVar43 = 0;
  lVar2 = *(long *)(in_FS_OFFSET + 0x28);
  n_units = 10;
  set_program_name(*argv);
  setlocale(6,"");
  bindtextdomain("coreutils");
  textdomain("coreutils");
  atexit(close_stdout);
  have_read_stdin = false;
  count_lines = true;
  print_headers = false;
  from_start = false;
  forever = false;
  line_end = '\n';
  if (argc == 2) {
LAB_00102ab2:
    iVar7 = posix2_version();
    pcVar30 = argv[1];
    pcVar19 = pcVar30 + 1;
    if (*pcVar30 == '+') {
      _Var5 = true;
      if (0x2b8 < iVar7 - 0x30db0U) goto LAB_00102e2a;
      goto LAB_00102ad4;
    }
    if ((*pcVar30 != '-') ||
       ((0x30daf < iVar7 && (pcVar30[(ulong)(pcVar30[1] == 'c') + 1] == '\0')))) goto LAB_00102ad4;
    _Var5 = false;
LAB_00102e2a:
    cVar1 = pcVar30[1];
    pcVar30 = pcVar19;
    while ((int)cVar1 - 0x30U < 10) {
      pcVar13 = pcVar30 + 1;
      pcVar30 = pcVar30 + 1;
      cVar1 = *pcVar13;
    }
    if (cVar1 == 'c') {
      pFVar39 = (File_spec *)0x0;
      uVar32 = 10;
LAB_001039b5:
      pcVar13 = pcVar30 + 1;
    }
    else {
      if (cVar1 == 'l') {
        pFVar39 = (File_spec *)0x1;
        uVar32 = 10;
        goto LAB_001039b5;
      }
      if (cVar1 == 'b') {
        pFVar39 = (File_spec *)0x0;
        uVar32 = 0x1400;
        goto LAB_001039b5;
      }
      pFVar39 = (File_spec *)0x1;
      uVar32 = 10;
      pcVar13 = pcVar30;
    }
    bVar42 = *pcVar13 == 'f';
    if (bVar42) {
      pcVar13 = pcVar13 + 1;
    }
    psVar25 = (stat *)(ulong)bVar42;
    if (*pcVar13 != '\0') goto LAB_00102ad4;
    if ((pcVar19 != pcVar30) &&
       (sVar9 = xstrtoumax(pcVar19,(char **)0x0,10,&n_units,"b"), uVar32 = n_units,
       (sVar9 & ~LONGINT_INVALID_SUFFIX_CHAR) != LONGINT_OK)) {
      quote(argv[1]);
      uVar45 = dcgettext(0,"invalid number",5);
      piVar20 = __errno_location();
      error(1,*piVar20,"%s: %s",uVar45);
      goto LAB_001049b0;
    }
    n_units = uVar32;
    lVar34 = 1;
    count_lines = SUB81(pFVar39,0);
    from_start = _Var5;
    forever = bVar42;
  }
  else {
    if (argc == 3) {
      pcVar19 = argv[2];
      if ((*pcVar19 == '-') && (pcVar19[1] != '\0')) goto LAB_00102aa2;
      goto LAB_00102ab2;
    }
    if (argc == 4) {
      pcVar19 = argv[2];
LAB_00102aa2:
      iVar7 = strcmp(pcVar19,"--");
      if (iVar7 == 0) goto LAB_00102ab2;
    }
LAB_00102ad4:
    lVar34 = 0;
  }
  psVar16 = (stat *)(argv + lVar34);
  sVar17 = 0;
  pcVar19 = (char *)(ulong)(uint)(argc - (int)lVar34);
  unaff_R15 = (stat *)0x2;
  local_220 = DAT_0010e4a8;
  psVar25 = (stat *)&key;
LAB_00102b05:
  uVar45 = 0x102b21;
  uVar8 = getopt_long((ulong)pcVar19 & 0xffffffff,psVar16,"c:n:fFqs:vz0123456789");
  if (uVar8 != 0xffffffff) {
    if (0x85 < (int)uVar8) {
switchD_00102b55_caseD_3a:
                    /* WARNING: Subroutine does not return */
      usage(1);
    }
    if ((int)uVar8 < 0x30) {
      if (uVar8 == 0xffffff7d) {
        version_etc((FILE *)stdout,"tail","GNU coreutils",Version,"Paul Rubin","David MacKenzie",
                    "Ian Lance Taylor","Jim Meyering",0,uVar45);
                    /* WARNING: Subroutine does not return */
        exit(0);
      }
      if (uVar8 == 0xffffff7e) {
                    /* WARNING: Subroutine does not return */
        usage(0);
      }
      goto switchD_00102b55_caseD_3a;
    }
    switch(uVar8) {
    case 0x30:
    case 0x31:
    case 0x32:
    case 0x33:
    case 0x34:
    case 0x35:
    case 0x36:
    case 0x37:
    case 0x38:
    case 0x39:
      local_258 = (int *)((ulong)local_258 & 0xffffffff00000000 | (ulong)uVar8);
      uVar45 = dcgettext(0,"option used in invalid context -- %c",5);
      psVar15 = (stat *)0x1;
      error(1,0,uVar45,(ulong)local_258 & 0xffffffff);
      goto LAB_00104048;
    default:
      goto switchD_00102b55_caseD_3a;
    case 0x46:
      forever = true;
      follow_mode = Follow_name;
      reopen_inaccessible_files = true;
      break;
    case 99:
    case 0x6e:
      count_lines = uVar8 == 0x6e;
      if (*optarg == '+') {
        from_start = true;
      }
      else if (*optarg == '-') {
        optarg = optarg + 1;
      }
      if (uVar8 == 0x6e) {
        pcVar30 = (char *)dcgettext(0,"invalid number of lines",5);
      }
      else {
        pcVar30 = (char *)dcgettext(0,"invalid number of bytes",5);
      }
      n_units = xdectoumax(optarg,0,0xffffffffffffffff,"bkKmMGTPEZY0",pcVar30,0);
      break;
    case 0x71:
      sVar17 = 2;
      break;
    case 0x73:
      _Var5 = xstrtod(optarg,(char **)0x0,(double *)psVar25,cl_strtod);
      if (_Var5 != false) {
        local_220 = key.name;
        if (0.0 <= (double)key.name) break;
      }
      pcVar19 = quote(optarg);
      uVar45 = dcgettext(0,"invalid number of seconds: %s",5);
      error(1,0,uVar45,pcVar19);
    case 0x66:
    case 0x84:
      forever = true;
      if (optarg == (char *)0x0) {
        follow_mode = Follow_descriptor;
      }
      else {
        pVar12 = __xargmatch_internal
                           ("--follow",optarg,follow_mode_string,follow_mode_map,4,argmatch_die,true
                           );
        follow_mode = follow_mode_map[pVar12];
      }
      break;
    case 0x76:
      sVar17 = 1;
      break;
    case 0x7a:
      line_end = '\0';
      break;
    case 0x80:
      reopen_inaccessible_files = true;
      break;
    case 0x81:
      pcVar30 = (char *)dcgettext(0,"invalid maximum number of unchanged stats between opens",5);
      max_n_unchanged_stats_between_opens = xdectoumax(optarg,0,0xffffffffffffffff,"",pcVar30,0);
      break;
    case 0x82:
      pcVar30 = (char *)dcgettext(0,"invalid PID",5);
      uVar32 = xdectoumax(optarg,0,0x7fffffff,"",pcVar30,0);
      pid = (pid_t)uVar32;
      break;
    case 0x83:
      presume_input_pipe = true;
      break;
    case 0x85:
      goto switchD_00102b55_caseD_85;
    }
    goto LAB_00102b05;
  }
  if (reopen_inaccessible_files == false) {
LAB_001033dc:
    if (pid != 0) {
      if (forever == false) {
        uVar45 = dcgettext(0,"warning: PID ignored; --pid=PID is useful only when following",5);
        error(0,0,uVar45);
      }
      else {
LAB_00102f55:
        iVar7 = kill(pid,0);
        if ((iVar7 != 0) && (piVar20 = __errno_location(), *piVar20 == 0x26)) {
          uVar45 = dcgettext(0,"warning: --pid=PID is not supported on this system",5);
          error(0,0,uVar45);
          pid = 0;
        }
      }
    }
  }
  else {
    if (forever == false) {
      reopen_inaccessible_files = false;
      pcVar30 = "warning: --retry ignored; --retry is useful only when following";
LAB_001033c7:
      uVar45 = dcgettext(0,pcVar30,5);
      error(0,0,uVar45);
      goto LAB_001033dc;
    }
    if (follow_mode == Follow_descriptor) {
      pcVar30 = "warning: --retry only effective for the initial open";
      goto LAB_001033c7;
    }
    if (pid != 0) goto LAB_00102f55;
  }
  if ((from_start != false) && (n_units != 0)) {
    n_units = n_units - 1;
  }
  if (optind < (int)pcVar19) {
    ppcVar36 = (char **)(psVar16->__glibc_reserved + (long)optind + -0xf);
    local_258 = (int *)(long)((int)pcVar19 - optind);
  }
  else {
    local_258 = (int *)0x1;
    ppcVar36 = &main::lexical_block_0::dummy_stdin;
  }
  bVar42 = false;
  plVar41 = (long *)ppcVar36 + (long)local_258;
  plVar14 = (long *)ppcVar36;
  do {
    if ((*(char *)*plVar14 == '-') && (((char *)*plVar14)[1] == '\0')) {
      bVar42 = true;
    }
    plVar14 = plVar14 + 1;
  } while (plVar41 != plVar14);
  if (bVar42) {
    if (follow_mode == Follow_name) {
LAB_001050fc:
      pcVar19 = quotearg_style(shell_escape_always_quoting_style,"-");
      uVar45 = dcgettext(0,"cannot follow %s by name",5);
      error(1,0,uVar45,pcVar19);
LAB_00105137:
      uVar45 = dcgettext(0,"write error",5);
      piVar20 = __errno_location();
      auVar44 = error(1,*piVar20,uVar45);
      piVar20 = local_258;
      local_258 = SUB168(auVar44,0);
      (*(code *)PTR___libc_start_main_00112fe0)
                (main,piVar20,&local_250,__libc_csu_init,__libc_csu_fini,SUB168(auVar44 >> 0x40,0),
                 &local_258);
      do {
                    /* WARNING: Do nothing block with infinite loop */
      } while( true );
    }
    if (forever != false) {
      if (((((pid != 0) || (local_258 != (int *)0x1)) || (follow_mode != Follow_descriptor)) ||
          ((iVar7 = __fxstat(1,0,(stat *)&in_stat), iVar7 != 0 ||
           ((in_stat.st_mode & 0xf000) == 0x8000)))) && (iVar7 = isatty(0), iVar7 != 0)) {
        uVar45 = dcgettext(0,"warning: following standard input indefinitely is ineffective",5);
        error(0,0,uVar45);
      }
      goto LAB_0010304f;
    }
    if (n_units != 0) goto LAB_00103067;
  }
  else {
LAB_0010304f:
    if ((n_units != 0) || (forever != false)) goto LAB_00103067;
  }
  uVar8 = 0;
  if (from_start == false) {
LAB_00103956:
    if (lVar2 == *(long *)(in_FS_OFFSET + 0x28)) {
      return uVar8;
    }
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
LAB_00103067:
  unaff_R15 = (stat *)xnmalloc((size_t)local_258,0x60);
  psVar25 = unaff_R15;
  do {
    dVar3 = (double)*ppcVar36;
    ppcVar36 = (char **)((long *)ppcVar36 + 1);
    psVar25->st_dev = (__dev_t)dVar3;
    psVar25 = (stat *)&((timespec *)&psVar25->st_mtim)->tv_nsec;
  } while ((char **)plVar41 != ppcVar36);
  if (((int)sVar17 == 1) || (((int)sVar17 == 0 && (local_258 != (int *)0x1)))) {
    print_headers = true;
  }
  local_1e8 = (long)local_258 * 0x60;
  local_1dd = 1;
  local_210 = (File_spec *)(unaff_R15->__glibc_reserved + (long)local_258 * 0xc + -0xf);
  local_200 = &in_stat;
  local_208 = unaff_R15;
  do {
    local_238 = (stat *)n_units;
    pFVar39 = (File_spec *)unaff_R15->st_dev;
    local_22c = *(byte *)&pFVar39->name - 0x2d;
    if ((local_22c == 0) && (local_22c = (uint)*(byte *)((long)&pFVar39->name + 1), local_22c == 0))
    {
      have_read_stdin = true;
      psVar25 = (stat *)0x0;
LAB_001031d5:
      *(undefined *)((long)&unaff_R15->st_size + 6) = 1;
LAB_001031da:
      if (print_headers != false) {
        pcVar19 = pretty_name(pFVar39);
        pcVar30 = "\n";
        if (first_file_7768 != '\0') {
          pcVar30 = "";
        }
        __printf_chk(1,"%s==> %s <==\n",pcVar30,pcVar19);
        first_file_7768 = '\0';
      }
      local_218 = (int *)pretty_name((File_spec *)unaff_R15->st_dev);
      key.name = (char *)0x0;
      local_248 = (int *)((ulong)local_248 & 0xffffffffffffff00 | (ulong)count_lines);
      iVar7 = (int)psVar25;
      if (count_lines == false) {
        iVar10 = __fxstat(1,iVar7,(stat *)local_200);
        psVar16 = local_238;
        if (iVar10 == 0) {
          local_248 = (int *)((ulong)local_248 & 0xffffffffffffff00 | (ulong)from_start);
          if (from_start == false) {
            if ((presume_input_pipe == false) && (-1 < (long)local_238)) {
              if ((in_stat.st_mode & 0xd000) == 0x8000) {
                pcVar19 = (char *)0xffffffffffffffff;
                pcVar30 = (char *)in_stat.st_size;
              }
              else {
                pcVar19 = (char *)lseek(iVar7,-(long)local_238,2);
                if (pcVar19 == (char *)0xffffffffffffffff) goto LAB_0010383f;
                pcVar30 = pcVar19 + (long)(psVar16->__glibc_reserved + -0xf);
              }
              _Var23 = in_stat.st_blksize;
              if (0x1fffffffffffffff < in_stat.st_blksize - 1U) {
                _Var23 = 0x200;
              }
              if (_Var23 < (long)pcVar30) {
                if (pcVar19 == (char *)0xffffffffffffffff) {
                  pcVar19 = (char *)xlseek(iVar7,0,1,(char *)local_218);
                }
                if (((long)pcVar19 < (long)pcVar30) &&
                   (local_238 < (stat *)(pcVar30 + -(long)pcVar19))) {
                  lVar34 = -(long)local_238;
                  xlseek(iVar7,(off_t)(pcVar30 + lVar34),0,(char *)local_218);
                  pcVar19 = pcVar30 + lVar34;
                }
                goto LAB_0010352d;
              }
            }
LAB_0010383f:
            local_250 = (stat *)xmalloc(0x2010);
            local_250[0x38].__glibc_reserved[1] = 0;
            local_250[0x38].__glibc_reserved[2] = 0;
            psVar21 = (stat *)xmalloc(0x2010);
            psVar16 = local_238;
            psVar15 = (stat *)0x0;
            p = local_250;
            psVar40 = local_250;
            local_250 = unaff_R15;
            while (sVar17 = safe_read(iVar7,psVar21,0x2000), unaff_R15 = local_250,
                  sVar17 - 1 < 0xfffffffffffffffe) {
              key.name = key.name + sVar17;
              psVar15 = (stat *)((long)psVar15->__glibc_reserved + (sVar17 - 0x78));
              psVar21[0x38].__glibc_reserved[1] = sVar17;
              lVar34 = psVar40[0x38].__glibc_reserved[1];
              psVar21[0x38].__glibc_reserved[2] = 0;
              if (sVar17 + lVar34 < 0x2000) {
                memcpy((void *)((long)psVar40->__glibc_reserved + lVar34 + -0x78),psVar21,sVar17);
                psVar40[0x38].__glibc_reserved[1] =
                     psVar40[0x38].__glibc_reserved[1] + psVar21[0x38].__glibc_reserved[1];
              }
              else {
                psVar22 = (stat *)((long)psVar15 - p[0x38].__glibc_reserved[1]);
                psVar40[0x38].__glibc_reserved[2] = (__syscall_slong_t)psVar21;
                psVar40 = psVar21;
                if (psVar16 < psVar22) {
                  psVar15 = psVar22;
                  psVar21 = p;
                  p = (stat *)p[0x38].__glibc_reserved[2];
                }
                else {
                  psVar21 = (stat *)xmalloc(0x2010);
                }
              }
            }
            rpl_free(psVar21);
            psVar16 = p;
            if (sVar17 == 0xffffffffffffffff) {
              pcVar19 = quotearg_style(shell_escape_always_quoting_style,(char *)local_218);
              uVar45 = dcgettext(0,"error reading %s",5);
              piVar20 = __errno_location();
              error(0,*piVar20,uVar45,pcVar19);
            }
            else {
              while( true ) {
                psVar21 = (stat *)((long)psVar15 - psVar16[0x38].__glibc_reserved[1]);
                if (psVar21 <= local_238) break;
                psVar16 = (stat *)psVar16[0x38].__glibc_reserved[2];
                psVar15 = psVar21;
              }
              lVar34 = 0;
              if (local_238 < psVar15) {
                lVar34 = (long)psVar15 - (long)local_238;
              }
              sVar17 = psVar16[0x38].__glibc_reserved[1] - lVar34;
              if (sVar17 != 0) {
                xwrite_stdout((char *)((long)psVar16->__glibc_reserved + lVar34 + -0x78),sVar17);
              }
              for (pcVar19 = (char *)psVar16[0x38].__glibc_reserved[2]; pcVar19 != (char *)0x0;
                  pcVar19 = *(char **)(pcVar19 + 0x2008)) {
                if (*(size_t *)(pcVar19 + 0x2000) != 0) {
                  xwrite_stdout(pcVar19,*(size_t *)(pcVar19 + 0x2000));
                }
              }
              local_248 = (int *)CONCAT71(local_248._1_7_,1);
            }
            while (p != (stat *)0x0) {
              psVar16 = (stat *)p[0x38].__glibc_reserved[2];
              rpl_free(p);
              p = psVar16;
            }
          }
          else {
            if (((presume_input_pipe == false) && (-1 < (long)local_238)) &&
               ((((in_stat.st_mode & 0xf000) == 0x8000 &&
                 (oVar28 = xlseek(iVar7,(off_t)local_238,1,(char *)local_218), -1 < oVar28)) ||
                (_Var24 = lseek(iVar7,(__off_t)local_238,1), _Var24 != -1)))) {
              pcVar19 = key.name + (long)local_238;
              local_238 = (stat *)0xffffffffffffffff;
            }
            else {
              uVar8 = start_bytes((char *)local_218,iVar7,(uintmax_t)local_238,(uintmax_t *)&key);
              local_238 = (stat *)0xffffffffffffffff;
              pcVar19 = key.name;
              if (uVar8 != 0) {
                local_248 = (int *)((ulong)local_248 & 0xffffffff00000000 | (ulong)(uVar8 >> 0x1f));
                goto LAB_0010354e;
              }
            }
LAB_0010352d:
            key.name = pcVar19;
            uVar32 = dump_remainder(false,(char *)local_218,iVar7,(uintmax_t)local_238);
            key.name = key.name + uVar32;
            local_248 = (int *)CONCAT71(local_248._1_7_,1);
          }
        }
        else {
          pcVar19 = quotearg_style(shell_escape_always_quoting_style,(char *)local_218);
          uVar45 = dcgettext(0,"cannot fstat %s",5);
          piVar20 = __errno_location();
          error(0,*piVar20,uVar45,pcVar19);
        }
      }
      else {
        iVar10 = __fxstat(1,iVar7,(stat *)local_200);
        if (iVar10 == 0) {
          local_1f8 = (char *)((ulong)local_1f8 & 0xffffffffffffff00 | (ulong)from_start);
          if (from_start == false) {
            if (((presume_input_pipe == false) && ((in_stat.st_mode & 0xf000) == 0x8000)) &&
               (_Var24 = lseek(iVar7,0,1), _Var24 != -1)) {
              pcVar19 = (char *)lseek(iVar7,0,2);
              if (_Var24 < (long)pcVar19) {
                local_1f8 = (char *)((ulong)local_1f8 & 0xffffffffffffff00 | (ulong)local_248 & 0xff
                                    );
                key.name = pcVar19;
                if (pcVar19 != (char *)0x0) {
                  _Var5 = file_lines((char *)local_218,iVar7,(uintmax_t)local_238,_Var24,
                                     (off_t)pcVar19,(uintmax_t *)&key);
                  local_1f8 = (char *)((ulong)local_1f8 & 0xffffffffffffff00 | (ulong)_Var5);
                }
                goto LAB_001037ac;
              }
              xlseek(iVar7,_Var24,0,(char *)local_218);
            }
            psVar15 = (stat *)xmalloc(0x2018);
            psVar15[0x38].__glibc_reserved[2] = 0;
            psVar15[0x38].__glibc_reserved[1] = 0;
            psVar15[0x39].st_dev = 0;
            local_250 = psVar15;
            psVar16 = (stat *)xmalloc(0x2018);
            local_240 = (stat *)0x0;
            local_228 = psVar15;
            local_1f0 = unaff_R15;
            while (psVar15 = psVar16, sVar17 = safe_read(iVar7,psVar15,0x2000),
                  unaff_R15 = local_1f0, sVar17 - 1 < 0xfffffffffffffffe) {
              psVar15[0x38].__glibc_reserved[1] = sVar17;
              iVar10 = (int)line_end;
              key.name = key.name + sVar17;
              psVar15[0x38].__glibc_reserved[2] = 0;
              psVar15[0x39].st_dev = 0;
              psVar16 = psVar15;
              lVar34 = 0;
              while( true ) {
                pvVar18 = memchr(psVar16,iVar10,
                                 (long)psVar15->__glibc_reserved + sVar17 + (-0x78 - (long)psVar16))
                ;
                psVar16 = local_250;
                if (pvVar18 == (void *)0x0) break;
                psVar15[0x38].__glibc_reserved[2] = lVar34 + 1;
                psVar16 = (stat *)((long)pvVar18 + 1);
                lVar34 = lVar34 + 1;
              }
              psVar21 = (stat *)((long)local_240->__glibc_reserved + lVar34 + -0x78);
              if (sVar17 + local_250[0x38].__glibc_reserved[1] < 0x2000) {
                memcpy((void *)((long)local_250->__glibc_reserved +
                               local_250[0x38].__glibc_reserved[1] + -0x78),psVar15,sVar17);
                plVar41 = psVar16[0x38].__glibc_reserved + 1;
                *plVar41 = *plVar41 + psVar15[0x38].__glibc_reserved[1];
                plVar41 = psVar16[0x38].__glibc_reserved + 2;
                *plVar41 = *plVar41 + psVar15[0x38].__glibc_reserved[2];
                psVar16 = psVar15;
                local_240 = psVar21;
              }
              else {
                local_250[0x39].st_dev = (__dev_t)psVar15;
                local_240 = (stat *)((long)psVar21 - local_228[0x38].__glibc_reserved[2]);
                if (local_238 < local_240) {
                  psVar16 = local_228;
                  local_250 = psVar15;
                  local_228 = (stat *)local_228[0x39].st_dev;
                }
                else {
                  psVar16 = (stat *)xmalloc(0x2018);
                  local_250 = psVar15;
                  local_240 = psVar21;
                }
              }
            }
            rpl_free(psVar15);
            if (sVar17 == 0xffffffffffffffff) {
              pcVar19 = quotearg_style(shell_escape_always_quoting_style,(char *)local_218);
              uVar45 = dcgettext(0,"error reading %s",5);
              piVar20 = __errno_location();
              error(0,*piVar20,uVar45,pcVar19);
free_lbuffers:
              psVar16 = local_228;
              if (local_228 == (stat *)0x0) goto LAB_001037ac;
            }
            else {
              lVar34 = local_250[0x38].__glibc_reserved[1];
              local_1f8 = (char *)((ulong)local_1f8 & 0xffffffffffffff00 |
                                  (ulong)(lVar34 == 0 || local_238 == (stat *)0x0));
              if (lVar34 == 0 || local_238 == (stat *)0x0) goto free_lbuffers;
              iVar7 = (int)line_end;
              if (*(char *)((long)local_250[-1].__glibc_reserved + lVar34 + 0x17) != line_end) {
                local_250[0x38].__glibc_reserved[2] = local_250[0x38].__glibc_reserved[2] + 1;
                local_240 = (stat *)((long)&local_240->st_dev + 1);
              }
              psVar15 = (stat *)((long)local_240 - local_228[0x38].__glibc_reserved[2]);
              psVar16 = local_228;
              while (psVar21 = psVar15, local_238 < psVar21) {
                psVar16 = (stat *)psVar16[0x39].st_dev;
                local_240 = psVar21;
                psVar15 = (stat *)((long)psVar21 - psVar16[0x38].__glibc_reserved[2]);
              }
              lVar34 = psVar16[0x38].__glibc_reserved[1];
              psVar15 = psVar16;
              if (local_238 < local_240) {
                lVar38 = (long)local_240 - (long)local_238;
                do {
                  pvVar18 = rawmemchr(psVar15,iVar7);
                  psVar15 = (stat *)((long)pvVar18 + 1);
                  lVar38 = lVar38 + -1;
                } while (lVar38 != 0);
              }
              sVar17 = (long)psVar16 + (lVar34 - (long)psVar15);
              if (sVar17 != 0) {
LAB_00104048:
                xwrite_stdout((char *)psVar15,sVar17);
              }
              for (pcVar19 = (char *)psVar16[0x39].st_dev; pcVar19 != (char *)0x0;
                  pcVar19 = *(char **)(pcVar19 + 0x2010)) {
                if (*(size_t *)(pcVar19 + 0x2000) != 0) {
                  xwrite_stdout(pcVar19,*(size_t *)(pcVar19 + 0x2000));
                }
              }
              local_1f8 = (char *)((ulong)local_1f8 & 0xffffffffffffff00 | (ulong)local_248 & 0xff);
              psVar16 = local_228;
            }
            do {
              psVar15 = (stat *)psVar16[0x39].st_dev;
              rpl_free(psVar16);
              psVar16 = psVar15;
            } while (psVar15 != (stat *)0x0);
          }
          else {
            uVar8 = start_lines((char *)local_218,iVar7,(uintmax_t)local_238,(uintmax_t *)&key);
            if (uVar8 == 0) {
              uVar32 = dump_remainder(false,(char *)local_218,iVar7,0xffffffffffffffff);
              key.name = key.name + uVar32;
            }
            else {
              local_1f8 = (char *)((ulong)local_1f8 & 0xffffffff00000000 | (ulong)(uVar8 >> 0x1f));
            }
          }
        }
        else {
          pcVar19 = quotearg_style(shell_escape_always_quoting_style,(char *)local_218);
          uVar45 = dcgettext(0,"cannot fstat %s",5);
          piVar20 = __errno_location();
          error(0,*piVar20,uVar45,pcVar19);
          local_1f8 = (char *)((ulong)local_1f8 & 0xffffffffffffff00);
        }
LAB_001037ac:
        local_248 = (int *)((ulong)local_248 & 0xffffffffffffff00 | (ulong)local_1f8 & 0xff);
      }
LAB_0010354e:
      iVar7 = (int)psVar25;
      if (forever == false) {
        if ((local_22c != 0) && (iVar7 = close(iVar7), iVar7 != 0)) {
          pcVar19 = pretty_name((File_spec *)unaff_R15->st_dev);
          pcVar19 = quotearg_style(shell_escape_always_quoting_style,pcVar19);
          uVar45 = dcgettext(0,"error reading %s",5);
          piVar20 = __errno_location();
          error(0,*piVar20,uVar45,pcVar19);
          local_248 = (int *)((ulong)local_248 & 0xffffffffffffff00);
        }
      }
      else {
        *(uint *)((long)&unaff_R15->st_blksize + 4) = (byte)local_248 - 1;
        iVar10 = __fxstat(1,iVar7,(stat *)local_200);
        if (iVar10 < 0) {
          piVar20 = __errno_location();
          pFVar39 = (File_spec *)unaff_R15->st_dev;
          *(int *)((long)&unaff_R15->st_blksize + 4) = *piVar20;
          pcVar19 = pretty_name(pFVar39);
          pcVar19 = quotearg_style(shell_escape_always_quoting_style,pcVar19);
          uVar45 = dcgettext(0,"error reading %s",5);
          error(0,*piVar20,uVar45,pcVar19);
          goto LAB_00103804;
        }
        if ((((in_stat.st_mode & 0xf000) - 0x1000 & 0xffffe000) != 0) &&
           ((in_stat.st_mode & 0xb000) != 0x8000)) goto LAB_00103fa4;
        if ((byte)local_248 == '\0') goto LAB_00103804;
        *(__mode_t *)&unaff_R15->st_size = in_stat.st_mode;
        *(int *)&unaff_R15->st_blksize = iVar7;
        pFVar39 = (File_spec *)unaff_R15->st_dev;
        unaff_R15->st_ino = (__ino_t)key.name;
        *(uint *)&unaff_R15->st_blocks = -(uint)(local_22c == 0) | 1;
        unaff_R15->st_nlink = in_stat.st_mtim.tv_sec;
        ((timespec *)&unaff_R15->st_mtim)->tv_sec = 0;
        *(__syscall_slong_t *)&unaff_R15->st_mode = in_stat.st_mtim.tv_nsec;
        *(undefined *)((long)&unaff_R15->st_size + 4) = 0;
        *(ulong *)&unaff_R15->st_gid =
             CONCAT26(in_stat.st_dev._6_2_,CONCAT24(in_stat.st_dev._4_2_,(int)in_stat.st_dev));
        unaff_R15->st_rdev = in_stat.st_ino;
        pcVar19 = pretty_name(pFVar39);
        _Var5 = fremote(iVar7,pcVar19);
        *(_Bool *)((long)&unaff_R15->st_size + 5) = _Var5;
      }
    }
    else {
      uVar8 = open_safer((char *)pFVar39,0);
      _Var5 = reopen_inaccessible_files;
      psVar25 = (stat *)(ulong)uVar8;
      if (reopen_inaccessible_files == false) {
        *(undefined *)((long)&unaff_R15->st_size + 6) = 1;
        if (uVar8 == 0xffffffff) goto LAB_0010310b;
        pFVar39 = (File_spec *)unaff_R15->st_dev;
        goto LAB_001031da;
      }
      if (uVar8 != 0xffffffff) {
        pFVar39 = (File_spec *)unaff_R15->st_dev;
        goto LAB_001031d5;
      }
      *(undefined *)((long)&unaff_R15->st_size + 6) = 0;
LAB_0010310b:
      piVar20 = __errno_location();
      if (forever != false) {
        iVar7 = *piVar20;
        *(undefined4 *)&unaff_R15->st_blksize = 0xffffffff;
        *(byte *)((long)&unaff_R15->st_size + 4) = _Var5 ^ 1;
        *(int *)((long)&unaff_R15->st_blksize + 4) = iVar7;
        unaff_R15->st_rdev = 0;
        *(undefined8 *)&unaff_R15->st_gid = 0;
      }
      pcVar19 = pretty_name((File_spec *)unaff_R15->st_dev);
      pcVar19 = quotearg_style(shell_escape_always_quoting_style,pcVar19);
      uVar45 = dcgettext(0,"cannot open %s for reading",5);
      error(0,*piVar20,uVar45,pcVar19);
      local_248 = (int *)((ulong)local_248 & 0xffffffffffffff00);
    }
    while( true ) {
      pFVar39 = local_210;
      unaff_R15 = (stat *)&((timespec *)&unaff_R15->st_mtim)->tv_nsec;
      local_1dd = local_1dd & (byte)local_248;
      if (unaff_R15 != (stat *)local_210) break;
      local_200 = (stat *)((ulong)local_200 & 0xffffffffffffff00 | (ulong)forever);
      if (forever != false) {
        lVar34 = 0;
        psVar16 = local_208;
        do {
          iVar7 = strcmp((char *)psVar16->st_dev,"-");
          if ((((iVar7 == 0) && (*(char *)((long)&psVar16->st_size + 4) == '\0')) &&
              (-1 < *(int *)&psVar16->st_blksize)) &&
             ((*(uint *)&psVar16->st_size & 0xf000) == 0x1000)) {
            *(undefined4 *)&psVar16->st_blksize = 0xffffffff;
            *(undefined *)((long)&psVar16->st_size + 4) = 1;
          }
          else {
            lVar34 = lVar34 + 1;
          }
          psVar16 = (stat *)&((timespec *)&psVar16->st_mtim)->tv_nsec;
        } while (psVar16 != (stat *)pFVar39);
        if (lVar34 != 0) {
          iVar7 = __fxstat(1,1,(stat *)&out_stat);
          pFVar31 = local_210;
          if (-1 < iVar7) {
            monitor_output = (out_stat.st_mode & 0xf000) == 0x1000;
            psVar16 = local_208;
            if (disable_inotify != false) goto LAB_00103db9;
            do {
              if ((*(char *)((long)&psVar16->st_size + 4) == '\0') &&
                 (iVar7 = strcmp((char *)psVar16->st_dev,"-"), iVar7 == 0)) goto LAB_00103db9;
              psVar16 = (stat *)&((timespec *)&psVar16->st_mtim)->tv_nsec;
            } while (psVar16 != (stat *)pFVar31);
            lVar34 = 0;
            do {
              if ((-1 < *(int *)((long)local_208->__glibc_reserved + lVar34 + -0x40)) &&
                 (*(char *)((long)local_208->__glibc_reserved + lVar34 + -0x43) != '\0'))
              goto LAB_00103db9;
              lVar34 = lVar34 + 0x60;
            } while (lVar34 != local_1e8);
            lVar34 = 0;
            do {
              if ((-1 < *(int *)((long)local_208->__glibc_reserved + lVar34 + -0x40)) &&
                 (bVar6 = *(byte *)((long)local_208->__glibc_reserved + lVar34 + -0x43), bVar6 == 0)
                 ) goto LAB_001046ba;
              lVar34 = lVar34 + 0x60;
              if (lVar34 == local_1e8) goto LAB_00103db9;
            } while( true );
          }
LAB_001049b0:
          uVar45 = dcgettext(0,"standard output",5);
          piVar20 = __errno_location();
          error(1,*piVar20,uVar45);
LAB_001049dc:
          pcVar19 = "inotify resources exhausted";
LAB_001049e8:
          uVar45 = dcgettext(0,pcVar19,5);
          error(0,0,uVar45);
LAB_001049fd:
          hash_free((Hash_table *)unaff_R15);
          close((int)pFVar39);
          piVar20 = __errno_location();
          *piVar20 = 0;
          do {
            uVar45 = dcgettext(0,"inotify cannot be used, reverting to polling",5);
            piVar20 = __errno_location();
            error(0,*piVar20,uVar45);
LAB_00103db9:
            do {
              disable_inotify = true;
              if (pid == 0) {
                uVar8 = pid;
                if (((follow_mode == Follow_descriptor) && (local_258 == (int *)0x1)) &&
                   (*(int *)&local_208->st_blksize != -1)) {
                  local_250 = (stat *)((ulong)local_250 & 0xffffffff00000000 |
                                      (ulong)*(uint *)&local_208->st_size);
                  uVar8 = (uint)((*(uint *)&local_208->st_size & 0xf000) != 0x8000);
                }
              }
              else {
                uVar8 = 0;
              }
              local_218 = (int *)((ulong)local_218 & 0xffffffffffffff00);
              local_22c = local_22c & 0xffffff00 | uVar8 & 1;
              local_248 = (int *)((long)local_258 + -1);
              local_238 = (stat *)((long)local_208->__glibc_reserved + local_1e8 + -0x44);
LAB_00103e11:
              local_240 = &in_stat;
              local_250 = (stat *)((ulong)local_250 & 0xffffffffffffff00);
              piVar20 = (int *)0x0;
              unaff_R15 = local_208;
              while( true ) {
                if (*(char *)((long)&unaff_R15->st_size + 4) != '\0') goto LAB_00103eb7;
                fd = *(uint *)&unaff_R15->st_blksize;
                pFVar39 = (File_spec *)(ulong)fd;
                if (-1 < (int)fd) break;
                piVar20 = (int *)((long)piVar20 + 1);
                plVar41 = &((timespec *)&unaff_R15->st_mtim)->tv_nsec;
                recheck((File_spec *)unaff_R15,SUB41(uVar8,0));
                unaff_R15 = (stat *)plVar41;
                if (local_258 == piVar20) {
                  do {
                    if ((reopen_inaccessible_files == false) || (follow_mode != Follow_name)) {
                      pcVar19 = (char *)((long)&local_208->st_size + 4);
                      while ((*(int *)(pcVar19 + 4) < 0 &&
                             ((*pcVar19 == '\x01' || (reopen_inaccessible_files == false))))) {
                        pcVar19 = pcVar19 + 0x60;
                        if ((stat *)pcVar19 == local_238) {
                          uVar45 = dcgettext(0,"no files remaining",5);
                          error(0,0,uVar45);
                          goto LAB_0010393e;
                        }
                      }
                    }
                    if (((byte)local_250 == '\x01') && ((char)local_22c == '\0')) {
                      if (monitor_output == false) goto LAB_00103e11;
                      key.name = (char *)0x1;
                      iVar7 = poll((pollfd *)&key,1,0);
                      if (iVar7 < 0) goto LAB_00103e11;
LAB_0010435c:
                      if (((ulong)key.name & 0x18000000000000) != 0) goto LAB_0010495a;
                    }
                    else {
                      iVar7 = fflush_unlocked(stdout);
                      if (iVar7 != 0) goto LAB_00105137;
                      if (monitor_output != false) {
                        key.name = (char *)0x1;
                        iVar7 = poll((pollfd *)&key,1,0);
                        if (-1 < iVar7) goto LAB_0010435c;
                      }
                    }
                    if ((byte)local_250 != '\0') goto LAB_00103e11;
                    if ((char)local_218 != '\0') goto LAB_0010393e;
                    if (((pid != 0) && (iVar7 = kill(pid,0), iVar7 != 0)) &&
                       (piVar27 = __errno_location(), *piVar27 != 1)) {
                      local_218 = (int *)((ulong)local_218 & 0xffffffffffffff00 |
                                         (ulong)local_200 & 0xff);
                      goto LAB_00103e11;
                    }
                    iVar7 = xnanosleep((double)local_220);
                    if (iVar7 == 0) goto LAB_00103e11;
                    uVar45 = dcgettext(0,"cannot read realtime clock",5);
                    piVar27 = __errno_location();
                    error(1,*piVar27,uVar45);
LAB_001043cd:
                    *(undefined4 *)&unaff_R15->st_blksize = 0xffffffff;
                    piVar27 = __errno_location();
                    *(int *)((long)&unaff_R15->st_blksize + 4) = *piVar27;
                    uVar45 = quotearg_n_style_colon(0,3,psVar25);
                    error(0,*piVar27,&DAT_0010e51b,uVar45);
                    close((int)pFVar39);
LAB_00103eb7:
                    piVar20 = (int *)((long)piVar20 + 1);
                    unaff_R15 = (stat *)&((timespec *)&unaff_R15->st_mtim)->tv_nsec;
                  } while (local_258 == piVar20);
                }
              }
              psVar25 = (stat *)pretty_name((File_spec *)unaff_R15->st_dev);
              uVar37 = *(uint *)&unaff_R15->st_size;
              uVar11 = *(uint *)&unaff_R15->st_blocks;
              if (uVar8 == *(uint *)&unaff_R15->st_blocks) goto LAB_00103e8d;
              uVar11 = rpl_fcntl(fd,3);
              if (uVar8 == 0) {
                if ((-1 < (int)uVar11) &&
                   ((uVar11 == (uVar11 | 0x800) || (iVar7 = rpl_fcntl(fd,4), iVar7 != -1)))) {
LAB_00103e87:
                  *(uint *)&unaff_R15->st_blocks = uVar8;
                  uVar11 = uVar8;
                  goto LAB_00103e8d;
                }
              }
              else if (-1 < (int)uVar11) goto LAB_00103e87;
              piVar27 = __errno_location();
              if (((*(uint *)&unaff_R15->st_size & 0xf000) == 0x8000) && (*piVar27 == 1)) {
                uVar11 = *(uint *)&unaff_R15->st_blocks;
LAB_00103e8d:
                uVar32 = 0xfffffffffffffffe;
                if (uVar11 == 0) {
                  iVar7 = __fxstat(1,fd,(stat *)local_240);
                  if (iVar7 != 0) goto LAB_001043cd;
                  if ((*(__mode_t *)&unaff_R15->st_size == in_stat.st_mode) &&
                     ((((in_stat.st_mode & 0xf000) != 0x8000 ||
                       (unaff_R15->st_ino == in_stat.st_size)) &&
                      (((uint)(in_stat.st_mtim.tv_nsec < *(long *)&unaff_R15->st_mode) -
                       (uint)(*(long *)&unaff_R15->st_mode < in_stat.st_mtim.tv_nsec)) +
                       ((uint)(in_stat.st_mtim.tv_sec < (long)unaff_R15->st_nlink) -
                       (uint)((long)unaff_R15->st_nlink < in_stat.st_mtim.tv_sec)) * 2 == 0)))) {
                    uVar33 = ((timespec *)&unaff_R15->st_mtim)->tv_sec;
                    bVar42 = uVar33 < max_n_unchanged_stats_between_opens;
                    ((timespec *)&unaff_R15->st_mtim)->tv_sec = uVar33 + 1;
                    if (bVar42) goto LAB_00103eb7;
                    if (follow_mode != Follow_name) goto LAB_00103eb7;
                    recheck((File_spec *)unaff_R15,*(int *)&unaff_R15->st_blocks != 0);
                    ((timespec *)&unaff_R15->st_mtim)->tv_sec = 0;
                    goto LAB_00103eb7;
                  }
                  uVar37 = uVar37 & 0xf000;
                  unaff_R15->st_nlink = in_stat.st_mtim.tv_sec;
                  *(__syscall_slong_t *)&unaff_R15->st_mode = in_stat.st_mtim.tv_nsec;
                  *(__mode_t *)&unaff_R15->st_size = in_stat.st_mode;
                  ((timespec *)&unaff_R15->st_mtim)->tv_sec = 0;
                  if ((uVar37 == 0x8000) && (in_stat.st_size < (long)unaff_R15->st_ino)) {
                    local_228 = (stat *)quotearg_n_style_colon(0,3,psVar25);
                    uVar45 = dcgettext(0,"%s: file truncated",5);
                    error(0,0,uVar45,local_228);
                    xlseek(fd,0,0,(char *)psVar25);
                    unaff_R15->st_ino = 0;
                  }
                  if ((piVar20 != local_248) && (local_248 = piVar20, print_headers != false)) {
                    pcVar19 = "\n";
                    if (first_file_7768 != '\0') {
                      pcVar19 = "";
                    }
                    __printf_chk(1,"%s==> %s <==\n",pcVar19,psVar25);
                    first_file_7768 = '\0';
                    local_248 = piVar20;
                  }
                  if (*(int *)&unaff_R15->st_blocks == 0) {
                    uVar32 = 0xffffffffffffffff;
                    if ((uVar37 == 0x8000) && (*(char *)((long)&unaff_R15->st_size + 5) != '\0')) {
                      uVar32 = in_stat.st_size - unaff_R15->st_ino;
                    }
                  }
                  else {
                    uVar32 = 0xfffffffffffffffe;
                  }
                }
                uVar32 = dump_remainder(false,(char *)psVar25,fd,uVar32);
                unaff_R15->st_ino = unaff_R15->st_ino + uVar32;
                local_250 = (stat *)((ulong)local_250 & 0xffffffffffffff00 |
                                    (ulong)((byte)local_250 | uVar32 != 0));
                goto LAB_00103eb7;
              }
              local_258 = piVar27;
              bVar6 = quotearg_n_style_colon(0,3,psVar25);
              uVar45 = dcgettext(0,"%s: cannot change nonblocking mode",5);
              error(1,*local_258,uVar45);
LAB_001046ba:
              local_228 = (stat *)((ulong)local_228 & 0xffffffffffffff00 | (ulong)bVar6);
              psVar25 = &in_stat;
              psVar16 = local_208;
              do {
                iVar7 = __lxstat(1,(char *)psVar16->st_dev,(stat *)psVar25);
                if ((iVar7 == 0) && ((in_stat.st_mode & 0xf000) == 0xa000)) goto LAB_00103db9;
                psVar16 = (stat *)&((timespec *)&psVar16->st_mtim)->tv_nsec;
              } while (psVar16 != (stat *)local_210);
              lVar34 = 0;
              do {
                if (((-1 < *(int *)((long)local_208->__glibc_reserved + lVar34 + -0x40)) &&
                    (uVar8 = *(uint *)((long)local_208->__glibc_reserved + lVar34 + -0x48) & 0xf000,
                    uVar8 != 0x8000)) && (uVar8 != 0x1000)) goto LAB_00103db9;
                lVar34 = lVar34 + 0x60;
              } while (lVar34 != local_1e8);
            } while ((local_1dd == 0) && (follow_mode == Follow_descriptor));
            uVar8 = inotify_init();
            pFVar39 = (File_spec *)(ulong)uVar8;
          } while ((int)uVar8 < 0);
          iVar7 = fflush_unlocked(stdout);
          if (iVar7 != 0) {
            uVar45 = dcgettext(0,"write error",5);
            piVar20 = __errno_location();
            error(1,*piVar20,uVar45);
            goto LAB_001050fc;
          }
          unaff_R15 = (stat *)hash_initialize((size_t)local_258,(Hash_tuning *)0x0,wd_hasher,
                                              wd_comparator,(Hash_data_freer *)0x0);
          if (unaff_R15 == (stat *)0x0) goto LAB_00104f19;
          local_22c = 0xc06;
          if (follow_mode != Follow_name) {
            local_22c = 2;
          }
          local_250 = (stat *)((ulong)local_250 & 0xffffffffffffff00);
          psVar15 = (stat *)0x0;
          local_248 = (int *)((ulong)local_248 & 0xffffffffffffff00);
          psVar16 = local_208;
          local_238 = psVar25;
          do {
            if (*(char *)((long)&psVar16->st_size + 4) == '\0') {
              psVar25 = (stat *)psVar16->st_dev;
              uVar33 = 0xffffffffffffffff;
              psVar21 = psVar25;
              do {
                if (uVar33 == 0) break;
                uVar33 = uVar33 - 1;
                p_Var4 = &psVar21->st_dev;
                psVar21 = (stat *)((long)psVar21 + (ulong)bVar43 * -2 + 1);
              } while (*(char *)p_Var4 != '\0');
              *(undefined4 *)((long)&psVar16->st_blocks + 4) = 0xffffffff;
              if (psVar15 < (stat *)(~uVar33 - 1)) {
                psVar15 = (stat *)(~uVar33 - 1);
              }
              if (follow_mode == Follow_name) {
                sVar17 = dir_len((char *)psVar25);
                local_218 = (int *)((long)psVar25->__glibc_reserved + (sVar17 - 0x78));
                local_240 = (stat *)((ulong)local_240 & 0xffffffffffffff00 |
                                    (ulong)*(byte *)local_218);
                pcVar30 = last_component((char *)psVar25);
                pcVar19 = ".";
                ((timespec *)&psVar16->st_atim)->tv_nsec = (long)(pcVar30 + -(long)psVar25);
                *(byte *)local_218 = 0;
                if (sVar17 != 0) {
                  pcVar19 = (char *)psVar16->st_dev;
                }
                iVar7 = inotify_add_watch(uVar8,pcVar19,0x784);
                *(int *)&((timespec *)&psVar16->st_atim)->tv_sec = iVar7;
                *(undefined *)(psVar16->st_dev + sVar17) = local_240._0_1_;
                if (*(int *)&((timespec *)&psVar16->st_atim)->tv_sec < 0) {
                  piVar20 = __errno_location();
                  if (*piVar20 == 0x1c) goto LAB_001049dc;
                  pcVar19 = quotearg_style(shell_escape_always_quoting_style,(char *)psVar16->st_dev
                                          );
                  uVar45 = dcgettext(0,"cannot watch parent directory of %s",5);
                  error(0,*piVar20,uVar45,pcVar19);
                  goto LAB_001049fd;
                }
              }
              iVar7 = inotify_add_watch(uVar8,(char *)psVar16->st_dev,local_22c);
              *(int *)((long)&psVar16->st_blocks + 4) = iVar7;
              if (iVar7 < 0) {
                if (*(int *)&psVar16->st_blksize != -1) {
                  local_250._0_1_ = (byte)local_200;
                }
                local_250 = (stat *)((ulong)local_250 & 0xffffffffffffff00 | (ulong)(byte)local_250)
                ;
                puVar29 = (uint *)__errno_location();
                if ((*puVar29 & 0xffffffef) == 0xc) goto LAB_001049dc;
                if (*puVar29 != *(uint *)((long)&psVar16->st_blksize + 4)) {
                  local_240 = (stat *)quotearg_style(shell_escape_always_quoting_style,
                                                     (char *)psVar16->st_dev);
                  uVar45 = dcgettext(0,"cannot watch %s",5);
                  error(0,*puVar29,uVar45);
                }
              }
              else {
                pvVar18 = hash_insert((Hash_table *)unaff_R15,psVar16);
                if (pvVar18 == (void *)0x0) goto LAB_00104f19;
                local_248 = (int *)((ulong)local_248 & 0xffffffffffffff00 | (ulong)local_200 & 0xff)
                ;
              }
            }
            pFVar31 = local_210;
            psVar25 = local_238;
            psVar16 = (stat *)&((timespec *)&psVar16->st_mtim)->tv_nsec;
          } while (psVar16 != (stat *)local_210);
          if (follow_mode == Follow_descriptor) {
            if ((byte)local_250 != '\0') goto LAB_001049fd;
            if ((byte)local_248 == '\0') goto LAB_00104964;
          }
          prev_fspec = (File_spec *)((long)local_208 + local_1e8 + -0x60);
          psVar16 = local_208;
          local_250 = psVar15;
          do {
            if (*(char *)((long)&psVar16->st_size + 4) == '\0') {
              if (follow_mode == Follow_name) {
                recheck((File_spec *)psVar16,false);
              }
              else if (((*(int *)&psVar16->st_blksize != -1) &&
                       (iVar7 = __xstat(1,(char *)psVar16->st_dev,(stat *)psVar25), iVar7 == 0)) &&
                      ((*(long *)&psVar16->st_gid !=
                        CONCAT26(in_stat.st_dev._6_2_,
                                 CONCAT24(in_stat.st_dev._4_2_,(int)in_stat.st_dev)) ||
                       (psVar16->st_rdev != in_stat.st_ino)))) goto LAB_00104ff3;
              check_fspec((File_spec *)psVar16,&prev_fspec);
            }
            psVar16 = (stat *)&((timespec *)&psVar16->st_mtim)->tv_nsec;
            if (psVar16 == (stat *)pFVar31) {
              pcVar19 = (char *)((long)&local_250->st_nlink + 1);
              local_248 = (int *)xmalloc((size_t)pcVar19);
              piVar20 = local_258;
              local_238 = (stat *)CONCAT44(local_238._4_4_,3);
              local_240 = (stat *)0x0;
              local_250 = (stat *)0x0;
              goto LAB_00104b2e;
            }
          } while( true );
        }
      }
LAB_0010393e:
      if ((have_read_stdin == false) || (iVar7 = close(0), -1 < iVar7)) {
        uVar8 = (uint)(local_1dd ^ 1);
        goto LAB_00103956;
      }
      piVar20 = __errno_location();
      error(1,*piVar20,&DAT_0010d1c5);
LAB_00103fa4:
      _Var5 = reopen_inaccessible_files;
      *(undefined4 *)((long)&unaff_R15->st_blksize + 4) = 0xffffffff;
      *(undefined *)((long)&unaff_R15->st_size + 6) = 0;
      *(byte *)((long)&unaff_R15->st_size + 4) = _Var5 ^ 1U;
      if ((_Var5 ^ 1U) != 0) {
        dcgettext(0,"; giving up on this name",5);
      }
      pcVar19 = pretty_name((File_spec *)unaff_R15->st_dev);
      uVar45 = quotearg_n_style_colon(0,3,pcVar19);
      uVar26 = dcgettext(0,"%s: cannot follow end of this type of file%s",5);
      error(0,0,uVar26,uVar45);
LAB_00103804:
      pFVar39 = (File_spec *)unaff_R15->st_dev;
      *(byte *)((long)&unaff_R15->st_size + 4) = reopen_inaccessible_files ^ 1;
      pcVar19 = pretty_name(pFVar39);
      close_fd((int)psVar25,pcVar19);
      *(undefined4 *)&unaff_R15->st_blksize = 0xffffffff;
      local_248 = (int *)((ulong)local_248 & 0xffffffffffffff00);
    }
  } while( true );
switchD_00102b55_caseD_85:
  disable_inotify = true;
  goto LAB_00102b05;
LAB_00104ff3:
  pcVar19 = pretty_name((File_spec *)psVar16->st_dev);
  psVar25 = (stat *)quotearg_style(shell_escape_always_quoting_style,pcVar19);
  uVar45 = dcgettext(0,"%s was replaced",5);
  piVar20 = __errno_location();
  error(0,*piVar20,uVar45,psVar25);
  goto LAB_001049fd;
LAB_00104b2e:
  if (((follow_mode != Follow_name) || (reopen_inaccessible_files != false)) ||
     (sVar17 = hash_get_n_entries((Hash_table *)unaff_R15), sVar17 != 0)) {
    if (local_240 <= local_250) goto LAB_00104cb5;
LAB_00104b4b:
    local_218 = (int *)((long)local_248 + (long)local_250);
    uVar8 = local_218[3];
    iVar7 = *local_218;
    local_250 = (stat *)((long)local_250->__glibc_reserved + ((ulong)uVar8 - 0x68));
    local_1dc = local_218[1];
    if ((local_1dc & 0x400) == 0) {
      if (uVar8 == 0) goto LAB_00104c4f;
LAB_00104b87:
      piVar35 = (int *)0x0;
      local_210 = (File_spec *)((ulong)local_210 & 0xffffffff00000000 | (ulong)pFVar39);
      piVar27 = local_218 + 4;
      psVar16 = local_208;
      local_1f8 = pcVar19;
      local_1f0 = psVar25;
      do {
        if ((*(int *)&((timespec *)&psVar16->st_atim)->tv_sec == iVar7) &&
           (iVar10 = strcmp((char *)piVar27,
                            (char *)(psVar16->st_dev + ((timespec *)&psVar16->st_atim)->tv_nsec)),
           iVar10 == 0)) {
          pFVar39 = (File_spec *)((ulong)local_210 & 0xffffffff);
          pFVar31 = (File_spec *)(local_208->__glibc_reserved + (long)piVar35 * 0xc + -0xf);
          pcVar19 = local_1f8;
          psVar25 = local_1f0;
          if ((local_1dc & 0x200) != 0) goto LAB_00104c0f;
          goto LAB_00104e29;
        }
        piVar35 = (int *)((long)piVar35 + 1);
        psVar16 = (stat *)&((timespec *)&psVar16->st_mtim)->tv_nsec;
      } while (piVar20 != piVar35);
      pFVar39 = (File_spec *)((ulong)local_210 & 0xffffffff);
      pcVar19 = local_1f8;
      psVar25 = local_1f0;
    }
    else {
      if (uVar8 != 0) goto LAB_00104b87;
      piVar27 = (int *)0x0;
      do {
        if (*(int *)(local_208->__glibc_reserved + (long)piVar27 * 0xc + -6) == iVar7) {
          pcVar19 = "directory containing watched file was removed";
          goto LAB_001049e8;
        }
        piVar27 = (int *)((long)piVar27 + 1);
      } while (piVar20 != piVar27);
LAB_00104c4f:
      key.wd = iVar7;
      pFVar31 = (File_spec *)hash_lookup((Hash_table *)unaff_R15,&key);
      if (pFVar31 != (File_spec *)0x0) {
LAB_00104c1c:
        if ((local_218[1] & 0xe04U) == 0) {
          check_fspec(pFVar31,&prev_fspec);
        }
        else {
          if ((local_218[1] & 0x400U) != 0) {
            inotify_rm_watch((int)pFVar39,(&pFVar31->blocking)[1]);
            hash_remove((Hash_table *)unaff_R15,pFVar31);
          }
          recheck(pFVar31,false);
        }
      }
    }
    goto LAB_00104b2e;
  }
  uVar45 = dcgettext(0,"no files remaining",5);
  error(1,0,uVar45);
LAB_00104cb5:
  pFVar31 = (File_spec *)((ulong)local_228 & 0xff);
  do {
    if (pid == 0) {
LAB_00104d29:
      iVar7 = -1;
    }
    else {
      if ((char)pFVar31 != '\0') {
                    /* WARNING: Subroutine does not return */
        exit(0);
      }
      iVar7 = kill(pid,0);
      if ((iVar7 == 0) || (piVar27 = __errno_location(), *piVar27 == 1)) {
        iVar7 = 0;
        if (0.0 < (double)local_220) {
          if (DAT_0010e4b0 <= (double)local_220) goto LAB_00104d29;
          iVar7 = (int)(DAT_0010e4b8 * (double)local_220);
          iVar7 = iVar7 + (uint)((double)iVar7 < DAT_0010e4b8 * (double)local_220);
        }
      }
      else {
        pFVar31 = (File_spec *)((ulong)local_200 & 0xff);
        iVar7 = 0;
      }
    }
    in_stat.st_dev._4_2_ = 1;
    in_stat.st_ino = 1;
    in_stat.st_dev._0_4_ = (int)pFVar39;
    iVar7 = __poll_chk(psVar25,(ulong)monitor_output + 1,iVar7);
  } while (iVar7 == 0);
  local_228 = (stat *)((ulong)local_228 & 0xffffffffffffff00 | (ulong)pFVar31);
  if (iVar7 < 0) {
    pcVar19 = (char *)dcgettext(0,"error waiting for inotify and output events",5);
    piVar27 = __errno_location();
    f = (File_spec *)error(1,*piVar27,pcVar19);
LAB_00105069:
    local_210 = f;
    recheck(f,false);
LAB_00104ee1:
    (&local_210->blocking)[1] = -1;
    pcVar30 = pretty_name((File_spec *)local_210->name);
    close_fd(local_210->fd,pcVar30);
LAB_00104f05:
    pvVar18 = hash_insert((Hash_table *)unaff_R15,pFVar31);
    if (pvVar18 == (void *)0x0) {
LAB_00104f19:
                    /* WARNING: Subroutine does not return */
      xalloc_die();
    }
LAB_00104c0f:
    if (follow_mode == Follow_name) {
      recheck(pFVar31,false);
    }
    goto LAB_00104c1c;
  }
  if (in_stat.st_ino._6_2_ != 0) {
LAB_0010495a:
    raise(0xd);
LAB_00104964:
                    /* WARNING: Subroutine does not return */
    exit(1);
  }
  local_240 = (stat *)safe_read((int)pFVar39,local_248,(size_t)pcVar19);
  if (local_240 == (stat *)0x0) {
LAB_00104f8d:
    if ((int)local_238 == 0) goto LAB_00104dfd;
    pcVar19 = (char *)((long)pcVar19 * 2);
    local_238 = (stat *)((ulong)local_238 & 0xffffffff00000000 | (ulong)((int)local_238 - 1));
    local_248 = (int *)xrealloc(local_248,(size_t)pcVar19);
    local_240 = (stat *)0x0;
    local_250 = (stat *)0x0;
  }
  else {
    local_250 = (stat *)0x0;
    if (local_240 != (stat *)0xffffffffffffffff) goto LAB_00104b4b;
    piVar27 = __errno_location();
    if (*piVar27 == 0x16) goto LAB_00104f8d;
LAB_00104dfd:
    pcVar19 = (char *)dcgettext(0,"error reading inotify event",5);
    piVar27 = __errno_location();
    error(1,*piVar27,pcVar19);
LAB_00104e29:
    uVar8 = inotify_add_watch((int)pFVar39,pFVar31->name,local_22c);
    local_210 = (File_spec *)((ulong)local_210 & 0xffffffff00000000 | (ulong)uVar8);
    if ((int)uVar8 < 0) {
      psVar16 = (stat *)__errno_location();
      if ((*(uint *)&psVar16->st_dev & 0xffffffef) == 0xc) goto LAB_001049dc;
      local_1f0 = psVar16;
      local_1f8 = quotearg_style(shell_escape_always_quoting_style,pFVar31->name);
      uVar45 = dcgettext(0,"cannot watch %s",5);
      error(0,*(undefined4 *)&local_1f0->st_dev,uVar45);
    }
    iVar7 = (&pFVar31->blocking)[1];
    if ((int)local_210 == iVar7) {
      if (iVar7 < 0) goto LAB_00104eac;
      goto LAB_00104c0f;
    }
    if (-1 < iVar7) {
      inotify_rm_watch((int)pFVar39,iVar7);
      hash_remove((Hash_table *)unaff_R15,pFVar31);
    }
LAB_00104eac:
    (&pFVar31->blocking)[1] = (int)local_210;
    if ((int)local_210 != -1) {
      f = (File_spec *)hash_remove((Hash_table *)unaff_R15,pFVar31);
      if ((f != (File_spec *)0x0) && (pFVar31 != f)) {
        local_210 = f;
        if (follow_mode == Follow_name) goto LAB_00105069;
        goto LAB_00104ee1;
      }
      goto LAB_00104f05;
    }
  }
  goto LAB_00104b2e;
}

