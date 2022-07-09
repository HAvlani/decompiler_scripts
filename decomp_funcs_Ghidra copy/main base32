
/* WARNING: Could not reconcile some variable overlaps */

int main(int argc,char **argv)

{
  char ch;
  FILE *pFVar1;
  _IO_FILE *p_Var2;
  _Bool _Var3;
  int iVar4;
  strtol_error sVar5;
  uint uVar6;
  char *pcVar7;
  undefined8 uVar8;
  FILE *pFVar9;
  size_t sVar10;
  undefined7 extraout_var;
  intmax_t *in;
  int *piVar11;
  FILE *pFVar12;
  FILE *__n;
  FILE *pFVar13;
  FILE *pFVar14;
  long lVar15;
  uint uVar16;
  FILE *__ptr;
  _IO_FILE *unaff_R15;
  undefined auVar17 [16];
  undefined8 uStack152;
  undefined8 local_90;
  FILE *local_88;
  FILE *local_80;
  intmax_t *local_78;
  FILE *local_70;
  _IO_FILE *local_68;
  char *local_60;
  intmax_t w;
  base32_decode_context ctx;
  
  pcVar7 = (char *)0x0;
  set_program_name(*argv);
  setlocale(6,"");
  bindtextdomain("coreutils","/root/coreutils-builder/share/locale");
  textdomain("coreutils");
  atexit(close_stdout);
  local_90 = (char *)((ulong)local_90 & 0xffffffffffffff00);
  pFVar14 = (FILE *)0x4c;
LAB_00102769:
  do {
    iVar4 = getopt_long(argc,argv,&DAT_0010810e,long_options,0);
    if (iVar4 == -1) {
LAB_001028d8:
      if (argc - optind < 2) {
        if (optind < argc) {
          local_60 = argv[optind];
          iVar4 = strcmp(local_60,"-");
          pFVar9 = stdin;
          if ((iVar4 != 0) && (pFVar9 = fopen(local_60,"rb"), pFVar9 == (FILE *)0x0)) {
LAB_00102e58:
            uVar8 = quotearg_n_style_colon(0,3,local_60);
            piVar11 = __errno_location();
            error(1,*piVar11,"%s",uVar8);
LAB_00102e89:
            uVar8 = dcgettext(0,"write error",5);
            piVar11 = __errno_location();
            auVar17 = error(1,*piVar11,uVar8);
            uVar8 = uStack152;
            uStack152 = SUB168(auVar17,0);
            (*(code *)PTR___libc_start_main_0010bfc8)
                      (main,uVar8,&local_90,__libc_csu_init,__libc_csu_fini,
                       SUB168(auVar17 >> 0x40,0),&uStack152);
            do {
                    /* WARNING: Do nothing block with infinite loop */
            } while( true );
          }
        }
        else {
          local_60 = "-";
          pFVar9 = stdin;
        }
        fadvise((FILE *)pFVar9,FADVISE_SEQUENTIAL);
        pFVar12 = stdout;
        if ((char)pcVar7 == '\0') {
          __n = (FILE *)0x0;
          in = (intmax_t *)xmalloc(0x7800);
          local_90 = (char *)xmalloc(0xc000);
          local_80 = pFVar14;
          goto LAB_00102b67;
        }
        local_80 = stdout;
        pcVar7 = (char *)xmalloc(0x2000);
        local_70 = (FILE *)xmalloc(0x1400);
        local_68 = (_IO_FILE *)&ctx;
        base32_decode_ctx_init((base32_decode_context *)local_68);
        local_78 = &w;
        pFVar12 = pFVar9;
        pFVar14 = local_80;
        pFVar1 = local_70;
        p_Var2 = local_68;
LAB_0010298d:
        local_68 = p_Var2;
        local_70 = pFVar1;
        local_80 = pFVar14;
        __n = (FILE *)0x0;
        pFVar9 = pFVar12;
        pFVar12 = unaff_R15;
        do {
          __ptr = (FILE *)(pcVar7 + (long)__n);
          sVar10 = fread_unlocked(__ptr,1,0x2000 - (long)__n,pFVar9);
          if (((char)local_90 != '\0') && (0 < (long)sVar10)) {
            pFVar12 = (_IO_FILE *)0x0;
            local_88 = pFVar9;
            do {
              while ((ch = *(char *)((long)&pFVar12->_flags + (long)&__ptr->_flags),
                     _Var3 = isbase32(ch), ch != '=' && (_Var3 == false))) {
                sVar10 = sVar10 - 1;
                lVar15 = (long)&__n->_flags + (long)&pFVar12->_flags;
                memmove(pcVar7 + lVar15,pcVar7 + lVar15 + 1,sVar10 - (long)pFVar12);
                pFVar9 = local_88;
                if ((long)sVar10 <= (long)pFVar12) goto LAB_00102998;
              }
              pFVar12 = (FILE *)((long)&pFVar12->_flags + 1);
              pFVar9 = local_88;
            } while ((long)pFVar12 < (long)sVar10);
          }
LAB_00102998:
          unaff_R15 = local_68;
          pFVar1 = local_70;
          pFVar14 = local_80;
          uVar6 = pFVar9->_flags;
          __n = (FILE *)((long)&__n->_flags + sVar10);
          uVar16 = uVar6 & 0x20;
          in = (intmax_t *)(ulong)uVar16;
          if (uVar16 != 0) goto LAB_00102dbe;
        } while (((long)__n < 0x2000) && ((uVar6 & 0x10) == 0));
LAB_00102ad7:
        local_80 = __n;
        local_88 = pFVar9;
        pFVar9 = (FILE *)(ulong)uVar16;
        if ((uVar6 & 0x10) == 0) {
          pFVar12 = local_88;
          p_Var2 = unaff_R15;
          if (uVar16 != 0) goto LAB_0010298d;
LAB_00102a78:
          pFVar12 = (FILE *)0x0;
          if (uVar16 == 0) {
            pFVar12 = local_80;
          }
        }
        else {
          pFVar13 = local_88;
          if (uVar16 == 2) {
LAB_00102b18:
                    /* WARNING: Subroutine does not return */
            finish_and_exit((FILE *)pFVar13,local_60);
          }
          if (uVar16 != 1) goto LAB_00102a78;
          if (ctx.i == 0) goto LAB_00102b18;
          pFVar12 = (FILE *)0x0;
        }
        w = 0x1400;
        _Var3 = base32_decode_ctx((base32_decode_context *)unaff_R15,pcVar7,(idx_t)pFVar12,
                                  (char *)pFVar1,local_78);
        in = (intmax_t *)(CONCAT71(extraout_var,_Var3) & 0xffffffff);
        sVar10 = fwrite_unlocked(pFVar1,1,w,pFVar14);
        if ((ulong)w <= sVar10) {
          if ((char)in == '\0') {
            uVar8 = dcgettext(0,"invalid input",5);
            error(1,0,uVar8);
            goto LAB_00102d92;
          }
          uVar16 = uVar16 + 1;
          uVar6 = local_88->_flags;
          pFVar9 = local_88;
          __n = local_80;
          goto LAB_00102ad7;
        }
LAB_00102d92:
        uVar8 = dcgettext(0,"write error",5);
        piVar11 = __errno_location();
        error(1,*piVar11,uVar8);
        __n = pFVar1;
        __ptr = pFVar14;
        pFVar12 = unaff_R15;
LAB_00102dbe:
        uVar8 = dcgettext(0,"read error",5);
        piVar11 = __errno_location();
        error(1,*piVar11,uVar8);
LAB_00102dea:
        iVar4 = __overflow(pFVar12,10);
        if (iVar4 == -1) {
          uVar8 = dcgettext(0,"write error",5);
          piVar11 = __errno_location();
          error(1,*piVar11,uVar8);
LAB_00102e2c:
          uVar8 = dcgettext(0,"write error",5);
          piVar11 = __errno_location();
          error(1,*piVar11,uVar8);
          goto LAB_00102e58;
        }
LAB_00102d66:
        uVar6 = pFVar9->_flags;
LAB_00102bb5:
        pFVar13 = pFVar9;
        if ((uVar6 & 0x20) != 0) {
          uVar8 = dcgettext(0,"read error",5);
          piVar11 = __errno_location();
          error(1,*piVar11,uVar8);
          do {
            pcVar7 = local_90;
            local_88 = (FILE *)(((long)&__ptr->field_0x4 / 5) * 8);
            base32_encode((char *)in,(idx_t)__ptr,local_90,(idx_t)local_88);
            pFVar1 = local_80;
            pFVar14 = local_88;
            if (local_80 == (FILE *)0x0) {
              pFVar14 = (FILE *)fwrite_unlocked(pcVar7,1,(size_t)local_88,stdout);
              if (pFVar14 < local_88) goto LAB_00102e89;
            }
            else {
              lVar15 = 0;
              pFVar13 = __n;
              local_88 = pFVar9;
              local_78 = in;
              local_70 = __ptr;
              do {
                pFVar9 = (FILE *)((long)pFVar14 - lVar15);
                __n = (FILE *)((long)pFVar1 - (long)pFVar13);
                if ((long)pFVar9 <= (long)(FILE *)((long)pFVar1 - (long)pFVar13)) {
                  __n = pFVar9;
                }
                if (__n == (FILE *)0x0) {
                  pcVar7 = pFVar12->_IO_write_ptr;
                  if (pcVar7 < pFVar12->_IO_write_end) {
                    pFVar12->_IO_write_ptr = pcVar7 + 1;
                    *pcVar7 = '\n';
                  }
                  else {
                    iVar4 = __overflow(pFVar12,10);
                    if (iVar4 == -1) {
                      uVar8 = dcgettext(0,"write error",5);
                      piVar11 = __errno_location();
                      error(1,*piVar11,uVar8);
                      pFVar9 = local_88;
                      in = local_78;
                      __ptr = local_70;
                      break;
                    }
                  }
                }
                else {
                  pFVar9 = (FILE *)fwrite_unlocked(local_90 + lVar15,1,(size_t)__n,stdout);
                  if (pFVar9 < __n) goto LAB_00102e2c;
                  lVar15 = (long)&__n->_flags + lVar15;
                  __n = (FILE *)((long)&pFVar13->_flags + (long)&__n->_flags);
                }
                pFVar13 = __n;
                pFVar9 = local_88;
                in = local_78;
                __ptr = local_70;
              } while (lVar15 < (long)pFVar14);
            }
            uVar6 = pFVar9->_flags;
            if (((uVar6 & 0x30) != 0) || (__ptr != (FILE *)0x7800)) goto LAB_00102ba2;
LAB_00102b67:
            __ptr = (FILE *)0x0;
            do {
              sVar10 = fread_unlocked((char *)((long)in + (long)__ptr),1,0x7800 - (long)__ptr,pFVar9
                                     );
              __ptr = (FILE *)((long)&__ptr->_flags + sVar10);
              uVar6 = pFVar9->_flags;
              if ((uVar6 & 0x30) != 0) {
                if ((long)__ptr < 1) goto LAB_00102ba2;
                break;
              }
            } while ((long)__ptr < 0x7800);
          } while( true );
        }
        goto LAB_00102b18;
      }
      pcVar7 = quote(argv[(long)optind + 1]);
      uVar8 = dcgettext(0,"extra operand %s",5);
      error(0,0,uVar8,pcVar7);
LAB_00102853:
                    /* WARNING: Subroutine does not return */
      usage(1);
    }
    if (iVar4 != 100) {
      if (iVar4 < 0x65) {
        if (iVar4 == -0x83) {
          version_etc((FILE *)stdout,"base32","GNU coreutils",Version,"Simon Josefsson",0);
                    /* WARNING: Subroutine does not return */
          exit(0);
        }
        if (iVar4 == -0x82) {
                    /* WARNING: Subroutine does not return */
          usage(0);
        }
        goto LAB_00102853;
      }
      if (iVar4 == 0x69) {
        local_90 = (char *)CONCAT71(local_90._1_7_,1);
      }
      else {
        if (iVar4 != 0x77) goto LAB_00102853;
        sVar5 = xstrtoimax(optarg,(char **)0x0,10,&w,"");
        if ((LONGINT_OVERFLOW < sVar5) || (pFVar14 = (FILE *)w, w < 0)) {
          pcVar7 = quote(optarg);
          uVar8 = dcgettext(0,"invalid wrap size",5);
          error(1,0,"%s: %s",uVar8,pcVar7);
          goto LAB_001028d8;
        }
        if (sVar5 == LONGINT_OVERFLOW) {
          pFVar14 = (FILE *)0x0;
        }
      }
      goto LAB_00102769;
    }
    pcVar7 = (char *)0x1;
  } while( true );
LAB_00102ba2:
  if ((local_80 == (FILE *)0x0) || ((long)__n < 1)) goto LAB_00102bb5;
  pcVar7 = pFVar12->_IO_write_ptr;
  if (pFVar12->_IO_write_end <= pcVar7) goto LAB_00102dea;
  pFVar12->_IO_write_ptr = pcVar7 + 1;
  *pcVar7 = '\n';
  goto LAB_00102d66;
}

