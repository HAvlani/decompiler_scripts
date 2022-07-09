
int main(int argc,char **argv)

{
  char **ppcVar1;
  char **ppcVar2;
  long lVar3;
  bool bVar4;
  _Bool _Var5;
  byte bVar6;
  uint link_errno;
  int iVar7;
  char *pcVar8;
  char *pcVar9;
  int *piVar10;
  char *pcVar11;
  long lVar12;
  long in_FS_OFFSET;
  bool bVar13;
  undefined8 uVar14;
  char *local_108;
  char *local_100;
  int local_f4;
  int local_f0;
  char *dest_base;
  stat st;
  
  bVar4 = false;
  bVar13 = false;
  pcVar8 = (char *)(ulong)(uint)argc;
  lVar3 = *(long *)(in_FS_OFFSET + 0x28);
  set_program_name(*argv);
  setlocale(6,"");
  bindtextdomain("coreutils","/root/coreutils-builder/share/locale");
  textdomain("coreutils");
  atexit(close_stdin);
  hard_dir_link = false;
  verbose = false;
  interactive = false;
  remove_existing_files = false;
  symbolic_link = false;
  local_108 = (char *)0x0;
  local_100 = (char *)0x0;
  pcVar9 = (char *)0x0;
  pcVar11 = local_108;
LAB_00102a96:
  local_108 = pcVar11;
  uVar14 = 0x102ab2;
  link_errno = getopt_long((ulong)pcVar8 & 0xffffffff,argv,"bdfinrst:vFLPS:T",long_options);
  if (link_errno != 0xffffffff) {
    if (0x76 < (int)link_errno) goto switchD_00102ae7_caseD_47;
    if ((int)link_errno < 0x46) {
      if (link_errno == 0xffffff7d) {
        version_etc(stdout,"ln","GNU coreutils",Version,"Mike Parker","David MacKenzie",0,uVar14);
                    /* WARNING: Subroutine does not return */
        exit(0);
      }
      if (link_errno == 0xffffff7e) {
                    /* WARNING: Subroutine does not return */
        usage(0);
      }
      goto switchD_00102ae7_caseD_47;
    }
    pcVar11 = local_108;
    switch(link_errno) {
    case 0x46:
    case 100:
      hard_dir_link = true;
      goto LAB_00102a96;
    default:
      goto switchD_00102ae7_caseD_47;
    case 0x4c:
      logical = true;
      goto LAB_00102a96;
    case 0x50:
      logical = false;
      goto LAB_00102a96;
    case 0x53:
      local_100 = optarg;
      bVar4 = true;
      goto LAB_00102a96;
    case 0x54:
      bVar13 = true;
      goto LAB_00102a96;
    case 0x62:
      bVar4 = true;
      pcVar11 = optarg;
      if (optarg == (char *)0x0) {
        pcVar11 = local_108;
      }
      goto LAB_00102a96;
    case 0x66:
      remove_existing_files = true;
      interactive = false;
      goto LAB_00102a96;
    case 0x69:
      remove_existing_files = false;
      interactive = true;
      goto LAB_00102a96;
    case 0x6e:
      dereference_dest_dir_symlinks = false;
      goto LAB_00102a96;
    case 0x72:
      relative = true;
      goto LAB_00102a96;
    case 0x73:
      goto switchD_00102ae7_caseD_73;
    case 0x74:
      if (pcVar9 != (char *)0x0) goto LAB_00103026;
      iVar7 = __xstat(1,optarg,(stat *)&st);
      pcVar9 = optarg;
      if (iVar7 != 0) goto LAB_0010304a;
      if ((st.st_mode & 0xf000) == 0x4000) goto LAB_00102a96;
      pcVar8 = quotearg_style(shell_escape_always_quoting_style,optarg);
      uVar14 = dcgettext(0,"target %s is not a directory",5);
      error(1,0,uVar14,pcVar8);
switchD_00102ae7_caseD_73:
      symbolic_link = true;
      goto LAB_00102a96;
    case 0x76:
      goto switchD_00102ae7_caseD_76;
    }
  }
  local_f4 = (int)pcVar8 - optind;
  ppcVar2 = argv + optind;
  if (0 < local_f4) {
    if ((relative == false) || (symbolic_link != false)) {
      if (hard_dir_link == false) {
        beware_hard_dir_link = false;
      }
      if (bVar13) {
        if (pcVar9 != (char *)0x0) {
          uVar14 = dcgettext(0,"cannot combine --target-directory and --no-target-directory",5);
          error(1,0,uVar14);
LAB_001030d7:
          pcVar9 = quotearg_style(shell_escape_always_quoting_style,*ppcVar2);
          pcVar11 = "missing destination file operand after %s";
LAB_00102f37:
          uVar14 = dcgettext(0,pcVar11,5);
          error(0,0,uVar14,pcVar9);
          goto switchD_00102ae7_caseD_47;
        }
        if (local_f4 != 2) {
          if (local_f4 == 1) goto LAB_001030d7;
          pcVar9 = quotearg_style(shell_escape_always_quoting_style,ppcVar2[2]);
          pcVar11 = "extra operand %s";
          goto LAB_00102f37;
        }
LAB_00102cce:
        if (bVar4) {
          local_f4 = 2;
          pcVar11 = (char *)0x0;
          goto LAB_00102ce1;
        }
        backup_type = no_backups;
        set_simple_backup_suffix(local_100);
LAB_00102f86:
        bVar6 = do_link(*ppcVar2,-100,ppcVar2[1],ppcVar2[1],link_errno);
      }
      else {
        bVar13 = pcVar9 == (char *)0x0;
        if ((local_f4 < 2) && (bVar13)) {
          if (bVar4) {
            local_f4 = 1;
            pcVar11 = ".";
            local_f0 = -100;
LAB_00102ce1:
            pcVar9 = (char *)dcgettext(0,"backup type",5);
            backup_type = xget_version(pcVar9,local_108);
            goto LAB_00102d0a;
          }
          pcVar11 = ".";
          backup_type = no_backups;
          set_simple_backup_suffix(local_100);
          local_f4 = 1;
          local_f0 = -100;
        }
        else {
          if ((local_f4 == 2) && (bVar13)) {
            link_errno = atomic_link(*ppcVar2,-100,ppcVar2[1]);
            if (((-1 < (int)link_errno) && (link_errno != 0x11)) &&
               ((link_errno & 0xfffffffd) != 0x14)) goto LAB_00102cce;
LAB_00102eb2:
            pcVar11 = ppcVar2[(long)local_f4 + -1];
          }
          else {
            pcVar11 = pcVar9;
            if (pcVar9 == (char *)0x0) goto LAB_00102eb2;
          }
          local_f0 = openat_safer(-100,pcVar11,
                                  (-(uint)(dereference_dest_dir_symlinks == false) & 0x20000) +
                                  0x210000);
          if (local_f0 < 0) {
            if ((local_f4 == 2) && (pcVar9 == (char *)0x0)) goto LAB_00102cce;
            piVar10 = __errno_location();
            iVar7 = *piVar10;
            pcVar9 = quotearg_style(shell_escape_always_quoting_style,pcVar11);
            uVar14 = dcgettext(0,"target %s",5);
            error(1,iVar7,uVar14,pcVar9);
            goto LAB_00103002;
          }
          local_f4 = local_f4 - (uint)bVar13;
          if (bVar4) goto LAB_00102ce1;
          backup_type = no_backups;
LAB_00102d0a:
          set_simple_backup_suffix(local_100);
          if (pcVar11 == (char *)0x0) goto LAB_00102f86;
          if (local_f4 < 2) {
            if (local_f4 != 1) {
              bVar6 = 1;
              goto LAB_00102e45;
            }
          }
          else if (((remove_existing_files != false) && (symbolic_link == false)) &&
                  ((backup_type != numbered_backups &&
                   (dest_set = hash_initialize(0x3d,(Hash_tuning *)0x0,triple_hash,triple_compare,
                                               triple_free), dest_set == (Hash_table *)0x0)))) {
                    /* WARNING: Subroutine does not return */
            xalloc_die();
          }
        }
        lVar12 = 0;
        bVar6 = 1;
        do {
          pcVar9 = last_component(ppcVar2[lVar12]);
          pcVar9 = file_name_concat(pcVar11,pcVar9,&dest_base);
          strip_trailing_slashes(dest_base);
          ppcVar1 = ppcVar2 + lVar12;
          lVar12 = lVar12 + 1;
          _Var5 = do_link(*ppcVar1,local_f0,dest_base,pcVar9,-1);
          bVar6 = bVar6 & _Var5;
          rpl_free(pcVar9);
        } while ((int)lVar12 < local_f4);
      }
LAB_00102e45:
      if (lVar3 == *(long *)(in_FS_OFFSET + 0x28)) {
        return (int)(bVar6 ^ 1);
      }
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
LAB_00103002:
    uVar14 = dcgettext(0,"cannot do --relative without --symbolic",5);
    error(1,0,uVar14);
LAB_00103026:
    uVar14 = dcgettext(0,"multiple target directories specified",5);
    error(1,0,uVar14);
LAB_0010304a:
    pcVar9 = quotearg_style(shell_escape_always_quoting_style,optarg);
    uVar14 = dcgettext(0,"failed to access %s",5);
    piVar10 = __errno_location();
    error(1,*piVar10,uVar14,pcVar9);
  }
  uVar14 = dcgettext(0,"missing file operand",5);
  error(0,0,uVar14);
switchD_00102ae7_caseD_47:
                    /* WARNING: Subroutine does not return */
  usage(1);
switchD_00102ae7_caseD_76:
  verbose = true;
  goto LAB_00102a96;
}

