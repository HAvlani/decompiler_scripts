
/* WARNING: Could not reconcile some variable overlaps */

int main(int argc,char **argv)

{
  char cVar1;
  bool bVar2;
  bool bVar3;
  int iVar4;
  char *pcVar5;
  char *pcVar6;
  int *piVar7;
  char *pcVar8;
  ulong uVar9;
  size_t __n;
  char *pcVar10;
  long lVar11;
  byte bVar12;
  undefined auVar13 [16];
  undefined8 uVar14;
  char *local_68;
  undefined auStack96 [6];
  char local_5a;
  char local_59;
  char *local_58;
  long local_50;
  ulong local_48;
  char *local_40;
  
  bVar12 = 0;
  bVar3 = false;
  bVar2 = false;
  pcVar8 = (char *)0x0;
  set_program_name(*argv);
  setlocale(6,"");
  bindtextdomain("coreutils","/root/coreutils-builder/share/locale");
  textdomain("coreutils");
  atexit(maybe_close_stdout);
  local_59 = '\0';
  local_5a = '\0';
  local_68 = (char *)0x0;
  local_58 = (char *)0x0;
  while( true ) {
    uVar14 = 0x102791;
    iVar4 = getopt_long(argc,argv,"dp:qtuV",longopts,0);
    if (iVar4 == -1) break;
    if (0x80 < iVar4) goto switchD_001027bd_caseD_57;
    if (iVar4 < 0x56) {
      if (iVar4 == -0x83) {
switchD_001027bd_caseD_56:
        version_etc(stdout,"mktemp","GNU coreutils",Version,"Jim Meyering","Eric Blake",0,uVar14);
                    /* WARNING: Subroutine does not return */
        exit(0);
      }
      if (iVar4 == -0x82) {
                    /* WARNING: Subroutine does not return */
        usage(0);
      }
      goto switchD_001027bd_caseD_57;
    }
    switch(iVar4) {
    case 0x56:
      goto switchD_001027bd_caseD_56;
    default:
      goto switchD_001027bd_caseD_57;
    case 100:
      local_5a = '\x01';
      break;
    case 0x70:
      local_58 = optarg;
      pcVar8 = (char *)0x1;
      break;
    case 0x71:
      bVar3 = true;
      break;
    case 0x74:
      bVar2 = true;
      pcVar8 = (char *)0x1;
      break;
    case 0x75:
      local_59 = '\x01';
      break;
    case 0x80:
      local_68 = optarg;
    }
  }
  if (1 < (uint)(argc - optind)) {
    uVar14 = dcgettext(0,"too many templates",5);
    error(0,0,uVar14);
switchD_001027bd_caseD_57:
                    /* WARNING: Subroutine does not return */
    usage(1);
  }
  if (argc == optind) {
    pcVar8 = (char *)0x1;
    pcVar10 = "tmp.XXXXXXXXXX";
    if (local_68 == (char *)0x0) goto LAB_00102bb9;
    __n = 0xe;
    pcVar8 = (char *)0x1;
    pcVar10 = "tmp.XXXXXXXXXX";
  }
  else {
    pcVar10 = argv[optind];
    if (local_68 == (char *)0x0) goto LAB_00102bb9;
    uVar9 = 0xffffffffffffffff;
    pcVar5 = pcVar10;
    do {
      if (uVar9 == 0) break;
      uVar9 = uVar9 - 1;
      cVar1 = *pcVar5;
      pcVar5 = pcVar5 + (ulong)bVar12 * -2 + 1;
    } while (cVar1 != '\0');
    __n = ~uVar9 - 1;
    if ((__n == 0) || (pcVar10[~uVar9 - 2] != 'X')) {
LAB_00102d43:
      pcVar8 = quote(pcVar10);
      uVar14 = dcgettext(0,"with --suffix, template %s must end in X",5);
      auVar13 = error(1,0,uVar14,pcVar8);
      pcVar8 = local_68;
      local_68 = SUB168(auVar13,0);
      (*(code *)PTR___libc_start_main_0010afc8)
                (main,pcVar8,auStack96,__libc_csu_init,__libc_csu_fini,SUB168(auVar13 >> 0x40,0),
                 &local_68);
      do {
                    /* WARNING: Do nothing block with infinite loop */
      } while( true );
    }
  }
  local_48 = 0xffffffffffffffff;
  pcVar5 = local_68;
  do {
    if (local_48 == 0) break;
    local_48 = local_48 - 1;
    cVar1 = *pcVar5;
    pcVar5 = pcVar5 + (ulong)bVar12 * -2 + 1;
  } while (cVar1 != '\0');
  local_48 = ~local_48;
  local_50 = local_48 - 1;
  local_40 = pcVar10;
  pcVar5 = xcharalloc(__n + local_48);
  memcpy(pcVar5,local_40,__n);
  pcVar10 = pcVar5 + __n;
  memcpy(pcVar10,local_68,local_48);
LAB_00102917:
  if ((local_50 != 0) && (pcVar6 = last_component(pcVar10), pcVar10 != pcVar6)) {
LAB_00102d11:
    pcVar8 = quote(pcVar10);
    uVar14 = dcgettext(0,"invalid suffix %s, contains directory separator",5);
    pcVar10 = (char *)0x0;
    error(1,0,uVar14,pcVar8);
    goto LAB_00102d43;
  }
  uVar9 = 0;
  lVar11 = (long)pcVar10 - (long)pcVar5;
  if (lVar11 == 0) {
LAB_00102cdf:
    pcVar8 = quote(pcVar5);
    uVar14 = dcgettext(0,"too few X\'s in template %s",5);
    error(1,0,uVar14,pcVar8);
    goto LAB_00102d11;
  }
  do {
    lVar11 = lVar11 + -1;
    if (pcVar5[lVar11] != 'X') break;
    uVar9 = uVar9 + 1;
  } while (lVar11 != 0);
  if (uVar9 < 3) goto LAB_00102cdf;
  pcVar10 = pcVar5;
  if ((char)pcVar8 == '\0') goto LAB_001029a9;
  if (bVar2) {
    pcVar10 = getenv("TMPDIR");
    if ((((pcVar10 == (char *)0x0) || (*pcVar10 == '\0')) &&
        (pcVar10 = "/tmp", local_58 != (char *)0x0)) && (*local_58 != '\0')) {
      pcVar10 = local_58;
    }
    pcVar8 = last_component(pcVar5);
    if (pcVar5 == pcVar8) goto LAB_0010298e;
    pcVar8 = quote(pcVar5);
    uVar14 = dcgettext(0,"invalid template, %s, contains directory separator",5);
    pcVar10 = (char *)0x0;
    error(1,0,uVar14);
LAB_00102bb9:
    pcVar5 = xstrdup(pcVar10);
    pcVar6 = strrchr(pcVar5,0x58);
    pcVar10 = pcVar6 + 1;
    if (pcVar6 == (char *)0x0) {
      uVar9 = 0xffffffffffffffff;
      pcVar10 = pcVar5;
      do {
        if (uVar9 == 0) break;
        uVar9 = uVar9 - 1;
        cVar1 = *pcVar10;
        pcVar10 = pcVar10 + (ulong)bVar12 * -2 + 1;
      } while (cVar1 != '\0');
      pcVar10 = pcVar5 + (~uVar9 - 1);
    }
    uVar9 = 0xffffffffffffffff;
    pcVar6 = pcVar10;
    do {
      if (uVar9 == 0) break;
      uVar9 = uVar9 - 1;
      cVar1 = *pcVar6;
      pcVar6 = pcVar6 + (ulong)bVar12 * -2 + 1;
    } while (cVar1 != '\0');
    local_50 = ~uVar9 - 1;
    goto LAB_00102917;
  }
  if (((local_58 == (char *)0x0) || (pcVar10 = local_58, *local_58 == '\0')) &&
     ((pcVar10 = getenv("TMPDIR"), pcVar10 == (char *)0x0 || (*pcVar10 == '\0')))) {
    pcVar10 = "/tmp";
  }
  if (*pcVar5 == '/') {
    pcVar8 = quote(pcVar5);
    uVar14 = dcgettext(0,"invalid template, %s; with --tmpdir, it may not be absolute",5);
    error(1,0,uVar14,pcVar8);
    goto LAB_00102cdf;
  }
LAB_0010298e:
  pcVar10 = file_name_concat(pcVar10,pcVar5,(char **)0x0);
  rpl_free(pcVar5);
LAB_001029a9:
  pcVar8 = xstrdup(pcVar10);
  if (local_5a == '\0') {
    if (local_59 == '\0') {
      iVar4 = gen_tempname_len(pcVar8,(int)local_50,0,0,uVar9);
      if ((-1 < iVar4) && (iVar4 = close(iVar4), iVar4 == 0)) goto LAB_00102c0c;
    }
    else {
      iVar4 = gen_tempname_len(pcVar8,(int)local_50,0,2,uVar9);
      if (-1 < iVar4) {
        puts(pcVar8);
        return 0;
      }
    }
    if (bVar3) {
      return 1;
    }
    pcVar8 = quote(pcVar10);
    pcVar10 = "failed to create file via template %s";
  }
  else {
    if (local_59 == '\0') {
      iVar4 = gen_tempname_len(pcVar8,(int)local_50,0,1,uVar9);
      if (iVar4 == 0) {
LAB_00102c0c:
        puts(pcVar8);
        stdout_closed = true;
        iVar4 = close_stream(stdout);
        if (iVar4 == 0) {
          return 0;
        }
        piVar7 = __errno_location();
        iVar4 = *piVar7;
        remove(pcVar8);
        if (bVar3) {
          return 1;
        }
        uVar14 = dcgettext(0,"write error",5);
        error(0,iVar4,uVar14);
        return 1;
      }
    }
    else {
      iVar4 = gen_tempname_len(pcVar8,(int)local_50,0,2,uVar9);
      if (iVar4 == 0) {
        puts(pcVar8);
        return 0;
      }
    }
    if (bVar3) {
      return 1;
    }
    pcVar8 = quote(pcVar10);
    pcVar10 = "failed to create directory via template %s";
  }
  uVar14 = dcgettext(0,pcVar10,5);
  piVar7 = __errno_location();
  error(0,*piVar7,uVar14,pcVar8);
  return 1;
}

