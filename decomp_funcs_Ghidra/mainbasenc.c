
/* WARNING: Could not reconcile some variable overlaps */

int main(int argc,char **argv)

{
  bool bVar1;
  anon_subr_void_char_ptr_idx_t_char_ptr_idx_t *paVar2;
  _IO_FILE *p_Var3;
  _Bool _Var4;
  int iVar5;
  strtol_error sVar6;
  int iVar7;
  FILE *__stream;
  FILE *__ptr;
  size_t sVar8;
  undefined7 extraout_var;
  _IO_FILE *p_Var9;
  FILE *pFVar10;
  ulong uVar11;
  char *pcVar12;
  undefined8 uVar13;
  int *piVar14;
  undefined8 extraout_RDX;
  idx_t iVar15;
  FILE *pFVar16;
  long lVar17;
  ulong __n;
  _IO_FILE *p_Var18;
  FILE *pFVar19;
  uint uVar20;
  _IO_FILE *unaff_R15;
  undefined auVar21 [16];
  char *local_a8;
  undefined8 local_a0;
  FILE *local_98;
  _IO_FILE *local_90;
  _IO_FILE *local_88;
  char *local_80;
  intmax_t w;
  base_decode_context ctx;
  
  bVar1 = false;
  set_program_name(*argv);
  setlocale(6,"");
  bindtextdomain("coreutils","/root/coreutils-builder/share/locale");
  textdomain("coreutils");
  atexit(close_stdout);
  local_a0 = (FILE *)((ulong)local_a0 & 0xffffffffffffff00);
  pFVar16 = (FILE *)0x4c;
  iVar7 = 0;
LAB_0010276c:
  iVar5 = getopt_long(argc,argv,&DAT_00109159,long_options,0);
  if (iVar5 == -1) {
    switch(iVar7) {
    case 0x80:
      base_length = base64_length_wrapper;
      isbase = isbase64;
      base_encode = base64_encode;
      base_decode_ctx_init = base64_decode_ctx_init_wrapper;
      base_decode_ctx = base64_decode_ctx_wrapper;
      break;
    case 0x81:
      base_length = base64_length_wrapper;
      isbase = isbase64url;
      base_encode = base64url_encode;
      base_decode_ctx_init = base64url_decode_ctx_init_wrapper;
      base_decode_ctx = base64url_decode_ctx_wrapper;
      break;
    case 0x82:
      base_length = base32_length_wrapper;
      isbase = isbase32;
      base_encode = base32_encode;
      base_decode_ctx_init = base32_decode_ctx_init_wrapper;
      base_decode_ctx = base32_decode_ctx_wrapper;
      break;
    case 0x83:
      base_length = base32_length_wrapper;
      isbase = isbase32hex;
      base_encode = base32hex_encode;
      base_decode_ctx_init = base32hex_decode_ctx_init_wrapper;
      base_decode_ctx = base32hex_decode_ctx_wrapper;
      break;
    case 0x84:
      base_length = base16_length;
      isbase = isbase16;
      base_encode = base16_encode;
      base_decode_ctx_init = base16_decode_ctx_init;
      base_decode_ctx = base16_decode_ctx;
      break;
    case 0x85:
      base_length = base2_length;
      isbase = isbase2;
      base_encode = base2msbf_encode;
      base_decode_ctx_init = base2_decode_ctx_init;
      base_decode_ctx = base2msbf_decode_ctx;
      break;
    case 0x86:
      base_length = base2_length;
      isbase = isbase2;
      base_encode = base2lsbf_encode;
      base_decode_ctx_init = base2_decode_ctx_init;
      base_decode_ctx = base2lsbf_decode_ctx;
      break;
    case 0x87:
      base_length = z85_length;
      isbase = isz85;
      base_encode = z85_encode;
      base_decode_ctx_init = z85_decode_ctx_init;
      base_decode_ctx = z85_decode_ctx;
      break;
    default:
      goto switchD_00102894_caseD_8;
    }
    if (1 < argc - optind) {
      pcVar12 = quote(argv[(long)optind + 1]);
      uVar13 = dcgettext(0,"extra operand %s",5);
      error(0,0,uVar13,pcVar12);
                    /* WARNING: Subroutine does not return */
      usage(1);
    }
    if (optind < argc) {
      local_80 = argv[optind];
      iVar7 = strcmp(local_80,"-");
      __stream = stdin;
      if ((iVar7 != 0) && (__stream = fopen(local_80,"rb"), __stream == (FILE *)0x0))
      goto LAB_0010312f;
    }
    else {
      local_80 = "-";
      __stream = stdin;
    }
    fadvise((FILE *)__stream,FADVISE_SEQUENTIAL);
    __ptr = stdout;
    if (!bVar1) {
      pFVar10 = (FILE *)0x0;
      p_Var9 = (_IO_FILE *)xmalloc(0x7800);
      iVar7 = (*base_length)(0x7800);
      local_a8 = (char *)xmalloc((long)iVar7);
      local_a0 = pFVar16;
      goto LAB_00102daa;
    }
    local_98 = stdout;
    iVar7 = (*base_length)(0x1068);
    pcVar12 = (char *)xmalloc((long)iVar7);
    __ptr = (FILE *)xmalloc(0x1068);
    ctx.inbuf = (char *)0x0;
    local_90 = (_IO_FILE *)&ctx;
    (*base_decode_ctx_init)((base_decode_context *)local_90);
LAB_0010299a:
    lVar17 = 0;
    p_Var18 = __ptr;
    local_88 = __ptr;
    do {
      iVar7 = (*base_length)(0x1068);
      sVar8 = fread_unlocked(pcVar12 + lVar17,1,iVar7 - lVar17,__stream);
      if (((char)local_a0 != '\0') && (0 < (long)sVar8)) {
        p_Var18 = (_IO_FILE *)0x0;
        do {
          local_a8 = (char *)((long)&p_Var18->_flags + lVar17);
          unaff_R15 = (_IO_FILE *)(pcVar12 + (long)local_a8);
          _Var4 = (*isbase)(*(char *)&unaff_R15->_flags);
          if ((_Var4 == false) && (*(char *)&unaff_R15->_flags != '=')) {
            sVar8 = sVar8 - 1;
            memmove(unaff_R15,pcVar12 + 1 + (long)local_a8,sVar8 - (long)p_Var18);
          }
          else {
            p_Var18 = (_IO_FILE *)((long)&p_Var18->_flags + 1);
          }
        } while ((long)p_Var18 < (long)sVar8);
      }
      lVar17 = lVar17 + sVar8;
      uVar20 = __stream->_flags & 0x20;
      p_Var9 = (_IO_FILE *)(ulong)uVar20;
      __ptr = p_Var18;
      if (uVar20 != 0) goto LAB_00103058;
      iVar7 = (*base_length)(0x1068);
      __ptr = local_88;
      if (iVar7 <= lVar17) {
        uVar20 = __stream->_flags;
        goto LAB_00102ce4;
      }
    } while ((__stream->_flags & 0x10U) == 0);
    while ((int)p_Var9 != 2) {
      if ((int)p_Var9 != 1) goto LAB_00102c81;
      if (ctx.i == 0) break;
      iVar15 = 0;
LAB_00102c9d:
      w = 0x1068;
      _Var4 = (*base_decode_ctx)((base_decode_context *)local_90,pcVar12,iVar15,(char *)__ptr,&w);
      unaff_R15 = (_IO_FILE *)(CONCAT71(extraout_var,_Var4) & 0xffffffff);
      sVar8 = fwrite_unlocked(__ptr,1,w,local_98);
      if (sVar8 < (ulong)w) {
LAB_0010302c:
        uVar13 = dcgettext(0,"write error",5);
        piVar14 = __errno_location();
        error(1,*piVar14,uVar13);
        goto LAB_00103058;
      }
      if ((char)unaff_R15 == '\0') {
        uVar13 = dcgettext(0,"invalid input",5);
        error(1,0,uVar13);
        goto LAB_0010302c;
      }
      uVar20 = __stream->_flags;
      p_Var9 = (_IO_FILE *)(ulong)((int)p_Var9 + 1);
LAB_00102ce4:
      if ((uVar20 & 0x10) == 0) {
        if ((int)p_Var9 != 0) goto LAB_0010299a;
LAB_00102c81:
        iVar15 = 0;
        if ((int)p_Var9 == 0) {
          iVar15 = lVar17;
        }
        goto LAB_00102c9d;
      }
    }
LAB_00102d17:
                    /* WARNING: Subroutine does not return */
    finish_and_exit((FILE *)__stream,local_80);
  }
  if (iVar5 == 0x69) {
    local_a0 = (FILE *)CONCAT71(local_a0._1_7_,1);
    goto LAB_0010276c;
  }
  if (iVar5 < 0x6a) {
    if (iVar5 == -0x82) {
                    /* WARNING: Subroutine does not return */
      usage(0);
    }
    if (iVar5 != 100) {
      if (iVar5 == -0x83) {
        version_etc((FILE *)stdout,"basenc","GNU coreutils",Version,"Simon Josefsson","Assaf Gordon"
                    ,0,extraout_RDX);
                    /* WARNING: Subroutine does not return */
        exit(0);
      }
      goto LAB_001027c5;
    }
    bVar1 = true;
    goto LAB_0010276c;
  }
  if (iVar5 == 0x77) {
    sVar6 = xstrtoimax(optarg,(char **)0x0,10,&w,"");
    if ((LONGINT_OVERFLOW < sVar6) || (w < 0)) goto LAB_001030c6;
    pFVar16 = (FILE *)w;
    if (sVar6 == LONGINT_OVERFLOW) {
      pFVar16 = (FILE *)0x0;
    }
    goto LAB_0010276c;
  }
  iVar7 = iVar5;
  if (iVar5 - 0x80U < 8) goto LAB_0010276c;
LAB_001027c5:
                    /* WARNING: Subroutine does not return */
  usage(1);
LAB_00103058:
  uVar13 = dcgettext(0,"read error",5);
  piVar14 = __errno_location();
  error(1,*piVar14,uVar13);
LAB_00103084:
  iVar7 = __overflow(__ptr,10);
  if (iVar7 != -1) {
LAB_00103000:
    uVar20 = __stream->_flags;
LAB_00102df4:
    if ((uVar20 & 0x20) != 0) {
      pFVar10 = (FILE *)dcgettext(0,"read error",5);
      piVar14 = __errno_location();
      error(1,*piVar14,pFVar10);
      do {
        paVar2 = base_encode;
        iVar7 = (*base_length)((int)unaff_R15);
        (*paVar2)((char *)p_Var9,(idx_t)unaff_R15,local_a8,(long)iVar7);
        iVar7 = (*base_length)((int)unaff_R15);
        pFVar16 = local_a0;
        pFVar19 = __ptr;
        p_Var18 = unaff_R15;
        if (local_a0 == (FILE *)0x0) {
LAB_00102f67:
          __ptr = pFVar19;
          local_98 = (FILE *)(long)iVar7;
          pFVar16 = (FILE *)fwrite_unlocked(local_a8,1,(size_t)local_98,stdout);
          unaff_R15 = p_Var18;
          if (pFVar16 < local_98) {
            uVar13 = dcgettext(0,"write error",5);
            piVar14 = __errno_location();
            error(1,*piVar14,uVar13);
            goto switchD_00102894_caseD_8;
          }
        }
        else {
          lVar17 = (long)iVar7;
          p_Var18 = (_IO_FILE *)0x0;
          pFVar19 = pFVar10;
          p_Var3 = unaff_R15;
          if (0 < lVar17) {
            do {
              local_88 = p_Var3;
              local_90 = p_Var9;
              local_98 = __stream;
              uVar11 = (long)pFVar16 - (long)pFVar19;
              __n = lVar17 - (long)p_Var18;
              if ((long)uVar11 < lVar17 - (long)p_Var18) {
                __n = uVar11;
              }
              if (__n == 0) {
                pcVar12 = __ptr->_IO_write_ptr;
                if (pcVar12 < __ptr->_IO_write_end) {
                  __ptr->_IO_write_ptr = pcVar12 + 1;
                  *pcVar12 = '\n';
                }
                else {
                  iVar7 = __overflow(__ptr,10);
                  if (iVar7 == -1) {
                    pFVar10 = (FILE *)dcgettext(0,"write error",5);
                    piVar14 = __errno_location();
                    iVar7 = error(1,*piVar14,pFVar10);
                    __stream = pFVar16;
                    p_Var9 = __ptr;
                    goto LAB_00102f67;
                  }
                }
                pFVar10 = (FILE *)0x0;
              }
              else {
                sVar8 = fwrite_unlocked(local_a8 + (long)p_Var18,1,__n,stdout);
                if (sVar8 < __n) goto LAB_00103103;
                pFVar10 = (FILE *)((long)&pFVar19->_flags + __n);
                p_Var18 = (_IO_FILE *)((long)&p_Var18->_flags + __n);
              }
              __stream = local_98;
              pFVar19 = pFVar10;
              p_Var9 = local_90;
              unaff_R15 = local_88;
              p_Var3 = local_88;
            } while ((long)p_Var18 < lVar17);
          }
        }
        uVar20 = __stream->_flags;
        if (((uVar20 & 0x30) != 0) || (unaff_R15 != (_IO_FILE *)0x7800)) goto LAB_00102de1;
LAB_00102daa:
        unaff_R15 = (_IO_FILE *)0x0;
        do {
          sVar8 = fread_unlocked((char *)((long)&unaff_R15->_flags + (long)&p_Var9->_flags),1,
                                 0x7800 - (long)unaff_R15,__stream);
          unaff_R15 = (_IO_FILE *)((long)&unaff_R15->_flags + sVar8);
          uVar20 = __stream->_flags;
          if ((uVar20 & 0x30) != 0) {
            if ((long)unaff_R15 < 1) goto LAB_00102de1;
            break;
          }
        } while ((long)unaff_R15 < 0x7800);
      } while( true );
    }
    goto LAB_00102d17;
  }
  uVar13 = dcgettext(0,"write error",5);
  piVar14 = __errno_location();
  error(1,*piVar14,uVar13);
LAB_001030c6:
  pcVar12 = quote(optarg);
  uVar13 = dcgettext(0,"invalid wrap size",5);
  error(1,0,"%s: %s",uVar13,pcVar12);
LAB_00103103:
  uVar13 = dcgettext(0,"write error",5);
  piVar14 = __errno_location();
  error(1,*piVar14,uVar13);
LAB_0010312f:
  uVar13 = quotearg_n_style_colon(0,3,local_80);
  piVar14 = __errno_location();
  auVar21 = error(1,*piVar14,"%s",uVar13);
  pcVar12 = local_a8;
  local_a8 = SUB168(auVar21,0);
  (*(code *)PTR___libc_start_main_0010dfc8)
            (main,pcVar12,&local_a0,__libc_csu_init,__libc_csu_fini,SUB168(auVar21 >> 0x40,0),
             &local_a8);
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
switchD_00102894_caseD_8:
  uVar13 = dcgettext(0,"missing encoding type",5);
  error(0,0,uVar13);
  goto LAB_001027c5;
LAB_00102de1:
  if ((local_a0 == (FILE *)0x0) || ((long)pFVar10 < 1)) goto LAB_00102df4;
  pcVar12 = __ptr->_IO_write_ptr;
  if (__ptr->_IO_write_end <= pcVar12) goto LAB_00103084;
  __ptr->_IO_write_ptr = pcVar12 + 1;
  *pcVar12 = '\n';
  goto LAB_00103000;
}

