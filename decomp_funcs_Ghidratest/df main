
/* WARNING: Could not reconcile some variable overlaps */

int main(int argc,char **argv)

{
  long lVar1;
  char **__s2;
  stat *__s1;
  mount_entry *pmVar2;
  __dev_t *p_Var3;
  Hash_table *table;
  _Bool _Var4;
  int iVar5;
  strtol_error sVar6;
  uint __fildes;
  undefined8 uVar7;
  fs_type_list *pfVar8;
  char *pcVar9;
  stat *psVar10;
  size_t sVar11;
  char *pcVar12;
  void *pvVar13;
  devlist *pdVar14;
  int *piVar15;
  long lVar16;
  ulong uVar17;
  undefined *puVar18;
  ulong uVar19;
  stat *psVar20;
  char cVar21;
  stat *__s2_00;
  byte *pbVar22;
  _Bool _Var23;
  byte *pbVar24;
  stat *psVar25;
  char **ppcVar26;
  stat *fstype;
  stat *psVar27;
  stat *psVar28;
  stat *unaff_R14;
  ulong uVar29;
  long in_FS_OFFSET;
  bool bVar30;
  bool bVar31;
  byte bVar32;
  char **local_150;
  stat *local_148;
  stat *local_138;
  stat *local_130;
  long local_128;
  void *local_120;
  long local_118;
  stat *local_110;
  stat *local_108;
  stat *local_f0;
  int oi;
  undefined4 uStack220;
  stat device_stats;
  
  bVar32 = 0;
  __s2_00 = (stat *)0x0;
  psVar20 = (stat *)(ulong)(uint)argc;
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  set_program_name(*argv);
  setlocale(6,"");
  bindtextdomain("coreutils","/root/coreutils-builder/share/locale");
  textdomain("coreutils");
  atexit(close_stdout);
  fs_select_list = (fs_type_list *)0x0;
  fs_exclude_list = (fs_type_list *)0x0;
  show_all_fs = false;
  show_listed_fs = false;
  human_output_opts = -1;
  print_type = false;
  file_systems_processed = false;
  exit_status = 0;
  print_grand_total = false;
  grand_fsu.fsu_blocksize = 1;
  uVar7 = dcgettext(0,"options %s and %s are mutually exclusive",5);
switchD_00103cf5_caseD_76:
  _oi = CONCAT44(uStack220,0xffffffff);
  fstype = (stat *)&oi;
  iVar5 = getopt_long(psVar20,argv,"aB:iF:hHklmPTt:vx:");
  psVar28 = optarg;
  cVar21 = (char)__s2_00;
  if (iVar5 == -1) {
    if (human_output_opts == -1) {
      if (cVar21 == '\0') {
        pcVar9 = getenv("DF_BLOCK_SIZE");
        human_options(pcVar9,&human_output_opts,&output_block_size);
      }
      else {
        human_output_opts = 0;
        pcVar9 = getenv("POSIXLY_CORRECT");
        output_block_size = (ulong)(-(uint)(pcVar9 == (char *)0x0) & 0x200) + 0x200;
      }
    }
    if ((header_mode != 1) && (header_mode != 4)) {
      if ((human_output_opts & 0x10U) == 0) {
        if (cVar21 != '\0') {
          header_mode = 3;
        }
      }
      else {
        header_mode = 2;
      }
    }
    psVar28 = (stat *)0x0;
    psVar27 = (stat *)fs_select_list;
    if (fs_select_list != (fs_type_list *)0x0) goto LAB_00103f70;
    goto LAB_00103fe5;
  }
  if (0x83 < iVar5) goto switchD_00103cf5_caseD_43;
  if (iVar5 < 0x42) {
    if (iVar5 == -0x83) {
      version_etc((FILE *)stdout,"df","GNU coreutils",Version,"Torbjorn Granlund","David MacKenzie",
                  "Paul Eggert",0);
                    /* WARNING: Subroutine does not return */
      exit(0);
    }
    if (iVar5 == -0x82) {
                    /* WARNING: Subroutine does not return */
      usage(0);
    }
    goto switchD_00103cf5_caseD_43;
  }
  switch(iVar5) {
  case 0x42:
    sVar6 = human_options((char *)optarg,&human_output_opts,&output_block_size);
    if (sVar6 != LONGINT_OK) {
      xstrtol_fatal(sVar6,_oi & 0xffffffff,0x42,long_options,optarg);
      goto switchD_00103cf5_caseD_6d;
    }
    goto switchD_00103cf5_caseD_76;
  default:
    goto switchD_00103cf5_caseD_43;
  case 0x46:
  case 0x74:
    pfVar8 = (fs_type_list *)xmalloc(0x10);
    pfVar8->fs_name = (char *)psVar28;
    pfVar8->fs_next = fs_select_list;
    unaff_R14 = psVar28;
    fs_select_list = pfVar8;
    goto switchD_00103cf5_caseD_76;
  case 0x48:
    human_output_opts = 0x90;
    output_block_size = 1;
    goto switchD_00103cf5_caseD_76;
  case 0x50:
    if (header_mode != 4) {
      __s2_00 = (stat *)0x1;
      goto switchD_00103cf5_caseD_76;
    }
    puVar18 = &DAT_00111142;
    break;
  case 0x54:
    if (header_mode == 4) goto LAB_0010503c;
    print_type = true;
    goto switchD_00103cf5_caseD_76;
  case 0x61:
    show_all_fs = true;
    goto switchD_00103cf5_caseD_76;
  case 0x68:
    human_output_opts = 0xb0;
    output_block_size = 1;
    goto switchD_00103cf5_caseD_76;
  case 0x69:
    if (header_mode != 4) {
      header_mode = 1;
      goto switchD_00103cf5_caseD_76;
    }
LAB_00105073:
    puVar18 = &DAT_0011113c;
    break;
  case 0x6b:
    human_output_opts = 0;
    output_block_size = 0x400;
    goto switchD_00103cf5_caseD_76;
  case 0x6c:
    show_local_fs = true;
    goto switchD_00103cf5_caseD_76;
  case 0x6d:
switchD_00103cf5_caseD_6d:
    human_output_opts = 0;
    output_block_size = 0x100000;
  case 0x76:
    goto switchD_00103cf5_caseD_76;
  case 0x78:
    pfVar8 = (fs_type_list *)xmalloc(0x10);
    pfVar8->fs_name = (char *)psVar28;
    pfVar8->fs_next = fs_exclude_list;
    unaff_R14 = psVar28;
    fs_exclude_list = pfVar8;
    goto switchD_00103cf5_caseD_76;
  case 0x80:
    require_sync = false;
    goto switchD_00103cf5_caseD_76;
  case 0x81:
    require_sync = true;
    goto switchD_00103cf5_caseD_76;
  case 0x82:
    print_grand_total = true;
    goto switchD_00103cf5_caseD_76;
  case 0x83:
    if (header_mode == 1) goto LAB_00105073;
    if ((header_mode == 0) && (cVar21 != '\0')) {
      error(0,0,uVar7,&DAT_00111142,"--output");
                    /* WARNING: Subroutine does not return */
      usage(1);
    }
    if (print_type == false) {
      header_mode = 4;
      if (optarg != (stat *)0x0) {
        decode_output_arg((char *)optarg);
      }
      goto switchD_00103cf5_caseD_76;
    }
LAB_0010503c:
    puVar18 = &DAT_0011113f;
  }
  error(0,0,uVar7,puVar18,"--output");
switchD_00103cf5_caseD_43:
                    /* WARNING: Subroutine does not return */
  usage(1);
LAB_00103f70:
  do {
    __s2_00 = (stat *)fs_exclude_list;
    if (fs_exclude_list != (fs_type_list *)0x0) {
      unaff_R14 = (stat *)psVar27->st_dev;
      do {
        iVar5 = strcmp((char *)unaff_R14,(char *)__s2_00->st_dev);
        if (iVar5 == 0) {
          quote((char *)unaff_R14);
          uVar7 = dcgettext(0,"file system type %s both selected and excluded",5);
          psVar28 = (stat *)0x1;
          error(0,0,uVar7);
          break;
        }
        __s2_00 = (stat *)__s2_00->st_ino;
      } while (__s2_00 != (stat *)0x0);
    }
    psVar27 = (stat *)psVar27->st_ino;
  } while (psVar27 != (stat *)0x0);
  if ((char)psVar28 != '\0') {
    iVar5 = 1;
    goto LAB_0010405a;
  }
LAB_00103fe5:
  if ((int)optind < argc) {
    local_120 = xnmalloc((long)(int)(argc - optind),0x90);
    for (__s2_00 = (stat *)(long)(int)optind; unaff_R14 = (stat *)argv, (int)__s2_00 < argc;
        __s2_00 = (stat *)((long)&__s2_00->st_dev + 1)) {
      psVar28 = (stat *)argv[(long)__s2_00];
      psVar27 = (stat *)((long)(int)((int)__s2_00 - optind) * 0x90 + (long)local_120);
      __fildes = open((char *)psVar28,0x900);
      if ((int)__fildes < 0) {
        piVar15 = __errno_location();
        iVar5 = *piVar15;
        if ((iVar5 == 2) || (iVar5 == 0x14)) goto LAB_00104140;
        iVar5 = __xstat(1,(char *)psVar28,(stat *)psVar27);
        if (iVar5 != 0) {
          iVar5 = *piVar15;
          goto LAB_00104140;
        }
      }
      else {
        iVar5 = __fxstat(1,__fildes,(stat *)psVar27);
        if (iVar5 != 0) {
          piVar15 = __errno_location();
          iVar5 = *piVar15;
        }
        fstype = (stat *)(ulong)__fildes;
        close(__fildes);
LAB_00104140:
        if (iVar5 != 0) {
          quotearg_n_style_colon(0,3,argv[(long)__s2_00]);
          error(0,iVar5,&DAT_00112ff2);
          argv[(long)__s2_00] = (char *)0x0;
          exit_status = 1;
        }
      }
    }
  }
  else {
    local_120 = (void *)0x0;
  }
  _Var23 = true;
  if ((((fs_select_list == (fs_type_list *)0x0) && (fs_exclude_list == (fs_type_list *)0x0)) &&
      (print_type == false)) && (field_data[1].used == false)) {
    _Var23 = show_local_fs;
  }
  mount_list = read_file_system_list(_Var23);
  if (mount_list == (mount_entry *)0x0) {
    __s2_00 = (stat *)0x1;
    psVar27 = (stat *)0x112a41;
    if ((((int)optind < argc) && (show_all_fs == false)) &&
       ((show_local_fs == false &&
        ((fs_select_list == (fs_type_list *)0x0 && (fs_exclude_list == (fs_type_list *)0x0)))))) {
      __s2_00 = (stat *)0x0;
      psVar27 = (stat *)dcgettext(0,"Warning: ",5);
    }
    psVar28 = (stat *)dcgettext(0,"cannot read table of mounted file systems",5);
    piVar15 = __errno_location();
    fstype = psVar28;
    error(__s2_00,*piVar15,&DAT_0011119b);
  }
  if (require_sync != false) {
    sync();
  }
  switch(header_mode) {
  case 0:
    alloc_field(0,(char *)0x0);
    if (print_type != false) {
      alloc_field(1,(char *)0x0);
    }
    alloc_field(2,(char *)0x0);
    alloc_field(3,(char *)0x0);
    pcVar9 = (char *)0x0;
    goto LAB_001045d0;
  case 1:
    alloc_field(0,(char *)0x0);
    if (print_type != false) {
      alloc_field(1,(char *)0x0);
    }
    alloc_field(6,(char *)0x0);
    alloc_field(7,(char *)0x0);
    alloc_field(8,(char *)0x0);
    alloc_field(9,(char *)0x0);
    alloc_field(10,(char *)0x0);
    break;
  case 2:
    alloc_field(0,(char *)0x0);
    if (print_type != false) {
      alloc_field(1,(char *)0x0);
    }
    alloc_field(2,"Size");
    alloc_field(3,(char *)0x0);
    pcVar9 = "Avail";
LAB_001045d0:
    alloc_field(4,pcVar9);
    pcVar9 = (char *)0x0;
LAB_001042be:
    alloc_field(5,pcVar9);
    alloc_field(10,(char *)0x0);
    break;
  case 3:
    alloc_field(0,(char *)0x0);
    if (print_type != false) {
      alloc_field(1,(char *)0x0);
    }
    alloc_field(2,(char *)0x0);
    alloc_field(3,(char *)0x0);
    alloc_field(4,(char *)0x0);
    pcVar9 = "Capacity";
    goto LAB_001042be;
  case 4:
    if (ncolumns == 0) {
      decode_output_arg("source,fstype,itotal,iused,iavail,ipcent,size,used,avail,pcent,file,target"
                       );
    }
    break;
  default:
                    /* WARNING: Subroutine does not return */
    __assert_fail("!\"invalid header_mode\"","src/df.c",0x235,"get_field_list");
  }
  get_header();
  _Var23 = show_all_fs;
  psVar10 = (stat *)&oi;
  local_150 = argv;
  if (local_120 == (void *)0x0) {
    iVar5 = 0;
    for (psVar28 = (stat *)mount_list; psVar28 != (stat *)0x0; psVar28 = (stat *)psVar28->st_size) {
      iVar5 = iVar5 + 1;
    }
    fstype = (stat *)0x0;
    unaff_R14 = &device_stats;
    devlist_table =
         hash_initialize((long)iVar5,(Hash_tuning *)0x0,devlist_hash,devlist_compare,
                         (Hash_data_freer *)0x0);
    psVar20 = (stat *)mount_list;
    if (devlist_table == (Hash_table *)0x0) {
LAB_00105037:
                    /* WARNING: Subroutine does not return */
      xalloc_die();
    }
LAB_00104c9c:
    if (psVar20 != (stat *)0x0) {
      if ((((*(byte *)&psVar20->st_rdev & 2) == 0) || (show_local_fs == false)) &&
         (((*(byte *)&psVar20->st_rdev & 1) == 0 ||
          ((show_all_fs != false || (show_listed_fs != false)))))) {
        pcVar9 = *(char **)&psVar20->st_mode;
        _Var4 = selected_fstype(pcVar9);
        if ((_Var4 == false) ||
           ((_Var4 = excluded_fstype(pcVar9), _Var4 != false ||
            (iVar5 = __xstat(1,(char *)psVar20->st_ino,(stat *)unaff_R14), iVar5 == -1))))
        goto LAB_00104c4c;
        pdVar14 = devlist_for_dev(device_stats.st_dev);
        if (pdVar14 != (devlist *)0x0) {
          psVar25 = (stat *)pdVar14->me;
          if (((char *)psVar25->st_nlink == (char *)0x0) ||
             ((char *)psVar20->st_nlink == (char *)0x0)) {
            local_150 = (char **)((ulong)local_150 & 0xffffffff00000000);
          }
          else {
            uVar29 = 0xffffffffffffffff;
            pcVar9 = (char *)psVar25->st_nlink;
            do {
              if (uVar29 == 0) break;
              uVar29 = uVar29 - 1;
              cVar21 = *pcVar9;
              pcVar9 = pcVar9 + (ulong)bVar32 * -2 + 1;
            } while (cVar21 != '\0');
            uVar17 = 0xffffffffffffffff;
            pcVar9 = (char *)psVar20->st_nlink;
            do {
              if (uVar17 == 0) break;
              uVar17 = uVar17 - 1;
              cVar21 = *pcVar9;
              pcVar9 = pcVar9 + (ulong)bVar32 * -2 + 1;
            } while (cVar21 != '\0');
            local_150 = (char **)((ulong)local_150 & 0xffffffff00000000 |
                                 (ulong)(~uVar29 - 1 < ~uVar17 - 1));
          }
          __s2_00 = (stat *)psVar20->st_dev;
          if ((((print_grand_total != false) || ((*(byte *)&psVar20->st_rdev & 2) == 0)) ||
              ((*(byte *)&psVar25->st_rdev & 2) == 0)) ||
             (iVar5 = strcmp((char *)psVar25->st_dev,(char *)__s2_00), psVar27 = psVar25, iVar5 == 0
             )) {
            pcVar9 = strchr((char *)__s2_00,0x2f);
            if ((pcVar9 == (char *)0x0) ||
               (pcVar9 = strchr((char *)psVar25->st_dev,0x2f), pcVar9 != (char *)0x0)) {
              __s2 = (char **)psVar25->st_ino;
              __s1 = (stat *)psVar20->st_ino;
              uVar29 = 0xffffffffffffffff;
              ppcVar26 = __s2;
              do {
                if (uVar29 == 0) break;
                uVar29 = uVar29 - 1;
                cVar21 = *(char *)ppcVar26;
                ppcVar26 = (char **)((long)ppcVar26 + (ulong)bVar32 * -2 + 1);
              } while (cVar21 != '\0');
              uVar17 = 0xffffffffffffffff;
              psVar27 = __s1;
              do {
                if (uVar17 == 0) break;
                uVar17 = uVar17 - 1;
                p_Var3 = &psVar27->st_dev;
                psVar27 = (stat *)((long)psVar27 + (ulong)bVar32 * -2 + 1);
              } while (*(char *)p_Var3 != '\0');
              if (((~uVar17 - 1 < ~uVar29 - 1) && ((int)local_150 == 0)) ||
                 ((iVar5 = strcmp((char *)psVar25->st_dev,(char *)__s2_00), psVar27 = psVar20,
                  local_150 = __s2, local_138 = __s1, iVar5 != 0 &&
                  (iVar5 = strcmp((char *)__s1,(char *)__s2), iVar5 == 0)))) goto LAB_00104e14;
            }
            else {
LAB_00104e14:
              pdVar14->me = (mount_entry *)psVar20;
              psVar27 = psVar25;
            }
            psVar20 = (stat *)psVar20->st_size;
            if (_Var23 == false) {
              free_mount_entry((mount_entry *)psVar27);
            }
            goto LAB_00104c9c;
          }
        }
      }
      else {
LAB_00104c4c:
        device_stats.st_dev = *(__dev_t *)&psVar20->st_gid;
      }
      __s2_00 = (stat *)xmalloc(0x20);
      table = devlist_table;
      __s2_00->st_ino = (__ino_t)psVar20;
      __s2_00->st_nlink = (__nlink_t)psVar28;
      __s2_00->st_dev = device_stats.st_dev;
      pvVar13 = hash_insert(table,__s2_00);
      if (pvVar13 == (void *)0x0) goto LAB_00105037;
      *(stat **)((long)pvVar13 + 0x18) = __s2_00;
      psVar20 = (stat *)psVar20->st_size;
      psVar28 = __s2_00;
      goto LAB_00104c9c;
    }
    psVar20 = (stat *)mount_list;
    if (_Var23 == false) {
      mount_list = (mount_entry *)0x0;
      psVar20 = psVar28;
      while (psVar20 != (stat *)0x0) {
        pmVar2 = (mount_entry *)psVar20->st_ino;
        psVar25 = (stat *)psVar20->st_nlink;
        pmVar2->me_next = mount_list;
        mount_list = pmVar2;
        rpl_free(psVar20);
        psVar20 = psVar25;
      }
      hash_free(devlist_table);
      devlist_table = (Hash_table *)0x0;
      psVar20 = (stat *)mount_list;
    }
    for (; psVar20 != (stat *)0x0; psVar20 = (stat *)psVar20->st_size) {
      fstype = *(stat **)&psVar20->st_mode;
      get_dev((char *)psVar20->st_dev,(char *)psVar20->st_ino,(char *)0x0,(char *)0x0,(char *)fstype
              ,(_Bool)(*(byte *)&psVar20->st_rdev & 1),(_Bool)(*(byte *)&psVar20->st_rdev >> 1 & 1),
              (fs_usage *)0x0,true);
    }
  }
  else {
    show_listed_fs = true;
    if ((int)optind < argc) {
      local_128 = (long)(int)optind + 1;
      local_118 = (ulong)(~optind + argc) + local_128;
      lVar16 = (long)(int)optind;
      local_f0 = (stat *)&oi;
      goto LAB_00104320;
    }
  }
LAB_001047fc:
  if (file_systems_processed == false) {
    iVar5 = exit_status;
    if (exit_status == 0) {
      uVar7 = dcgettext(0,"no file systems processed",5);
      error(1,0,uVar7);
LAB_00104b2f:
      iVar5 = strncmp((char *)fstype,(char *)psVar27,(size_t)unaff_R14);
      if (iVar5 == 0) {
        __s2_00 = psVar20;
        psVar10 = unaff_R14;
      }
LAB_00104a40:
      do {
        do {
          do {
            psVar20 = (stat *)psVar20->st_size;
            bVar30 = psVar20 == (stat *)0x0;
            if (bVar30) {
              rpl_free(psVar27);
              if (__s2_00 == (stat *)0x0) goto LAB_001044f3;
              iVar5 = __xstat(1,(char *)__s2_00->st_ino,(stat *)&device_stats);
              if (iVar5 != 0) goto LAB_001044f3;
              if (device_stats.st_dev != local_110->st_dev) goto LAB_001044f3;
LAB_00104799:
              fstype = *(stat **)&__s2_00->st_mode;
              get_dev((char *)__s2_00->st_dev,(char *)__s2_00->st_ino,(char *)local_138,
                      (char *)local_138,(char *)fstype,(_Bool)(*(byte *)&__s2_00->st_rdev & 1),
                      (_Bool)(*(byte *)&__s2_00->st_rdev >> 1 & 1),(fs_usage *)0x0,false);
LAB_001046d0:
              do {
                psVar10 = local_f0;
                if (local_118 == local_128) goto LAB_001047fc;
                lVar16 = local_128;
                local_128 = local_128 + 1;
LAB_00104320:
                local_138 = (stat *)local_150[lVar16];
                psVar20 = local_138;
              } while (local_138 == (stat *)0x0);
              local_110 = (stat *)((long)(int)((int)lVar16 - optind) * 0x90 + (long)local_120);
              if ((local_110->st_mode & 0xb000) == 0x2000) {
                psVar10 = (stat *)canonicalize_file_name((char *)local_138);
                local_148 = local_138;
                if ((psVar10 != (stat *)0x0) &&
                   (local_148 = psVar10, *(char *)&psVar10->st_dev != '/')) {
                  local_148 = local_138;
                }
                if (mount_list == (mount_entry *)0x0) {
                  rpl_free(psVar10);
                }
                else {
                  local_108 = (stat *)0x0;
                  bVar30 = false;
                  local_130 = (stat *)0xffffffffffffffff;
                  bVar31 = false;
                  psVar20 = (stat *)mount_list;
                  do {
                    psVar27 = (stat *)psVar20->st_dev;
                    __s2_00 = (stat *)canonicalize_file_name((char *)psVar27);
                    if ((__s2_00 != (stat *)0x0) && (*(char *)&__s2_00->st_dev == '/')) {
                      psVar27 = __s2_00;
                    }
                    iVar5 = strcmp((char *)local_148,(char *)psVar27);
                    if (iVar5 == 0) {
                      psVar28 = (stat *)psVar20->st_ino;
                      unaff_R14 = (stat *)mount_list;
                      if (mount_list == (mount_entry *)0x0) {
LAB_00104467:
                        psVar27 = (stat *)strlen((char *)psVar28);
                        bVar30 = (bool)(bVar31 ^ 1U | psVar27 < local_130);
                        if (bVar30) {
                          iVar5 = __xstat(1,(char *)psVar28,(stat *)&device_stats);
                          if (iVar5 == 0) {
LAB_00104744:
                            local_130 = psVar27;
                            local_108 = psVar20;
                            bVar31 = bVar30;
                            if (psVar27 == (stat *)0x1) {
                              rpl_free(unaff_R14);
                              rpl_free(__s2_00);
                              rpl_free(psVar10);
                              goto LAB_00104ab2;
                            }
                          }
                          else if (((bool)(bVar31 ^ 1U)) && (psVar27 < local_130)) {
                            bVar30 = false;
                            goto LAB_00104744;
                          }
                          bVar30 = false;
                        }
                        else {
                          bVar31 = true;
                        }
                      }
                      else {
                        psVar25 = (stat *)0x0;
                        do {
                          iVar5 = strcmp((char *)unaff_R14->st_ino,(char *)psVar28);
                          if (iVar5 == 0) {
                            psVar25 = unaff_R14;
                          }
                          unaff_R14 = (stat *)unaff_R14->st_size;
                        } while (unaff_R14 != (stat *)0x0);
                        if (psVar25 == (stat *)0x0) goto LAB_00104467;
                        unaff_R14 = (stat *)canonicalize_file_name((char *)psVar25->st_dev);
                        if ((unaff_R14 == (stat *)0x0) || (*(char *)&unaff_R14->st_dev != '/')) {
                          rpl_free(unaff_R14);
                          unaff_R14 = (stat *)xstrdup((char *)psVar25->st_dev);
                        }
                        iVar5 = strcmp((char *)unaff_R14,(char *)psVar27);
                        if (iVar5 == 0) {
                          psVar28 = (stat *)psVar20->st_ino;
                          goto LAB_00104467;
                        }
                        bVar30 = true;
                      }
                      rpl_free(unaff_R14);
                    }
                    rpl_free(__s2_00);
                    psVar20 = (stat *)psVar20->st_size;
                  } while (psVar20 != (stat *)0x0);
                  rpl_free(psVar10);
                  if (local_108 != (stat *)0x0) {
LAB_00104ab2:
                    fstype = *(stat **)&local_108->st_mode;
                    get_dev((char *)local_108->st_dev,(char *)local_108->st_ino,(char *)local_138,
                            (char *)0x0,(char *)fstype,(_Bool)(*(byte *)&local_108->st_rdev & 1),
                            (_Bool)(*(byte *)&local_108->st_rdev >> 1 & 1),(fs_usage *)0x0,false);
                    psVar20 = local_108;
                    goto LAB_001046d0;
                  }
                  if (bVar30) {
                    psVar27 = (stat *)quotearg_style(shell_escape_always_quoting_style,
                                                     (char *)local_138);
                    uVar7 = dcgettext(0,"cannot access %s: over-mounted by another device",5);
                    error(0,0,uVar7,psVar27);
                    exit_status = 1;
                    goto LAB_001046d0;
                  }
                }
              }
              psVar27 = (stat *)canonicalize_file_name((char *)local_138);
              if ((psVar27 != (stat *)0x0) && (*(char *)&psVar27->st_dev == '/')) {
                uVar29 = 0xffffffffffffffff;
                psVar20 = psVar27;
                do {
                  if (uVar29 == 0) break;
                  uVar29 = uVar29 - 1;
                  p_Var3 = &psVar20->st_dev;
                  psVar20 = (stat *)((long)psVar20 + (ulong)bVar32 * -2 + 1);
                } while (*(char *)p_Var3 != '\0');
                psVar28 = (stat *)(~uVar29 - 1);
                if (mount_list != (mount_entry *)0x0) {
                  psVar10 = (stat *)0x0;
                  __s2_00 = (stat *)0x0;
                  bVar30 = true;
                  psVar20 = (stat *)mount_list;
                  goto LAB_001049d0;
                }
              }
              rpl_free(psVar27);
LAB_001044f3:
              if (mount_list != (mount_entry *)0x0) {
                psVar20 = (stat *)mount_list;
                psVar27 = (stat *)0x0;
                do {
                  uVar29 = *(ulong *)&psVar20->st_gid;
                  if (*(ulong *)&psVar20->st_gid == 0xffffffffffffffff) {
                    iVar5 = __xstat(1,(char *)psVar20->st_ino,(stat *)&device_stats);
                    if (iVar5 == 0) {
                      *(__dev_t *)&psVar20->st_gid = device_stats.st_dev;
                      uVar29 = device_stats.st_dev;
                    }
                    else {
                      psVar28 = (stat *)__errno_location();
                      if (*(int *)&psVar28->st_dev == 5) {
                        quotearg_n_style_colon(0,3,psVar20->st_ino);
                        error(0,*(undefined4 *)&psVar28->st_dev,&DAT_00112ff2);
                        exit_status = 1;
                      }
                      *(undefined8 *)&psVar20->st_gid = 0xfffffffffffffffe;
                      uVar29 = 0xfffffffffffffffe;
                    }
                  }
                  bVar30 = local_110->st_dev < uVar29;
                  bVar31 = local_110->st_dev == uVar29;
                  __s2_00 = psVar27;
                  if (bVar31) {
                    lVar16 = 5;
                    pbVar22 = *(byte **)&psVar20->st_mode;
                    pbVar24 = &DAT_001111c0;
                    do {
                      if (lVar16 == 0) break;
                      lVar16 = lVar16 + -1;
                      bVar30 = *pbVar22 < *pbVar24;
                      bVar31 = *pbVar22 == *pbVar24;
                      pbVar22 = pbVar22 + (ulong)bVar32 * -2 + 1;
                      pbVar24 = pbVar24 + (ulong)bVar32 * -2 + 1;
                    } while (bVar31);
                    if ((((!bVar30 && !bVar31) != bVar30) &&
                        (((psVar27 == (stat *)0x0 || ((*(byte *)&psVar27->st_rdev & 1) != 0)) ||
                         ((*(byte *)&psVar20->st_rdev & 1) == 0)))) &&
                       ((iVar5 = __xstat(1,(char *)psVar20->st_ino,(stat *)&device_stats),
                        iVar5 != 0 ||
                        (__s2_00 = psVar20, device_stats.st_dev != *(__dev_t *)&psVar20->st_gid))))
                    {
                      *(undefined8 *)&psVar20->st_gid = 0xfffffffffffffffe;
                      __s2_00 = psVar27;
                    }
                  }
                  psVar20 = (stat *)psVar20->st_size;
                  psVar27 = __s2_00;
                } while (psVar20 != (stat *)0x0);
                psVar27 = local_110;
                if (__s2_00 != (stat *)0x0) goto LAB_00104799;
              }
              __s2_00 = (stat *)find_mount_point((char *)local_138,local_110);
              psVar20 = local_138;
              if (__s2_00 != (stat *)0x0) {
                fstype = (stat *)0x0;
                get_dev((char *)0x0,(char *)__s2_00,(char *)local_138,(char *)0x0,(char *)0x0,false,
                        false,(fs_usage *)0x0,false);
                rpl_free(__s2_00);
              }
              goto LAB_001046d0;
            }
LAB_001049d0:
            bVar31 = false;
            lVar16 = 5;
            pbVar22 = *(byte **)&psVar20->st_mode;
            pbVar24 = &DAT_001111c0;
            do {
              if (lVar16 == 0) break;
              lVar16 = lVar16 + -1;
              bVar31 = *pbVar22 < *pbVar24;
              bVar30 = *pbVar22 == *pbVar24;
              pbVar22 = pbVar22 + (ulong)bVar32 * -2 + 1;
              pbVar24 = pbVar24 + (ulong)bVar32 * -2 + 1;
            } while (bVar30);
          } while (((!bVar31 && !bVar30) == bVar31) ||
                  (((__s2_00 != (stat *)0x0 && ((*(byte *)&__s2_00->st_rdev & 1) == 0)) &&
                   ((*(byte *)&psVar20->st_rdev & 1) != 0))));
          fstype = (stat *)psVar20->st_ino;
          uVar29 = 0xffffffffffffffff;
          psVar25 = fstype;
          do {
            if (uVar29 == 0) break;
            uVar29 = uVar29 - 1;
            p_Var3 = &psVar25->st_dev;
            psVar25 = (stat *)((long)psVar25 + (ulong)bVar32 * -2 + 1);
          } while (*(char *)p_Var3 != '\0');
          unaff_R14 = (stat *)(~uVar29 - 1);
        } while ((unaff_R14 < psVar10) || (psVar28 < unaff_R14));
        if (unaff_R14 == (stat *)0x1) {
          __s2_00 = psVar20;
          psVar10 = (stat *)0x1;
          goto LAB_00104a40;
        }
        if ((psVar28 == unaff_R14) ||
           (*(char *)((long)psVar27->__glibc_reserved + (~uVar29 - 0x79)) == '/'))
        goto LAB_00104b2f;
      } while( true );
    }
  }
  else {
    if (print_grand_total != false) {
      pcVar9 = "-";
      if (field_data[0].used == false) {
        pcVar9 = "total";
      }
      get_dev("total",pcVar9,(char *)0x0,(char *)0x0,(char *)0x0,false,false,&grand_fsu,false);
    }
    iVar5 = exit_status;
    if (nrows != 0) {
      uVar29 = 0;
      do {
        if (ncolumns != 0) {
          pcVar9 = *::table[uVar29];
          sVar11 = ncolumns;
          uVar17 = 0;
          while( true ) {
            _oi = columns[uVar17]->width;
            pcVar12 = ambsalign(pcVar9,&psVar10->st_dev,columns[uVar17]->align,
                                (uint)(uVar17 == sVar11 - 1) << 3);
            pcVar9 = pcVar12;
            if (pcVar12 == (char *)0x0) {
              pcVar9 = ::table[uVar29][uVar17];
            }
            fputs_unlocked(pcVar9,stdout);
            uVar19 = uVar17 + 1;
            rpl_free(pcVar12);
            sVar11 = ncolumns;
            if (ncolumns <= uVar19) break;
            pcVar9 = ::table[uVar29][uVar17 + 1];
            uVar17 = uVar19;
            if (uVar19 != 0) {
              pcVar12 = stdout->_IO_write_ptr;
              if (pcVar12 < stdout->_IO_write_end) {
                stdout->_IO_write_ptr = pcVar12 + 1;
                *pcVar12 = ' ';
              }
              else {
                FUN_001037c0(stdout,0x20);
                sVar11 = ncolumns;
              }
            }
          }
        }
        pcVar9 = stdout->_IO_write_ptr;
        if (pcVar9 < stdout->_IO_write_end) {
          stdout->_IO_write_ptr = pcVar9 + 1;
          *pcVar9 = '\n';
        }
        else {
          FUN_001037c0(stdout,10);
        }
        uVar29 = uVar29 + 1;
        iVar5 = exit_status;
      } while (uVar29 < nrows);
    }
  }
LAB_0010405a:
  if (lVar1 == *(long *)(in_FS_OFFSET + 0x28)) {
    return iVar5;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

