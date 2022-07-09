
int main(int argc,char **argv)

{
  char **ppcVar1;
  bool bVar2;
  byte bVar3;
  int iVar4;
  int iVar5;
  FILE *pFVar6;
  char *pcVar7;
  undefined8 uVar8;
  int *piVar9;
  ulong uVar10;
  uint uVar11;
  char *__s;
  char *pcVar12;
  size_t __n;
  char cVar13;
  
  bVar3 = 0;
  cVar13 = '\x02';
  bVar2 = false;
  set_program_name(*argv);
  setlocale(6,"");
  bindtextdomain("coreutils","/root/coreutils-builder/share/locale");
  textdomain("coreutils");
  atexit(close_stdout);
  while (iVar4 = getopt_long(argc,argv,&DAT_00107153,long_options,0), iVar5 = optind, iVar4 != -1) {
    if (iVar4 == 99) {
      cVar13 = '\x01';
    }
    else if (iVar4 < 100) {
      if (iVar4 == -0x82) {
                    /* WARNING: Subroutine does not return */
        usage(0);
      }
      if (iVar4 != 0x62) {
        if (iVar4 == -0x83) {
          version_etc((FILE *)stdout,"dircolors","GNU coreutils",Version,"H. Peter Anvin",0);
                    /* WARNING: Subroutine does not return */
          exit(0);
        }
        goto LAB_0010277f;
      }
      cVar13 = '\0';
    }
    else if (iVar4 == 0x70) {
      bVar2 = true;
    }
    else {
      if (iVar4 != 0x80) goto LAB_0010277f;
      print_ls_colors = true;
    }
  }
  iVar4 = argc - optind;
  ppcVar1 = argv + optind;
  if ((print_ls_colors != false) || (bVar2)) {
    if (cVar13 != '\x02') {
      pcVar7 = 
      "the options to output non shell syntax,\nand to select a shell syntax are mutually exclusive"
      ;
LAB_00102b83:
      uVar8 = dcgettext(0,pcVar7,5);
      error(0,0,uVar8);
LAB_0010277f:
                    /* WARNING: Subroutine does not return */
      usage(1);
    }
    if (!bVar2) {
LAB_00102ad4:
      if (1 < iVar4) goto LAB_00102ade;
      goto LAB_0010281e;
    }
    pcVar7 = "options --print-database and --print-ls-colors are mutually exclusive";
    if (print_ls_colors != false) goto LAB_00102b83;
    if (0 < iVar4) {
      pcVar7 = quote(*ppcVar1);
      uVar8 = dcgettext(0,"extra operand %s",5);
      error(0,0,uVar8,pcVar7);
      uVar8 = dcgettext(0,"file operands cannot be combined with --print-database (-p)",5);
      __fprintf_chk(stderr,1,"%s\n",uVar8);
      goto LAB_0010277f;
    }
    for (pcVar7 = "# Configuration file for dircolors, a utility to help you set the";
        pcVar7 + -0x107800 < (char *)0x12c8; pcVar7 = pcVar7 + ~uVar10) {
      puts(pcVar7);
      uVar10 = 0xffffffffffffffff;
      pcVar12 = pcVar7;
      do {
        if (uVar10 == 0) break;
        uVar10 = uVar10 - 1;
        cVar13 = *pcVar12;
        pcVar12 = pcVar12 + (ulong)bVar3 * -2 + 1;
      } while (cVar13 != '\0');
    }
  }
  else {
    if (1 < iVar4) {
LAB_00102ade:
      pcVar7 = quote(ppcVar1[1]);
      uVar8 = dcgettext(0,"extra operand %s",5);
      error(0,0,uVar8,pcVar7);
      goto LAB_0010277f;
    }
    if (cVar13 == '\x02') {
      pcVar7 = getenv("SHELL");
      if ((pcVar7 == (char *)0x0) || (*pcVar7 == '\0')) {
        uVar8 = dcgettext(0,"no SHELL environment variable, and no shell type option given",5);
        error(1,0,uVar8);
        goto LAB_00102ad4;
      }
      pcVar7 = last_component(pcVar7);
      iVar4 = strcmp(pcVar7,"csh");
      if (iVar4 == 0) {
        cVar13 = '\x01';
      }
      else {
        iVar4 = strcmp(pcVar7,"tcsh");
        cVar13 = iVar4 == 0;
      }
    }
LAB_0010281e:
    _obstack_begin(&lsc_obstack,0,0,(anon_subr_void_ptr_size_t *)PTR_malloc_0010cfe8,rpl_free);
    if (argc != iVar5) {
      pcVar7 = *ppcVar1;
      iVar5 = strcmp(pcVar7,"-");
      if ((iVar5 == 0) || (pFVar6 = freopen_safer(pcVar7,"r",stdin), pFVar6 != (FILE *)0x0)) {
        bVar3 = dc_parse_stream(stdin,pcVar7);
        iVar5 = rpl_fclose(stdin);
        if (iVar5 == 0) goto LAB_0010289f;
      }
      uVar11 = 0;
      uVar8 = quotearg_n_style_colon(0,3,pcVar7);
      piVar9 = __errno_location();
      error(0,*piVar9,"%s",uVar8);
      goto LAB_001029d6;
    }
    bVar3 = dc_parse_stream((FILE *)0x0,(char *)0x0);
LAB_0010289f:
    pcVar7 = lsc_obstack.object_base;
    uVar11 = (uint)bVar3;
    if (bVar3 == 0) goto LAB_001029d6;
    __n = (long)lsc_obstack.next_free - (long)lsc_obstack.object_base;
    if (lsc_obstack.next_free == lsc_obstack.object_base) {
      lsc_obstack._80_1_ = lsc_obstack._80_1_ | 2;
    }
    pcVar12 = "\';\nexport LS_COLORS\n";
    __s = "setenv LS_COLORS \'";
    lsc_obstack.object_base =
         (char *)((ulong)(lsc_obstack.next_free + lsc_obstack.alignment_mask) &
                 ~lsc_obstack.alignment_mask);
    if ((ulong)((long)lsc_obstack.chunk_limit - (long)lsc_obstack.chunk) <
        (ulong)((long)(char *)((ulong)(lsc_obstack.next_free + lsc_obstack.alignment_mask) &
                              ~lsc_obstack.alignment_mask) - (long)lsc_obstack.chunk)) {
      lsc_obstack.object_base = lsc_obstack.chunk_limit;
    }
    if (cVar13 == '\0') {
      __s = "LS_COLORS=\'";
    }
    else {
      pcVar12 = "\'\n";
    }
    lsc_obstack.next_free = lsc_obstack.object_base;
    if (print_ls_colors == false) {
      fputs_unlocked(__s,stdout);
    }
    fwrite_unlocked(pcVar7,1,__n,stdout);
    if (print_ls_colors == false) {
      fputs_unlocked(pcVar12,stdout);
      goto LAB_001029d6;
    }
  }
  uVar11 = 1;
LAB_001029d6:
  return uVar11 ^ 1;
}

