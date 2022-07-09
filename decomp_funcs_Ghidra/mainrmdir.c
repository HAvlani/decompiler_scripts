
int main(int argc,char **argv)

{
  long lVar1;
  _Bool _Var2;
  int iVar3;
  int iVar4;
  char *pcVar5;
  char *pcVar6;
  int *piVar7;
  char *pcVar8;
  undefined8 uVar9;
  byte bVar10;
  long in_FS_OFFSET;
  byte local_dd;
  stat st;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  set_program_name(*argv);
  setlocale(6,"");
  bindtextdomain("coreutils","/root/coreutils-builder/share/locale");
  textdomain("coreutils");
  atexit(close_stdout);
  remove_empty_parents = false;
  while (iVar3 = getopt_long(argc,argv,&DAT_001090ef,longopts,0), iVar3 != -1) {
    if (iVar3 == 0x70) {
      remove_empty_parents = true;
    }
    else {
      if (iVar3 < 0x71) {
        if (iVar3 == -0x83) {
          version_etc(stdout,"rmdir","GNU coreutils",Version,"David MacKenzie",0);
                    /* WARNING: Subroutine does not return */
          exit(0);
        }
        if (iVar3 == -0x82) {
                    /* WARNING: Subroutine does not return */
          usage(0);
        }
        goto LAB_00102b61;
      }
      if (iVar3 == 0x76) {
        verbose = true;
      }
      else {
        if (iVar3 != 0x80) goto LAB_00102b61;
        ignore_fail_on_non_empty = true;
      }
    }
  }
  if (optind == argc) {
    uVar9 = dcgettext(0,"missing operand",5);
    error(0,0,uVar9);
LAB_00102b61:
                    /* WARNING: Subroutine does not return */
    usage(1);
  }
  local_dd = 1;
  if (optind < argc) {
    do {
      pcVar8 = argv[optind];
      if (verbose != false) {
        pcVar5 = quotearg_style(shell_escape_always_quoting_style,pcVar8);
        pcVar6 = (char *)dcgettext(0,"removing directory, %s",5);
        prog_fprintf(stdout,pcVar6,pcVar5);
      }
      iVar3 = rmdir(pcVar8);
      bVar10 = remove_empty_parents;
      if (iVar3 == 0) {
        if (remove_empty_parents != false) {
          strip_trailing_slashes(pcVar8);
          do {
            pcVar5 = strrchr(pcVar8,0x2f);
            _Var2 = verbose;
            if (pcVar5 == (char *)0x0) goto LAB_001029cd;
            if (pcVar8 < pcVar5) {
              do {
                if (*pcVar5 != '/') goto LAB_0010298e;
                pcVar5 = pcVar5 + -1;
              } while (pcVar8 != pcVar5);
              pcVar8[1] = '\0';
            }
            else {
LAB_0010298e:
              pcVar5[1] = '\0';
            }
            if (_Var2 != false) {
              pcVar5 = quotearg_style(shell_escape_always_quoting_style,pcVar8);
              pcVar6 = (char *)dcgettext(0,"removing directory, %s",5);
              prog_fprintf(stdout,pcVar6,pcVar5);
            }
            iVar3 = rmdir(pcVar8);
          } while (iVar3 == 0);
          piVar7 = __errno_location();
          iVar3 = *piVar7;
          _Var2 = ignorable_failure(iVar3,pcVar8);
          if (_Var2 == false) {
            pcVar5 = "failed to remove %s";
            if (iVar3 != 0x14) {
              pcVar5 = "failed to remove directory %s";
            }
            pcVar8 = quotearg_style(shell_escape_always_quoting_style,pcVar8);
            uVar9 = dcgettext(0,pcVar5,5);
            error(0,iVar3,uVar9,pcVar8);
            bVar10 = _Var2;
          }
LAB_001029cd:
          local_dd = local_dd & bVar10;
        }
      }
      else {
        piVar7 = __errno_location();
        iVar3 = *piVar7;
        _Var2 = ignorable_failure(iVar3,pcVar8);
        if (_Var2 == false) {
          if (((iVar3 == 0x14) && (pcVar5 = strrchr(pcVar8,0x2f), pcVar5 != (char *)0x0)) &&
             (pcVar5[1] == '\0')) {
            iVar4 = __xstat(1,pcVar8,(stat *)&st);
            if (iVar4 == 0) {
              if ((st.st_mode & 0xf000) == 0x4000) {
LAB_00102aee:
                pcVar5 = xstrdup(pcVar8);
                strip_trailing_slashes(pcVar8);
                iVar4 = __lxstat(1,pcVar8,(stat *)&st);
                if ((iVar4 == 0) && ((st.st_mode & 0xf000) == 0xa000)) {
                  pcVar8 = quotearg_style(shell_escape_always_quoting_style,pcVar5);
                  uVar9 = dcgettext(0,"failed to remove %s: Symbolic link not followed",5);
                  error(0,0,uVar9,pcVar8);
                  rpl_free(pcVar5);
                  local_dd = 0;
                  goto LAB_00102875;
                }
                rpl_free(pcVar5);
              }
            }
            else if (*piVar7 != 0x14) goto LAB_00102aee;
          }
          pcVar8 = quotearg_style(shell_escape_always_quoting_style,pcVar8);
          uVar9 = dcgettext(0,"failed to remove %s",5);
          error(0,iVar3,uVar9,pcVar8);
          local_dd = 0;
        }
      }
LAB_00102875:
      optind = optind + 1;
    } while (optind < argc);
  }
  if (lVar1 == *(long *)(in_FS_OFFSET + 0x28)) {
    return (int)(local_dd ^ 1);
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

