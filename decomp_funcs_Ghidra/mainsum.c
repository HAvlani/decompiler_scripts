
int main(int argc,char **argv)

{
  uchar *puVar1;
  long lVar2;
  char *__s1;
  FILE *__stream;
  int iVar3;
  int iVar4;
  long lVar5;
  FILE *fp;
  int *piVar6;
  char **ppcVar7;
  long in_FS_OFFSET;
  undefined8 uVar8;
  char **local_78;
  byte local_59;
  uintmax_t length;
  uchar bin_buffer_unaligned [6];
  
  lVar2 = *(long *)(in_FS_OFFSET + 0x28);
  set_program_name(*argv);
  setlocale(6,"");
  bindtextdomain("coreutils");
  textdomain("coreutils");
  atexit(close_stdout);
  setvbuf(stdout,(char *)0x0,1,0);
  while( true ) {
    uVar8 = 0x10286e;
    iVar3 = getopt_long(argc,argv,&DAT_001080dc,long_options,0);
    if (iVar3 == -1) break;
    if (iVar3 == 0x72) {
      sum_algorithm = bsd;
    }
    else {
      if (iVar3 < 0x73) {
        if (iVar3 == -0x83) {
          version_etc((FILE *)stdout,"sum","GNU coreutils",Version,"Kayvan Aghaiepour",
                      "David MacKenzie",0,uVar8);
                    /* WARNING: Subroutine does not return */
          exit(0);
        }
        if (iVar3 == -0x82) {
                    /* WARNING: Subroutine does not return */
          usage(0);
        }
        goto LAB_00102b7a;
      }
      if (iVar3 != 0x73) goto LAB_00102b7a;
      sum_algorithm = sysv;
    }
  }
  local_78 = argv + argc;
  lVar5 = (long)optind;
  if (optind == argc) {
    *local_78 = "-";
    local_78 = local_78 + 1;
  }
  ppcVar7 = argv + lVar5;
  if (ppcVar7 < local_78) {
    local_59 = 1;
    puVar1 = bin_buffer_unaligned + 2;
    do {
      __s1 = *ppcVar7;
      iVar3 = strcmp(__s1,"-");
      __stream = stdin;
      if (iVar3 == 0) {
        have_read_stdin = true;
        fadvise((FILE *)stdin,FADVISE_SEQUENTIAL);
        iVar3 = (*sumfns[sum_algorithm])((FILE *)__stream,puVar1,&length);
        if (iVar3 != 0) {
          piVar6 = __errno_location();
          iVar3 = *piVar6;
        }
        clearerr_unlocked(__stream);
        goto LAB_001029a9;
      }
      fp = fopen_safer(__s1,"r");
      if (fp == (FILE *)0x0) {
        uVar8 = quotearg_n_style_colon(0,3,__s1);
        piVar6 = __errno_location();
        error(0,*piVar6,&DAT_00109152,uVar8);
        local_59 = 0;
      }
      else {
        fadvise(fp,FADVISE_SEQUENTIAL);
        iVar3 = (*sumfns[sum_algorithm])(fp,puVar1,&length);
        if (iVar3 == 0) {
          iVar3 = rpl_fclose(fp);
          if (iVar3 != 0) {
LAB_00102a6d:
            piVar6 = __errno_location();
            iVar3 = *piVar6;
LAB_001029a9:
            if (iVar3 != 0) goto LAB_00102a9e;
          }
          (*sum_output_fns[sum_algorithm])(__s1,0,puVar1,false,'\n',optind != argc,length);
        }
        else {
          piVar6 = __errno_location();
          iVar3 = *piVar6;
          iVar4 = rpl_fclose(fp);
          if (iVar4 == 0) goto LAB_001029a9;
          if (iVar3 == 0) goto LAB_00102a6d;
LAB_00102a9e:
          uVar8 = quotearg_n_style_colon(0,3,__s1);
          error(0,iVar3,&DAT_00109152,uVar8);
          local_59 = 0;
        }
      }
      ppcVar7 = ppcVar7 + 1;
    } while (ppcVar7 < local_78);
  }
  else {
    local_59 = 1;
  }
  if (have_read_stdin != false) {
    iVar3 = rpl_fclose((FILE *)stdin);
    if (iVar3 == -1) {
      uVar8 = dcgettext(0,"standard input",5);
      piVar6 = __errno_location();
      error(1,*piVar6,uVar8);
LAB_00102b7a:
                    /* WARNING: Subroutine does not return */
      usage(1);
    }
  }
  if (lVar2 == *(long *)(in_FS_OFFSET + 0x28)) {
    return (int)(local_59 ^ 1);
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

