
int main(int argc,char **argv)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  long lVar5;
  timespec *file;
  char *arg;
  char cVar6;
  byte bVar7;
  _Bool _Var8;
  int iVar9;
  int iVar10;
  ptrdiff_t pVar11;
  char *pcVar12;
  undefined8 uVar13;
  int *piVar14;
  uint *puVar15;
  tm *ptVar16;
  timespec *ts;
  timespec *file_00;
  uint uVar17;
  uint uVar18;
  long in_FS_OFFSET;
  timespec now;
  timespec notnow;
  timespec notnow1;
  stat ref_stats;
  
  cVar6 = '\0';
  lVar5 = *(long *)(in_FS_OFFSET + 0x28);
  set_program_name(*argv);
  setlocale(6,"");
  bindtextdomain("coreutils","/root/coreutils-builder/share/locale");
  textdomain("coreutils");
  atexit(close_stdout);
  use_ref = false;
  change_times = 0;
  no_create = false;
  pcVar12 = (char *)0x0;
switchD_00103a53_caseD_66:
  iVar9 = getopt_long(argc,argv,"acd:fhmr:t:");
  arg = ref_file;
  if (iVar9 == -1) {
    if (change_times == 0) {
      change_times = 3;
    }
    if (cVar6 == '\0') {
      if (use_ref != false) {
        if (no_dereference == false) {
          iVar9 = __xstat(1,ref_file,(stat *)&ref_stats);
        }
        else {
          iVar9 = __lxstat(1,ref_file,(stat *)&ref_stats);
        }
        if (iVar9 == 0) {
          newtime[0].tv_sec = ref_stats.st_atim.tv_sec;
          newtime[0].tv_nsec = ref_stats.st_atim.tv_nsec;
          newtime[1].tv_sec = ref_stats.st_mtim.tv_sec;
          newtime[1].tv_nsec = ref_stats.st_mtim.tv_nsec;
          if (pcVar12 != (char *)0x0) {
            if ((change_times & 1U) != 0) {
              get_reldate(newtime,pcVar12,newtime);
            }
            if ((change_times & 2U) != 0) {
              get_reldate(newtime + 1,pcVar12,newtime + 1);
            }
          }
          goto LAB_00103be3;
        }
        pcVar12 = quotearg_style(shell_escape_always_quoting_style,arg);
        uVar13 = dcgettext(0,"failed to get attributes of %s",5);
        piVar14 = __errno_location();
        error(1,*piVar14,uVar13,pcVar12);
        goto LAB_00104182;
      }
      if (pcVar12 == (char *)0x0) {
LAB_00103f98:
        if ((argc - optind < 2) ||
           ((iVar9 = posix2_version(), 0x30daf < iVar9 ||
            (_Var8 = posixtime(&newtime[0].tv_sec,argv[optind],9), _Var8 == false)))) {
          if (change_times == 3) {
            amtime_now = true;
          }
          else {
            newtime[0].tv_nsec = 0x3fffffff;
            newtime[1].tv_nsec = 0x3fffffff;
          }
          goto LAB_00103be3;
        }
        newtime[0].tv_nsec = 0;
        newtime[1].tv_sec = newtime[0].tv_sec;
        newtime[1].tv_nsec = 0;
        pcVar12 = getenv("POSIXLY_CORRECT");
        if (pcVar12 == (char *)0x0) goto LAB_001041b8;
        goto LAB_00104137;
      }
      gettime(&now);
      get_reldate(newtime,pcVar12,&now);
      newtime[1].tv_sec = newtime[0].tv_sec;
      newtime[1].tv_nsec = newtime[0].tv_nsec;
      if (((change_times == 3) && (newtime[0].tv_sec == now.tv_sec)) &&
         (newtime[0].tv_nsec == now.tv_nsec)) {
        notnow.tv_sec = now.tv_sec ^ 1;
        notnow.tv_nsec = now.tv_nsec;
        get_reldate(&notnow1,pcVar12,&notnow);
        if ((notnow1.tv_sec == notnow.tv_sec) && (notnow1.tv_nsec == notnow.tv_nsec))
        goto LAB_00103f98;
      }
      goto LAB_00103be3;
    }
    if ((pcVar12 == (char *)0x0) && (use_ref == false)) goto LAB_00103be3;
    pcVar12 = "cannot specify times from more than one source";
    goto LAB_0010407f;
  }
  if (iVar9 < 0x81) {
    if (0x60 < iVar9) goto code_r0x00103a4c;
    if (iVar9 == -0x83) {
      version_etc(stdout,"touch","GNU coreutils",Version,"Paul Rubin","Arnold Robbins","Jim Kingdon"
                  ,"David MacKenzie","Randy Smith",0);
                    /* WARNING: Subroutine does not return */
      exit(0);
    }
    if (iVar9 == -0x82) {
                    /* WARNING: Subroutine does not return */
      usage(0);
    }
  }
  goto switchD_00103a53_caseD_62;
