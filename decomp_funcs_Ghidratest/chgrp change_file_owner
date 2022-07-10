
ulong change_file_owner(FTS *param_1,FTSENT *param_2,uint param_3,__gid_t param_4,uint param_5,
                       uint param_6,int *param_7)

{
  byte bVar1;
  __ino_t *p_Var2;
  __ino_t *p_Var3;
  char *pcVar4;
  _Bool _Var5;
  char cVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  int *piVar10;
  undefined8 uVar11;
  char *pcVar12;
  char *pcVar13;
  char *pcVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  ushort uVar17;
  char *group;
  __uid_t uid;
  uint uVar18;
  ulong uVar19;
  stat *__stat_buf;
  long in_FS_OFFSET;
  bool bVar20;
  bool bVar21;
  char *local_198;
  char *local_190;
  char *local_188;
  char *local_180;
  stat local_178;
  stat local_e8;
  char local_58 [24];
  long local_40;
  
  uVar17 = param_2->fts_info;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  pcVar12 = param_2->fts_path;
  switch(uVar17) {
  case 1:
    uVar19 = (ulong)*(byte *)(param_7 + 1);
    if (*(byte *)(param_7 + 1) != 0) {
      p_Var3 = *(__ino_t **)(param_7 + 2);
      if (((p_Var3 != (__ino_t *)0x0) && (param_2->fts_statp[0].st_ino == *p_Var3)) &&
         (param_2->fts_statp[0].st_dev == p_Var3[1])) {
        if ((*pcVar12 == '/') && (pcVar12[1] == '\0')) {
          pcVar12 = quotearg_style(shell_escape_always_quoting_style,pcVar12);
          uVar11 = dcgettext(0,"it is dangerous to operate recursively on %s",5);
          error(0,0,uVar11,pcVar12);
        }
        else {
          uVar11 = quotearg_n_style(1,4,"/");
          uVar15 = quotearg_n_style(0,4,pcVar12);
          uVar16 = dcgettext(0,"it is dangerous to operate recursively on %s (same as %s)",5);
          error(0,0,uVar16,uVar15,uVar11);
        }
        uVar19 = 0;
        uVar11 = dcgettext(0,"use --no-preserve-root to override this failsafe",5);
        error(0,0,uVar11);
        rpl_fts_set(param_1,param_2,4);
        rpl_fts_read(param_1);
      }
      goto LAB_00103811;
    }
    break;
  case 2:
    _Var5 = cycle_warning_required(param_1,param_2);
    if (_Var5 != false) {
      uVar11 = quotearg_n_style_colon(0,3,pcVar12);
      uVar15 = dcgettext(0,
                         "WARNING: Circular directory structure.\nThis almost certainly means that you have a corrupted file system.\nNOTIFY YOUR SYSTEM MANAGER.\nThe following directory is part of the cycle:\n  %s\n"
                         ,5);
      uVar19 = 0;
      error(0,0,uVar15,uVar11);
      goto LAB_00103811;
    }
    break;
  case 4:
    bVar1 = *(byte *)((long)param_7 + 0x11);
    if (bVar1 == 0) {
      pcVar13 = quotearg_style(shell_escape_always_quoting_style,pcVar12);
      pcVar14 = "cannot read directory %s";
      goto LAB_0010392e;
    }
LAB_001037fe:
    if (*param_7 == 0) goto LAB_00103895;
    goto LAB_00103808;
  case 6:
    if (*(char *)(param_7 + 1) == '\0') {
LAB_0010384a:
      uVar19 = 1;
      goto LAB_00103811;
    }
    break;
  case 7:
    bVar1 = *(byte *)((long)param_7 + 0x11);
    if (bVar1 != 0) goto LAB_001037fe;
    pcVar13 = (char *)quotearg_n_style_colon(0,3,pcVar12);
    iVar7 = param_2->fts_errno;
    pcVar14 = "%s";
    goto LAB_00103880;
  case 10:
    if ((param_2->fts_level == 0) && (param_2->fts_number == 0)) {
      param_2->fts_number = 1;
      rpl_fts_set(param_1,param_2,1);
      goto LAB_0010384a;
    }
    bVar1 = *(byte *)((long)param_7 + 0x11);
    if (bVar1 != 0) goto LAB_001037fe;
    pcVar13 = quotearg_style(shell_escape_always_quoting_style,pcVar12);
    pcVar14 = "cannot access %s";
LAB_0010392e:
    pcVar14 = (char *)dcgettext(0,pcVar14,5);
    iVar7 = param_2->fts_errno;
LAB_00103880:
    uVar19 = (ulong)bVar1;
    error(0,iVar7,pcVar14,pcVar13);
    if (*param_7 == 0) {
LAB_00103895:
      pcVar13 = *(char **)(param_7 + 6);
      iVar7 = 3;
      uVar19 = 0;
      local_188 = (char *)0x0;
      local_190 = (char *)0x0;
      goto joined_r0x001038b7;
    }
    goto LAB_0010380b;
  }
  pcVar13 = param_2->fts_accpath;
  cVar6 = *(char *)(param_7 + 4);
  __stat_buf = (stat *)param_2->fts_statp;
  if ((((param_5 & param_6) != 0xffffffff) || (*param_7 != 2)) || (*(long *)(param_7 + 2) != 0)) {
    if (cVar6 != '\0') goto LAB_001035c0;
    goto LAB_001035d6;
  }
  if (cVar6 == '\0') {
    if (((uVar17 & 0xfffd) == 4) || ((ushort)(uVar17 - 1) < 2)) {
      iVar7 = param_1->fts_cwd_fd;
LAB_0010366f:
      iVar7 = fchownat(iVar7,pcVar13,param_3,param_4,0x100);
      bVar21 = iVar7 == 0;
      if ((bVar21) || (piVar10 = __errno_location(), *piVar10 != 0x5f)) {
LAB_0010369a:
        if (!bVar21) {
LAB_001036a3:
          bVar1 = *(byte *)((long)param_7 + 0x11);
          if (bVar1 == 0) {
            pcVar13 = quotearg_style(shell_escape_always_quoting_style,pcVar12);
            if (param_3 == 0xffffffff) {
              uVar11 = dcgettext(0,"changing group of %s",5);
            }
            else {
              uVar11 = dcgettext(0,"changing ownership of %s",5);
            }
            piVar10 = __errno_location();
            goto LAB_00103e44;
          }
LAB_001036b1:
          if (*param_7 == 0) {
            uVar19 = 0;
            goto LAB_001036be;
          }
LAB_00103808:
          uVar19 = 0;
          goto LAB_0010380b;
        }
LAB_00103c70:
        iVar9 = *param_7;
        if (iVar9 == 2) goto LAB_00103628;
        if (param_3 == 0xffffffff) {
LAB_00103c9a:
          if ((param_4 == 0xffffffff) || (__stat_buf->st_gid == param_4)) goto joined_r0x0010361b;
          uid = __stat_buf->st_uid;
          iVar7 = 2;
          uVar19 = 1;
        }
        else {
          uid = __stat_buf->st_uid;
          iVar7 = 2;
          uVar19 = 1;
          if (uid == param_3) goto LAB_00103c9a;
        }
        goto LAB_001036c8;
      }
      if (*param_7 == 0) {
        uVar19 = 1;
        iVar7 = 1;
        goto LAB_001036c4;
      }
LAB_00103628:
      uVar19 = 1;
    }
    else {
LAB_00103660:
      iVar7 = param_1->fts_cwd_fd;
      if (cVar6 == '\0') goto LAB_0010366f;
      if ((param_5 & param_6) == 0xffffffff) {
LAB_00103b46:
        iVar7 = fchownat(iVar7,pcVar13,param_3,param_4,0);
        bVar21 = iVar7 == 0;
        goto LAB_0010369a;
      }
      uVar8 = __stat_buf->st_mode & 0xf000;
      if (uVar8 == 0x8000) {
        uVar18 = 0x900;
      }
      else {
        uVar18 = 0x10900;
        if (uVar8 != 0x4000) goto LAB_00103b46;
      }
      iVar9 = __openat_2(iVar7,pcVar13,uVar18);
      if (iVar9 < 0) {
        piVar10 = __errno_location();
        if (*piVar10 == 0xd) {
          if ((__stat_buf->st_mode & 0xf000) == 0x8000) {
            iVar9 = __openat_2(iVar7,pcVar13,uVar18 | 1);
            if (-1 < iVar9) goto LAB_00103d88;
            if (*piVar10 != 0xd) goto LAB_001036a3;
          }
          iVar7 = param_1->fts_cwd_fd;
          goto LAB_00103b46;
        }
        goto LAB_001036a3;
      }
LAB_00103d88:
      iVar7 = __fxstat(1,iVar9,&local_e8);
      if (iVar7 != 0) {
LAB_00103f90:
        piVar10 = __errno_location();
        iVar7 = *piVar10;
        close(iVar9);
        *piVar10 = iVar7;
        goto LAB_001036a3;
      }
      if ((__stat_buf->st_ino == local_e8.st_ino) && (__stat_buf->st_dev == local_e8.st_dev)) {
        if (((param_5 == 0xffffffff) || (param_5 == local_e8.st_uid)) &&
           ((param_6 == 0xffffffff || (param_6 == local_e8.st_gid)))) {
          iVar7 = fchown(iVar9,param_3,param_4);
          if (iVar7 != 0) goto LAB_00103f90;
          iVar7 = close(iVar9);
          if (iVar7 != 0) goto LAB_001036a3;
        }
        else {
          piVar10 = __errno_location();
          iVar7 = *piVar10;
          close(iVar9);
          *piVar10 = iVar7;
        }
        goto LAB_00103c70;
      }
      piVar10 = __errno_location();
      iVar7 = *piVar10;
      close(iVar9);
      *piVar10 = iVar7;
      iVar7 = *param_7;
      uVar19 = 0;
joined_r0x00103df3:
      if (iVar7 == 0) {
LAB_001036be:
        iVar7 = 3;
        goto LAB_001036c4;
      }
    }
LAB_0010380b:
    cVar6 = *(char *)(param_7 + 1);
  }
  else {
LAB_001035c0:
    if ((param_2->fts_statp[0].st_mode & 0xf000) == 0xa000) {
      __stat_buf = &local_178;
      iVar7 = __fxstatat(1,param_1->fts_cwd_fd,pcVar13,__stat_buf,0);
      if (iVar7 == 0) {
        uVar17 = param_2->fts_info;
        goto LAB_001035d6;
      }
      bVar1 = *(byte *)((long)param_7 + 0x11);
      if (bVar1 != 0) goto LAB_001036b1;
      pcVar13 = quotearg_style(shell_escape_always_quoting_style,pcVar12);
      uVar11 = dcgettext(0,"cannot dereference %s",5);
      piVar10 = __errno_location();
LAB_00103e44:
      uVar19 = (ulong)bVar1;
      error(0,*piVar10,uVar11,pcVar13);
      iVar7 = *param_7;
      goto joined_r0x00103df3;
    }
LAB_001035d6:
    bVar20 = (uVar17 & 0xfffd) != 4;
    bVar21 = 1 < (ushort)(uVar17 - 1);
    if ((param_5 == 0xffffffff) || (__stat_buf->st_uid == param_5)) {
      if (param_6 == 0xffffffff) {
        if ((((bVar20 && bVar21) || (p_Var2 = *(__ino_t **)(param_7 + 2), p_Var2 == (__ino_t *)0x0))
            || (__stat_buf->st_ino != *p_Var2)) || (__stat_buf->st_dev != p_Var2[1]))
        goto LAB_0010365c;
      }
      else if (((bVar20 && bVar21) ||
               (p_Var2 = *(__ino_t **)(param_7 + 2), p_Var2 == (__ino_t *)0x0)) ||
              ((__stat_buf->st_ino != *p_Var2 || (__stat_buf->st_dev != p_Var2[1])))) {
        if (__stat_buf->st_gid != param_6) goto LAB_00103618;
LAB_0010365c:
        cVar6 = *(char *)(param_7 + 4);
        goto LAB_00103660;
      }
LAB_00103a40:
      if ((*pcVar12 == '/') && (pcVar12[1] == '\0')) {
        pcVar12 = quotearg_style(shell_escape_always_quoting_style,pcVar12);
        uVar11 = dcgettext(0,"it is dangerous to operate recursively on %s",5);
        error(0,0,uVar11,pcVar12);
      }
      else {
        uVar11 = quotearg_n_style(1,4,"/");
        uVar15 = quotearg_n_style(0,4,pcVar12);
        uVar16 = dcgettext(0,"it is dangerous to operate recursively on %s (same as %s)",5);
        error(0,0,uVar16,uVar15,uVar11);
      }
      uVar19 = 0;
      uVar11 = dcgettext(0,"use --no-preserve-root to override this failsafe",5);
      error(0,0,uVar11);
      goto LAB_00103811;
    }
    if (bVar20 && bVar21) {
      uVar19 = 1;
      if (*param_7 != 0) goto LAB_0010380b;
    }
    else {
      p_Var2 = *(__ino_t **)(param_7 + 2);
      if (((p_Var2 != (__ino_t *)0x0) && (*p_Var2 == __stat_buf->st_ino)) &&
         (__stat_buf->st_dev == p_Var2[1])) goto LAB_00103a40;
LAB_00103618:
      iVar9 = *param_7;
joined_r0x0010361b:
      if (iVar9 != 0) goto LAB_00103628;
    }
    uVar19 = 1;
    iVar7 = 4;
LAB_001036c4:
    uid = __stat_buf->st_uid;
LAB_001036c8:
    local_188 = uid_to_name(uid);
    local_190 = gid_to_name(__stat_buf->st_gid);
    pcVar13 = *(char **)(param_7 + 6);
joined_r0x001038b7:
    if ((pcVar13 == (char *)0x0) && (param_3 != 0xffffffff)) {
      pcVar13 = umaxtostr((ulong)param_3,local_58);
      pcVar13 = xstrdup(pcVar13);
    }
    pcVar14 = *(char **)(param_7 + 8);
    if (pcVar14 == (char *)0x0) {
      if (param_4 != 0xffffffff) {
        pcVar14 = umaxtostr((ulong)param_4,local_58);
        pcVar14 = xstrdup(pcVar14);
        goto LAB_001036fa;
      }
      if (iVar7 != 1) {
        local_180 = user_group_str(pcVar13,(char *)0x0);
        group = (char *)0x0;
        goto LAB_00103719;
      }
LAB_00103be0:
      pcVar12 = quotearg_style(shell_escape_always_quoting_style,pcVar12);
      uVar11 = dcgettext(0,"neither symbolic link %s nor referent has been changed\n",5);
      __printf_chk(1,uVar11,pcVar12);
    }
    else {
LAB_001036fa:
      if (iVar7 == 1) goto LAB_00103be0;
      local_180 = user_group_str(pcVar13,pcVar14);
      group = local_190;
LAB_00103719:
      pcVar4 = local_180;
      if (pcVar13 == (char *)0x0) {
        local_198 = user_group_str((char *)0x0,group);
        if (iVar7 == 2) {
          if (pcVar14 == (char *)0x0) {
            uVar11 = dcgettext(0,"no change to ownership of %s\n",5);
          }
          else {
            uVar11 = dcgettext(0,"changed group of %s from %s to %s\n",5);
          }
        }
        else {
          if (iVar7 == 1) {
                    /* WARNING: Subroutine does not return */
            abort();
          }
          if (iVar7 == 3) {
            if (local_198 == (char *)0x0) {
              if (pcVar14 == (char *)0x0) {
                uVar11 = dcgettext(0,"failed to change ownership of %s\n",5);
              }
              else {
                uVar11 = dcgettext(0,"failed to change group of %s to %s\n",5);
              }
              goto LAB_0010400e;
            }
            if (pcVar14 == (char *)0x0) {
              uVar11 = dcgettext(0,"failed to change ownership of %s\n",5);
            }
            else {
              uVar11 = dcgettext(0,"failed to change group of %s from %s to %s\n",5);
            }
          }
          else {
            if (iVar7 != 4) {
              uVar19 = change_file_owner_cold();
              return uVar19;
            }
            if (pcVar14 == (char *)0x0) {
              uVar11 = dcgettext(0,"ownership of %s retained\n",5);
            }
            else {
              uVar11 = dcgettext(0,"group of %s retained as %s\n",5);
            }
          }
        }
      }
      else {
        local_198 = user_group_str(local_188,group);
        if (iVar7 == 3) {
          if (local_198 == (char *)0x0) {
            uVar11 = dcgettext(0,"failed to change ownership of %s to %s\n",5);
LAB_0010400e:
            rpl_free((void *)0x0);
            local_180 = (char *)0x0;
            local_198 = pcVar4;
          }
          else {
            uVar11 = dcgettext(0,"failed to change ownership of %s from %s to %s\n",5);
          }
        }
        else if (iVar7 == 4) {
          uVar11 = dcgettext(0,"ownership of %s retained as %s\n",5);
        }
        else {
          if (iVar7 != 2) {
            uVar19 = change_file_owner_cold();
            return uVar19;
          }
          uVar11 = dcgettext(0,"changed ownership of %s from %s to %s\n",5);
        }
      }
      pcVar12 = quotearg_style(shell_escape_always_quoting_style,pcVar12);
      __printf_chk(1,uVar11,pcVar12,local_198,local_180);
      rpl_free(local_198);
      rpl_free(local_180);
    }
    rpl_free(local_188);
    rpl_free(local_190);
    if (*(char **)(param_7 + 6) != pcVar13) {
      rpl_free(pcVar13);
    }
    if (*(char **)(param_7 + 8) == pcVar14) goto LAB_0010380b;
    rpl_free(pcVar14);
    cVar6 = *(char *)(param_7 + 1);
  }
  if (cVar6 == '\0') {
    rpl_fts_set(param_1,param_2,4);
  }
LAB_00103811:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar19;
}

