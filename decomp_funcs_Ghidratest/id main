
int main(int argc,char **argv)

{
  _Bool _Var1;
  _Bool _Var2;
  int iVar3;
  ulong uVar4;
  char *pcVar5;
  int *piVar6;
  char *pcVar7;
  passwd *ppVar8;
  int *piVar9;
  long in_FS_OFFSET;
  undefined auVar10 [16];
  undefined8 uVar11;
  char *pw_name;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  set_program_name(*argv);
  setlocale(6,"");
  bindtextdomain("coreutils","/root/coreutils-builder/share/locale");
  textdomain("coreutils");
  atexit(close_stdout);
  do {
    uVar11 = 0x10283d;
    iVar3 = getopt_long(argc,argv,"agnruzGZ");
    _Var2 = just_group;
    _Var1 = just_user;
    if (iVar3 == -1) {
      uVar4 = (ulong)optind;
      piVar9 = (int *)(long)(argc - optind);
      if (1 < (uint)just_user + (uint)just_group + (uint)just_group_list) {
        uVar11 = dcgettext(0,"cannot print \"only\" of more than one choice",5);
        error(1,0,uVar11);
LAB_00102cbb:
        uVar11 = dcgettext(0,"cannot get effective GID",5);
        error(1,*piVar9,uVar11);
        goto LAB_00102cdf;
      }
      if (((just_user | just_group) == 0) && (just_group_list == false)) goto LAB_001029a9;
      if (piVar9 != (int *)0x0) goto LAB_001029d9;
      if (just_user == false) {
        if (just_group != false) goto LAB_00102b0c;
        if (just_group_list == false) goto LAB_00102c4b;
        goto LAB_00102ae5;
      }
      if (use_real == false) goto LAB_00102c02;
      piVar9 = __errno_location();
      *piVar9 = 0;
      ruid = getuid();
      if ((ruid != 0xffffffff) || (*piVar9 == 0)) goto LAB_00102b4d;
      break;
    }
    if (0x7a < iVar3) goto switchD_00102867_caseD_48;
    if (iVar3 < 0x47) {
      if (iVar3 == -0x83) {
        version_etc(stdout,"id","GNU coreutils",Version,"Arnold Robbins","David MacKenzie",0,uVar11)
        ;
                    /* WARNING: Subroutine does not return */
        exit(0);
      }
      if (iVar3 == -0x82) {
                    /* WARNING: Subroutine does not return */
        usage(0);
      }
      goto switchD_00102867_caseD_48;
    }
    switch(iVar3) {
    case 0x47:
      just_group_list = true;
      break;
    case 0x5a:
      uVar11 = dcgettext(0,"--context (-Z) works only on an SELinux-enabled kernel",5);
      error(1,0,uVar11);
    default:
switchD_00102867_caseD_48:
                    /* WARNING: Subroutine does not return */
      usage(1);
    case 0x61:
      break;
    case 0x67:
      just_group = true;
      break;
    case 0x6e:
      use_name = true;
      break;
    case 0x72:
      use_real = true;
      break;
    case 0x75:
      just_user = true;
      break;
    case 0x7a:
      opt_zero = true;
    }
  } while( true );
LAB_00102985:
  uVar11 = dcgettext(0,"cannot get real UID",5);
  uVar4 = error(1,*piVar9,uVar11);
LAB_001029a9:
  if ((use_real != false) || (use_name != false)) goto LAB_00102d03;
  if (opt_zero != false) goto LAB_00102cdf;
  if (piVar9 != (int *)0x0) goto LAB_001029d9;
  getenv("POSIXLY_CORRECT");
LAB_00102c4b:
  piVar9 = __errno_location();
  *piVar9 = 0;
  euid = geteuid();
  if (euid != 0xffffffff) goto LAB_00102ae5;
  if (*piVar9 != 0) {
LAB_00102d2c:
    uVar11 = dcgettext(0,"cannot get effective UID",5);
    auVar10 = error(1,*piVar9,uVar11);
    pcVar5 = pw_name;
    pw_name = SUB168(auVar10,0);
    (*(code *)PTR___libc_start_main_0010bfd8)
              (main,pcVar5,&local_30,__libc_csu_init,__libc_csu_fini,SUB168(auVar10 >> 0x40,0),
               &pw_name);
    do {
                    /* WARNING: Do nothing block with infinite loop */
    } while( true );
  }
  if (_Var1 != false) goto LAB_00102c2d;
  if (_Var2 == false) goto LAB_00102ae5;
LAB_00102b0c:
  while( true ) {
    piVar9 = __errno_location();
    *piVar9 = 0;
    egid = getegid();
    if ((egid == 0xffffffff) && (*piVar9 != 0)) goto LAB_00102cbb;
    *piVar9 = 0;
    rgid = getgid();
    if ((rgid != 0xffffffff) || (*piVar9 == 0)) goto LAB_00102b4d;
    uVar11 = dcgettext(0,"cannot get real GID",5);
    error(1,*piVar9,uVar11);
LAB_00102c02:
    piVar9 = __errno_location();
    *piVar9 = 0;
    euid = geteuid();
    if (euid != 0xffffffff) goto LAB_00102b4d;
    if (*piVar9 != 0) goto LAB_00102d2c;
LAB_00102c2d:
    if (use_real == false) goto LAB_00102b4d;
LAB_00102ae5:
    piVar9 = __errno_location();
    *piVar9 = 0;
    ruid = getuid();
    if ((ruid == 0xffffffff) && (*piVar9 != 0)) break;
    if (_Var1 != false) goto LAB_00102b4d;
  }
  goto LAB_00102985;
LAB_00102cdf:
  uVar11 = dcgettext(0,"option --zero not permitted in default format",5);
  error(1,0,uVar11);
LAB_00102d03:
  uVar11 = dcgettext(0,"cannot print only names or real IDs in default format",5);
  error(1,0,uVar11);
  goto LAB_00102d27;
LAB_00102b4d:
  print_stuff((char *)0x0);
  goto LAB_00102b54;
LAB_001029d9:
  iVar3 = (int)uVar4;
  multiple_users = (int *)0x1 < piVar9;
  while (uVar4 < (ulong)((long)piVar9 + (long)iVar3)) {
    pcVar5 = argv[uVar4];
    pw_name = (char *)0x0;
    if ((*pcVar5 == '\0') ||
       (pcVar7 = parse_user_spec(pcVar5,&euid,(gid_t *)0x0,&pw_name,(char **)0x0),
       pcVar7 != (char *)0x0)) {
LAB_001029ef:
      pcVar5 = quote(pcVar5);
      uVar11 = dcgettext(0,"%s: no such user",5);
      piVar6 = __errno_location();
      error(0,*piVar6,uVar11,pcVar5);
      ok = false;
    }
    else {
      if (pw_name == (char *)0x0) {
        ppVar8 = getpwuid(euid);
      }
      else {
        ppVar8 = getpwnam(pw_name);
      }
      if (ppVar8 == (passwd *)0x0) goto LAB_001029ef;
      if (pw_name == (char *)0x0) {
        pw_name = xstrdup(ppVar8->pw_name);
      }
      euid = ppVar8->pw_uid;
      egid = ppVar8->pw_gid;
      rgid = egid;
      ruid = euid;
      print_stuff(pw_name);
    }
    rpl_free(pw_name);
    optind = optind + 1;
    uVar4 = (ulong)optind;
  }
LAB_00102b54:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return ok ^ 1;
  }
LAB_00102d27:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

