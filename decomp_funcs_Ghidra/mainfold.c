
int main(int argc,char **argv)

{
  long lVar1;
  _Bool _Var2;
  byte bVar3;
  int iVar4;
  uint uVar5;
  char *pcVar6;
  int *piVar7;
  long lVar8;
  char **ppcVar9;
  uintmax_t width;
  long in_FS_OFFSET;
  char optargbuf [2];
  
  width = 0x50;
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  set_program_name(*argv);
  setlocale(6,"");
  bindtextdomain("coreutils","/root/coreutils-builder/share/locale");
  textdomain("coreutils");
  atexit(close_stdout);
  have_read_stdin = false;
  count_bytes = false;
  break_spaces = false;
LAB_00102757:
  do {
    iVar4 = getopt_long(argc,argv,"bsw:0::1::2::3::4::5::6::7::8::9::",longopts,0);
    if (iVar4 == -1) break;
    if (iVar4 != 0x62) {
      if (iVar4 < 99) {
        if (iVar4 == -0x82) {
                    /* WARNING: Subroutine does not return */
          usage(0);
        }
        if (iVar4 < -0x81) {
          if (iVar4 == -0x83) {
            version_etc(stdout,"fold","GNU coreutils",Version,"David MacKenzie",0);
                    /* WARNING: Subroutine does not return */
            exit(0);
          }
LAB_00102865:
                    /* WARNING: Subroutine does not return */
          usage(1);
        }
        if (9 < iVar4 - 0x30U) goto LAB_00102865;
        if (optarg == (char *)0x0) {
          optargbuf[0] = (char)iVar4;
          optargbuf[1] = '\0';
          optarg = optargbuf;
        }
        else {
          optarg = optarg + -1;
        }
      }
      else {
        if (iVar4 == 0x73) {
          break_spaces = true;
          goto LAB_00102757;
        }
        if (iVar4 != 0x77) goto LAB_00102865;
      }
      pcVar6 = (char *)dcgettext(0,"invalid number of columns",5);
      width = xdectoumax(optarg,1,0xfffffffffffffff6,"",pcVar6,0);
      goto LAB_00102757;
    }
    count_bytes = true;
  } while( true );
  if (optind == argc) goto LAB_0010292c;
  if ((int)optind < argc) {
    lVar8 = (long)(int)optind;
    uVar5 = ~optind;
    ppcVar9 = argv + lVar8;
    bVar3 = 1;
    do {
      pcVar6 = *ppcVar9;
      ppcVar9 = ppcVar9 + 1;
      _Var2 = fold_file(pcVar6,width);
      bVar3 = bVar3 & _Var2;
    } while (ppcVar9 != argv + (ulong)(uVar5 + argc) + lVar8 + 1);
  }
  else {
    bVar3 = 1;
  }
  while (have_read_stdin != false) {
    iVar4 = rpl_fclose(stdin);
    if (iVar4 != -1) break;
    piVar7 = __errno_location();
    error(1,*piVar7,&DAT_001070d6);
LAB_0010292c:
    bVar3 = fold_file("-",width);
  }
  if (lVar1 == *(long *)(in_FS_OFFSET + 0x28)) {
    return (int)(bVar3 ^ 1);
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

