
/* WARNING: Removing unreachable block (ram,0x001061f7) */
/* WARNING: Removing unreachable block (ram,0x0010620b) */
/* WARNING: Removing unreachable block (ram,0x00106227) */
/* WARNING: Removing unreachable block (ram,0x001051fe) */
/* WARNING: Removing unreachable block (ram,0x001057c2) */
/* WARNING: Removing unreachable block (ram,0x00106ac4) */
/* WARNING: Removing unreachable block (ram,0x001057e0) */
/* WARNING: Removing unreachable block (ram,0x001057e5) */
/* WARNING: Removing unreachable block (ram,0x001051e8) */
/* WARNING: Removing unreachable block (ram,0x001051f2) */
/* WARNING: Removing unreachable block (ram,0x00106ae9) */
/* WARNING: Removing unreachable block (ram,0x00105d16) */
/* WARNING: Removing unreachable block (ram,0x00105d3f) */
/* WARNING: Removing unreachable block (ram,0x00105d47) */
/* WARNING: Removing unreachable block (ram,0x00105d87) */
/* WARNING: Removing unreachable block (ram,0x001067fd) */
/* WARNING: Removing unreachable block (ram,0x00105d9f) */
/* WARNING: Removing unreachable block (ram,0x00105dca) */
/* WARNING: Removing unreachable block (ram,0x00105de4) */
/* WARNING: Removing unreachable block (ram,0x00105dd0) */
/* WARNING: Removing unreachable block (ram,0x00105e9d) */
/* WARNING: Removing unreachable block (ram,0x00105ea3) */
/* WARNING: Removing unreachable block (ram,0x00105dec) */
/* WARNING: Removing unreachable block (ram,0x00105e60) */
/* WARNING: Removing unreachable block (ram,0x00105e65) */
/* WARNING: Removing unreachable block (ram,0x00105e5b) */
/* WARNING: Removing unreachable block (ram,0x00105e68) */
/* WARNING: Removing unreachable block (ram,0x00105e02) */
/* WARNING: Removing unreachable block (ram,0x00105e2a) */
/* WARNING: Removing unreachable block (ram,0x00106da3) */
/* WARNING: Removing unreachable block (ram,0x00106daa) */
/* WARNING: Removing unreachable block (ram,0x00106daf) */
/* WARNING: Removing unreachable block (ram,0x00106dd2) */
/* WARNING: Removing unreachable block (ram,0x00106720) */
/* WARNING: Removing unreachable block (ram,0x00105eb0) */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int main(int argc,char **argv)

