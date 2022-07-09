
/* WARNING: Could not reconcile some variable overlaps */

int main(int argc,char **argv)

{
  char cVar1;
  long lVar2;
  long lVar3;
  randint_source *s;
  int iVar4;
  strtol_error sVar5;
  long lVar6;
  char *pcVar7;
  undefined8 uVar8;
  char *pcVar9;
  size_t sVar10;
  size_t *psVar11;
  FILE *pFVar12;
  randint rVar13;
  size_t sVar14;
  int *piVar15;
  __off_t _Var16;
  FILE *n_str;
  void *pvVar17;
  FILE *pFVar18;
  linebuffer *plVar19;
  byte bVar20;
  ulong uVar21;
  uint *s_00;
  size_t sVar22;
  char *pcVar23;
  FILE *pFVar24;
  char *__s;
  uint uVar25;
  FILE *pFVar26;
  long in_FS_OFFSET;
  bool bVar27;
  undefined auVar28 [16];
  undefined8 uStack312;
  FILE *local_130;
  FILE *local_128;
  FILE *local_120;
  char local_113;
  byte local_112;
  byte local_111;
  FILE *local_110;
  FILE *local_108;
  randint_source *local_100;
  uintmax_t argval;
  stat stat_buf;
  
  bVar20 = 0;
  pFVar26 = (FILE *)0x0;
  pcVar7 = (char *)0x0;
  s_00 = &switchD_0010299e::switchdataD_0010a684;
  lVar2 = *(long *)(in_FS_OFFSET + 0x28);
  set_program_name(*argv);
  setlocale(6,"");
  bindtextdomain("coreutils","/root/coreutils-builder/share/locale");
  textdomain("coreutils");
  atexit(close_stdout);
  local_113 = '\n';
  local_130 = (FILE *)0x0;
  local_120 = (FILE *)0x0;
  local_128 = (FILE *)0xffffffffffffffff;
  local_110 = (FILE *)0xffffffffffffffff;
  local_112 = 0;
  local_111 = 0;
  pFVar12 = local_130;
  pFVar18 = local_128;
  pFVar24 = local_120;
  do {
    local_120 = pFVar24;
    local_128 = pFVar18;
    local_130 = pFVar12;
    iVar4 = getopt_long(argc,argv,"ei:n:o:rz",long_opts,0);
    n_str = optarg;
    if (iVar4 == -1) {
LAB_00102bc4:
      iVar4 = argc - optind;
      n_str = (FILE *)(argv + optind);
      if (local_111 == 0) {
        if (local_112 != 0) {
          if (iVar4 < 1) {
            if (local_128 != (FILE *)0x0) goto LAB_00103052;
            goto LAB_00102cf0;
          }
          goto LAB_0010347f;
        }
      }
      else if (local_112 != 0) {
        uVar8 = dcgettext(0,"cannot combine -e and -i options",5);
        error(0,0,uVar8);
switchD_0010299e_caseD_66:
                    /* WARNING: Subroutine does not return */
        usage(1);
      }
      if ((local_111 == 0) && (lVar6 = 8, 1 < iVar4)) goto LAB_00102bfb;
      if (local_128 == (FILE *)0x0) {
LAB_00102cf0:
        local_108 = (FILE *)0x0;
        n_str = (FILE *)0x0;
        goto LAB_00102cfc;
      }
      if (local_111 != 0) {
        local_108 = (FILE *)(long)iVar4;
        lVar6 = 0;
        pFVar12 = local_108;
        do {
          if (iVar4 <= (int)lVar6) {
            pcVar9 = (char *)xmalloc((size_t)pFVar12);
            cVar1 = local_113;
            local_100 = (randint_source *)((ulong)local_100 & 0xffffffffffffff00 | (ulong)pcVar7);
            for (lVar6 = 0; (int)lVar6 < iVar4; lVar6 = lVar6 + 1) {
              pcVar7 = stpcpy(pcVar9,*(char **)(&n_str->_flags + lVar6 * 2));
              *(char **)(&n_str->_flags + lVar6 * 2) = pcVar9;
              *pcVar7 = cVar1;
              pcVar9 = pcVar7 + 1;
            }
            pcVar7 = (char *)((ulong)local_100 & 0xff);
            *(char **)(&n_str->_flags + (long)local_108 * 2) = pcVar9;
            goto LAB_00102cfc;
          }
          lVar3 = lVar6 * 2;
          uVar21 = 0xffffffffffffffff;
          lVar6 = lVar6 + 1;
          pcVar9 = *(char **)(&n_str->_flags + lVar3);
          do {
            if (uVar21 == 0) break;
            uVar21 = uVar21 - 1;
            cVar1 = *pcVar9;
            pcVar9 = pcVar9 + (ulong)bVar20 * -2 + 1;
          } while (cVar1 != '\0');
          pFVar12 = (FILE *)((long)pFVar12 + (~uVar21 - 1));
        } while( true );
      }
      if (iVar4 == 1) {
        pcVar9 = *(char **)n_str;
        iVar4 = strcmp(pcVar9,"-");
        if ((iVar4 != 0) && (pFVar12 = freopen_safer(pcVar9,"r",stdin), pFVar12 == (FILE *)0x0)) {
          uVar8 = quotearg_n_style_colon(0,3,*(char **)n_str);
          piVar15 = __errno_location();
          error(1,*piVar15,"%s",uVar8);
LAB_00103437:
          uVar8 = dcgettext(0,"multiple -i options specified",5);
          error(1,0,uVar8);
          goto LAB_0010345b;
        }
      }
      fadvise(stdin,FADVISE_SEQUENTIAL);
      if (((local_128 == (FILE *)0xffffffffffffffff) || ((char)pcVar7 != '\0')) ||
         ((iVar4 = __fxstat(1,0,(stat *)&stat_buf), iVar4 == 0 &&
          ((((stat_buf.st_mode & 0xd000) == 0x8000 &&
            (_Var16 = lseek(0,0,1), s_00 = (uint *)stat_buf.st_size, -1 < _Var16)) &&
           (s_00 = (uint *)(stat_buf.st_size - _Var16), (long)s_00 < 0x800001)))))) {
        iVar4 = (int)local_113;
        pcVar9 = fread_file(stdin,0,&argval);
        if (pcVar9 != (char *)0x0) {
          if ((argval != 0) && (local_113 != pcVar9[argval - 1])) {
            pcVar9[argval] = local_113;
            argval = argval + 1;
          }
          pcVar23 = pcVar9 + argval;
          pFVar12 = (FILE *)0x0;
          __s = pcVar9;
          while (pFVar18 = (FILE *)((long)&pFVar12->_flags + 1), __s < pcVar23) {
            pvVar17 = rawmemchr(__s,iVar4);
            pFVar12 = pFVar18;
            __s = (char *)((long)pvVar17 + 1);
          }
          pFVar24 = (FILE *)0x1;
          local_108 = pFVar12;
          n_str = (FILE *)xnmalloc((size_t)pFVar18,8);
          pFVar12 = local_108;
          *(char **)n_str = pcVar9;
          do {
            if (pFVar12 < pFVar24) goto LAB_00102cfc;
            pvVar17 = rawmemchr(pcVar9,iVar4);
            pcVar9 = (char *)((long)pvVar17 + 1);
            *(char **)(&n_str->_flags + (long)pFVar24 * 2) = pcVar9;
            pFVar24 = (FILE *)((long)&pFVar24->_flags + 1);
          } while( true );
        }
        goto LAB_00103598;
      }
      local_100 = randint_all_new((char *)local_130,0xffffffffffffffff);
      cVar1 = local_113;
      pFVar12 = stdin;
      if (local_100 == (randint_source *)0x0) goto LAB_00102e21;
      pFVar26 = (FILE *)0x400;
      if (local_128 < (FILE *)0x401) {
        pFVar26 = local_128;
      }
      s_00 = (uint *)0x0;
      pFVar18 = (FILE *)xcalloc((size_t)pFVar26,0x18);
      break;
    }
    if (0x80 < iVar4) goto switchD_0010299e_caseD_66;
    if (iVar4 < 0x65) {
      if (iVar4 == -0x83) {
        version_etc((FILE *)stdout,"shuf","GNU coreutils",Version,"Paul Eggert",0);
                    /* WARNING: Subroutine does not return */
        exit(0);
      }
      if (iVar4 == -0x82) {
                    /* WARNING: Subroutine does not return */
        usage(0);
      }
      goto switchD_0010299e_caseD_66;
    }
    pFVar12 = local_130;
    pFVar18 = local_128;
    pFVar24 = local_120;
    switch(iVar4) {
    case 0x65:
      local_111 = 1;
      break;
    default:
      goto switchD_0010299e_caseD_66;
    case 0x69:
      pFVar26 = (FILE *)strchr((char *)optarg,0x2d);
      local_108 = (FILE *)((ulong)local_108 & 0xffffffffffffff00 | (ulong)(pFVar26 == (FILE *)0x0));
      if (local_112 != 0) goto LAB_00103437;
      if (pFVar26 == (FILE *)0x0) {
        pcVar9 = (char *)dcgettext(0,"invalid input range",5);
        xdectoumax((char *)n_str,0,0xffffffffffffffff,"",pcVar9,0);
      }
      else {
        *(undefined *)&pFVar26->_flags = 0;
        pcVar9 = (char *)dcgettext(0,"invalid input range",5);
        n_str = (FILE *)xdectoumax((char *)optarg,0,0xffffffffffffffff,"",pcVar9,0);
        *(undefined *)&pFVar26->_flags = 0x2d;
        local_110 = n_str;
        pcVar9 = (char *)dcgettext(0,"invalid input range",5);
        pFVar26 = (FILE *)xdectoumax((char *)((long)&pFVar26->_flags + 1),0,0xffffffffffffffff,"",
                                     pcVar9,0);
        if ((((long)pFVar26 - (long)n_str == -1) == pFVar26 < n_str) && ((char)local_108 == '\0')) {
          local_112 = 1;
          pFVar12 = local_130;
          pFVar18 = local_128;
          pFVar24 = local_120;
          break;
        }
      }
      s_00 = (uint *)quote((char *)optarg);
      uVar8 = dcgettext(0,"invalid input range",5);
      piVar15 = __errno_location();
      error(1,*piVar15,"%s: %s",uVar8,s_00);
LAB_00102fe5:
      pFVar24 = n_str;
      if (local_128 == (FILE *)0x0) goto LAB_00102e6d;
      iVar4 = rpl_fclose(stdin);
      if (iVar4 == 0) goto LAB_00102e6d;
LAB_00103026:
      uVar8 = dcgettext(0,"read error",5);
      piVar15 = __errno_location();
      error(1,*piVar15,uVar8);
LAB_00103052:
      local_108 = (FILE *)((long)pFVar26 + (1 - (long)local_110));
      n_str = (FILE *)0x0;
LAB_00102cfc:
      if (local_128 < local_108) goto LAB_001030e6;
      s_00 = (uint *)local_108;
      pFVar12 = (FILE *)pcVar7;
      pFVar24 = n_str;
      if ((char)pcVar7 != '\0') goto LAB_00102e0b;
      do {
        sVar10 = randperm_bound((size_t)s_00,(size_t)local_108);
        local_100 = randint_all_new((char *)local_130,sVar10);
        pcVar7 = (char *)pFVar12;
        n_str = pFVar24;
        if (local_100 == (randint_source *)0x0) goto LAB_00102e21;
        bVar20 = local_128 == (FILE *)0x0 | local_111 | local_112;
        if (bVar20 == 0) {
          pFVar18 = (FILE *)0x0;
LAB_00103009:
          local_130 = (FILE *)((ulong)local_130 & 0xffffffffffffff00 | (ulong)bVar20);
          iVar4 = rpl_fclose(stdin);
          pcVar7 = (char *)pFVar12;
          if (iVar4 != 0) goto LAB_00103026;
          psVar11 = randperm_new(local_100,(size_t)s_00,(size_t)local_108);
          if (local_120 != (FILE *)0x0) {
            pFVar12 = freopen_safer((char *)local_120,"w",(FILE *)stdout);
            if (pFVar12 == (FILE *)0x0) goto LAB_00102e92;
          }
          n_str = local_108;
          pcVar7 = (char *)0x0;
          if ((char)local_130 == '\0') goto LAB_00102d95;
          while( true ) {
            if ((FILE *)pcVar7 == n_str) goto LAB_00102de0;
            sVar10 = psVar11[(long)pcVar7];
            sVar14 = fwrite_unlocked(*(void **)(pFVar18->_shortbuf + sVar10 * 0x18 + -0x73),1,
                                     *(size_t *)(pFVar18->_shortbuf + sVar10 * 0x18 + -0x7b),stdout)
            ;
            if (sVar14 != *(size_t *)(pFVar18->_shortbuf + sVar10 * 0x18 + -0x7b)) break;
            pcVar7 = (char *)((long)(int *)pcVar7 + 1);
          }
        }
        else {
          psVar11 = randperm_new(local_100,(size_t)s_00,(size_t)local_108);
          if ((local_120 != (FILE *)0x0) &&
             (pFVar12 = freopen_safer((char *)local_120,"w",(FILE *)stdout), pFVar12 == (FILE *)0x0)
             ) goto LAB_00102e92;
LAB_00102d95:
          n_str = pFVar24;
          pFVar12 = local_110;
          if (local_112 == 0) {
            pcVar7 = (char *)0x0;
            while( true ) {
              if ((uint *)pcVar7 == s_00) goto LAB_00102de0;
              pvVar17 = *(void **)(&n_str->_flags + psVar11[(long)pcVar7] * 2);
              sVar22 = (long)*(char **)(&n_str->_flags + psVar11[(long)pcVar7] * 2 + 2) -
                       (long)pvVar17;
              sVar14 = fwrite_unlocked(pvVar17,1,sVar22,stdout);
              if (sVar22 != sVar14) break;
              pcVar7 = (char *)((long)(int *)pcVar7 + 1);
            }
          }
          else {
            uVar25 = (uint)local_113;
            pFVar18 = (FILE *)0x0;
            pcVar7 = "%lu%c";
            while( true ) {
              if (pFVar18 == (FILE *)s_00) goto LAB_00102de0;
              iVar4 = __printf_chk(1,"%lu%c",(long)&pFVar12->_flags + psVar11[(long)pFVar18]);
              n_str = (FILE *)(ulong)uVar25;
              pFVar26 = pFVar12;
              if (iVar4 < 0) break;
              pFVar18 = (FILE *)((long)&pFVar18->_flags + 1);
            }
          }
        }
        while( true ) {
          uVar8 = dcgettext(0,"write error",5);
          piVar15 = __errno_location();
          error(1,*piVar15,uVar8);
LAB_001030e6:
          s_00 = (uint *)local_128;
          pFVar12 = (FILE *)pcVar7;
          pFVar24 = n_str;
          if ((char)pcVar7 == '\0') break;
LAB_00102e0b:
          s_00 = (uint *)randint_all_new((char *)local_130,0xffffffffffffffff);
          if ((FILE *)s_00 == (FILE *)0x0) {
LAB_00102e21:
            if (local_130 == (FILE *)0x0) {
              local_130 = (FILE *)0x10a0ac;
            }
            quotearg_n_style_colon(0,3,local_130);
            piVar15 = __errno_location();
            error(1,*piVar15,"%s");
          }
          pFVar24 = n_str;
          if ((local_111 | local_112) == 0) goto LAB_00102fe5;
LAB_00102e6d:
          n_str = pFVar24;
          if ((local_120 != (FILE *)0x0) &&
             (pFVar12 = freopen_safer((char *)local_120,"w",(FILE *)stdout), pFVar12 == (FILE *)0x0)
             ) {
LAB_00102e92:
            uVar8 = quotearg_n_style_colon(0,3,local_120);
            piVar15 = __errno_location();
            error(1,*piVar15,"%s",uVar8);
            n_str = pFVar24;
          }
          pFVar12 = local_128;
          if (local_128 == (FILE *)0x0) goto LAB_00102de0;
          if (local_108 == (FILE *)0x0) {
            uVar8 = dcgettext(0,"no lines to repeat",5);
            auVar28 = error(1,0,uVar8);
            uVar8 = uStack312;
            uStack312 = SUB168(auVar28,0);
            (*(code *)PTR___libc_start_main_0010efd0)
                      (main,uVar8,&local_130,__libc_csu_init,__libc_csu_fini,
                       SUB168(auVar28 >> 0x40,0),&uStack312);
            do {
                    /* WARNING: Do nothing block with infinite loop */
            } while( true );
          }
          if (local_112 == 0) {
            pcVar7 = (char *)0x0;
            pFVar18 = local_108 + -1;
            while( true ) {
              if (pFVar12 == (FILE *)pcVar7) goto LAB_00102de0;
              rVar13 = randint_genmax((randint_source *)s_00,(randint)(pFVar18->_unused2 + 0x13));
              pvVar17 = *(void **)(&n_str->_flags + rVar13 * 2);
              sVar22 = (long)*(char **)(&n_str->_flags + rVar13 * 2 + 2) - (long)pvVar17;
              sVar14 = fwrite_unlocked(pvVar17,1,sVar22,stdout);
              pFVar26 = pFVar12;
              if (sVar22 != sVar14) break;
              pcVar7 = (char *)((long)(int *)pcVar7 + 1);
            }
          }
          else {
            pFVar18 = (FILE *)0x0;
            pFVar26 = (FILE *)((long)pFVar26 - (long)local_110);
            while( true ) {
              if (pFVar12 == pFVar18) goto LAB_00102de0;
              rVar13 = randint_genmax((randint_source *)s_00,(randint)pFVar26);
              iVar4 = __printf_chk(1,"%lu%c",(long)&local_110->_flags + rVar13);
              pcVar7 = (char *)s_00;
              n_str = pFVar12;
              if (iVar4 < 0) break;
              pFVar18 = (FILE *)((long)&pFVar18->_flags + 1);
            }
          }
        }
      } while( true );
    case 0x6e:
      sVar5 = xstrtoumax((char *)optarg,(char **)0x0,10,&argval,"");
      pFVar12 = local_130;
      pFVar24 = local_120;
      if (sVar5 == LONGINT_OK) {
        pFVar18 = (FILE *)argval;
        if (local_128 <= argval) {
          pFVar18 = local_128;
        }
      }
      else {
        pFVar18 = local_128;
        if (sVar5 != LONGINT_OVERFLOW) {
          pcVar9 = quote((char *)optarg);
          argc = (int)pcVar9;
          uVar8 = dcgettext(0,"invalid line count: %s",5);
          error(1,0,uVar8);
          goto LAB_00102bc4;
        }
      }
      break;
    case 0x6f:
      pFVar24 = optarg;
      if ((local_120 != (FILE *)0x0) &&
         (iVar4 = strcmp((char *)local_120,(char *)optarg), pFVar12 = local_130, pFVar18 = local_128
         , iVar4 != 0)) goto LAB_00103574;
      break;
    case 0x72:
      pcVar7 = (char *)0x1;
      break;
    case 0x7a:
      local_113 = '\0';
      break;
    case 0x80:
      pFVar12 = optarg;
      if ((local_130 != (FILE *)0x0) &&
         (iVar4 = strcmp((char *)local_130,(char *)optarg), pFVar18 = local_128, pFVar24 = local_120
         , iVar4 != 0)) {
LAB_0010345b:
        uVar8 = dcgettext(0,"multiple random sources specified",5);
        error(1,0,uVar8);
LAB_0010347f:
        lVar6 = 0;
LAB_00102bfb:
        pcVar7 = quote(*(char **)((long)&n_str->_flags + lVar6));
        uVar8 = dcgettext(0,"extra operand %s",5);
        error(0,0,uVar8,pcVar7);
                    /* WARNING: Subroutine does not return */
        usage(1);
      }
    }
  } while( true );
  while( true ) {
    s_00 = (uint *)((long)(int *)s_00 + 1);
    if (pFVar26 <= s_00) {
      pFVar26 = (FILE *)&pFVar26[4]._wide_data;
      pFVar18 = (FILE *)xreallocarray(pFVar18,(size_t)pFVar26,0x18);
      memset(pFVar18->_shortbuf + lVar6 + -0x6b,0,0x6000);
    }
    if (local_128 == (FILE *)s_00) break;
    lVar6 = (long)s_00 * 0x18;
    plVar19 = readlinebuffer_delim((linebuffer *)(&pFVar18->_flags + (long)s_00 * 6),pFVar12,cVar1);
    if (plVar19 == (linebuffer *)0x0) goto LAB_001033b1;
  }
  initbuffer((linebuffer *)&argval);
  s = local_100;
  local_130 = pFVar18;
  while( true ) {
    pFVar26 = (FILE *)randint_genmax(s,(randint)s_00);
    plVar19 = (linebuffer *)&argval;
    if (pFVar26 < local_128) {
      plVar19 = (linebuffer *)(&local_130->_flags + (long)pFVar26 * 6);
    }
    plVar19 = readlinebuffer_delim(plVar19,pFVar12,cVar1);
    pFVar18 = local_130;
    if (plVar19 == (linebuffer *)0x0) break;
    bVar27 = (FILE *)s_00 == (FILE *)0x0;
    s_00 = (uint *)((long)(int *)s_00 + 1);
    if (bVar27) {
      s_00 = (uint *)0x1;
LAB_001033a6:
      freebuffer((linebuffer *)&argval);
LAB_001033b1:
      if ((*(byte *)&pFVar12->_flags & 0x20) == 0) {
        bVar20 = 1;
        if (local_128 <= s_00) {
          s_00 = (uint *)local_128;
        }
        pFVar24 = (FILE *)0x0;
        pFVar26 = (FILE *)s_00;
        local_108 = (FILE *)s_00;
        goto LAB_00103009;
      }
      uVar8 = dcgettext(0,"read error",5);
      piVar15 = __errno_location();
      error(1,*piVar15,uVar8);
LAB_0010354d:
      uVar8 = dcgettext(0,"too many input lines",5);
      error(1,0x4b,uVar8);
LAB_00103574:
      uVar8 = dcgettext(0,"multiple output files specified",5);
      error(1,0,uVar8);
LAB_00103598:
      uVar8 = dcgettext(0,"read error",5);
      piVar15 = __errno_location();
      error(1,*piVar15,uVar8);
LAB_001035c4:
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
  }
  if ((FILE *)s_00 != (FILE *)0x0) goto LAB_001033a6;
  goto LAB_0010354d;
LAB_00102de0:
  if (lVar2 == *(long *)(in_FS_OFFSET + 0x28)) {
    return 0;
  }
  goto LAB_001035c4;
}

