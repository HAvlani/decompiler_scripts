
/* WARNING: Could not reconcile some variable overlaps */

uintmax_t gobble_file(char *name,filetype type,_Bool command_line_arg,char *dirname,ino_t inode)

{
  char *pcVar1;
  char *pcVar2;
  fileinfo *pfVar3;
  gid_t gid;
  uid_t uVar4;
  __dev_t _Var5;
  uintmax_t uVar6;
  long lVar7;
  _Bool _Var8;
  uint uVar9;
  int iVar10;
  int *piVar11;
  char *pcVar12;
  size_t sVar13;
  size_t sVar14;
  char *pcVar15;
  size_t sVar16;
  char *pcVar17;
  ulong uVar18;
  undefined7 in_register_00000011;
  undefined *puVar19;
  undefined *puVar20;
  undefined *puVar21;
  undefined *puVar22;
  byte bVar23;
  char cVar24;
  undefined8 *puVar25;
  byte bVar26;
  char *pcVar27;
  uintmax_t n;
  long in_FS_OFFSET;
  bool bVar28;
  byte bVar29;
  undefined auStack936 [15];
  byte local_399;
  char *local_398;
  format local_390;
  undefined4 local_38c;
  stat local_388;
  char local_2f8 [32];
  char local_2d8 [664];
  long local_40;
  
  bVar29 = 0;
  puVar22 = auStack936;
  puVar21 = auStack936;
  puVar19 = auStack936;
  puVar20 = auStack936;
  local_38c = (int)CONCAT71(in_register_00000011,command_line_arg);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (cwd_n_used == cwd_n_alloc) {
    cwd_file = (fileinfo *)xreallocarray(cwd_file,cwd_n_used,0x1a0);
    cwd_n_alloc = cwd_n_alloc << 1;
  }
  pfVar3 = cwd_file + cwd_n_used;
  pfVar3->name = (char *)0x0;
  pfVar3->width = 0;
  puVar25 = (undefined8 *)((ulong)&pfVar3->linkname & 0xfffffffffffffff8);
  uVar18 = (ulong)(((int)pfVar3 - (int)puVar25) + 0xd0U >> 3);
  for (; uVar18 != 0; uVar18 = uVar18 - 1) {
    *puVar25 = 0;
    puVar25 = puVar25 + (ulong)bVar29 * -2 + 1;
  }
  (pfVar3->stat).st_ino = 0;
  pfVar3->filetype = type;
  bVar28 = cwd_some_quoted == false;
  pfVar3->quoted = -1;
  if ((bVar28) && (align_variable_outer_quotes != false)) {
    _Var8 = needs_quoting(name);
    pfVar3->quoted = (uint)_Var8;
    if (_Var8 != false) {
      cwd_some_quoted = true;
    }
  }
  pcVar12 = name;
  if ((char)local_38c == '\0') {
    if (print_hyperlink != false) {
      bVar29 = *name;
      if ((bVar29 != 0x2f) &&
         (bVar23 = *dirname, puVar22 = auStack936, local_398._0_1_ = print_hyperlink, bVar23 != 0))
      goto LAB_0010b029;
      goto LAB_0010b349;
    }
    local_398._0_1_ = print_hyperlink;
    if (format_needs_stat != false) {
LAB_0010b008:
      bVar29 = *name;
      puVar21 = auStack936;
      if (bVar29 != 0x2f) {
LAB_0010b019:
        bVar23 = *dirname;
        puVar21 = auStack936;
        if (bVar23 != 0) goto LAB_0010b029;
      }
      goto LAB_0010ad92;
    }
    if ((type == directory) && (print_with_color != false)) {
      local_398 = (char *)((ulong)local_398 & 0xffffffffffffff00);
      _Var8 = is_colored(C_OTHER_WRITABLE);
      if (_Var8 == false) {
        _Var8 = is_colored(C_STICKY);
        if (_Var8 == false) {
          _Var8 = is_colored(C_STICKY_OTHER_WRITABLE);
          if (_Var8 == false) goto LAB_0010af38;
        }
      }
      goto LAB_0010b008;
    }
LAB_0010af38:
    if (print_inode != false) {
      if ((type != symbolic_link) && (type != unknown)) goto LAB_0010b008;
LAB_0010b7a4:
      if (dereference != DEREF_ALWAYS) {
        if (((color_symlink_as_referent == false) && (check_symlink_mode == false)) &&
           (print_inode == false)) {
          if (format_needs_type == false) goto LAB_0010b850;
          if (type != unknown) goto LAB_0010af7b;
        }
        goto LAB_0010b008;
      }
      bVar29 = *name;
      if (bVar29 != 0x2f) goto LAB_0010b019;
      uVar9 = calc_req_mask();
      goto LAB_0010b21a;
    }
    if (format_needs_type == false) {
LAB_0010b850:
      n = 0;
    }
    else {
      if ((type == symbolic_link) || (type == unknown)) goto LAB_0010b7a4;
      if (format_needs_type == false) goto LAB_0010b850;
LAB_0010af7b:
      n = 0;
      puVar19 = auStack936;
      if (type == normal) {
        if (indicator_style != classify) {
          local_398 = (char *)((ulong)local_398 & 0xffffffffffffff00 | (ulong)(byte)local_398);
          puVar19 = auStack936;
          if (print_with_color == false) goto LAB_0010aeda;
          _Var8 = is_colored(C_EXEC);
          if (_Var8 == false) {
            _Var8 = is_colored(C_SETUID);
            if (_Var8 == false) {
              _Var8 = is_colored(C_SETGID);
              if (_Var8 == false) {
                _Var8 = is_colored(C_CAP);
                puVar19 = auStack936;
                if (_Var8 == false) goto LAB_0010aeda;
              }
            }
          }
        }
        goto LAB_0010b008;
      }
    }
  }
  else {
    bVar29 = *name;
    puVar19 = auStack936;
    bVar26 = print_hyperlink;
    if ((bVar29 != 0x2f) &&
       (bVar23 = *dirname, puVar19 = auStack936, local_398._0_1_ = print_hyperlink, bVar23 != 0)) {
LAB_0010b029:
      local_399 = (byte)local_398;
      local_390 = local_390 & 0xffffff00 | (uint)bVar29;
      local_398 = (char *)((ulong)local_398 & 0xffffffffffffff00 | (ulong)bVar23);
      sVar14 = strlen(name);
      sVar13 = strlen(dirname);
      bVar26 = local_399;
      uVar18 = sVar14 + 0x19 + sVar13;
      for (; puVar20 != auStack936 + -(uVar18 & 0xfffffffffffff000); puVar20 = puVar20 + -0x1000) {
        *(undefined8 *)(puVar20 + -8) = *(undefined8 *)(puVar20 + -8);
      }
      uVar18 = (ulong)((uint)uVar18 & 0xff0);
      lVar7 = -uVar18;
      puVar19 = puVar20 + lVar7;
      if (uVar18 != 0) {
        *(undefined8 *)(puVar20 + -8) = *(undefined8 *)(puVar20 + -8);
      }
      cVar24 = dirname[1];
      pcVar12 = (char *)((ulong)(puVar20 + lVar7 + 0xf) & 0xfffffffffffffff0);
      pcVar17 = dirname;
      pcVar27 = pcVar12;
      pcVar15 = name;
      if (((byte)local_398 != '.') || (pcVar2 = pcVar12, cVar24 != '\0')) {
        while( true ) {
          pcVar2 = pcVar27 + 1;
          *pcVar27 = (byte)local_398;
          if (cVar24 == '\0') break;
          pcVar1 = pcVar17 + 2;
          pcVar17 = pcVar17 + 1;
          pcVar27 = pcVar2;
          local_398._0_1_ = cVar24;
          cVar24 = *pcVar1;
        }
        if ((dirname < pcVar17 + 1) && (*pcVar17 != '/')) {
          *pcVar2 = '/';
          pcVar2 = pcVar27 + 2;
        }
      }
      while ((char)local_390 != '\0') {
        *pcVar2 = (char)local_390;
        local_390._0_1_ = pcVar15[1];
        pcVar15 = pcVar15 + 1;
        pcVar2 = pcVar2 + 1;
      }
      *pcVar2 = '\0';
    }
    puVar21 = puVar19;
    puVar22 = puVar19;
    if (bVar26 != 0) {
LAB_0010b349:
      *(undefined8 *)(puVar22 + -8) = 0x10b356;
      pcVar15 = canonicalize_filename_mode(pcVar12,CAN_MISSING);
      pfVar3->absolute_name = pcVar15;
      puVar21 = puVar22;
      if (pcVar15 == (char *)0x0) {
        *(undefined8 *)(puVar22 + -8) = 0x10b376;
        pcVar15 = (char *)dcgettext(0,"error canonicalizing %s",5);
        *(undefined8 *)(puVar22 + -8) = 0x10b38a;
        file_failure((_Bool)(char)local_38c,pcVar15,pcVar12);
      }
    }
LAB_0010ad92:
    local_398 = (char *)((ulong)local_398 & 0xffffffff00000000 | (ulong)dereference);
    *(undefined8 *)(puVar21 + -8) = 0x10ada9;
    uVar9 = calc_req_mask();
    if ((uint)local_398 < 4) {
      if (((uint)local_398 < 2) || ((char)local_38c == '\0')) {
LAB_0010adc7:
        *(undefined8 *)(puVar21 + -8) = 0x10addc;
        iVar10 = do_statx(-100,pcVar12,&pfVar3->stat,0x100,uVar9);
        puVar19 = puVar21;
        goto joined_r0x0010b22e;
      }
      *(undefined8 *)(puVar21 + -8) = 0x10b2f6;
      iVar10 = do_statx(-100,pcVar12,&pfVar3->stat,0,uVar9);
      if ((uint)local_398 != 2) {
        if (-1 < iVar10) {
          if (((pfVar3->stat).st_mode & 0xf000) != 0x4000) goto LAB_0010b324;
          goto LAB_0010b780;
        }
        *(undefined8 *)(puVar21 + -8) = 0x10b805;
        piVar11 = __errno_location();
        if (*piVar11 == 2) {
LAB_0010b324:
          *(undefined8 *)(puVar21 + -8) = 0x10b329;
          uVar9 = calc_req_mask();
          goto LAB_0010adc7;
        }
LAB_0010b80e:
        *(undefined8 *)(puVar21 + -8) = 0x10b821;
        pcVar15 = (char *)dcgettext(0,"cannot access %s",5);
        n = 0;
        *(undefined8 *)(puVar21 + -8) = 0x10b834;
        file_failure(true,pcVar15,pcVar12);
        pfVar3->scontext = UNKNOWN_SECURITY_CONTEXT;
        goto LAB_0010aeed;
      }
LAB_0010b780:
      if (iVar10 != 0) goto LAB_0010b80e;
    }
    else {
      if ((uint)local_398 != 4) goto LAB_0010adc7;
LAB_0010b21a:
      *(undefined8 *)(puVar21 + -8) = 0x10b22c;
      iVar10 = do_statx(-100,pcVar12,&pfVar3->stat,0,uVar9);
      puVar19 = puVar21;
joined_r0x0010b22e:
      puVar21 = puVar19;
      if (iVar10 != 0) {
        *(undefined8 *)(puVar19 + -8) = 0x10b247;
        pcVar15 = (char *)dcgettext(0,"cannot access %s",5);
        n = 0;
        _Var8 = SUB41(local_38c,0);
        *(undefined8 *)(puVar19 + -8) = 0x10b260;
        file_failure(_Var8,pcVar15,pcVar12);
        pfVar3->scontext = UNKNOWN_SECURITY_CONTEXT;
        if (_Var8 != false) goto LAB_0010aeed;
        goto LAB_0010aeda;
      }
    }
    pfVar3->stat_ok = true;
    if (((type == normal) || (((pfVar3->stat).st_mode & 0xf000) == 0x8000)) &&
       (print_with_color != false)) {
      *(undefined8 *)(puVar21 + -8) = 0x10b297;
      _Var8 = is_colored(C_CAP);
      if (_Var8 != false) {
        *(undefined8 *)(puVar21 + -8) = 0x10b2a4;
        piVar11 = __errno_location();
        _Var5 = (pfVar3->stat).st_dev;
        bVar28 = _Var5 != unsupported_device_10764;
        *piVar11 = 0x5f;
        if (bVar28) {
          unsupported_device_10764 = _Var5;
        }
        pfVar3->has_capability = false;
      }
    }
    if ((format == long_format) || (print_scontext != false)) {
      local_390 = format;
      local_398 = (char *)(pfVar3->stat).st_dev;
      *(undefined8 *)(puVar21 + -8) = 0x10ae31;
      piVar11 = __errno_location();
      bVar28 = local_398 != unsupported_device_10752;
      *piVar11 = 0x5f;
      if (bVar28) {
        unsupported_device_10752 = local_398;
      }
      pfVar3->scontext = UNKNOWN_SECURITY_CONTEXT;
      if (local_390 != long_format) {
        pfVar3->acl_type = ACL_T_NONE;
        goto LAB_0010ae77;
      }
      if (local_398 == unsupported_device_10758) {
        *piVar11 = 0x5f;
        uVar9 = (pfVar3->stat).st_mode;
        pfVar3->acl_type = ACL_T_NONE;
        uVar9 = uVar9 & 0xf000;
        if (uVar9 != 0xa000) goto LAB_0010ae8a;
        goto LAB_0010b595;
      }
      *piVar11 = 0;
      *(undefined8 *)(puVar21 + -8) = 0x10b548;
      iVar10 = file_has_acl(pcVar12,&pfVar3->stat);
      if (iVar10 < 1) {
        if (((*piVar11 - 0x16U & 0xffffffef) == 0) || (*piVar11 == 0x5f)) {
          unsupported_device_10758 = (char *)(pfVar3->stat).st_dev;
        }
        pfVar3->acl_type = ACL_T_NONE;
        if (iVar10 != 0) {
          *(undefined8 *)(puVar21 + -8) = 0x10b89d;
          quotearg_n_style_colon(0,3,pcVar12);
          iVar10 = *piVar11;
          *(undefined8 *)(puVar21 + -8) = 0x10b8b4;
          error(0,iVar10,&DAT_0011b283);
        }
      }
      else {
        pfVar3->acl_type = ACL_T_YES;
        any_has_acl = true;
      }
      uVar9 = (pfVar3->stat).st_mode & 0xf000;
      if (uVar9 == 0xa000) {
        if (format == long_format) goto LAB_0010b595;
        goto LAB_0010b588;
      }
LAB_0010ae8a:
      if (uVar9 == 0x4000) {
        if (((char)local_38c == '\0') || (immediate_dirs != false)) {
          pfVar3->filetype = directory;
        }
        else {
          pfVar3->filetype = arg_directory;
        }
      }
      else {
        pfVar3->filetype = normal;
      }
    }
    else {
LAB_0010ae77:
      uVar9 = (pfVar3->stat).st_mode & 0xf000;
      if (uVar9 != 0xa000) goto LAB_0010ae8a;
LAB_0010b588:
      if (check_symlink_mode != false) {
LAB_0010b595:
        sVar16 = (pfVar3->stat).st_size;
        *(undefined8 *)(puVar21 + -8) = 0x10b5a1;
        pcVar15 = areadlink_with_size(pcVar12,sVar16);
        pfVar3->linkname = pcVar15;
        if (pcVar15 == (char *)0x0) {
          *(undefined8 *)(puVar21 + -8) = 0x10b9e3;
          pcVar15 = (char *)dcgettext(0,"cannot read symbolic link %s",5);
          *(undefined8 *)(puVar21 + -8) = 0x10b9f5;
          file_failure((_Bool)(char)local_38c,pcVar15,pcVar12);
          pcVar15 = pfVar3->linkname;
          pcVar17 = (char *)0x0;
          if (pcVar15 != (char *)0x0) goto LAB_0010b5b1;
        }
        else {
LAB_0010b5b1:
          if (*pcVar15 == '/') {
            *(undefined8 *)(puVar21 + -8) = 0x10ba18;
            pcVar17 = xstrdup(pcVar15);
          }
          else {
            *(undefined8 *)(puVar21 + -8) = 0x10b5c4;
            sVar16 = dir_len(pcVar12);
            if (sVar16 == 0) {
              *(undefined8 *)(puVar21 + -8) = 0x10b935;
              pcVar17 = xstrdup(pcVar15);
            }
            else {
              *(undefined8 *)(puVar21 + -8) = 0x10b5d8;
              sVar14 = strlen(pcVar15);
              *(undefined8 *)(puVar21 + -8) = 0x10b5e2;
              pcVar17 = (char *)xmalloc(sVar16 + 2 + sVar14);
              if (pcVar12[sVar16 - 1] != '/') {
                sVar16 = sVar16 + 1;
              }
              local_398 = pcVar17;
              *(undefined8 *)(puVar21 + -8) = 0x10b606;
              pcVar12 = stpncpy(pcVar17,pcVar12,sVar16);
              *(undefined8 *)(puVar21 + -8) = 0x10b611;
              strcpy(pcVar12,pcVar15);
              pcVar17 = local_398;
            }
          }
          if (pfVar3->quoted == 0) {
            pcVar12 = pfVar3->linkname;
            local_398 = pcVar17;
            *(undefined8 *)(puVar21 + -8) = 0x10b980;
            _Var8 = needs_quoting(pcVar12);
            pcVar17 = local_398;
            if (_Var8 != false) {
              pfVar3->quoted = -1;
            }
          }
          if ((slash < indicator_style) || (check_symlink_mode != false)) {
            local_398 = pcVar17;
            *(undefined8 *)(puVar21 + -8) = 0x10b68b;
            iVar10 = do_statx(-100,pcVar17,&local_388,0,2);
            pcVar17 = local_398;
            if (iVar10 == 0) {
              pfVar3->linkok = true;
              pfVar3->linkmode = local_388.st_mode;
            }
          }
        }
        *(undefined8 *)(puVar21 + -8) = 0x10b640;
        rpl_free(pcVar17);
        uVar9 = (pfVar3->stat).st_mode & 0xf000;
        if (uVar9 != 0xa000) goto LAB_0010ae8a;
      }
      pfVar3->filetype = symbolic_link;
    }
    n = (pfVar3->stat).st_blocks;
    if ((format == long_format) || (print_block_size != false)) {
      *(undefined8 *)(puVar21 + -8) = 0x10b0c1;
      pcVar12 = human_readable(n,local_2d8,human_output_opts,0x200,output_block_size);
      *(undefined8 *)(puVar21 + -8) = 0x10b0cb;
      iVar10 = gnu_mbswidth(pcVar12,0);
      if (block_size_width < iVar10) {
        block_size_width = iVar10;
      }
      if (format != long_format) goto LAB_0010aebe;
      if (print_owner != false) {
        uVar4 = (pfVar3->stat).st_uid;
        *(undefined8 *)(puVar21 + -8) = 0x10b748;
        iVar10 = format_user_width(uVar4);
        if (owner_width < iVar10) {
          owner_width = iVar10;
        }
      }
      if (print_group != false) {
        gid = (pfVar3->stat).st_gid;
        if (numeric_ids == false) {
          *(undefined8 *)(puVar21 + -8) = 0x10b948;
          pcVar12 = getgroup(gid);
          if (pcVar12 == (char *)0x0) goto LAB_0010b701;
          *(undefined8 *)(puVar21 + -8) = 0x10b95b;
          iVar10 = gnu_mbswidth(pcVar12,0);
          if (iVar10 < 0) {
            iVar10 = 0;
          }
        }
        else {
LAB_0010b701:
          *(undefined8 *)(puVar21 + -8) = 0x10b722;
          iVar10 = __snprintf_chk(0,0,1,0xffffffffffffffff,&DAT_00118ac3,gid);
        }
        if (group_width < iVar10) {
          group_width = iVar10;
        }
      }
      if (print_author != false) {
        uVar4 = (pfVar3->stat).st_uid;
        *(undefined8 *)(puVar21 + -8) = 0x10b768;
        iVar10 = format_user_width(uVar4);
        if (author_width < iVar10) {
          author_width = iVar10;
        }
      }
      if (print_scontext != false) goto LAB_0010b117;
LAB_0010b12f:
      if (format == long_format) {
        uVar6 = (pfVar3->stat).st_nlink;
        *(undefined8 *)(puVar21 + -8) = 0x10b14d;
        pcVar12 = umaxtostr(uVar6,local_2f8);
        *(undefined8 *)(puVar21 + -8) = 0x10b155;
        sVar14 = strlen(pcVar12);
        if (nlink_width < (int)sVar14) {
          nlink_width = (int)sVar14;
        }
        if (((pfVar3->stat).st_mode & 0xb000) == 0x2000) {
          _Var5 = (pfVar3->stat).st_rdev;
          *(undefined8 *)(puVar21 + -8) = 0x10b1a7;
          pcVar12 = umaxtostr((ulong)((uint)(_Var5 >> 0x20) & 0xfffff000 |
                                     (uint)(_Var5 >> 8) & 0xfff),local_2d8);
          *(undefined8 *)(puVar21 + -8) = 0x10b1af;
          sVar14 = strlen(pcVar12);
          if (major_device_number_width < (int)sVar14) {
            major_device_number_width = (int)sVar14;
          }
          uVar18 = (pfVar3->stat).st_rdev;
          *(undefined8 *)(puVar21 + -8) = 0x10b1d8;
          pcVar12 = umaxtostr((ulong)((uint)((uVar18 >> 0x14) << 8) | (uint)uVar18 & 0xff),local_2d8
                             );
          *(undefined8 *)(puVar21 + -8) = 0x10b1e0;
          sVar14 = strlen(pcVar12);
          if (minor_device_number_width < (int)sVar14) {
            minor_device_number_width = (int)sVar14;
          }
          iVar10 = minor_device_number_width + 2 + major_device_number_width;
          if (file_size_width < iVar10) {
LAB_0010b478:
            file_size_width = iVar10;
          }
        }
        else {
          uVar6 = (pfVar3->stat).st_size;
          *(undefined8 *)(puVar21 + -8) = 0x10b462;
          pcVar12 = human_readable(uVar6,local_2d8,file_human_output_opts,1,file_output_block_size);
          *(undefined8 *)(puVar21 + -8) = 0x10b46c;
          iVar10 = gnu_mbswidth(pcVar12,0);
          if (file_size_width < iVar10) goto LAB_0010b478;
        }
      }
    }
    else {
LAB_0010aebe:
      if (print_scontext != false) {
LAB_0010b117:
        pcVar12 = pfVar3->scontext;
        *(undefined8 *)(puVar21 + -8) = 0x10b123;
        sVar14 = strlen(pcVar12);
        if (scontext_width < (int)sVar14) {
          scontext_width = (int)sVar14;
        }
        goto LAB_0010b12f;
      }
    }
    puVar19 = puVar21;
    if (print_inode != false) {
      uVar6 = (pfVar3->stat).st_ino;
      *(undefined8 *)(puVar21 + -8) = 0x10b3a0;
      pcVar12 = umaxtostr(uVar6,local_2d8);
      *(undefined8 *)(puVar21 + -8) = 0x10b3a8;
      sVar14 = strlen(pcVar12);
      if (inode_number_width < (int)sVar14) {
        inode_number_width = (int)sVar14;
      }
    }
  }
LAB_0010aeda:
  *(undefined8 *)(puVar19 + -8) = 0x10aee2;
  pcVar12 = xstrdup(name);
  cwd_n_used = cwd_n_used + 1;
  pfVar3->name = pcVar12;
  puVar21 = puVar19;
LAB_0010aeed:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return n;
  }
                    /* WARNING: Subroutine does not return */
  *(undefined8 *)(puVar21 + -8) = 0x10ba47;
  __stack_chk_fail();
}

