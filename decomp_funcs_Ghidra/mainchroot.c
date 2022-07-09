
/* WARNING: Could not reconcile some variable overlaps */

int main(int argc,char **argv)

{
  char *pcVar1;
  bool bVar2;
  gid_t __gid;
  gid_t *pgVar3;
  int iVar4;
  size_t sVar5;
  passwd *ppVar6;
  char *pcVar7;
  int *piVar8;
  char *pcVar9;
  undefined8 uVar10;
  int *piVar11;
  gid_t *__groups;
  __uid_t __uid;
  ulong uVar12;
  char *groups;
  long in_FS_OFFSET;
  undefined auVar13 [16];
  undefined8 uStack120;
  passwd *local_70 [2];
  uid_t uid;
  gid_t gid;
  gid_t *out_gids;
  size_t n_gids;
  gid_t *in_gids;
  long local_40;
  
  bVar2 = false;
  piVar8 = (int *)(ulong)(uint)argc;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  uid = 0xffffffff;
  gid = 0xffffffff;
  out_gids = (gid_t *)0x0;
  n_gids = 0;
  set_program_name(*argv);
  setlocale(6,"");
  bindtextdomain("coreutils","/root/coreutils-builder/share/locale");
  textdomain("coreutils");
  exit_failure = 0x7d;
  atexit(close_stdout);
  pcVar9 = (char *)0x0;
  pcVar1 = (char *)0x0;
  do {
    do {
      groups = pcVar1;
      iVar4 = getopt_long(piVar8,argv,&DAT_001080ee,long_opts,0);
      pcVar7 = optarg;
      if (iVar4 == -1) {
        if (optind < argc) {
          pcVar1 = argv[optind];
          ppVar6 = (passwd *)canonicalize_file_name(pcVar1);
          if ((ppVar6 != (passwd *)0x0) &&
             (local_70[0] = ppVar6, iVar4 = strcmp("/",(char *)ppVar6), ppVar6 = local_70[0],
             iVar4 == 0)) {
            rpl_free(local_70[0]);
            iVar4 = chroot(pcVar1);
            if (iVar4 == 0) {
              local_70[0] = (passwd *)0x0;
              if (!bVar2) goto LAB_00102c08;
LAB_00102a3e:
              if (optind + 1 == (int)piVar8) goto LAB_00102d80;
              argv = argv + (long)optind + 1;
              goto LAB_00102a55;
            }
LAB_00102db0:
            pcVar9 = quotearg_style(shell_escape_always_quoting_style,pcVar1);
            uVar10 = dcgettext(0,"cannot change root directory to %s",5);
            piVar8 = __errno_location();
            error(0x7d,*piVar8,uVar10);
            __groups = in_gids;
            goto LAB_00102ad1;
          }
          rpl_free(ppVar6);
          if (bVar2) {
LAB_00102f4c:
            pcVar9 = quotearg_style(shell_escape_always_quoting_style,"/");
            uVar10 = dcgettext(0,"option --skip-chdir only permitted if NEWROOT is old %s",5);
            error(0,0,uVar10,pcVar9);
                    /* WARNING: Subroutine does not return */
            usage(0x7d);
          }
          if (pcVar9 != (char *)0x0) {
            parse_user_spec(pcVar9,&uid,&gid,(char **)0x0,(char **)0x0);
          }
          if (uid != 0xffffffff) {
            if (groups == (char *)0x0) {
              local_70[0] = getpwuid(uid);
              if (local_70[0] != (passwd *)0x0) goto LAB_00102e64;
              if (gid == 0xffffffff) goto LAB_00102bf8;
              goto LAB_00102eaf;
            }
            __uid = uid;
            if (gid == 0xffffffff) goto LAB_00102e51;
            goto LAB_00102be5;
          }
          local_70[0] = (passwd *)0x0;
LAB_00102d09:
          if (groups != (char *)0x0) goto LAB_00102bee;
          if (gid != 0xffffffff) {
            if (local_70[0] == (passwd *)0x0) {
LAB_00102eaf:
              local_70[0] = (passwd *)0x0;
            }
            else {
              iVar4 = xgetgroups((char *)local_70[0],gid,&out_gids);
              if (0 < iVar4) {
                n_gids = (size_t)iVar4;
              }
            }
          }
LAB_00102bf8:
          iVar4 = chroot(pcVar1);
          if (iVar4 == 0) {
LAB_00102c08:
            iVar4 = chdir("/");
            if (iVar4 != 0) {
              uVar10 = dcgettext(0,"cannot chdir to root directory",5);
              piVar11 = __errno_location();
              uVar12 = 0x7d;
              error(0x7d,*piVar11,uVar10);
LAB_00102c48:
              ppVar6 = getpwuid((__uid_t)uVar12);
              if (ppVar6 == (passwd *)0x0) {
                if (gid == 0xffffffff) goto code_r0x00102e1d;
              }
              else {
                if (gid == 0xffffffff) {
                  gid = ppVar6->pw_gid;
                }
                local_70[0] = (passwd *)ppVar6->pw_name;
              }
LAB_00102c6c:
              __groups = out_gids;
              in_gids = (gid_t *)0x0;
              if (groups != (char *)0x0) goto LAB_00102ac7;
              if ((local_70[0] != (passwd *)0x0) && (gid != 0xffffffff)) {
                iVar4 = xgetgroups((char *)local_70[0],gid,&in_gids);
                if (iVar4 < 1) {
                  if (n_gids == 0) {
                    uVar10 = dcgettext(0,"failed to get supplemental groups",5);
                    piVar8 = __errno_location();
                    error(0x7d,*piVar8,uVar10);
                    goto LAB_00102ef5;
                  }
                }
                else {
                  n_gids = (size_t)iVar4;
                  __groups = in_gids;
                }
              }
              if (uid != 0xffffffff) goto LAB_00102ad1;
              do {
                rpl_free(in_gids);
                rpl_free(out_gids);
                __gid = gid;
                piVar8 = __errno_location();
                if ((__gid == 0xffffffff) || (iVar4 = setgid(__gid), iVar4 == 0)) {
                  if ((uid != 0xffffffff) && (iVar4 = setuid(uid), iVar4 != 0)) {
                    uVar10 = dcgettext(0,"failed to set user-ID",5);
                    auVar13 = error(0x7d,*piVar8,uVar10);
                    uVar10 = uStack120;
                    uStack120 = SUB168(auVar13,0);
                    (*(code *)PTR___libc_start_main_0010bfe0)
                              (main,uVar10,local_70,__libc_csu_init,__libc_csu_fini,
                               SUB168(auVar13 >> 0x40,0),&uStack120);
                    do {
                    /* WARNING: Do nothing block with infinite loop */
                    } while( true );
                  }
                  execvp(*argv,argv);
                  iVar4 = *piVar8;
                  pcVar9 = quote(*argv);
                  iVar4 = (iVar4 == 2) + 0x7e;
                  uVar10 = dcgettext(0,"failed to run command %s",5);
                  error(0,*piVar8,uVar10,pcVar9);
LAB_00102b71:
                  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
                    __stack_chk_fail();
                  }
                  return iVar4;
                }
                uVar10 = dcgettext(0,"failed to set group-ID",5);
                error(0x7d,*piVar8,uVar10);
LAB_00102d80:
                pcVar7 = getenv("SHELL");
                if (pcVar7 == (char *)0x0) {
                  pcVar7 = "/bin/sh";
                }
                *argv = pcVar7;
                argv[1] = "-i";
                argv[2] = (char *)0x0;
LAB_00102a55:
                if ((pcVar9 != (char *)0x0) &&
                   (pcVar7 = parse_user_spec_warn
                                       (pcVar9,&uid,&gid,(char **)0x0,(char **)0x0,(_Bool *)&in_gids
                                       ), pcVar7 != (char *)0x0)) {
                  error(-((char)in_gids == '\0') & 0x7d,0,"%s");
                }
                uVar12 = (ulong)uid;
                if (uid == 0xffffffff) goto LAB_00102c6c;
                if ((groups == (char *)0x0) || (gid == 0xffffffff)) goto LAB_00102c48;
LAB_00102ac7:
                pgVar3 = out_gids;
                in_gids = (gid_t *)0x0;
                __groups = pgVar3;
                if ((*groups != '\0') &&
                   ((iVar4 = parse_additional_groups(groups,&in_gids,&n_gids,n_gids == 0),
                    __groups = in_gids, iVar4 != 0 && (__groups = pgVar3, n_gids == 0)))) {
                  iVar4 = 0x7d;
                  goto LAB_00102b71;
                }
LAB_00102ad1:
                iVar4 = setgroups(n_gids,__groups);
                if (iVar4 != 0) {
                  uVar10 = dcgettext(0,"failed to set supplemental groups",5);
                  piVar8 = __errno_location();
                  error(0x7d,*piVar8,uVar10);
                  goto LAB_00102f4c;
                }
              } while( true );
            }
            goto LAB_00102a3e;
          }
          goto LAB_00102db0;
        }
LAB_00102ef5:
        uVar10 = dcgettext(0,"missing operand",5);
        error(0,0,uVar10);
LAB_00102f16:
                    /* WARNING: Subroutine does not return */
        usage(0x7d);
      }
      pcVar1 = optarg;
    } while (iVar4 == 0x100);
    if (iVar4 < 0x101) {
      if (iVar4 == -0x83) {
        version_etc(stdout,"chroot","GNU coreutils",Version,"Roland McGrath",0);
                    /* WARNING: Subroutine does not return */
        exit(0);
      }
      if (iVar4 == -0x82) {
                    /* WARNING: Subroutine does not return */
        usage(0);
      }
      goto LAB_00102f16;
    }
    pcVar1 = groups;
    if (iVar4 == 0x101) {
      sVar5 = strlen(optarg);
      pcVar9 = pcVar7;
      if ((sVar5 != 0) && (pcVar7[sVar5 - 1] == ':')) {
        pcVar7[sVar5 - 1] = '\0';
      }
    }
    else {
      if (iVar4 != 0x102) goto LAB_00102f16;
      bVar2 = true;
    }
  } while( true );
code_r0x00102e1d:
  pcVar9 = (char *)(ulong)uid;
  uVar10 = dcgettext(0,"no group specified for unknown uid: %d",5);
  piVar11 = __errno_location();
  __uid = 0x7d;
  error(0x7d,*piVar11,uVar10);
LAB_00102e51:
  local_70[0] = getpwuid(__uid);
  if (local_70[0] == (passwd *)0x0) {
LAB_00102be5:
    local_70[0] = (passwd *)0x0;
LAB_00102bee:
    if (*groups != '\0') {
      parse_additional_groups(groups,&out_gids,&n_gids,false);
    }
    goto LAB_00102bf8;
  }
LAB_00102e64:
  if (gid == 0xffffffff) {
    gid = local_70[0]->pw_gid;
  }
  local_70[0] = (passwd *)local_70[0]->pw_name;
  goto LAB_00102d09;
}

