
int main(int argc,char **argv)

{
  char cVar1;
  long lVar2;
  bool bVar3;
  int iVar4;
  strtol_error sVar5;
  int *piVar6;
  char *pcVar7;
  int *piVar8;
  char *pcVar9;
  undefined8 uVar10;
  char **__argv;
  char *pcVar11;
  uint uVar12;
  anon_struct_conflict7ce *paVar13;
  char **ppcVar14;
  long in_FS_OFFSET;
  char *var;
  char *LD_PRELOAD;
  uintmax_t tmp_size;
  char *search_path [3];
  stat sb;
  
  lVar2 = *(long *)(in_FS_OFFSET + 0x28);
  set_program_name(*argv);
  setlocale(6,"");
  bindtextdomain("coreutils","/root/coreutils-builder/share/locale");
  textdomain("coreutils");
  exit_failure = 0x7d;
  atexit(close_stdout);
LAB_001027cf:
  piVar6 = (int *)0x0;
  iVar4 = getopt_long(argc,argv,&DAT_00109101);
  pcVar9 = optarg;
  if (iVar4 != -1) {
    if (iVar4 == -0x82) {
                    /* WARNING: Subroutine does not return */
      usage(0);
    }
    if (iVar4 < -0x81) {
      if (iVar4 == -0x83) {
        version_etc(stdout,"stdbuf","GNU coreutils",Version,"Padraig Brady",0);
                    /* WARNING: Subroutine does not return */
        exit(0);
      }
    }
    else {
      uVar12 = iVar4 - 0x65;
      if ((uVar12 < 0xb) && ((1 << ((byte)uVar12 & 0x3f) & 0x411U) != 0)) {
        uVar12 = *(uint *)(CSWTCH_56 + (ulong)uVar12 * 4);
        if (2 < uVar12) {
                    /* WARNING: Subroutine does not return */
          __assert_fail("0 <= opt_fileno && opt_fileno < ARRAY_CARDINALITY (stdbuf)","src/stdbuf.c",
                        0x150,"main");
        }
        stdbuf[(int)uVar12].optc = iVar4;
        do {
          cVar1 = *pcVar9;
          if (cVar1 < '\x0e') {
            if (cVar1 < '\t') goto LAB_0010288b;
          }
          else if (cVar1 != ' ') goto LAB_0010288b;
          pcVar9 = pcVar9 + 1;
          optarg = pcVar9;
        } while( true );
      }
    }
    goto LAB_00102856;
  }
  __argv = argv + optind;
  paVar13 = stdbuf;
  bVar3 = false;
  if (argc - optind < 1) {
    pcVar9 = "missing operand";
  }
  else {
    do {
      if (paVar13->optarg != (char *)0x0) {
        uVar12 = paVar13->optc + 0x80;
        if (*paVar13->optarg == 'L') {
          if (uVar12 < 0x180) {
            __ctype_toupper_loc();
          }
          iVar4 = rpl_asprintf(&var,"%s%c=L","_STDBUF_");
        }
        else {
          piVar6 = (int *)paVar13->size;
          if (uVar12 < 0x180) {
            __ctype_toupper_loc();
          }
          iVar4 = rpl_asprintf(&var,"%s%c=%lu","_STDBUF_");
        }
        if (iVar4 < 0) goto LAB_00102ca1;
        iVar4 = putenv(var);
        if (iVar4 != 0) {
          pcVar9 = quote(var);
          uVar10 = dcgettext(0,"failed to update the environment with %s",5);
          piVar6 = __errno_location();
          error(0x7d,*piVar6,uVar10,pcVar9);
          goto LAB_00102d52;
        }
        bVar3 = true;
      }
      pcVar9 = program_name;
      paVar13 = paVar13 + 1;
    } while (paVar13 != (anon_struct_conflict7ce *)&program_path);
    if (bVar3) {
      pcVar7 = strchr(program_name,0x2f);
      if (pcVar7 == (char *)0x0) {
        pcVar7 = xreadlink("/proc/self/exe");
        if (pcVar7 == (char *)0x0) goto LAB_00102d9c;
        program_path = dir_name(pcVar7);
        goto LAB_00102c01;
      }
      program_path = dir_name(pcVar9);
      do {
        ppcVar14 = search_path;
        pcVar7 = getenv("LD_PRELOAD");
        search_path[2] = (char *)0x0;
        search_path[0] = program_path;
        search_path[1] = "/root/coreutils-builder/libexec/coreutils";
        pcVar9 = program_path;
        while (*pcVar9 != '\0') {
          iVar4 = rpl_asprintf((char **)&tmp_size,"%s/%s",pcVar9,"libstdbuf.so");
          if (iVar4 < 0) goto LAB_00102ca1;
          iVar4 = __xstat(1,(char *)tmp_size,(stat *)&sb);
          if (iVar4 == 0) goto LAB_00102ac6;
          ppcVar14 = ppcVar14 + 1;
          rpl_free((void *)tmp_size);
          pcVar9 = *ppcVar14;
          if (pcVar9 == (char *)0x0) {
            pcVar9 = quote("libstdbuf.so");
            uVar10 = dcgettext(0,"failed to find %s",5);
            error(0x7d,0,uVar10,pcVar9);
            goto LAB_00102cfb;
          }
        }
        tmp_size = (uintmax_t)xstrdup("libstdbuf.so");
LAB_00102ac6:
        piVar6 = (int *)tmp_size;
        if (pcVar7 == (char *)0x0) {
          iVar4 = rpl_asprintf(&LD_PRELOAD,"%s=%s","LD_PRELOAD",tmp_size);
        }
        else {
          iVar4 = rpl_asprintf(&LD_PRELOAD,"%s=%s:%s","LD_PRELOAD",pcVar7);
        }
        if (iVar4 < 0) goto LAB_00102ca1;
        rpl_free((void *)tmp_size);
        uVar12 = putenv(LD_PRELOAD);
        pcVar9 = (char *)(ulong)uVar12;
        piVar8 = __errno_location();
        if (uVar12 == 0) {
          rpl_free(program_path);
          execvp(*__argv,__argv);
          iVar4 = *piVar8;
          pcVar9 = quote(*__argv);
          uVar10 = dcgettext(0,"failed to run command %s",5);
          error(0,*piVar8,uVar10,pcVar9);
          if (lVar2 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
            __stack_chk_fail();
          }
          return (iVar4 == 2) + 0x7e;
        }
        __argv = (char **)quote(LD_PRELOAD);
        uVar10 = dcgettext(0,"failed to update the environment with %s",5);
        error(0x7d,*piVar8,uVar10,__argv);
LAB_00102d9c:
        pcVar7 = getenv("PATH");
        if (pcVar7 != (char *)0x0) {
          pcVar7 = xstrdup(pcVar7);
          pcVar11 = strtok(pcVar7,":");
          while (pcVar11 != (char *)0x0) {
            pcVar11 = file_name_concat(pcVar11,pcVar9,(char **)0x0);
            iVar4 = access(pcVar11,1);
            if (iVar4 == 0) {
              program_path = dir_name(pcVar11);
              rpl_free(pcVar11);
              break;
            }
            rpl_free(pcVar11);
            pcVar11 = strtok((char *)0x0,":");
          }
        }
LAB_00102c01:
        rpl_free(pcVar7);
        if (program_path == (char *)0x0) {
          program_path = xstrdup("/root/coreutils-builder/lib/coreutils");
        }
      } while( true );
    }
LAB_00102d52:
    pcVar9 = "you must specify a buffering mode option";
  }
LAB_00102922:
  uVar10 = dcgettext(0,pcVar9,5);
  error(0,0,uVar10);
LAB_00102856:
                    /* WARNING: Subroutine does not return */
  usage(0x7d);
LAB_0010288b:
  stdbuf[(int)uVar12].optarg = pcVar9;
  if ((iVar4 == 0x69) && (*pcVar9 == 'L')) {
    pcVar9 = "line buffering stdin is meaningless";
    goto LAB_00102922;
  }
  if ((*pcVar9 == 'L') && (pcVar9[1] == '\0')) goto LAB_001027cf;
  sVar5 = xstrtoumax(pcVar9,(char **)0x0,10,&tmp_size,"EGkKMPTYZ0");
  piVar6 = __errno_location();
  if (sVar5 == LONGINT_OK) {
    *piVar6 = 0;
    stdbuf[(int)uVar12].size = tmp_size;
    goto LAB_001027cf;
  }
  if (sVar5 == LONGINT_OVERFLOW) {
LAB_00102cfb:
    iVar4 = 0x4b;
  }
  else {
    iVar4 = *piVar6;
  }
  *piVar6 = iVar4;
  pcVar9 = quote(optarg);
  uVar10 = dcgettext(0,"invalid mode %s",5);
  error(0x7d,*piVar6,uVar10,pcVar9);
LAB_00102ca1:
                    /* WARNING: Subroutine does not return */
  xalloc_die();
}