{
  byte *pbVar1;
  ulong *__cond;
  ushort uVar2;
  long lVar3;
  ushort *puVar4;
  size_t sVar5;
  byte bVar6;
  uintmax_t uVar7;
  _Bool _Var8;
  int iVar9;
  int iVar10;
  uint uVar11;
  char *pcVar12;
  char *pcVar13;
  lconv *plVar14;
  ushort **ppuVar15;
  __int32_t **pp_Var16;
  byte *__s;
  size_t sVar17;
  char *pcVar18;
  undefined8 uVar19;
  FILE *__stream;
  tempnode *ptVar20;
  merge_node *parent;
  randread_source *s;
  ulong uVar21;
  keyfield *pkVar22;
  ulong uVar23;
  sortfile *files;
  sortfile *psVar24;
  FILE *pFVar25;
  undefined8 uVar26;
  long lVar27;
  keyfield *pkVar28;
  keyfield **ppkVar29;
  _Bool _Var30;
  ulong uVar31;
  ulong uVar32;
  char cVar33;
  int *piVar34;
  int iVar35;
  Tokens *pTVar36;
  char *pcVar37;
  keyfield *key;
  long lVar38;
  line *dest;
  pthread_mutex_t *__mutex;
  size_t sVar39;
  size_t sVar40;
  int *piVar41;
  month *pmVar42;
  merge_node *pmVar43;
  undefined *puVar44;
  ulong uVar45;
  long in_FS_OFFSET;
  bool bVar46;
  double extraout_XMM0_Qa;
  double extraout_XMM0_Qa_00;
  double dVar47;
  double extraout_XMM0_Qa_01;
  double dVar48;
  ulong local_420;
  _Bool posixly_correct;
  char *local_400;
  char *local_3f8;
  buffer *local_3e8;
  char *local_3d0;
  merge_node *local_3c8;
  size_t local_3a8;
  char **local_3a0;
  int oi;
  undefined4 uStack916;
  keyfield key_buf;
  keyfield gkey;
  uintmax_t n;
  ulong local_2d0;
  ulong local_2c8;
  merge_node *local_2c0;
  ulong local_2b8;
  char local_2a8;
  Tokens tok;
  sigaction act;
  char tmp [21];
  char obuf [46];
  char str [2];
  
  lVar3 = *(long *)(in_FS_OFFSET + 0x28);
  pcVar12 = getenv("POSIXLY_CORRECT");
  iVar9 = posix2_version();
  set_program_name(*argv);
  pcVar13 = setlocale(6,"");
  bindtextdomain("coreutils","/root/coreutils-builder/share/locale");
  textdomain("coreutils");
  exit_failure = 2;
  hard_LC_COLLATE = hard_locale(3);
  _Var8 = hard_locale(2);
  hard_LC_TIME = _Var8;
  plVar14 = localeconv();
  decimal_point = *plVar14->decimal_point;
  if ((decimal_point == '\0') || (plVar14->decimal_point[1] != '\0')) {
    decimal_point = '.';
  }
  cVar33 = *plVar14->thousands_sep;
  thousands_sep = (int)cVar33;
  if (cVar33 != '\0') {
    if (plVar14->thousands_sep[1] == '\0') goto LAB_00103fe7;
    thousands_sep_ignored = true;
  }
  thousands_sep = 0x80;
LAB_00103fe7:
  have_read_stdin = false;
  ppuVar15 = __ctype_b_loc();
  pp_Var16 = __ctype_toupper_loc();
  lVar27 = 0;
LAB_00104062:
  do {
    uVar2 = (*ppuVar15)[lVar27];
    bVar6 = (byte)(uVar2 >> 8);
    if ((uVar2 & 1) == 0) {
      if (lVar27 == 10) {
        blanks[10] = true;
        lVar27 = 0xb;
        nondictionary[10] = false;
        nonprinting[10] = (_Bool)(((byte)((*ppuVar15)[10] >> 0xe) ^ 1) & 1);
        fold_toupper[10] = (char)(*pp_Var16)[10];
        goto LAB_00104062;
      }
      blanks[lVar27] = false;
      _Var30 = (_Bool)(((byte)(uVar2 >> 3) ^ 1) & 1);
      nonprinting[lVar27] = (_Bool)((bVar6 >> 6 ^ 1) & 1);
    }
    else {
      blanks[lVar27] = true;
      nonprinting[lVar27] = (_Bool)((bVar6 >> 6 ^ 1) & 1);
      _Var30 = false;
    }
    nondictionary[lVar27] = _Var30;
    fold_toupper[lVar27] = (char)(*pp_Var16)[lVar27];
    lVar27 = lVar27 + 1;
  } while (lVar27 != 0x100);
  if (_Var8 != false) {
    pmVar42 = monthtab;
    lVar27 = 1;
    do {
      __s = (byte *)nl_langinfo((int)lVar27 + 0x2000d);
      sVar17 = strlen((char *)__s);
      pcVar18 = (char *)xmalloc(sVar17 + 1);
      pmVar42->val = (int)lVar27;
      pmVar42->name = pcVar18;
      pcVar37 = pcVar18;
      if (sVar17 != 0) {
        puVar4 = *ppuVar15;
        pbVar1 = __s + sVar17;
        lVar38 = 0;
        do {
          if ((*(byte *)(puVar4 + *__s) & 1) == 0) {
            lVar38 = lVar38 + 1;
            *pcVar37 = fold_toupper[*__s];
            pcVar37 = pcVar18 + lVar38;
          }
          __s = __s + 1;
        } while (pbVar1 != __s);
      }
      lVar27 = lVar27 + 1;
      *pcVar37 = '\0';
      pmVar42 = pmVar42 + 1;
    } while (lVar27 != 0xd);
    qsort(monthtab,0xc,0x10,struct_month_cmp);
  }
  piVar41 = main::lexical_block_1::sig;
  sigemptyset((sigset_t *)&caught_signals);
  pFVar25 = (FILE *)(ulong)(uint)argc;
  piVar34 = main::lexical_block_1::sig;
  iVar35 = 0xe;
  while( true ) {
    piVar34 = piVar34 + 1;
    sigaction(iVar35,(sigaction *)0x0,(sigaction *)&act);
    if (act.__sigaction_handler != (code *)0x1) {
      sigaddset((sigset_t *)&caught_signals,iVar35);
    }
    if (piVar34 == (int *)&DAT_0011534c) break;
    iVar35 = *piVar34;
  }
  iVar35 = 0xe;
  act.__sigaction_handler = sighandler;
  act.sa_mask.__val[0]._0_4_ = (undefined4)caught_signals.__val[0];
  act.sa_mask.__val[0]._4_4_ = caught_signals.__val[0]._4_4_;
  act.sa_mask.__val[1]._0_4_ = (undefined4)caught_signals.__val[1];
  act.sa_mask.__val[1]._4_4_ = caught_signals.__val[1]._4_4_;
  act.sa_flags = 0;
  act.sa_mask.__val[2]._0_4_ = (uint)caught_signals.__val[2];
  act.sa_mask.__val[2]._4_4_ = caught_signals.__val[2]._4_4_;
  act.sa_mask.__val[3]._0_4_ = (undefined4)caught_signals.__val[3];
  act.sa_mask.__val[3]._4_4_ = caught_signals.__val[3]._4_4_;
  act.sa_mask.__val[4]._0_4_ = (undefined4)caught_signals.__val[4];
  act.sa_mask.__val[4]._4_4_ = caught_signals.__val[4]._4_4_;
  act.sa_mask.__val[5]._0_4_ = (undefined4)caught_signals.__val[5];
  act.sa_mask.__val[5]._4_4_ = caught_signals.__val[5]._4_4_;
  act.sa_mask.__val[6]._0_4_ = (undefined4)caught_signals.__val[6];
  act.sa_mask.__val[6]._4_4_ = caught_signals.__val[6]._4_4_;
  act.sa_mask.__val[7]._0_4_ = (undefined4)caught_signals.__val[7];
  act.sa_mask.__val[7]._4_4_ = caught_signals.__val[7]._4_4_;
  act.sa_mask.__val[8]._0_4_ = (undefined4)caught_signals.__val[8];
  act.sa_mask.__val[8]._4_4_ = caught_signals.__val[8]._4_4_;
  act.sa_mask.__val[9]._0_4_ = (undefined4)caught_signals.__val[9];
  act.sa_mask.__val[9]._4_4_ = caught_signals.__val[9]._4_4_;
  act.sa_mask.__val._80_16_ = caught_signals.__val._80_16_;
  act.sa_mask.__val._96_16_ = caught_signals.__val._96_16_;
  act.sa_mask.__val[14]._0_4_ = (undefined4)caught_signals.__val[14];
  act.sa_mask.__val[14]._4_4_ = caught_signals.__val[14]._4_4_;
  act.sa_mask.__val[15]._0_4_ = (undefined4)caught_signals.__val[15];
  act.sa_mask.__val[15]._4_4_ = caught_signals.__val[15]._4_4_;
  while( true ) {
    piVar41 = piVar41 + 1;
    iVar10 = sigismember((sigset_t *)&caught_signals,iVar35);
    if (iVar10 != 0) {
      sigaction(iVar35,(sigaction *)&act,(sigaction *)0x0);
    }
    if (piVar41 == (int *)&DAT_0011534c) break;
    iVar35 = *piVar41;
  }
  pmVar43 = (merge_node *)0x0;
  signal(0x11,(__sighandler_t)0x0);
  puVar44 = &DAT_001150cc;
  atexit(exit_cleanup);
  gkey.sword = 0xffffffffffffffff;
  gkey._8_16_ = ZEXT816(0xffffffffffffffff) << 0x40;
  gkey._24_16_ = (undefined  [16])0x0;
  gkey._40_16_ = (undefined  [16])0x0;
  gkey._56_16_ = (undefined  [16])0x0;
  local_3a0 = (char **)xnmalloc((long)argc,8);
  pcVar37 = (char *)0x0;
  local_3d0 = (char *)0x0;
  local_400 = (char *)0x0;
  local_3f8 = (char *)0x0;
LAB_0010440e:
  _oi = (FILE *)CONCAT44(uStack916,0xffffffff);
  iVar35 = (int)pFVar25;
  if ((int)pcVar37 == -1) {
LAB_0010441f:
    lVar27 = (long)optind;
LAB_001043f0:
    if ((int)lVar27 < iVar35) {
      optind = (int)lVar27 + 1;
      local_3a0[(long)pmVar43] = (char *)((size_t *)argv)[lVar27];
      pmVar43 = (merge_node *)((long)&pmVar43->lo + 1);
      goto LAB_0010440e;
    }
    if (local_400 != (char *)0x0) {
      if (pmVar43 != (merge_node *)0x0) {
LAB_00106453:
        pcVar12 = quotearg_style(shell_escape_always_quoting_style,*local_3a0);
        uVar19 = dcgettext(0,"extra operand %s",5);
                    /* WARNING: Subroutine does not return */
        error(0,0,uVar19,pcVar12);
      }
      pcVar37 = "r";
      pFVar25 = stream_open(local_400,"r");
      if (pFVar25 == (FILE *)0x0) {
        xfopen(local_400,pcVar37);
LAB_00106d6a:
        pcVar12 = quotearg_style(shell_escape_always_quoting_style,local_400);
        uVar19 = dcgettext(0,"no input from %s",5);
                    /* WARNING: Subroutine does not return */
        error(2,0,uVar19,pcVar12);
      }
      argv = (char **)&tok;
      readtokens0_init((Tokens *)argv);
      _Var8 = readtokens0(pFVar25,(Tokens *)argv);
      if (_Var8 == false) {
        pcVar12 = quotearg_style(shell_escape_always_quoting_style,local_400);
        uVar19 = dcgettext(0,"cannot read file names from %s",5);
                    /* WARNING: Subroutine does not return */
        error(2,0,uVar19,pcVar12);
      }
      xfclose(pFVar25,local_400);
      if (tok.n_tok == 0) goto LAB_00106d6a;
      rpl_free(local_3a0);
      local_3a0 = tok.tok;
      if (tok.n_tok != 0) {
        do {
          pcVar37 = tok.tok[(long)pmVar43];
          if ((*pcVar37 == '-') && (pcVar37[1] == '\0')) {
            pcVar12 = quotearg_style(shell_escape_always_quoting_style,pcVar37);
            uVar19 = dcgettext(0,"when reading file names from stdin, no file name of %s allowed",5)
            ;
                    /* WARNING: Subroutine does not return */
            error(2,0,uVar19,pcVar12);
          }
          pmVar43 = (merge_node *)((long)&pmVar43->lo + 1);
          if (*pcVar37 == '\0') {
            uVar19 = quotearg_n_style_colon(0,3,local_400);
            uVar26 = dcgettext(0,"%s:%lu: invalid zero-length file name",5);
                    /* WARNING: Subroutine does not return */
            error(2,0,uVar26,uVar19,pmVar43);
          }
        } while ((merge_node *)tok.n_tok != pmVar43);
      }
    }
  }
  else {
    if ((pmVar43 == (merge_node *)0x0) || (pcVar12 == (char *)0x0)) {
LAB_00104448:
      pTVar36 = (Tokens *)argv;
      uVar11 = getopt_long((ulong)pFVar25 & 0xffffffff,argv,"-bcCdfghik:mMno:rRsS:t:T:uVy:z",
                           long_options,&oi);
      pcVar37 = (char *)(ulong)uVar11;
      if (uVar11 != 0xffffffff) {
        if ((int)uVar11 < 0x88) {
          if ((int)uVar11 < 1) {
            if (uVar11 == 0xffffff7d) {
              version_etc(stdout,"sort","GNU coreutils",Version,"Mike Haertel","Paul Eggert",0,
                          pTVar36);
                    /* WARNING: Subroutine does not return */
              exit(0);
            }
            if (uVar11 == 0xffffff7e) {
                    /* WARNING: Subroutine does not return */
              usage(0);
            }
          }
          else if (uVar11 < 0x88) {
                    /* WARNING: Could not recover jumptable at 0x00104497. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            iVar9 = (*(code *)(puVar44 + *(int *)(puVar44 + (ulong)uVar11 * 4)))();
            return iVar9;
          }
        }
                    /* WARNING: Subroutine does not return */
        usage(2);
      }
      goto LAB_0010441f;
    }
    lVar27 = (long)optind;
    if (iVar9 - 0x30db0U < 0x2b9) goto LAB_001043f0;
    if (iVar35 != optind) {
      pcVar18 = (char *)((size_t *)argv)[optind];
      if (((*pcVar18 == '-') && (pcVar18[1] == 'o')) &&
         ((pcVar18[2] != '\0' || (optind + 1 != iVar35)))) goto LAB_00104448;
      goto LAB_001043f0;
    }
    if (local_400 != (char *)0x0) goto LAB_00106453;
  }
  if (keylist != (keyfield *)0x0) {
    puVar44 = (undefined *)0x0;
    pkVar28 = keylist;
    key = keylist;
    do {
      _Var8 = default_key_compare(pkVar28);
      if ((_Var8 == false) || (pkVar28->reverse != false)) {
        gkey.random = pkVar28->random;
        pkVar28 = pkVar28->next;
      }
      else {
        pkVar28->ignore = gkey.ignore;
        pkVar28->translate = gkey.translate;
        pkVar28->skipsblanks = gkey.skipsblanks;
        pkVar28->skipeblanks = gkey.skipeblanks;
        pkVar28->month = gkey.month;
        pkVar28->numeric = gkey.numeric;
        pkVar28->general_numeric = gkey.general_numeric;
        pkVar28->human_numeric = gkey.human_numeric;
        pkVar28->reverse = gkey.reverse;
        pkVar28->version = gkey.version;
        pkVar28->random = gkey.random;
        pkVar28 = pkVar28->next;
      }
      puVar44 = (undefined *)(ulong)((uint)puVar44 | (uint)gkey.random);
    } while (pkVar28 != (keyfield *)0x0);
    local_400 = (char *)0x0;
    goto LAB_001046d0;
  }
  pkVar28 = &gkey;
  _Var8 = default_key_compare(pkVar28);
  if (_Var8 == false) goto LAB_00106287;
  if (debug != false) {
LAB_00104721:
    if ((pcVar13 != (char *)0x0) && (pcVar12 = setlocale(3,""), pcVar12 != (char *)0x0)) {
      if (hard_LC_COLLATE != false) {
        pcVar12 = setlocale(3,(char *)0x0);
        pcVar12 = quote(pcVar12);
        uVar19 = dcgettext(0,"text ordering performed using %s sorting rules",5);
                    /* WARNING: Subroutine does not return */
        error(0,0,uVar19,pcVar12);
      }
      uVar19 = dcgettext(0,"text ordering performed using simple byte comparison",5);
                    /* WARNING: Subroutine does not return */
      error(0,0,&DAT_00117183,uVar19);
    }
    uVar19 = dcgettext(0,"failed to set locale",5);
                    /* WARNING: Subroutine does not return */
    error(0,0,&DAT_00117183,uVar19);
  }
  reverse = gkey.reverse;
LAB_001051a2:
  if (temp_dir_count == 0) {
    pcVar12 = getenv("TMPDIR");
    if (pcVar12 == (char *)0x0) {
      pcVar12 = "/tmp";
    }
    add_temp_dir(pcVar12);
  }
  if (pmVar43 == (merge_node *)0x0) {
    pmVar43 = (merge_node *)0x1;
    rpl_free(local_3a0);
    local_3a0 = (char **)xmalloc(8);
    *local_3a0 = "-";
  }
  sVar5 = sort_size;
  if ((sort_size != 0) && (sVar5 = (ulong)nmerge * 0x22, (ulong)nmerge * 0x22 < sort_size)) {
    sVar5 = sort_size;
  }
  sort_size = sVar5;
  local_3c8 = (merge_node *)0x0;
  parent = (merge_node *)local_3a0;
  do {
    pcVar12 = *(char **)parent;
    if (((*pcVar12 != '-') || (pcVar12[1] != '\0')) && (iVar9 = euidaccess(pcVar12,4), iVar9 != 0))
    {
      pcVar12 = *(char **)parent;
      pcVar13 = "cannot read";
LAB_00106a18:
      pcVar13 = (char *)dcgettext(0,pcVar13,5);
                    /* WARNING: Subroutine does not return */
      sort_die(pcVar13,pcVar12);
    }
    local_3c8 = (merge_node *)((long)&local_3c8->lo + 1);
    parent = (merge_node *)((long)parent + 8);
  } while (pmVar43 != local_3c8);
  uVar23 = num_processors(NPROC_CURRENT_OVERRIDABLE);
  uVar32 = 8;
  if (uVar23 < 9) {
    uVar32 = uVar23;
  }
  local_2c0 = (merge_node *)0x0;
  local_420 = 0;
  uVar23 = 0xffffffffffffff;
  if (uVar32 < 0x100000000000000) {
    uVar23 = uVar32;
  }
  sVar5 = uVar23 * 2;
LAB_0010585e:
  pcVar13 = "r";
  pcVar12 = *local_3a0;
  __stream = (FILE *)stream_open(pcVar12,"r");
  if (__stream == (FILE *)0x0) {
    xfopen(pcVar12,pcVar13);
LAB_001069ff:
    pcVar13 = "stat failed";
    pcVar12 = local_3a0[(long)parent];
    goto LAB_00106a18;
  }
  local_3a8 = 0x30;
  if (1 < uVar32) {
    lVar27 = 1;
    uVar45 = 1;
    do {
      uVar45 = uVar45 * 2;
      lVar27 = lVar27 + 1;
    } while (uVar45 < uVar23);
    local_3a8 = lVar27 * 0x20;
  }
  parent = local_2c0;
  if (local_2c0 == (merge_node *)0x0) {
    sVar39 = local_3a8 + 2;
    do {
      if (parent == (merge_node *)0x0) {
        iVar9 = fileno(__stream);
        iVar9 = __fxstat(1,iVar9,(stat *)(sigaction *)&act);
        bVar46 = iVar9 != 0;
      }
      else {
        pcVar13 = local_3a0[(long)parent];
        if ((*pcVar13 == '-') && (pcVar13[1] == '\0')) {
          iVar9 = __fxstat(1,0,(stat *)(sigaction *)&act);
          bVar46 = iVar9 != 0;
        }
        else {
          iVar9 = __xstat(1,pcVar13,(stat *)(sigaction *)&act);
          bVar46 = iVar9 != 0;
        }
      }
      if (bVar46) goto LAB_001069ff;
      if (((uint)act.sa_mask.__val[2] & 0xf000) == 0x8000) {
        uVar45 = CONCAT44(act.sa_mask.__val[5]._4_4_,(undefined4)act.sa_mask.__val[5]);
        sVar40 = sort_size;
        if (size_bound_9044 == 0) goto joined_r0x00105f4e;
      }
      else {
        sVar40 = sort_size;
        if (sort_size != 0) goto LAB_001061b1;
        uVar45 = 0x20000;
        sVar40 = size_bound_9044;
joined_r0x00105f4e:
        size_bound_9044 = sVar40;
        if (size_bound_9044 == 0) {
          iVar9 = getrlimit(RLIMIT_DATA,(rlimit *)&oi);
          pFVar25 = (FILE *)0xffffffffffffffff;
          if (iVar9 == 0) {
            pFVar25 = _oi;
          }
          iVar9 = getrlimit(RLIMIT_AS,(rlimit *)&oi);
          if ((iVar9 == 0) && (_oi < pFVar25)) {
            pFVar25 = _oi;
          }
          uVar31 = (ulong)pFVar25 >> 1;
          iVar9 = getrlimit(__RLIMIT_RSS,(rlimit *)&oi);
          if ((iVar9 == 0) && (uVar21 = ((ulong)_oi >> 4) * 0xf, uVar21 < uVar31)) {
            uVar31 = uVar21;
          }
          physmem_available();
          physmem_total();
          dVar47 = extraout_XMM0_Qa_00 * _DAT_00117120;
          dVar48 = extraout_XMM0_Qa;
          if (extraout_XMM0_Qa <= DAT_00117118 * extraout_XMM0_Qa_00) {
            dVar48 = DAT_00117118 * extraout_XMM0_Qa_00;
          }
          if (dVar47 < (double)uVar31) {
            if (dVar47 < DAT_00117110) {
              uVar31 = (ulong)dVar47;
            }
            else {
              uVar31 = (long)(dVar47 - DAT_00117110) ^ 0x8000000000000000;
            }
          }
          if ((long)uVar31 < 0) {
            dVar47 = (double)(uVar31 >> 1 | (ulong)((uint)uVar31 & 1));
            dVar47 = dVar47 + dVar47;
          }
          else {
            dVar47 = (double)uVar31;
          }
          if (dVar48 < dVar47) {
            if (dVar48 < DAT_00117110) {
              uVar31 = (ulong)dVar48;
            }
            else {
              uVar31 = (long)(dVar48 - DAT_00117110) ^ 0x8000000000000000;
            }
          }
          size_bound_9044 = (ulong)nmerge * 0x22;
          if ((ulong)nmerge * 0x22 < uVar31) {
            size_bound_9044 = uVar31;
          }
        }
      }
      uVar31 = (local_3a8 + 1) * uVar45 + 1;
      sVar40 = size_bound_9044;
      if ((uVar45 != uVar31 / (local_3a8 + 1)) || (size_bound_9044 - sVar39 <= uVar31))
      goto LAB_001061b1;
      parent = (merge_node *)((long)&parent->lo + 1);
      sVar39 = sVar39 + uVar31;
      sVar40 = sVar39;
      if (local_3c8 <= parent) goto LAB_001061b1;
    } while( true );
  }
  goto LAB_001058c1;
LAB_00106287:
  pkVar22 = (keyfield *)xmemdup(pkVar28,0x48);
  ppkVar29 = &keylist;
  for (pkVar28 = keylist; pkVar28 != (keyfield *)0x0; pkVar28 = pkVar28->next) {
    ppkVar29 = &pkVar28->next;
  }
  puVar44 = (undefined *)(ulong)gkey.random;
  *ppkVar29 = pkVar22;
  key = keylist;
  pkVar22->next = (keyfield *)0x0;
  local_400 = (char *)0x1;
  while( true ) {
    if (key == (keyfield *)0x0) {
      if (debug != false) goto LAB_00104721;
      gkey.reverse = SUB161(gkey._40_16_ >> 0x78,0);
      reverse = gkey.reverse;
      if ((char)puVar44 == '\0') goto LAB_001051a2;
      s = randread_new((char *)0x0,0x10);
      if (s == (randread_source *)0x0) goto LAB_001069c3;
      randread(s,str,0x10);
      iVar9 = randread_free(s);
      if (iVar9 != 0) {
        pcVar12 = "close failed";
        goto LAB_001069a5;
      }
      md5_init_ctx(&random_md5_state);
      md5_process_bytes(str,0x10,&random_md5_state);
      goto LAB_001051a2;
    }
LAB_001046d0:
    if (1 < (uint)(byte)(key->version | key->random | key->ignore != (_Bool *)0x0) +
            (uint)key->month +
            (uint)key->numeric + (uint)key->general_numeric + (uint)key->human_numeric) break;
    key = key->next;
  }
  key->reverse = false;
  pcVar37 = str;
  *(undefined2 *)&key->skipsblanks = 0;
  key_to_opts(key,pcVar37);
  incompatible_options(pcVar37);
  n = (long)(extraout_XMM0_Qa_01 - DAT_00117110) ^ 0x8000000000000000;
  if ((sort_size <= n) &&
     (sort_size = (size_t)(char *)((ulong)nmerge * 0x22), (char *)((ulong)nmerge * 0x22) < n)) {
    sort_size = n;
  }
  goto LAB_0010440e;
LAB_001061b1:
  initbuf((buffer *)&n,local_3a8,sVar40);
LAB_001058c1:
  local_3e8 = (buffer *)&n;
  local_3c8 = (merge_node *)&local_3c8[-1].lock.field_0x27;
  local_2a8 = false;
  while (_Var8 = fillbuf(local_3e8,(FILE *)__stream,pcVar12), cVar33 = local_2a8,
        pmVar43 = local_2c0, uVar7 = n, _Var8 != false) {
    if ((_Bool)local_2a8 == false) {
LAB_0010595e:
      saved_line.text = (char *)0x0;
      local_420 = local_420 + 1;
      cVar33 = '\0';
      ptVar20 = maybe_create_temp((FILE **)&oi,false);
      pcVar13 = &ptVar20->field_0xd;
    }
    else {
      if (local_3c8 != (merge_node *)0x0) {
        if ((long)local_2c0 + (-(local_3a8 * local_2c8) - local_2d0) <= local_3a8 + 1)
        goto LAB_0010595e;
        local_2b8 = local_2d0;
        xfclose((FILE *)__stream,pcVar12);
        goto LAB_00105ce9;
      }
      saved_line.text = (char *)0x0;
      if ((local_420 | local_2b8) != 0) goto LAB_0010595e;
      xfclose((FILE *)__stream,pcVar12);
      pcVar13 = "w";
      pFVar25 = stream_open((char *)0x0,"w");
      if (pFVar25 == (FILE *)0x0) {
        xfopen((char *)0x0,pcVar13);
LAB_001069c3:
        local_3f8 = "getrandom";
        pcVar12 = "open failed";
LAB_001069a5:
        pcVar12 = (char *)dcgettext(0,pcVar12,5);
                    /* WARNING: Subroutine does not return */
        sort_die(pcVar12,local_3f8);
      }
      local_420 = 0;
      pcVar13 = local_3d0;
      _oi = pFVar25;
    }
    dest = (line *)((long)&pmVar43->lo + uVar7);
    if (local_2c8 < 2) {
      write_unique(dest + -1,_oi,pcVar13);
    }
    else {
      __cond = act.sa_mask.__val + 5;
      act.__sigaction_handler = (code *)heap_alloc(compare_nodes,sVar5);
      pthread_mutex_init((pthread_mutex_t *)&act.sa_mask,(pthread_mutexattr_t *)0x0);
      pthread_cond_init((pthread_cond_t *)__cond,(pthread_condattr_t *)0x0);
      sVar39 = local_2c8;
      parent = (merge_node *)xmalloc(uVar23 << 8);
      parent->end_hi = (line *)0x0;
      __mutex = &parent->lock;
      parent->nhi = sVar39;
      parent->nlo = sVar39;
      parent->end_lo = (line *)0x0;
      parent->hi = (line *)0x0;
      parent->lo = (line *)0x0;
      parent->dest = (line **)0x0;
      parent->parent = (merge_node *)0x0;
      parent->level = 0;
      parent->queued = false;
      pthread_mutex_init((pthread_mutex_t *)__mutex,(pthread_mutexattr_t *)0x0);
      init_node(parent,parent + 1,dest,uVar23,sVar39,false);
      sortlines(dest,uVar23,local_2c8,parent + 1,(merge_node_queue *)(sigaction *)&act,_oi,pcVar13);
      lVar27 = sVar5 - 1;
      if (sVar5 != 0) {
        do {
          lVar27 = lVar27 + -1;
          pthread_mutex_destroy((pthread_mutex_t *)__mutex);
          __mutex = (pthread_mutex_t *)((long)(__mutex + 3) + 8);
        } while (lVar27 != -1);
      }
      rpl_free(parent);
      heap_free((heap *)act.__sigaction_handler);
      pthread_cond_destroy((pthread_cond_t *)__cond);
      pthread_mutex_destroy((pthread_mutex_t *)&act.sa_mask);
    }
    xfclose(_oi,pcVar13);
    if (cVar33 != '\0') {
      rpl_free((void *)n);
      goto joined_r0x00105b09;
    }
  }
  xfclose((FILE *)__stream,pcVar12);
  if (local_3c8 == (merge_node *)0x0) {
    rpl_free((void *)n);
    ptVar20 = temphead;
    files = (sortfile *)xnmalloc(local_420,0x10);
    psVar24 = files;
    while (ptVar20 != (tempnode *)0x0) {
      psVar24->temp = ptVar20;
      puVar44 = &ptVar20->field_0xd;
      ptVar20 = ptVar20->next;
      psVar24->name = puVar44;
      psVar24 = psVar24 + 1;
    }
    merge(files,local_420,local_420,(char *)0x0);
    rpl_free(files);
joined_r0x00105b09:
    while (0 < nprocs) {
      reap(-1);
    }
    if ((have_read_stdin != false) && (iVar9 = rpl_fclose(stdin), iVar9 == -1)) {
      pcVar12 = (char *)dcgettext(0,"close failed",5);
                    /* WARNING: Subroutine does not return */
      sort_die(pcVar12,"-");
    }
    if (lVar3 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
    return 0;
  }
LAB_00105ce9:
  local_3a0 = local_3a0 + 1;
  goto LAB_0010585e;
}

