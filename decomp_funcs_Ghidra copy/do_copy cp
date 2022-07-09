
_Bool do_copy(int n_files,char **file,char *target_directory,_Bool no_target_directory,cp_options *x
             )

{
  char cVar1;
  long lVar2;
  dir_attr *p;
  _Bool _Var3;
  byte bVar4;
  uint uVar5;
  int iVar6;
  char *pcVar7;
  size_t sVar8;
  byte *file_00;
  char *pcVar9;
  undefined8 uVar10;
  int *piVar11;
  char *verbose_fmt_string;
  ulong uVar12;
  long lVar13;
  undefined *puVar14;
  char ***pppcVar15;
  char ***pppcVar16;
  char ***pppcVar17;
  cp_options *pcVar18;
  char *pcVar19;
  long in_FS_OFFSET;
  char **local_118;
  char *local_110;
  char **local_108;
  int local_100;
  int local_fc;
  _Bool new_dst;
  _Bool copy_into_self;
  dir_attr *attr_list;
  char *arg_in_concat;
  stat sb;
  long local_40;
  
  bVar4 = 0;
  pppcVar17 = &local_118;
  pppcVar16 = &local_118;
  pppcVar15 = &local_118;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  new_dst = false;
  local_110 = target_directory;
  local_108 = file;
  local_fc = n_files;
  if ((int)(uint)(target_directory == (char *)0x0) < n_files) {
    sb.st_mode = 0;
    if (no_target_directory == false) {
      if (target_directory == (char *)0x0) {
        pcVar9 = file[(long)n_files + -1];
        local_110 = pcVar9;
        local_100 = target_directory_operand(pcVar9,&sb);
        if (local_100 == -1) {
          piVar11 = __errno_location();
          iVar6 = *piVar11;
          if (iVar6 == 2) goto LAB_00105c80;
          while (2 < local_fc) {
            pcVar9 = quotearg_style(shell_escape_always_quoting_style,local_110);
            uVar10 = dcgettext(0,"target %s",5);
            error(1,iVar6,uVar10,pcVar9);
LAB_00105c80:
            new_dst = true;
          }
        }
        else {
          local_fc = n_files + -1;
          if (pcVar9 != (char *)0x0) {
            if (1 < local_fc) goto LAB_00105baf;
            bVar4 = 1;
            if (local_fc == 1) goto LAB_001057bb;
            goto LAB_00105919;
          }
        }
LAB_00105959:
        if (parents_option != false) {
          pcVar9 = "with --parents, the destination must be a directory";
          goto LAB_00105d6d;
        }
        pcVar9 = *local_108;
        pcVar7 = local_108[1];
        if (((((x->unlink_dest_after_failed_open != false) && (x->backup_type != no_backups)) &&
             (iVar6 = strcmp(pcVar9,pcVar7), iVar6 == 0)) &&
            ((new_dst == false &&
             ((sb.st_mode != 0 || (iVar6 = __xstat(1,pcVar7,(stat *)&sb), iVar6 == 0)))))) &&
           ((sb.st_mode & 0xf000) == 0x8000)) {
          pcVar7 = find_backup_file_name(-100,pcVar7,x->backup_type);
          pcVar18 = &do_copy::lexical_block_4::lexical_block_4_0::x_tmp;
          for (lVar13 = 0x16; lVar13 != 0; lVar13 = lVar13 + -1) {
            pcVar18->backup_type = x->backup_type;
            x = (cp_options *)((long)x + (ulong)bVar4 * -8 + 4);
            pcVar18 = (cp_options *)((long)pcVar18 + ((ulong)bVar4 * -2 + 1) * 4);
          }
          x = &do_copy::lexical_block_4::lexical_block_4_0::x_tmp;
          do_copy::lexical_block_4::lexical_block_4_0::x_tmp.backup_type = no_backups;
        }
        bVar4 = copy(pcVar9,pcVar7,-100,pcVar7,-(uint)new_dst,x,(_Bool *)&arg_in_concat,(_Bool *)0x0
                    );
        pppcVar16 = &local_118;
      }
      else {
        local_100 = target_directory_operand(target_directory,&sb);
        if (local_100 == -1) {
          pcVar9 = quotearg_style(shell_escape_always_quoting_style,local_110);
          uVar10 = dcgettext(0,"target directory %s",5);
          piVar11 = __errno_location();
          error(1,*piVar11,uVar10,pcVar9);
          goto LAB_00105d57;
        }
        if (local_fc != 1) {
LAB_00105baf:
          dest_info_init(x);
          src_info_init(x);
        }
LAB_001057bb:
        lVar13 = 0;
        bVar4 = 1;
        local_118 = &arg_in_concat;
        do {
          arg_in_concat = (char *)0x0;
          pcVar9 = local_108[lVar13];
          if (remove_trailing_slashes == false) {
            if (parents_option != false) goto LAB_00105a40;
LAB_0010580b:
            *(undefined8 *)((long)pppcVar15 + -8) = 0x105810;
            pcVar7 = last_component(pcVar9);
            *(undefined8 *)((long)pppcVar15 + -8) = 0x10581b;
            sVar8 = strlen(pcVar7);
            for (puVar14 = (undefined *)pppcVar15;
                puVar14 != (undefined *)((long)pppcVar15 + -(sVar8 + 0x18 & 0xfffffffffffff000));
                puVar14 = puVar14 + -0x1000) {
              *(undefined8 *)(puVar14 + -8) = *(undefined8 *)(puVar14 + -8);
            }
            uVar12 = (ulong)((uint)(sVar8 + 0x18) & 0xff0);
            lVar2 = -uVar12;
            pppcVar15 = (char ***)(puVar14 + lVar2);
            if (uVar12 != 0) {
              *(undefined8 *)(puVar14 + -8) = *(undefined8 *)(puVar14 + -8);
            }
            *(undefined8 *)(puVar14 + lVar2 + -8) = 0x10587b;
            file_00 = (byte *)memcpy((void *)((ulong)(puVar14 + lVar2 + 0xf) & 0xfffffffffffffff0),
                                     pcVar7,sVar8 + 1);
            *(undefined8 *)(puVar14 + lVar2 + -8) = 0x105886;
            strip_trailing_slashes((char *)file_00);
            uVar5 = *file_00 - 0x2e;
            if ((uVar5 == 0) && (uVar5 = file_00[1] - 0x2e, uVar5 == 0)) {
              uVar5 = (uint)file_00[2];
            }
            *(undefined8 *)(puVar14 + lVar2 + -8) = 0x1058bf;
            pcVar7 = file_name_concat(local_110,(char *)(file_00 + (uVar5 == 0)),local_118);
LAB_001058c2:
            *(undefined8 *)((long)pppcVar15 + -8) = 0;
            *(_Bool **)((long)pppcVar15 + -0x10) = &copy_into_self;
            *(undefined8 *)((long)pppcVar15 + -0x18) = 0x1058ef;
            _Var3 = copy(pcVar9,pcVar7,local_100,arg_in_concat,(uint)new_dst,x,
                         *(_Bool **)((long)pppcVar15 + -0x10),*(_Bool **)((long)pppcVar15 + -8));
            bVar4 = bVar4 & _Var3;
            if (parents_option != false) {
              *(undefined8 *)((long)pppcVar15 + -8) = 0x105ba3;
              _Var3 = re_protect(pcVar7,local_100,arg_in_concat,attr_list,x);
              bVar4 = bVar4 & _Var3;
              goto LAB_00105b43;
            }
          }
          else {
            *(undefined8 *)((long)pppcVar15 + -8) = 0x105a30;
            strip_trailing_slashes(pcVar9);
            if (parents_option == false) goto LAB_0010580b;
LAB_00105a40:
            *(undefined8 *)((long)pppcVar15 + -8) = 0x105a45;
            sVar8 = strlen(pcVar9);
            for (puVar14 = (undefined *)pppcVar15;
                puVar14 != (undefined *)((long)pppcVar15 + -(sVar8 + 0x18 & 0xfffffffffffff000));
                puVar14 = puVar14 + -0x1000) {
              *(undefined8 *)(puVar14 + -8) = *(undefined8 *)(puVar14 + -8);
            }
            uVar12 = (ulong)((uint)(sVar8 + 0x18) & 0xff0);
            lVar2 = -uVar12;
            pppcVar15 = (char ***)(puVar14 + lVar2);
            if (uVar12 != 0) {
              *(undefined8 *)(puVar14 + -8) = *(undefined8 *)(puVar14 + -8);
            }
            *(undefined8 *)(puVar14 + lVar2 + -8) = 0x105aa5;
            pcVar7 = (char *)memcpy((void *)((ulong)(puVar14 + lVar2 + 0xf) & 0xfffffffffffffff0),
                                    pcVar9,sVar8 + 1);
            *(undefined8 *)(puVar14 + lVar2 + -8) = 0x105ab0;
            strip_trailing_slashes(pcVar7);
            *(undefined8 *)(puVar14 + lVar2 + -8) = 0x105ac6;
            pcVar19 = local_110;
            pcVar7 = file_name_concat(local_110,pcVar7,local_118);
            _Var3 = x->verbose;
            verbose_fmt_string = (char *)0x0;
            *(char **)(puVar14 + lVar2 + -8) = pcVar19;
            *(cp_options **)(puVar14 + lVar2 + -0x10) = x;
            if (_Var3 != false) {
              verbose_fmt_string = "%s -> %s\n";
            }
            *(undefined8 *)(puVar14 + lVar2 + -0x18) = 0x105b07;
            _Var3 = make_dir_parents_private
                              (pcVar7,(long)arg_in_concat - (long)pcVar7,local_100,
                               verbose_fmt_string,&attr_list,&new_dst,
                               *(cp_options **)(puVar14 + lVar2 + -0x10));
            cVar1 = *arg_in_concat;
            while (cVar1 == '/') {
              arg_in_concat = arg_in_concat + 1;
              cVar1 = *arg_in_concat;
            }
            if (_Var3 != false) goto LAB_001058c2;
            bVar4 = 0;
            pppcVar15 = (char ***)(puVar14 + lVar2);
LAB_00105b43:
            p = attr_list;
            if (parents_option != false) {
              while (attr_list = p, p != (dir_attr *)0x0) {
                attr_list = p->next;
                *(undefined8 *)((long)pppcVar15 + -8) = 0x105b73;
                rpl_free(p);
                p = attr_list;
              }
            }
          }
          lVar13 = lVar13 + 1;
          *(undefined8 *)((long)pppcVar15 + -8) = 0x10590d;
          rpl_free(pcVar7);
          pppcVar16 = pppcVar15;
        } while ((int)lVar13 < local_fc);
      }
LAB_00105919:
      pppcVar17 = pppcVar16;
      if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
        return (_Bool)bVar4;
      }
LAB_00105d57:
                    /* WARNING: Subroutine does not return */
      *(undefined8 *)((long)pppcVar17 + -8) = 0x105d5c;
      __stack_chk_fail();
    }
    if (target_directory == (char *)0x0) {
      if (n_files < 3) goto LAB_00105959;
    }
    else {
      uVar10 = dcgettext(0,"cannot combine --target-directory (-t) and --no-target-directory (-T)",5
                        );
      error(1,0,uVar10);
    }
    pcVar9 = quotearg_style(shell_escape_always_quoting_style,local_108[2]);
    pcVar7 = "extra operand %s";
  }
  else {
    if (n_files != 1) {
      pcVar9 = "missing file operand";
LAB_00105d6d:
      uVar10 = dcgettext(0,pcVar9,5);
      error(0,0,uVar10);
      goto LAB_00105d0a;
    }
    pcVar9 = quotearg_style(shell_escape_always_quoting_style,*file);
    pcVar7 = "missing destination file operand after %s";
  }
  uVar10 = dcgettext(0,pcVar7,5);
  error(0,0,uVar10,pcVar9);
LAB_00105d0a:
                    /* WARNING: Subroutine does not return */
  usage(1);
}

