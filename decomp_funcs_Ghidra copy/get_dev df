
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void get_dev(char *device,char *mount_point,char *file,char *stat_file,char *fstype,_Bool me_dummy,
            _Bool me_remote,fs_usage *force_fsu,_Bool process_all)

{
  field_type_t fVar1;
  long lVar2;
  field_data_t *pfVar3;
  ulong uVar4;
  mount_entry *pmVar5;
  size_t sVar6;
  _Bool _Var7;
  int iVar8;
  size_t sVar9;
  size_t sVar10;
  int *piVar11;
  undefined8 uVar12;
  char *pcVar13;
  devlist *pdVar14;
  field_data_t **ppfVar15;
  field_values_t *pfVar16;
  ulong uVar17;
  ulong uVar18;
  ulong uVar19;
  long in_FS_OFFSET;
  double dVar20;
  double dVar21;
  char *local_448;
  char *cell;
  fs_usage fsu;
  field_values_t block_values;
  field_values_t inode_values;
  stat sb;
  char buf [653];
  
  lVar2 = *(long *)(in_FS_OFFSET + 0x28);
  if (((((me_remote != false) && (show_local_fs != false)) ||
       ((me_dummy != false && ((show_all_fs == false && (show_listed_fs == false)))))) ||
      (_Var7 = selected_fstype(fstype), _Var7 == false)) ||
     (_Var7 = excluded_fstype(fstype), _Var7 != false)) goto LAB_00105b58;
  local_448 = stat_file;
  if ((mount_point == (char *)0x0) || (force_fsu != (fs_usage *)0x0)) {
    if ((stat_file == (char *)0x0) && (local_448 = mount_point, mount_point == (char *)0x0)) {
      local_448 = device;
    }
    if (force_fsu == (fs_usage *)0x0) goto LAB_001058b7;
    fsu.fsu_blocksize = force_fsu->fsu_blocksize;
    fsu.fsu_blocks = force_fsu->fsu_blocks;
    fsu.fsu_bfree = force_fsu->fsu_bfree;
    fsu.fsu_bavail = force_fsu->fsu_bavail;
    fsu._32_16_ = *(undefined (*) [16])&force_fsu->fsu_bavail_top_bit_set;
    fsu.fsu_ffree = force_fsu->fsu_ffree;
    if (((fsu.fsu_blocks == 0) && (show_all_fs == false)) && (show_listed_fs == false))
    goto LAB_00105b58;
  }
  else {
    if (*mount_point != '/') goto LAB_00105b58;
    if (stat_file == (char *)0x0) {
      local_448 = mount_point;
    }
LAB_001058b7:
    iVar8 = get_fs_usage(local_448,device,&fsu);
    if (iVar8 == 0) {
      if (process_all == false) {
LAB_00106137:
        if ((fsu.fsu_blocks != 0) || (show_all_fs != false)) goto LAB_00105902;
      }
      else {
        if (show_all_fs != false) {
          iVar8 = __xstat(1,local_448,(stat *)&sb);
          if ((((iVar8 == 0) && (pdVar14 = devlist_for_dev(sb.st_dev), pdVar14 != (devlist *)0x0))
              && ((pmVar5 = pdVar14->me, pmVar5 != (mount_entry *)0x0 &&
                  (iVar8 = strcmp(pmVar5->me_devname,device), iVar8 != 0)))) &&
             (((pmVar5->field_0x28 & 2) == 0 || (me_remote == false)))) {
            fsu._32_8_ = SUB168(fsu._32_16_,0) & 0xffffffffffffff00;
            fstype = "-";
            fsu.fsu_ffree = 0xffffffffffffffff;
            fsu._32_16_ = CONCAT88(0xffffffffffffffff,fsu._32_8_);
            fsu.fsu_bavail = 0xffffffffffffffff;
            fsu.fsu_bfree = 0xffffffffffffffff;
            fsu.fsu_blocks = 0xffffffffffffffff;
            fsu.fsu_blocksize = 0xffffffffffffffff;
          }
          goto LAB_00106137;
        }
        if (fsu.fsu_blocks != 0) goto LAB_00105902;
      }
      if (show_listed_fs == false) goto LAB_00105b58;
      if (force_fsu != (fs_usage *)0x0) goto LAB_00105909;
    }
    else {
      piVar11 = __errno_location();
      if ((process_all == false) || ((*piVar11 != 0xd && (*piVar11 != 2)))) {
        uVar12 = quotearg_n_style_colon(0,3,local_448);
        error(0,*piVar11,&DAT_00112ff2,uVar12);
        exit_status = 1;
        goto LAB_00105b58;
      }
      if (show_all_fs == false) goto LAB_00105b58;
      fsu._32_8_ = SUB168(fsu._32_16_,0) & 0xffffffffffffff00;
      fstype = "-";
      fsu.fsu_ffree = 0xffffffffffffffff;
      fsu._32_16_ = CONCAT88(0xffffffffffffffff,fsu._32_8_);
      fsu.fsu_bavail = 0xffffffffffffffff;
      fsu.fsu_bfree = 0xffffffffffffffff;
      fsu.fsu_blocks = 0xffffffffffffffff;
      fsu.fsu_blocksize = 0xffffffffffffffff;
    }
LAB_00105902:
    file_systems_processed = true;
  }
LAB_00105909:
  alloc_table_row();
  if (device == (char *)0x0) {
    device = "-";
  }
  if (file == (char *)0x0) {
    file = "-";
  }
  local_448 = xstrdup(device);
  if ((((process_all != false) && (sVar9 = strlen(local_448), 0x24 < sVar9)) &&
      (sVar9 = strspn(local_448 + (sVar9 - 0x24),"-0123456789abcdefABCDEF"), sVar9 == 0x24)) &&
     (pcVar13 = canonicalize_filename_mode(local_448,CAN_EXISTING), pcVar13 != (char *)0x0)) {
    rpl_free(local_448);
    local_448 = pcVar13;
  }
  inode_values.output_units = 1;
  if (fstype == (char *)0x0) {
    fstype = "-";
  }
  inode_values.input_units = 1;
  inode_values.total = fsu.fsu_files;
  inode_values.available_to_root = fsu.fsu_ffree;
  inode_values.available = fsu.fsu_ffree;
  inode_values.negate_available = false;
  inode_values.used = 0xffffffffffffffff;
  inode_values.negate_used = false;
  if ((fsu.fsu_ffree < 0xfffffffffffffffe) && (fsu.fsu_files < 0xfffffffffffffffe)) {
    inode_values.used = fsu.fsu_files - fsu.fsu_ffree;
    inode_values.negate_used = fsu.fsu_files < fsu.fsu_ffree;
  }
  block_values.used = 0xffffffffffffffff;
  block_values.negate_used = false;
  block_values.output_units = output_block_size;
  block_values.negate_available =
       (_Bool)(fsu.fsu_bavail < 0xfffffffffffffffe & fsu.fsu_bavail_top_bit_set);
  block_values.input_units = fsu.fsu_blocksize;
  block_values.total = fsu.fsu_blocks;
  block_values.available = fsu.fsu_bavail;
  block_values.available_to_root = fsu.fsu_bfree;
  if ((fsu.fsu_blocks < 0xfffffffffffffffe) && (fsu.fsu_bfree < 0xfffffffffffffffe)) {
    block_values.used = fsu.fsu_blocks - fsu.fsu_bfree;
    block_values.negate_used = fsu.fsu_blocks < fsu.fsu_bfree;
  }
  if ((print_grand_total != false) && (force_fsu == (fs_usage *)0x0)) {
    if (fsu.fsu_files < 0xfffffffffffffffe) {
      grand_fsu.fsu_files = grand_fsu.fsu_files + fsu.fsu_files;
    }
    if (fsu.fsu_ffree < 0xfffffffffffffffe) {
      grand_fsu.fsu_ffree = grand_fsu.fsu_ffree + fsu.fsu_ffree;
    }
    if (fsu.fsu_blocks < 0xfffffffffffffffe) {
      grand_fsu.fsu_blocks = grand_fsu.fsu_blocks + fsu.fsu_blocks * fsu.fsu_blocksize;
    }
    if (fsu.fsu_bfree < 0xfffffffffffffffe) {
      grand_fsu.fsu_bfree = grand_fsu.fsu_bfree + fsu.fsu_bfree * fsu.fsu_blocksize;
    }
    if (fsu.fsu_bavail < 0xfffffffffffffffe) {
      uVar18 = fsu.fsu_bavail * fsu.fsu_blocksize;
      if (grand_fsu.fsu_bavail_top_bit_set == block_values.negate_available) {
        grand_fsu.fsu_bavail = uVar18 + grand_fsu.fsu_bavail;
      }
      else {
        if (grand_fsu.fsu_bavail_top_bit_set != false) {
          grand_fsu.fsu_bavail = -grand_fsu.fsu_bavail;
        }
        if (block_values.negate_available != false) {
          uVar18 = -uVar18;
        }
        if (uVar18 < grand_fsu.fsu_bavail) {
          grand_fsu.fsu_bavail = grand_fsu.fsu_bavail - uVar18;
        }
        else {
          grand_fsu.fsu_bavail = uVar18 - grand_fsu.fsu_bavail;
          grand_fsu.fsu_bavail_top_bit_set = block_values.negate_available;
        }
        if (grand_fsu.fsu_bavail_top_bit_set != false) {
          grand_fsu.fsu_bavail = -grand_fsu.fsu_bavail;
        }
      }
    }
  }
  uVar18 = 0;
  ppfVar15 = columns;
  if (ncolumns != 0) {
    do {
      pfVar3 = ppfVar15[uVar18];
      fVar1 = pfVar3->field_type;
      if (fVar1 == INODE_FLD) {
        pfVar16 = &inode_values;
      }
      else if (fVar1 == OTHER_FLD) {
        pfVar16 = (field_values_t *)0x0;
      }
      else {
        if (fVar1 != BLOCK_FLD) {
                    /* WARNING: Subroutine does not return */
          __assert_fail("!\"bad field_type\"","src/df.c",0x480,"get_dev");
        }
        pfVar16 = &block_values;
      }
      if (FILE_FIELD < pfVar3->field) {
                    /* WARNING: Subroutine does not return */
        __assert_fail("!\"unhandled field\"","src/df.c",0x4e6,"get_dev");
      }
      switch(pfVar3->field) {
      case SOURCE_FIELD:
        cell = xstrdup(local_448);
        break;
      case FSTYPE_FIELD:
        cell = xstrdup(fstype);
        break;
      default:
        pcVar13 = "-";
        if (pfVar16->total < 0xfffffffffffffffe) {
          pcVar13 = df_readable(false,pfVar16->total,buf,pfVar16->input_units,pfVar16->output_units)
          ;
        }
        goto LAB_00105c53;
      case USED_FIELD:
      case IUSED_FIELD:
        uVar19 = pfVar16->used;
        _Var7 = pfVar16->negate_used;
        goto joined_r0x00105c2c;
      case AVAIL_FIELD:
      case IAVAIL_FIELD:
        uVar19 = pfVar16->available;
        _Var7 = pfVar16->negate_available;
joined_r0x00105c2c:
        if ((uVar19 < 0xfffffffffffffffe) || (pcVar13 = "-", _Var7 != false)) {
          pcVar13 = df_readable(_Var7,uVar19,buf,pfVar16->input_units,pfVar16->output_units);
        }
        goto LAB_00105c53;
      case PCENT_FIELD:
      case IPCENT_FIELD:
        uVar19 = pfVar16->used;
        if ((uVar19 < 0xfffffffffffffffe) &&
           (uVar4 = pfVar16->available, uVar4 < 0xfffffffffffffffe)) {
          if (pfVar16->negate_used == false) {
            if (0x28f5c28f5c28f5c < uVar19) {
LAB_00105d8f:
              if ((long)uVar19 < 0) {
                dVar20 = (double)(uVar19 >> 1 | (ulong)((uint)uVar19 & 1));
                dVar20 = dVar20 + dVar20;
              }
              else {
                dVar20 = (double)uVar19;
              }
              goto LAB_00105da1;
            }
            uVar17 = uVar19 + uVar4;
            if ((uVar17 == 0) || (pfVar16->negate_available != CARRY8(uVar19,uVar4)))
            goto LAB_00105d8f;
            uVar19 = (ulong)((uVar19 * 100) % uVar17 != 0) + (uVar19 * 100) / uVar17;
            if ((long)uVar19 < 0) {
              dVar20 = (double)(uVar19 >> 1 | (ulong)((uint)uVar19 & 1));
              dVar20 = dVar20 + dVar20;
            }
            else {
              dVar20 = (double)uVar19;
            }
          }
          else {
            uVar17 = -uVar19;
            if ((long)uVar19 < 1) {
              dVar20 = (double)uVar17;
            }
            else {
              dVar20 = (double)(uVar17 >> 1 | (ulong)((uint)uVar17 & 1));
              dVar20 = dVar20 + dVar20;
            }
            dVar20 = (double)((ulong)dVar20 ^ _DAT_00111fa0);
LAB_00105da1:
            if (pfVar16->negate_available == false) {
              if ((long)uVar4 < 0) {
                dVar21 = (double)(uVar4 >> 1 | (ulong)((uint)uVar4 & 1));
                dVar21 = dVar21 + dVar21;
              }
              else {
                dVar21 = (double)uVar4;
              }
            }
            else {
              uVar19 = -uVar4;
              if ((long)uVar4 < 1) {
                dVar21 = (double)uVar19;
              }
              else {
                dVar21 = (double)(uVar19 >> 1 | (ulong)((uint)uVar19 & 1));
                dVar21 = dVar21 + dVar21;
              }
              dVar21 = (double)((ulong)dVar21 ^ _DAT_00111fa0);
            }
            if (dVar21 + dVar20 == 0.0) goto LAB_00105b96;
            dVar20 = (dVar20 * _DAT_00111fb0) / (dVar21 + dVar20);
            dVar21 = (double)(long)dVar20;
            if (((dVar21 - _DAT_00111fb8 < dVar20) && (dVar20 <= _DAT_00111fb8 + dVar21)) &&
               (dVar20 = _DAT_00111fb8 + dVar21, dVar20 <= dVar21)) {
              dVar20 = dVar21 + 0.0;
            }
          }
          if (dVar20 < 0.0) goto LAB_00105b96;
          iVar8 = rpl_asprintf(&cell,"%.0f%%");
          if (iVar8 == -1) {
            cell = (char *)0x0;
            goto LAB_00105e59;
          }
        }
        else {
LAB_00105b96:
          cell = strdup("-");
        }
        if (cell == (char *)0x0) {
LAB_00105e59:
                    /* WARNING: Subroutine does not return */
          xalloc_die();
        }
        break;
      case TARGET_FIELD:
        cell = xstrdup(mount_point);
        break;
      case FILE_FIELD:
        pcVar13 = file;
LAB_00105c53:
        cell = xstrdup(pcVar13);
      }
      replace_problematic_chars(cell);
      iVar8 = gnu_mbswidth(cell,0);
      ppfVar15 = columns;
      sVar6 = ncolumns;
      sVar10 = (size_t)iVar8;
      pfVar3 = columns[uVar18];
      if (sVar10 <= pfVar3->width) {
        sVar10 = pfVar3->width;
      }
      uVar19 = uVar18 + 1;
      pfVar3->width = sVar10;
      table[nrows - 1][uVar18] = cell;
      uVar18 = uVar19;
    } while (uVar19 < sVar6);
  }
  rpl_free(local_448);
LAB_00105b58:
  if (lVar2 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

