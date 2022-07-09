
int main(int argc,char **argv)

{
  cached_mode cVar1;
  long lVar2;
  _Bool _Var3;
  byte bVar4;
  int iVar5;
  uint uVar6;
  lconv *plVar7;
  ptrdiff_t pVar8;
  char *pcVar9;
  undefined8 uVar10;
  int *piVar11;
  char *__haystack;
  long lVar12;
  byte bVar13;
  _Bool fs;
  char **ppcVar14;
  long in_FS_OFFSET;
  char *local_c8;
  statfs statfsbuf;
  
  lVar2 = *(long *)(in_FS_OFFSET + 0x28);
  set_program_name(*argv);
  setlocale(6,"");
  bindtextdomain("coreutils","/root/coreutils-builder/share/locale");
  textdomain("coreutils");
  plVar7 = localeconv();
  decimal_point = plVar7->decimal_point;
  if (*decimal_point == '\0') {
    decimal_point = ".";
  }
  _Var3 = false;
  fs = false;
  decimal_point_len = strlen(decimal_point);
  atexit(close_stdout);
  __haystack = (char *)0x0;
LAB_00102be0:
  do {
    iVar5 = getopt_long(argc,argv,"c:fLt",long_options,0);
    if (iVar5 == -1) {
      if (optind != argc) {
        if (__haystack == (char *)0x0) {
          __haystack = default_format(fs,_Var3,false);
          local_c8 = default_format(fs,_Var3,true);
        }
        else {
          pcVar9 = strstr(__haystack,"%N");
          local_c8 = __haystack;
          if (pcVar9 != (char *)0x0) {
            pcVar9 = getenv("QUOTING_STYLE");
            if (pcVar9 == (char *)0x0) {
              set_quoting_style((quoting_options *)0x0,shell_escape_always_quoting_style);
            }
            else {
              pVar8 = argmatch(pcVar9,(char **)quoting_style_args,quoting_style_vals,4);
              if ((int)pVar8 < 0) {
                set_quoting_style((quoting_options *)0x0,shell_escape_always_quoting_style);
                pcVar9 = quote(pcVar9);
                uVar10 = dcgettext(0,
                                   "ignoring invalid value of environment variable QUOTING_STYLE: %s"
                                   ,5);
                error(0,0,uVar10,pcVar9);
              }
              else {
                set_quoting_style((quoting_options *)0x0,
                                  *(quoting_style *)(quoting_style_vals + (long)(int)pVar8 * 4));
              }
            }
          }
        }
        if ((int)optind < argc) {
          lVar12 = (long)(int)optind;
          uVar6 = ~optind;
          ppcVar14 = argv + lVar12;
          bVar13 = 1;
          do {
            pcVar9 = *ppcVar14;
            if (fs == false) {
              bVar4 = do_stat(pcVar9,__haystack,local_c8);
            }
            else {
              iVar5 = strcmp(pcVar9,"-");
              if (iVar5 == 0) {
                pcVar9 = quotearg_style(shell_escape_always_quoting_style,pcVar9);
                uVar10 = dcgettext(0,
                                   "using %s to denote standard input does not work in file system mode"
                                   ,5);
                error(0,0,uVar10,pcVar9);
                bVar4 = 0;
              }
              else {
                iVar5 = statfs(pcVar9,(statfs *)&statfsbuf);
                if (iVar5 == 0) {
                  _Var3 = print_it(__haystack,-1,pcVar9,print_statfs,(statfs *)&statfsbuf);
                  bVar4 = _Var3 ^ 1;
                }
                else {
                  pcVar9 = quotearg_style(shell_escape_always_quoting_style,pcVar9);
                  uVar10 = dcgettext(0,"cannot read file system information for %s",5);
                  piVar11 = __errno_location();
                  error(0,*piVar11,uVar10,pcVar9);
                  bVar4 = 0;
                }
              }
            }
            ppcVar14 = ppcVar14 + 1;
            bVar13 = bVar13 & bVar4;
          } while (argv + (ulong)(uVar6 + argc) + lVar12 + 1 != ppcVar14);
        }
        else {
          bVar13 = 1;
        }
        if (lVar2 == *(long *)(in_FS_OFFSET + 0x28)) {
          return (int)(bVar13 ^ 1);
        }
                    /* WARNING: Subroutine does not return */
        __stack_chk_fail();
      }
      uVar10 = dcgettext(0,"missing operand",5);
      error(0,0,uVar10);
LAB_00103002:
                    /* WARNING: Subroutine does not return */
      usage(1);
    }
    if (iVar5 != 99) {
      if (iVar5 < 100) {
        if (iVar5 == 0) {
          pVar8 = __xargmatch_internal
                            ("--cached",optarg,cached_args,cached_modes,4,argmatch_die,true);
          cVar1 = cached_modes[pVar8];
          if (cVar1 == cached_never) {
            force_sync = true;
            dont_sync = false;
          }
          else if (cVar1 == cached_always) {
            force_sync = false;
            dont_sync = true;
          }
          else if (cVar1 == cached_default) {
            force_sync = false;
            dont_sync = false;
          }
        }
        else {
          if (iVar5 < 1) {
            if (iVar5 == -0x83) {
              version_etc(stdout,"stat","GNU coreutils",Version,"Michael Meskes",0);
                    /* WARNING: Subroutine does not return */
              exit(0);
            }
            if (iVar5 == -0x82) {
                    /* WARNING: Subroutine does not return */
              usage(0);
            }
            goto LAB_00103002;
          }
          if (iVar5 != 0x4c) goto LAB_00103002;
          follow_links = true;
        }
      }
      else if (iVar5 == 0x74) {
        _Var3 = true;
      }
      else if (iVar5 == 0x80) {
        interpret_backslash_escapes = true;
        trailing_delim = "";
        __haystack = optarg;
      }
      else {
        if (iVar5 != 0x66) goto LAB_00103002;
        fs = true;
      }
      goto LAB_00102be0;
    }
    interpret_backslash_escapes = false;
    trailing_delim = "\n";
    __haystack = optarg;
  } while( true );
}

