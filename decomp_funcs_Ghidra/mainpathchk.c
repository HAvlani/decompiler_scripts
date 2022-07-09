
int main(int argc,char **argv)

{
  long lVar1;
  bool bVar2;
  bool bVar3;
  int iVar4;
  size_t sVar5;
  size_t sVar6;
  int *piVar7;
  ulong uVar8;
  size_t sVar9;
  undefined8 uVar10;
  char *pcVar11;
  undefined8 uVar12;
  char *arg;
  bool bVar13;
  ulong uVar14;
  char *pcVar15;
  ulong uVar16;
  ulong uVar17;
  char cVar18;
  long in_FS_OFFSET;
  _Bool check_component_lengths;
  byte local_f6;
  ulong len;
  stat st;
  
  bVar2 = false;
  bVar3 = false;
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  set_program_name(*argv);
  setlocale(6,"");
  bindtextdomain("coreutils","/root/coreutils-builder/share/locale");
  textdomain("coreutils");
  atexit(close_stdout);
  while (iVar4 = getopt_long(argc,argv,&DAT_001070da,longopts), iVar4 != -1) {
    if (iVar4 == 0x50) {
      bVar2 = true;
    }
    else {
      if (iVar4 < 0x51) {
        if (iVar4 == -0x83) {
          version_etc(stdout,"pathchk","GNU coreutils",Version,"Paul Eggert","David MacKenzie",
                      "Jim Meyering",0);
                    /* WARNING: Subroutine does not return */
          exit(0);
        }
        if (iVar4 == -0x82) {
                    /* WARNING: Subroutine does not return */
          usage(0);
        }
        goto LAB_00102caf;
      }
      if (iVar4 != 0x70) {
        if (iVar4 != 0x80) goto LAB_00102caf;
        bVar2 = true;
      }
      bVar3 = true;
    }
  }
  if (optind == argc) {
    uVar12 = dcgettext(0,"missing operand",5);
    error(0,0,uVar12);
LAB_00102caf:
                    /* WARNING: Subroutine does not return */
    usage(1);
  }
  local_f6 = 1;
  do {
    if (argc <= optind) {
      if (lVar1 == *(long *)(in_FS_OFFSET + 0x28)) {
        return (int)(local_f6 ^ 1);
      }
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
    pcVar11 = argv[optind];
    sVar5 = strlen(pcVar11);
    pcVar15 = pcVar11;
    if (bVar2) {
      while (pcVar15 = strchr(pcVar15,0x2d), pcVar15 != (char *)0x0) {
        if ((pcVar11 == pcVar15) || (pcVar15[-1] == '/')) {
          pcVar11 = quotearg_style(shell_escape_always_quoting_style,pcVar11);
          uVar12 = dcgettext(0,"leading \'-\' in a component of file name %s",5);
          error(0,0,uVar12,pcVar11);
          bVar13 = false;
          goto LAB_001027d0;
        }
        pcVar15 = pcVar15 + 1;
      }
      if (sVar5 != 0) {
        if (bVar3) goto LAB_00102823;
        goto LAB_0010276e;
      }
LAB_00102b03:
      uVar12 = dcgettext(0,"empty file name",5);
      error(0,0,uVar12);
      bVar13 = false;
    }
    else if (bVar3) {
      if (sVar5 == 0) goto LAB_00102b03;
LAB_00102823:
      sVar6 = strspn(pcVar11,"/ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789._-");
      pcVar15 = pcVar11 + sVar6;
      if (*pcVar15 != '\0') {
        st.st_dev = 0;
        sVar9 = rpl_mbrlen(pcVar15,sVar5 - sVar6,(mbstate_t *)&st);
        quotearg_n_style(0,4,pcVar11);
        if (0x10 < sVar9) {
          sVar9 = 1;
        }
        uVar12 = quotearg_n_style_mem(1,8,pcVar15,sVar9);
        uVar10 = dcgettext(0,"nonportable character %s in file name %s",5);
        error(0,0,uVar10,uVar12);
        bVar13 = false;
        goto LAB_001027d0;
      }
      if (0xff < sVar5) {
        uVar16 = 0x100;
LAB_00102beb:
        pcVar11 = quotearg_style(shell_escape_always_quoting_style,pcVar11);
        uVar12 = dcgettext(0,"limit %lu exceeded by length %lu of file name %s",5);
        error(0,0,uVar12,uVar16 - 1,sVar5,pcVar11);
        bVar13 = false;
        goto LAB_001027d0;
      }
      uVar16 = 0xe;
      if (!bVar3) goto LAB_001029c7;
LAB_00102860:
      pcVar15 = pcVar11;
      uVar17 = 0xe;
      do {
        while (arg = pcVar15, cVar18 = *arg, cVar18 == '/') {
          pcVar15 = arg + 1;
        }
        if (cVar18 == '\0') goto LAB_001029c7;
        uVar8 = uVar16;
        if (uVar16 == 0) {
          pcVar15 = ".";
          if (pcVar11 != arg) {
            pcVar15 = pcVar11;
          }
          piVar7 = __errno_location();
          *piVar7 = 0;
          *arg = '\0';
          uVar8 = pathconf(pcVar15,3);
          *arg = cVar18;
          if ((long)uVar8 < 0) {
            if (*piVar7 == 0) {
              uVar8 = 0xffffffffffffffff;
            }
            else {
              uVar16 = uVar17;
              uVar8 = uVar17;
              if (*piVar7 != 2) {
                *arg = '\0';
                uVar12 = quotearg_n_style_colon(0,3,pcVar15);
                error(0,*piVar7,"%s",uVar12);
                *arg = cVar18;
                bVar13 = false;
                goto LAB_001027d0;
              }
            }
          }
        }
        cVar18 = arg[1];
        if ((cVar18 == '/') || (cVar18 == '\0')) {
          pcVar15 = arg + 1;
          uVar14 = 1;
        }
        else {
          uVar14 = 1;
          do {
            uVar14 = uVar14 + 1;
            cVar18 = arg[uVar14];
            pcVar15 = arg + uVar14;
            if (cVar18 == '/') break;
          } while (cVar18 != '\0');
        }
        uVar17 = uVar8;
      } while (uVar14 <= uVar8);
      *pcVar15 = '\0';
      pcVar11 = quote(arg);
      uVar12 = dcgettext(0,"limit %lu exceeded by length %lu of file name component %s",5);
      error(0,0,uVar12,uVar8,uVar14,pcVar11);
      bVar13 = false;
      *pcVar15 = cVar18;
    }
    else {
LAB_0010276e:
      iVar4 = __lxstat(1,pcVar11,(stat *)&st);
      if (iVar4 == 0) {
LAB_001029c7:
        bVar13 = true;
      }
      else {
        piVar7 = __errno_location();
        bVar13 = *piVar7 != 2 || sVar5 == 0;
        if (*piVar7 == 2 && sVar5 != 0) {
          if (0xff < sVar5) {
            cVar18 = *pcVar11;
            *piVar7 = 0;
            pcVar15 = ".";
            if (cVar18 == '/') {
              pcVar15 = "/";
            }
            uVar16 = pathconf(pcVar15,4);
            if ((long)uVar16 < 0) {
              if (*piVar7 != 0) {
                uVar12 = dcgettext(0,"%s: unable to determine maximum file name length",5);
                error(0,*piVar7,uVar12,pcVar15);
                goto LAB_001027d0;
              }
            }
            else if (uVar16 <= sVar5) goto LAB_00102beb;
          }
          cVar18 = *pcVar11;
          pcVar15 = pcVar11;
          do {
            while( true ) {
              while (cVar18 == '/') {
                cVar18 = pcVar15[1];
                pcVar15 = pcVar15 + 1;
              }
              if (cVar18 == '\0') goto LAB_001029c7;
              cVar18 = pcVar15[1];
              if ((cVar18 != '/') && (cVar18 != '\0')) break;
              pcVar15 = pcVar15 + 1;
            }
            uVar16 = 1;
            do {
              uVar16 = uVar16 + 1;
              cVar18 = pcVar15[uVar16];
              if (cVar18 == '/') break;
            } while (cVar18 != '\0');
            pcVar15 = pcVar15 + uVar16;
          } while (uVar16 < 0xf);
          uVar16 = 0;
          goto LAB_00102860;
        }
        uVar12 = quotearg_n_style_colon(0,3,pcVar11);
        error(0,*piVar7,"%s",uVar12);
        bVar13 = false;
      }
    }
LAB_001027d0:
    local_f6 = local_f6 & bVar13;
    optind = optind + 1;
  } while( true );
}

