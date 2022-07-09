
/* WARNING: Could not reconcile some variable overlaps */

int main(int argc,char **argv)

{
  long lVar1;
  size_t __n;
  char cVar2;
  randint_source *s;
  byte bVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  ptrdiff_t pVar7;
  uintmax_t uVar8;
  char *pcVar9;
  char *pcVar10;
  char *name;
  char *name_00;
  char *file;
  char *pcVar11;
  size_t sVar12;
  int *piVar13;
  char *pcVar14;
  undefined8 uVar15;
  char *pcVar16;
  long lVar17;
  char **ppcVar18;
  long in_FS_OFFSET;
  bool bVar19;
  byte local_a5;
  int local_a4;
  Options flags;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  flags._0_16_ = (undefined  [16])0x0;
  flags._16_16_ = (undefined  [16])0x0;
  set_program_name(*argv);
  setlocale(6,"");
  bindtextdomain("coreutils","/root/coreutils-builder/share/locale");
  textdomain("coreutils");
  atexit(close_stdout);
  flags._0_16_ = CONCAT88(3,flags._0_8_);
  flags._16_16_ = CONCAT88(flags._24_8_,0xffffffffffffffff);
  pcVar9 = (char *)0x0;
  do {
    pcVar10 = pcVar9;
    iVar4 = getopt_long(argc,argv,"fn:s:uvxz",long_opts,0);
    pcVar9 = optarg;
    if (iVar4 == -1) {
      lVar17 = (long)optind;
      iVar4 = argc - optind;
      if (iVar4 == 0) {
        uVar15 = dcgettext(0,"missing file operand",5);
        error(0,0,uVar15);
switchD_00102afc_caseD_67:
                    /* WARNING: Subroutine does not return */
        usage(1);
      }
      randint_source = randint_all_new(pcVar10,0xffffffffffffffff);
      if (randint_source != (randint_source *)0x0) {
        atexit(clear_random_data);
        if (iVar4 < 1) {
          local_a5 = 1;
        }
        else {
          ppcVar18 = argv + lVar17;
          local_a5 = 1;
          do {
            pcVar9 = (char *)quotearg_n_style_colon(0,3,*ppcVar18);
            pcVar10 = xstrdup(pcVar9);
            s = randint_source;
            pcVar9 = *ppcVar18;
            if ((*pcVar9 == '-') && (pcVar9[1] == '\0')) {
              uVar5 = rpl_fcntl(1,3);
              if ((int)uVar5 < 0) {
                uVar15 = dcgettext(0,"%s: fcntl failed",5);
                piVar13 = __errno_location();
                error(0,*piVar13,uVar15,pcVar10);
                bVar3 = 0;
              }
              else if ((uVar5 & 0x400) == 0) {
                bVar3 = do_wipefd(1,pcVar10,s,&flags);
              }
              else {
                uVar15 = dcgettext(0,"%s: cannot shred append-only file descriptor",5);
                error(0,0,uVar15,pcVar10);
                bVar3 = 0;
              }
            }
            else {
              iVar6 = open_safer(pcVar9,0x101);
              if ((iVar6 < 0) &&
                 ((((piVar13 = __errno_location(), *piVar13 != 0xd || (flags.force == false)) ||
                   (iVar6 = chmod(pcVar9,0x80), iVar6 != 0)) ||
                  (iVar6 = open_safer(pcVar9,0x101), iVar6 < 0)))) {
                uVar15 = dcgettext(0,"%s: failed to open for writing",5);
                error(0,*piVar13,uVar15);
                bVar3 = 0;
              }
              else {
                bVar3 = do_wipefd(iVar6,pcVar10,s,&flags);
                iVar6 = close(iVar6);
                if (iVar6 == 0) {
                  if (((_Bool)bVar3 != false) && (flags.remove_file != remove_none)) {
                    name = xstrdup(pcVar9);
                    name_00 = last_component(name);
                    file = dir_name(name);
                    pcVar11 = (char *)quotearg_n_style_colon(0,3,file);
                    pcVar11 = xstrdup(pcVar11);
                    local_a4 = -1;
                    if (flags.remove_file == remove_wipesync) {
                      local_a4 = open_safer(file,0x10900);
                    }
                    if (flags.verbose != false) {
                      uVar15 = dcgettext(0,"%s: removing",5);
                      error(0,0,uVar15);
                    }
                    if (flags.remove_file != remove_unlink) {
                      sVar12 = base_len(name_00);
                      cVar2 = bVar3;
LAB_00102ff1:
                      __n = sVar12;
                      sVar12 = __n - 1;
                      if (sVar12 != 0xffffffffffffffff) {
                        memset(name_00,0x30,__n);
                        name_00[__n] = '\0';
                        while (iVar6 = renameatu(-100,pcVar9,-100,name,1), iVar6 != 0) {
                          piVar13 = __errno_location();
                          if (*piVar13 != 0x11) goto LAB_00102ff1;
                          pcVar16 = name_00 + sVar12;
                          while( true ) {
                            pcVar14 = strchr("0123456789abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ_."
                                             ,(int)*pcVar16);
                            if (pcVar14 == (char *)0x0) {
                    /* WARNING: Subroutine does not return */
                              __assert_fail("p","src/shred.c",1000,"incname");
                            }
                            if (pcVar14[1] != '\0') break;
                            *pcVar16 = '0';
                            bVar19 = name_00 == pcVar16;
                            pcVar16 = pcVar16 + -1;
                            if (bVar19) goto LAB_00102ff1;
                          }
                          *pcVar16 = pcVar14[1];
                        }
                        if ((-1 < local_a4) && (iVar6 = dosync(local_a4,pcVar11), iVar6 != 0)) {
                          bVar3 = 0;
                        }
                        if (flags.verbose != false) {
                          pcVar16 = pcVar10;
                          if (cVar2 == '\0') {
                            pcVar16 = pcVar9;
                          }
                          uVar15 = dcgettext(0,"%s: renamed to %s",5);
                          error(0,0,uVar15,pcVar16,name);
                          cVar2 = '\0';
                        }
                        memcpy(pcVar9 + ((long)name_00 - (long)name),name_00,__n + 1);
                        goto LAB_00102ff1;
                      }
                    }
                    iVar6 = unlink(pcVar9);
                    if (iVar6 == 0) {
                      if (flags.verbose != false) {
                        uVar15 = dcgettext(0,"%s: removed",5);
                        error(0,0,uVar15);
                      }
                    }
                    else {
                      uVar15 = dcgettext(0,"%s: failed to remove",5);
                      piVar13 = __errno_location();
                      error(0,*piVar13,uVar15);
                      bVar3 = 0;
                    }
                    if (-1 < local_a4) {
                      iVar6 = dosync(local_a4,pcVar11);
                      if (iVar6 != 0) {
                        bVar3 = 0;
                      }
                      iVar6 = close(local_a4);
                      if (iVar6 != 0) {
                        uVar15 = dcgettext(0,"%s: failed to close",5);
                        piVar13 = __errno_location();
                        error(0,*piVar13,uVar15);
                        bVar3 = 0;
                      }
                    }
                    rpl_free(name);
                    rpl_free(file);
                    rpl_free(pcVar11);
                  }
                }
                else {
                  uVar15 = dcgettext(0,"%s: failed to close",5);
                  piVar13 = __errno_location();
                  error(0,*piVar13,uVar15);
                  bVar3 = 0;
                }
              }
            }
            local_a5 = local_a5 & bVar3;
            ppcVar18 = ppcVar18 + 1;
            rpl_free(pcVar10);
          } while (argv + lVar17 + (ulong)(iVar4 - 1) + 1 != ppcVar18);
        }
        if (lVar1 == *(long *)(in_FS_OFFSET + 0x28)) {
          return (int)(local_a5 ^ 1);
        }
                    /* WARNING: Subroutine does not return */
        __stack_chk_fail();
      }
      goto LAB_001032df;
    }
    if (0x80 < iVar4) goto switchD_00102afc_caseD_67;
    if (iVar4 < 0x66) {
      if (iVar4 == -0x83) {
        version_etc(stdout,"shred","GNU coreutils",Version,"Colin Plumb",0);
                    /* WARNING: Subroutine does not return */
        exit(0);
      }
      if (iVar4 == -0x82) {
                    /* WARNING: Subroutine does not return */
        usage(0);
      }
      goto switchD_00102afc_caseD_67;
    }
    switch(iVar4) {
    case 0x66:
      flags._0_16_ = CONCAT151(flags._1_15_,1);
      pcVar9 = pcVar10;
      break;
    default:
      goto switchD_00102afc_caseD_67;
    case 0x6e:
      pcVar9 = (char *)dcgettext(0,"invalid number of passes",5);
      uVar8 = xdectoumax(optarg,0,0x3fffffffffffffff,"",pcVar9,0);
      flags._0_16_ = CONCAT88(uVar8,flags._0_8_);
      pcVar9 = pcVar10;
      break;
    case 0x73:
      pcVar9 = (char *)dcgettext(0,"invalid file size",5);
      uVar8 = xnumtoumax(optarg,0,0,0x7fffffffffffffff,"cbBkKMGTPEZY0",pcVar9,0);
      flags._16_16_ = CONCAT88(flags._24_8_,uVar8);
      pcVar9 = pcVar10;
      break;
    case 0x75:
      if (optarg == (char *)0x0) {
        flags._16_12_ = CONCAT48(3,flags.size);
        pcVar9 = pcVar10;
      }
      else {
        pVar7 = __xargmatch_internal
                          ("--remove",optarg,remove_args,remove_methods,4,argmatch_die,true);
        flags._16_12_ = CONCAT48(remove_methods[pVar7],flags.size);
        pcVar9 = pcVar10;
      }
      break;
    case 0x76:
      flags._16_13_ = CONCAT112(1,flags._16_12_);
      pcVar9 = pcVar10;
      break;
    case 0x78:
      flags._16_14_ = CONCAT113(1,flags._16_13_);
      pcVar9 = pcVar10;
      break;
    case 0x7a:
      pcVar9 = pcVar10;
      break;
    case 0x80:
      if ((pcVar10 != (char *)0x0) && (iVar4 = strcmp(pcVar10,optarg), iVar4 != 0)) {
        uVar15 = dcgettext(0,"multiple random sources specified",5);
        error(1,0,uVar15);
LAB_001032df:
        if (pcVar10 == (char *)0x0) goto LAB_00103313;
        do {
          uVar15 = quotearg_n_style_colon(0,3,pcVar10);
          piVar13 = __errno_location();
          error(1,*piVar13,&DAT_0010bde7,uVar15);
LAB_00103313:
          pcVar10 = "getrandom";
        } while( true );
      }
    }
  } while( true );
}