code_r0x00103a4c:
  switch(iVar9) {
  case 0x61:
    change_times = change_times | 1;
    break;
  default:
switchD_00103a53_caseD_62:
                    /* WARNING: Subroutine does not return */
    usage(1);
  case 99:
    no_create = true;
    break;
  case 100:
    pcVar12 = optarg;
    break;
  case 0x66:
    break;
  case 0x68:
    no_dereference = true;
    break;
  case 0x6d:
    change_times = change_times | 2;
    break;
  case 0x72:
    ref_file = optarg;
    use_ref = true;
    break;
  case 0x74:
    cVar6 = posixtime(&newtime[0].tv_sec,optarg,6);
    if ((_Bool)cVar6 == false) {
LAB_00104182:
      pcVar12 = quote(optarg);
      argc = (int)pcVar12;
      uVar13 = dcgettext(0,"invalid date format %s",5);
      error(1,0,uVar13);
LAB_001041b8:
      ptVar16 = localtime(&newtime[0].tv_sec);
      if (ptVar16 != (tm *)0x0) {
        iVar9 = ptVar16->tm_mon;
        iVar10 = ptVar16->tm_sec;
        iVar1 = ptVar16->tm_min;
        iVar2 = ptVar16->tm_hour;
        iVar3 = ptVar16->tm_mday;
        iVar4 = ptVar16->tm_year;
        pcVar12 = argv[optind];
        uVar13 = dcgettext(0,
                           "warning: \'touch %s\' is obsolete; use \'touch -t %04ld%02d%02d%02d%02d.%02d\'"
                           ,5);
        error(0,0,uVar13,pcVar12,(long)iVar4 + 0x76c,iVar9 + 1,iVar3,iVar2,iVar1,iVar10);
      }
LAB_00104137:
      optind = optind + 1;
LAB_00103be3:
      if (optind != argc) {
        uVar17 = 1;
        if (optind < argc) goto LAB_00103cab;
        goto LAB_00103e5d;
      }
      pcVar12 = "missing file operand";
LAB_0010407f:
      uVar13 = dcgettext(0,pcVar12,5);
      error(0,0,uVar13);
      goto switchD_00103a53_caseD_62;
    }
    newtime[0].tv_nsec = 0;
    newtime[1].tv_sec = newtime[0].tv_sec;
    newtime[1].tv_nsec = 0;
    break;
  case 0x80:
    pVar11 = __xargmatch_internal("--time",optarg,time_args,time_masks,4,argmatch_die,true);
    change_times = change_times | time_masks[pVar11];
  }
  goto switchD_00103a53_caseD_66;
LAB_00103cab:
  file = (timespec *)argv[optind];
  if (*(char *)&file->tv_sec == '-') {
    bVar7 = *(byte *)((long)&file->tv_sec + 1);
    uVar18 = (uint)bVar7;
    iVar9 = 1;
    if (bVar7 != 0) goto LAB_00103cbd;
  }
  else {
LAB_00103cbd:
    if ((no_create == false) && (no_dereference == false)) {
      iVar9 = fd_reopen(0,(char *)file,0x941,0x1b6);
      uVar18 = 0;
      if (iVar9 < 0) {
        puVar15 = (uint *)__errno_location();
        uVar18 = *puVar15;
      }
    }
    else {
      iVar9 = -1;
      uVar18 = 0;
    }
  }
  if (change_times != 3) {
    if (change_times == 2) {
      newtime[0].tv_nsec = 0x3ffffffe;
    }
    else {
      if (change_times != 1) {
                    /* WARNING: Subroutine does not return */
        __assert_fail("change_times == CH_ATIME","src/touch.c",0x93,"touch");
      }
      newtime[1].tv_nsec = 0x3ffffffe;
    }
  }
  ts = newtime;
  if (amtime_now != false) {
    ts = (timespec *)0x0;
  }
  file_00 = (timespec *)0x0;
  if (iVar9 != 1) {
    file_00 = file;
  }
  iVar10 = fdutimensat(iVar9,-100,(char *)file_00,ts,(uint)(no_dereference != false) << 8);
  if (iVar10 == 0) {
    if ((iVar9 == 0) && (iVar9 = close(0), iVar9 != 0)) {
LAB_00103e09:
      pcVar12 = quotearg_style(shell_escape_always_quoting_style,(char *)file);
      uVar13 = dcgettext(0,"failed to close %s",5);
      piVar14 = __errno_location();
      error(0,*piVar14,uVar13,pcVar12);
      uVar18 = 0;
    }
    else {
LAB_00103c8c:
      uVar18 = 1;
    }
  }
  else {
    piVar14 = __errno_location();
    iVar10 = *piVar14;
    if (iVar9 == 0) {
      iVar9 = close(0);
      if (iVar9 != 0) goto LAB_00103e09;
LAB_00103d01:
      if (iVar10 == 0) goto LAB_00103c8c;
      if ((uVar18 != 0) && (uVar18 != 0x15)) {
LAB_00103d15:
        if ((uVar18 != 0x16) ||
           ((iVar9 = __xstat(1,(char *)file,(stat *)&ref_stats), iVar9 != 0 ||
            ((ref_stats.st_mode & 0xf000) != 0x4000)))) {
          pcVar12 = quotearg_style(shell_escape_always_quoting_style,(char *)file);
          uVar13 = dcgettext(0,"cannot touch %s",5);
          error(0,uVar18,uVar13,pcVar12);
          uVar18 = 0;
          goto LAB_00103c91;
        }
      }
      bVar7 = iVar10 == 2 & no_create;
      uVar18 = (uint)bVar7;
      if (bVar7 != 0) goto LAB_00103c91;
    }
    else {
      if ((iVar10 != 9) || (iVar9 != 1)) goto LAB_00103d01;
      if (no_create != false) goto LAB_00103c8c;
      if ((uVar18 != 0) && (iVar10 = 9, uVar18 != 0x15)) goto LAB_00103d15;
      iVar10 = 9;
    }
    pcVar12 = quotearg_style(shell_escape_always_quoting_style,(char *)file);
    uVar13 = dcgettext(0,"setting times of %s",5);
    error(0,iVar10,uVar13,pcVar12);
    uVar18 = 0;
  }
LAB_00103c91:
  uVar17 = uVar17 & uVar18;
  optind = optind + 1;
  if (argc <= optind) {
LAB_00103e5d:
    if (lVar5 == *(long *)(in_FS_OFFSET + 0x28)) {
      return uVar17 ^ 1;
    }
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  goto LAB_00103cab;
}

