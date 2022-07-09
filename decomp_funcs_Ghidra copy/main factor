
int main(int argc,char **argv)

{
  long lVar1;
  _Bool _Var2;
  int iVar3;
  char *pcVar4;
  char *pcVar5;
  size_t sVar6;
  long lVar7;
  uint uVar8;
  long in_FS_OFFSET;
  token_buffer tokenbuffer;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  set_program_name(*argv);
  setlocale(6,"");
  bindtextdomain("coreutils","/root/coreutils-builder/share/locale");
  textdomain("coreutils");
  if (lbuf.buf == (char *)0x0) {
    lbuf.buf = (char *)xmalloc(0x400);
    lbuf.end = lbuf.buf;
  }
  atexit(close_stdout);
  atexit(lbuf_flush);
  while( true ) {
    iVar3 = getopt_long(argc,argv,"",long_options,0);
    if (iVar3 == -1) {
      lVar7 = (long)optind;
      if (optind < argc) {
        uVar8 = 1;
        do {
          _Var2 = print_factors(argv[lVar7]);
          if (_Var2 == false) {
            uVar8 = 0;
          }
          lVar7 = lVar7 + 1;
        } while ((int)lVar7 < argc);
      }
      else {
        uVar8 = 1;
        init_tokenbuffer(&tokenbuffer);
        while( true ) {
          sVar6 = readtoken(stdin,"\n\t ",3,&tokenbuffer);
          if (sVar6 == 0xffffffffffffffff) break;
          _Var2 = print_factors(tokenbuffer.buffer);
          uVar8 = uVar8 & _Var2;
        }
        rpl_free(tokenbuffer.buffer);
      }
      if (lVar1 == *(long *)(in_FS_OFFSET + 0x28)) {
        return uVar8 ^ 1;
      }
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
    if (iVar3 == -0x82) {
                    /* WARNING: Subroutine does not return */
      usage(0);
    }
    if (iVar3 != 0x80) break;
    dev_debug = true;
  }
  if (iVar3 != -0x83) {
                    /* WARNING: Subroutine does not return */
    usage(1);
  }
  pcVar4 = proper_name_utf8("Niels Moller",&DAT_00117144);
  pcVar5 = proper_name_utf8("Torbjorn Granlund",&DAT_0011715f);
  version_etc(stdout,"factor","GNU coreutils",Version,"Paul Rubin",pcVar5,pcVar4,0);
                    /* WARNING: Subroutine does not return */
  exit(0);
}

