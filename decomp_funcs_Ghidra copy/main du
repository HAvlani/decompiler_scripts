
/* WARNING: Could not reconcile some variable overlaps */

int main(int argc,char **argv)

{
  ulong *puVar1;
  time_style tVar2;
  long lVar3;
  ulong n;
  mount_entry *pmVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  _Bool _Var8;
  int iVar9;
  strtol_error sVar10;
  time_type tVar11;
  int iVar12;
  char *pcVar13;
  FILE *pFVar14;
  argv_iterator *ai;
  char *pcVar15;
  undefined8 uVar16;
  size_t sVar17;
  _ftsent *p;
  void *pvVar18;
  char **ppcVar19;
  ulong *puVar20;
  int *piVar21;
  FTSENT *pFVar22;
  ptrdiff_t pVar23;
  undefined8 uVar24;
  mount_entry *me;
  ulong uVar25;
  long lVar26;
  ulong uVar27;
  char *pcVar28;
  uint uVar29;
  long lVar30;
  long lVar31;
  mount_entry *pmVar32;
  byte bVar33;
  byte bVar34;
  argv_iterator *paVar35;
  long in_FS_OFFSET;
  bool bVar36;
  char *local_150;
  char *local_148;
  FTS *local_140;
  byte local_12e;
  byte local_12d;
  int oi;
  uintmax_t tmp;
  char *local_100;
  char *local_f8;
  mount_entry *pmStack240;
  char *cwd_only [2];
  stat buf;
  
  paVar35 = (argv_iterator *)0x1;
  ai = (argv_iterator *)0x0;
  pcVar15 = (char *)(ulong)(uint)argc;
  lVar3 = *(long *)(in_FS_OFFSET + 0x28);
  me = (mount_entry *)&oi;
  cwd_only[1] = (char *)0x0;
  cwd_only[0] = ".";
  set_program_name(*argv);
  setlocale(6,"");
  bindtextdomain("coreutils","/root/coreutils-builder/share/locale");
  textdomain("coreutils");
  atexit(close_stdout);
  exclude = new_exclude();
  pcVar13 = getenv("DU_BLOCK_SIZE");
  human_options(pcVar13,&human_output_opts,&output_block_size);
  local_140 = (FTS *)0x10;
  local_150 = (char *)0x8;
  local_148 = (char *)0x0;
  bVar36 = false;
LAB_00103ee8:
  oi = -1;
  ppcVar19 = argv;
  iVar9 = getopt_long(pcVar15,argv,"0abd:chHklmst:xB:DLPSX:",long_options);
  if (iVar9 != -1) {
    if (0x87 < iVar9) {
switchD_00103f34_caseD_31:
      paVar35 = (argv_iterator *)0x0;
      goto LAB_00103ee8;
    }
    if (iVar9 < 0x30) {
      if (iVar9 == -0x83) {
        version_etc(stdout,"du","GNU coreutils",Version,"Torbjorn Granlund","David MacKenzie",
                    "Paul Eggert","Jim Meyering",0,ppcVar19);
                    /* WARNING: Subroutine does not return */
        exit(0);
      }
      if (iVar9 == -0x82) {
                    /* WARNING: Subroutine does not return */
        usage(0);
      }
      goto switchD_00103f34_caseD_31;
    }
    switch(iVar9) {
    default:
      goto switchD_00103f34_caseD_31;
    case 0x42:
      sVar10 = human_options(optarg,&human_output_opts,&output_block_size);
      if (sVar10 == LONGINT_OK) break;
      xstrtol_fatal(sVar10,oi,0x42,long_options,optarg);
    case 0x30:
      opt_nul_terminate_output = true;
      break;
    case 0x44:
    case 0x48:
      local_140 = (FTS *)0x11;
      break;
    case 0x4c:
      local_140 = (FTS *)0x2;
      break;
    case 0x50:
      local_140 = (FTS *)0x10;
      break;
    case 0x53:
      opt_separate_dirs = true;
      break;
    case 0x58:
      iVar9 = add_exclude_file(add_exclude,exclude,optarg,0x10000000,'\n');
      if (iVar9 != 0) {
        uVar16 = quotearg_n_style_colon(0,3,optarg);
        piVar21 = __errno_location();
        paVar35 = (argv_iterator *)0x0;
        error(0,*piVar21,&DAT_0012376f,uVar16);
      }
      break;
    case 0x61:
      opt_all = true;
      break;
    case 0x62:
      apparent_size = true;
      human_output_opts = 0;
      output_block_size = 1;
      break;
    case 99:
      print_grand_total = true;
      break;
    case 100:
      sVar10 = xstrtoumax(optarg,(char **)0x0,0,&tmp,"");
      if (sVar10 == LONGINT_OK) {
        max_depth = tmp;
        bVar36 = true;
      }
      else {
        pcVar13 = quote(optarg);
        uVar16 = dcgettext(0,"invalid maximum depth %s",5);
        paVar35 = (argv_iterator *)0x0;
        error(0,0,uVar16,pcVar13);
      }
      break;
    case 0x68:
      human_output_opts = 0xb0;
      output_block_size = 1;
      break;
    case 0x6b:
      human_output_opts = 0;
      output_block_size = 0x400;
      break;
    case 0x6c:
      opt_count_all = true;
      break;
    case 0x6d:
      human_output_opts = 0;
      output_block_size = 0x100000;
      break;
    case 0x73:
      ai = (argv_iterator *)0x1;
      break;
    case 0x74:
      sVar10 = xstrtoimax(optarg,(char **)0x0,0,&opt_threshold,"kKmMGTPEZY0");
      if (sVar10 != LONGINT_OK) {
        xstrtol_fatal(sVar10,oi,0x74,long_options,optarg);
LAB_00105305:
                    /* WARNING: Subroutine does not return */
        __assert_fail("level == prev_level - 1","src/du.c",0x27e,"process_file");
      }
      if ((opt_threshold == 0) && (*optarg == '-')) {
        uVar16 = dcgettext(0,"invalid --threshold argument \'-0\'",5);
        error(1,0,uVar16);
        goto switchD_00103f34_caseD_87;
      }
      break;
    case 0x78:
      local_150 = (char *)0x48;
      break;
    case 0x80:
      apparent_size = true;
      break;
    case 0x81:
      add_exclude(exclude,optarg,0x10000000);
      break;
    case 0x82:
      local_148 = optarg;
      break;
    case 0x83:
      human_output_opts = 0x90;
      output_block_size = 1;
      break;
    case 0x85:
      opt_time = true;
      tVar11 = time_mtime;
      if (optarg != (char *)0x0) {
        pVar23 = __xargmatch_internal("--time",optarg,time_args,time_types,4,argmatch_die,true);
        tVar11 = time_types[pVar23];
      }
      time_type = tVar11;
      pcVar13 = getenv("TZ");
      localtz = tzalloc(pcVar13);
      break;
    case 0x86:
      goto switchD_00103f34_caseD_86;
    case 0x87:
switchD_00103f34_caseD_87:
      opt_inodes = true;
    }
    goto LAB_00103ee8;
  }
  if ((char)paVar35 != '\0') {
    pmVar32 = me;
    if (opt_all == false) {
      if (!bVar36) goto LAB_00105362;
      if ((char)ai != '\0') {
        if (max_depth == 0) {
          uVar16 = dcgettext(0,"warning: summarizing is the same as using --max-depth=0",5);
          error(0,0,uVar16);
          if (max_depth == 0) goto LAB_00104d08;
        }
        sVar17 = max_depth;
        uVar16 = dcgettext(0,"warning: summarizing conflicts with --max-depth=%lu",5);
        error(0,0,uVar16,sVar17);
                    /* WARNING: Subroutine does not return */
        usage(1);
      }
    }
    else if ((char)ai != '\0') {
LAB_001052bc:
      uVar16 = dcgettext(0,"cannot both summarize and show all entries",5);
      error(0,0,uVar16);
      goto LAB_001052dd;
    }
    do {
      if (opt_inodes != false) {
        if (apparent_size != false) {
          uVar16 = dcgettext(0,
                             "warning: options --apparent-size and -b are ineffective with --inodes"
                             ,5);
          error(0,0,uVar16);
        }
        output_block_size = 1;
      }
      if (opt_time != false) {
        pcVar13 = time_style;
        if (time_style != (char *)0x0) goto LAB_0010435b;
        pcVar13 = getenv("TIME_STYLE");
        if ((pcVar13 == (char *)0x0) ||
           (time_style = pcVar13, iVar9 = strcmp(pcVar13,"locale"), iVar9 == 0)) {
          pcVar13 = "long-iso";
          time_style = "long-iso";
LAB_00104e6d:
          pVar23 = __xargmatch_internal
                             ("time style",pcVar13,time_style_args,time_style_types,4,argmatch_die,
                              true);
          tVar2 = time_style_types[pVar23];
          if (tVar2 == long_iso_time_style) {
            time_format = "%Y-%m-%d %H:%M";
          }
          else if (tVar2 == iso_time_style) {
            time_format = "%Y-%m-%d";
          }
          else if (tVar2 == full_iso_time_style) {
            time_format = "%Y-%m-%d %H:%M:%S.%N %z";
          }
        }
        else {
          if (*pcVar13 == '+') {
            pcVar28 = strchr(pcVar13,10);
            if (pcVar28 != (char *)0x0) {
              *pcVar28 = '\0';
              goto LAB_0010435b;
            }
          }
          else {
            while (pcVar13 = time_style, iVar9 = strncmp(time_style,"posix-",6), iVar9 == 0) {
              time_style = pcVar13 + 6;
            }
LAB_0010435b:
            if (*pcVar13 != '+') goto LAB_00104e6d;
          }
          time_format = pcVar13 + 1;
        }
      }
      iVar9 = (int)pcVar15;
      if (local_148 == (char *)0x0) {
        ppcVar19 = cwd_only;
        if (optind < iVar9) {
          ppcVar19 = (char **)((long)((long)argv + 0x70) + (long)optind * 8 + -0x70);
        }
        ai = argv_iter_init_argv(ppcVar19);
        hash_all = optind + 1 < iVar9 || (uint)local_140 == 2;
      }
      else {
        if (optind < iVar9) {
          pcVar13 = quote(*(char **)((long)((long)argv + 0x70) + (long)optind * 8 + -0x70));
          uVar16 = dcgettext(0,"extra operand %s",5);
          error(0,0,uVar16,pcVar13);
          uVar16 = dcgettext(0,"file operands cannot be combined with --files0-from",5);
          __fprintf_chk(stderr,1,"%s\n",uVar16);
                    /* WARNING: Subroutine does not return */
          usage(1);
        }
        iVar9 = strcmp(local_148,"-");
        if ((iVar9 != 0) && (pFVar14 = freopen_safer(local_148,"r",stdin), pFVar14 == (FILE *)0x0))
        {
          pcVar13 = quotearg_style(shell_escape_always_quoting_style,local_148);
          uVar16 = dcgettext(0,"cannot open %s for reading",5);
          piVar21 = __errno_location();
          error(1,*piVar21,uVar16,pcVar13);
          goto LAB_001052bc;
        }
        ai = argv_iter_init_stream(stdin);
        hash_all = true;
      }
      if ((ai == (argv_iterator *)0x0) || (di_files = di_set_alloc(), di_files == (di_set *)0x0)) {
LAB_001051ce:
                    /* WARNING: Subroutine does not return */
        xalloc_die();
      }
      if ((opt_count_all != false) || (hash_all == false)) {
        local_150 = (char *)((ulong)local_150 | 0x100);
      }
      bVar33 = (byte)paVar35;
      me = pmVar32;
      local_12e = bVar33;
      while (pcVar13 = argv_iter(ai,(argv_iter_err *)pmVar32), pcVar13 != (char *)0x0) {
        if (local_148 == (char *)0x0) {
          if (*pcVar13 == '\0') {
            uVar16 = dcgettext(0,"invalid zero-length file name",5);
            error(0,0,&DAT_0012376f,uVar16);
            local_12e = 0;
          }
          else {
LAB_00104589:
            main::temp_argv[0] = pcVar13;
            local_140 = xfts_open(main::temp_argv,(uint)local_150 | (uint)local_140,
                                  (anon_subr_int_FTSENT_ptr_ptr_FTSENT_ptr_ptr *)0x0);
            local_12d = bVar33;
            while (p = (_ftsent *)rpl_fts_read(local_140), p != (FTSENT *)0x0) {
              local_150 = p->fts_path;
              uVar29 = (uint)p->fts_info;
              argv = (char **)(ulong)uVar29;
              if (uVar29 == 4) {
                bVar34 = 0;
                pcVar13 = quotearg_style(shell_escape_always_quoting_style,local_150);
                uVar16 = dcgettext(0,"cannot read directory %s",5);
                error(0,p->fts_errno,uVar16,pcVar13);
LAB_0010466f:
                pvVar18 = dulvl_7598;
                if (time_type == time_mtime) {
                  pcVar13 = (char *)p->fts_statp[0].st_mtim.tv_sec;
                  me = (mount_entry *)p->fts_statp[0].st_mtim.tv_nsec;
                }
                else if (time_type == time_atime) {
                  pcVar13 = (char *)p->fts_statp[0].st_atim.tv_sec;
                  me = (mount_entry *)p->fts_statp[0].st_atim.tv_nsec;
                }
                else {
                  pcVar13 = (char *)p->fts_statp[0].st_ctim.tv_sec;
                  me = (mount_entry *)p->fts_statp[0].st_ctim.tv_nsec;
                }
                if (apparent_size == false) {
                  pcVar15 = (char *)(p->fts_statp[0].st_blocks << 9);
                }
                else {
                  pcVar15 = (char *)0x0;
                  if (-1 < p->fts_statp[0].st_size) {
                    pcVar15 = (char *)p->fts_statp[0].st_size;
                  }
                }
                n = p->fts_level;
                local_100 = (char *)0x1;
                tmp = (uintmax_t)pcVar15;
                local_f8 = pcVar13;
                pmStack240 = me;
                if (n_alloc_7597 == 0) {
                  n_alloc_7597 = n + 10;
                  dulvl_7598 = xcalloc(n_alloc_7597,0x40);
                }
                else if (n != prev_level) {
                  if (prev_level < n) {
                    if (n_alloc_7597 <= n) {
                      dulvl_7598 = xreallocarray(dulvl_7598,n,0x80);
                      n_alloc_7597 = n * 2;
                    }
                    uVar27 = prev_level + 1;
                    if (uVar27 <= n) {
                      pvVar18 = (void *)(prev_level * 0x40 + (long)dulvl_7598);
                      do {
                        uVar27 = uVar27 + 1;
                        *(undefined8 *)((long)pvVar18 + 0x40) = 0;
                        *(undefined8 *)((long)pvVar18 + 0x48) = 0;
                        *(undefined8 *)((long)pvVar18 + 0x50) = 0x8000000000000000;
                        *(undefined8 *)((long)pvVar18 + 0x58) = 0xffffffffffffffff;
                        *(undefined8 *)((long)pvVar18 + 0x60) = 0;
                        *(undefined8 *)((long)pvVar18 + 0x68) = 0;
                        *(undefined8 *)((long)pvVar18 + 0x70) = 0x8000000000000000;
                        *(undefined8 *)((long)pvVar18 + 0x78) = 0xffffffffffffffff;
                        pvVar18 = (void *)((long)pvVar18 + 0x40);
                      } while (uVar27 <= n);
                    }
                  }
                  else {
                    if (n != prev_level - 1) goto LAB_00105305;
                    puVar20 = (ulong *)(prev_level * 0x40 + (long)dulvl_7598);
                    tmp = (uintmax_t)(char *)0xffffffffffffffff;
                    if (!CARRY8((ulong)pcVar15,*puVar20)) {
                      tmp = (uintmax_t)(pcVar15 + *puVar20);
                    }
                    local_100 = (char *)(puVar20[1] + 1);
                    if ((int)(((uint)((long)puVar20[3] < (long)me) -
                              (uint)((long)me < (long)puVar20[3])) +
                             ((uint)((long)puVar20[2] < (long)pcVar13) -
                             (uint)((long)pcVar13 < (long)puVar20[2])) * 2) < 0) {
                      local_f8 = (char *)puVar20[2];
                      pmStack240 = (mount_entry *)puVar20[3];
                    }
                    if (opt_separate_dirs == false) {
                      bVar36 = CARRY8(tmp,puVar20[4]);
                      tmp = tmp + puVar20[4];
                      if (bVar36) {
                        tmp = 0xffffffffffffffff;
                      }
                      local_100 = local_100 + puVar20[5];
                      if ((int)(((uint)((long)puVar20[7] < (long)pmStack240) -
                                (uint)((long)pmStack240 < (long)puVar20[7])) +
                               ((uint)((long)puVar20[6] < (long)local_f8) -
                               (uint)((long)local_f8 < (long)puVar20[6])) * 2) < 0) {
                        local_f8 = (char *)puVar20[6];
                        pmStack240 = (mount_entry *)puVar20[7];
                      }
                    }
                    puVar1 = (ulong *)((long)dulvl_7598 + n * 0x40 + 0x20);
                    uVar25 = *puVar20 + *puVar1;
                    uVar27 = *(ulong *)((long)dulvl_7598 + n * 0x40 + 0x30);
                    if (CARRY8(*puVar20,*puVar1)) {
                      uVar25 = 0xffffffffffffffff;
                    }
                    lVar30 = puVar20[1] + *(long *)((long)dulvl_7598 + n * 0x40 + 0x28);
                    *(long *)((long)dulvl_7598 + n * 0x40 + 0x28) = lVar30;
                    lVar31 = *(long *)((long)pvVar18 + n * 0x40 + 0x38);
                    *(ulong *)((long)pvVar18 + n * 0x40 + 0x20) = uVar25;
                    if ((int)(((uint)((long)puVar20[3] < lVar31) - (uint)(lVar31 < (long)puVar20[3])
                              ) + ((uint)((long)puVar20[2] < (long)uVar27) -
                                  (uint)((long)uVar27 < (long)puVar20[2])) * 2) < 0) {
                      uVar5 = *(undefined4 *)((long)puVar20 + 0x14);
                      uVar6 = *(undefined4 *)(puVar20 + 3);
                      uVar7 = *(undefined4 *)((long)puVar20 + 0x1c);
                      uVar27 = puVar20[2];
                      *(undefined4 *)((long)pvVar18 + n * 0x40 + 0x30) =
                           *(undefined4 *)(puVar20 + 2);
                      *(undefined4 *)((long)pvVar18 + n * 0x40 + 0x34) = uVar5;
                      *(undefined4 *)((long)pvVar18 + n * 0x40 + 0x38) = uVar6;
                      *(undefined4 *)((long)pvVar18 + n * 0x40 + 0x3c) = uVar7;
                      lVar31 = *(long *)((long)pvVar18 + n * 0x40 + 0x38);
                    }
                    lVar26 = uVar25 + puVar20[4];
                    if (CARRY8(uVar25,puVar20[4])) {
                      lVar26 = -1;
                    }
                    *(ulong *)((long)pvVar18 + n * 0x40 + 0x28) = lVar30 + puVar20[5];
                    *(long *)((long)pvVar18 + n * 0x40 + 0x20) = lVar26;
                    if ((int)(((uint)((long)puVar20[7] < lVar31) - (uint)(lVar31 < (long)puVar20[7])
                              ) + ((uint)((long)puVar20[6] < (long)uVar27) -
                                  (uint)((long)uVar27 < (long)puVar20[6])) * 2) < 0) {
                      uVar5 = *(undefined4 *)((long)puVar20 + 0x34);
                      uVar6 = *(undefined4 *)(puVar20 + 7);
                      uVar7 = *(undefined4 *)((long)puVar20 + 0x3c);
                      *(undefined4 *)((long)pvVar18 + n * 0x40 + 0x30) =
                           *(undefined4 *)(puVar20 + 6);
                      *(undefined4 *)((long)pvVar18 + n * 0x40 + 0x34) = uVar5;
                      *(undefined4 *)((long)pvVar18 + n * 0x40 + 0x38) = uVar6;
                      *(undefined4 *)((long)pvVar18 + n * 0x40 + 0x3c) = uVar7;
                    }
                  }
                }
                uVar29 = (uint)argv & 0xfffffffd;
                argv = (char **)(ulong)uVar29;
                prev_level = n;
                if ((opt_separate_dirs == false) || (uVar29 != 4)) {
                  ppcVar19 = (char **)(n * 0x40 + (long)dulvl_7598);
                  pcVar28 = pcVar15 + (long)*ppcVar19;
                  if (CARRY8((ulong)pcVar15,(ulong)*ppcVar19)) {
                    pcVar28 = (char *)0xffffffffffffffff;
                  }
                  ppcVar19[1] = ppcVar19[1] + 1;
                  *ppcVar19 = pcVar28;
                  if ((int)(((uint)((long)me < (long)ppcVar19[3]) -
                            (uint)((long)ppcVar19[3] < (long)me)) +
                           ((uint)((long)pcVar13 < (long)ppcVar19[2]) -
                           (uint)((long)ppcVar19[2] < (long)pcVar13)) * 2) < 0) {
                    ppcVar19[2] = pcVar13;
                    ppcVar19[3] = (char *)me;
                  }
                }
                bVar36 = CARRY8((ulong)pcVar15,tot_dui.size);
                tot_dui.size = (uintmax_t)(pcVar15 + tot_dui.size);
                if (bVar36) {
                  tot_dui.size = 0xffffffffffffffff;
                }
                tot_dui.inodes = tot_dui.inodes + 1;
                if ((int)(((uint)((long)me < tot_dui.tmax.tv_nsec) -
                          (uint)(tot_dui.tmax.tv_nsec < (long)me)) +
                         ((uint)((long)pcVar13 < tot_dui.tmax.tv_sec) -
                         (uint)(tot_dui.tmax.tv_sec < (long)pcVar13)) * 2) < 0) {
                  tot_dui.tmax.tv_sec = (__time_t)pcVar13;
                  tot_dui.tmax.tv_nsec = (__syscall_slong_t)me;
                }
                if ((((uVar29 == 4) || (opt_all != false)) && (n <= max_depth)) || (n == 0)) {
                  pcVar13 = local_100;
                  if (opt_inodes == false) {
                    pcVar13 = (char *)tmp;
                  }
                  bVar36 = (ulong)opt_threshold <= pcVar13;
                  if (opt_threshold < 0) {
                    bVar36 = pcVar13 <= (char *)-opt_threshold;
                  }
                  if (bVar36) {
                    print_size((duinfo *)&tmp,local_150);
                  }
                }
              }
              else {
                bVar34 = bVar33;
                if (uVar29 == 6) goto LAB_0010466f;
                _Var8 = excluded_file_name(exclude,local_150);
                if (_Var8 == false) {
                  if (uVar29 == 0xb) {
                    rpl_fts_set(local_140,p,1);
                    pFVar22 = (FTSENT *)rpl_fts_read(local_140);
                    if (p != pFVar22) {
                    /* WARNING: Subroutine does not return */
                      __assert_fail("e == ent","src/du.c",0x20f,"process_file");
                    }
                    argv = (char **)(ulong)p->fts_info;
                  }
                  iVar9 = (int)argv;
                  bVar34 = iVar9 == 10 || iVar9 == 0xd;
                  if (iVar9 == 10 || iVar9 == 0xd) {
                    me = (mount_entry *)quotearg_style(shell_escape_always_quoting_style,local_150);
                    uVar16 = dcgettext(0,"cannot access %s",5);
                    error(0,p->fts_errno,uVar16,me);
                    bVar34 = 0;
                  }
                  else {
                    if ((((*(byte *)&local_140->fts_options & 0x40) != 0) && (0 < p->fts_level)) &&
                       (local_140->fts_dev != p->fts_statp[0].st_dev)) goto LAB_0010461e;
                    if ((opt_count_all == false) &&
                       ((hash_all != false ||
                        (((p->fts_statp[0].st_mode & 0xf000) != 0x4000 &&
                         (1 < p->fts_statp[0].st_nlink)))))) {
                      iVar12 = di_set_insert(di_files,p->fts_statp[0].st_dev,p->fts_statp[0].st_ino)
                      ;
                      if (iVar12 < 0) goto LAB_001051ce;
                      if (iVar12 == 0) goto LAB_0010461e;
                    }
                    if (iVar9 != 2) {
                      if (iVar9 == 7) {
                        uVar16 = quotearg_n_style_colon(0,3,local_150);
                        error(0,p->fts_errno,&DAT_0012376f,uVar16);
                      }
                      else {
                        bVar34 = bVar33;
                        if (iVar9 == 1) goto LAB_0010462d;
                      }
                      goto LAB_0010466f;
                    }
                    _Var8 = cycle_warning_required(local_140,p);
                    bVar34 = bVar33;
                    if (_Var8 != false) {
                      argv = (char **)p->fts_cycle;
                      if (di_mnt == (di_set *)0x0) {
                        di_mnt = di_set_alloc();
                        if (di_mnt == (di_set *)0x0) goto LAB_001051ce;
                        me = read_file_system_list(false);
                        while (me != (mount_entry *)0x0) {
                          if ((((me->field_0x28 & 3) == 0) &&
                              (iVar9 = __xstat(1,me->me_mountdir,(stat *)&buf), iVar9 == 0)) &&
                             (iVar9 = di_set_insert(di_mnt,buf.st_dev,buf.st_ino), iVar9 < 0))
                          goto LAB_001051ce;
                          pmVar4 = me->me_next;
                          free_mount_entry(me);
                          me = pmVar4;
                        }
                      }
                      for (; bVar34 = p != (FTSENT *)0x0 && (_ftsent *)argv != p, (bool)bVar34;
                          p = p->fts_parent) {
                        iVar9 = di_set_lookup(di_mnt,p->fts_statp[0].st_dev,p->fts_statp[0].st_ino);
                        bVar34 = bVar33;
                        if (0 < iVar9) goto LAB_0010462d;
                      }
                      uVar16 = quotearg_n_style_colon(0,3,local_150);
                      uVar24 = dcgettext(0,
                                         "WARNING: Circular directory structure.\nThis almost certainly means that you have a corrupted file system.\nNOTIFY YOUR SYSTEM MANAGER.\nThe following directory is part of the cycle:\n  %s\n"
                                         ,5);
                      error(0,0,uVar24,uVar16);
                    }
                  }
                }
                else {
LAB_0010461e:
                  uVar29 = (int)argv - 1;
                  argv = (char **)(ulong)uVar29;
                  bVar34 = bVar33;
                  if (uVar29 == 0) {
                    rpl_fts_set(local_140,p,4);
                    pFVar22 = (FTSENT *)rpl_fts_read(local_140);
                    if (p != pFVar22) {
                    /* WARNING: Subroutine does not return */
                      __assert_fail("e == ent","src/du.c",0x230,"process_file");
                    }
                  }
                }
              }
LAB_0010462d:
              local_12d = local_12d & bVar34;
            }
            piVar21 = __errno_location();
            if (*piVar21 != 0) {
              uVar16 = quotearg_n_style_colon(0,3,local_140->fts_path);
              uVar24 = dcgettext(0,"fts_read failed: %s",5);
              error(0,*piVar21,uVar24,uVar16);
              local_12d = 0;
            }
            prev_level = 0;
            iVar9 = rpl_fts_close(local_140);
            if (iVar9 != 0) {
              uVar16 = dcgettext(0,"fts_close failed",5);
              error(0,*piVar21,uVar16);
              local_12d = 0;
            }
            local_12e = local_12e & local_12d;
          }
        }
        else {
          if ((((*local_148 == '-') && (local_148[1] == '\0')) && (*pcVar13 == '-')) &&
             (pcVar13[1] == '\0')) {
            pcVar15 = quotearg_style(shell_escape_always_quoting_style,pcVar13);
            uVar16 = dcgettext(0,"when reading file names from stdin, no file name of %s allowed",5)
            ;
            error(0,0,uVar16,pcVar15);
            if (*pcVar13 == '\0') goto LAB_001044d0;
          }
          else {
            if (*pcVar13 != '\0') goto LAB_00104589;
LAB_001044d0:
            sVar17 = argv_iter_n_args(ai);
            argv = (char **)dcgettext(0,"invalid zero-length file name",5);
            uVar16 = quotearg_n_style_colon(0,3,local_148);
            error(0,0,"%s:%lu: %s",uVar16,sVar17,argv);
          }
          local_12e = 0;
        }
      }
      if (oi == 3) goto LAB_001051ce;
      if (oi == 4) {
        me = (mount_entry *)quotearg_n_style_colon(0,3,local_148);
        uVar16 = dcgettext(0,"%s: read error",5);
        piVar21 = __errno_location();
        error(0,*piVar21,uVar16,me);
        local_12e = 0;
      }
      else if (oi != 2) {
                    /* WARNING: Subroutine does not return */
        __assert_fail("!\"unexpected error code from argv_iter\"","src/du.c",0x439,"main");
      }
      argv_iter_free(ai);
      di_set_free(di_files);
      if (di_mnt != (di_set *)0x0) {
        di_set_free(di_mnt);
      }
      if (((local_148 == (char *)0x0) ||
          (((*(byte *)&stdin->_flags & 0x20) == 0 && (iVar9 = rpl_fclose(stdin), iVar9 == 0)))) ||
         (local_12e == 0)) {
        if (print_grand_total != false) {
          pcVar13 = (char *)dcgettext(0,"total",5);
          print_size(&tot_dui,pcVar13);
        }
        if (lVar3 == *(long *)(in_FS_OFFSET + 0x28)) {
          return (int)(local_12e ^ 1);
        }
                    /* WARNING: Subroutine does not return */
        __stack_chk_fail();
      }
      pcVar15 = quotearg_style(shell_escape_always_quoting_style,local_148);
      uVar16 = dcgettext(0,"error reading %s",5);
      error(1,0,uVar16,pcVar15);
      paVar35 = ai;
LAB_00105362:
      pmVar32 = me;
      if ((char)ai != '\0') {
LAB_00104d08:
        max_depth = 0;
        pmVar32 = me;
      }
    } while( true );
  }
LAB_001052dd:
                    /* WARNING: Subroutine does not return */
  usage(1);
switchD_00103f34_caseD_86:
  time_style = optarg;
  goto LAB_00103ee8;
}

