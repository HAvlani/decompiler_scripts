
/* WARNING: Could not reconcile some variable overlaps */

_Bool make_dir_parents_private
                (char *const_dir,size_t src_offset,int dst_dirfd,char *verbose_fmt_string,
                dir_attr **attr_list,_Bool *new_dst,cp_options *x)

{
  char cVar1;
  long lVar2;
  dir_attr *pdVar3;
  long lVar4;
  _Bool _Var5;
  int iVar6;
  int iVar7;
  uint uVar8;
  mode_t mVar9;
  size_t __n;
  size_t sVar10;
  char *pcVar11;
  uint *puVar12;
  dir_attr *pdVar13;
  undefined8 uVar14;
  int *piVar15;
  uint uVar16;
  ulong uVar17;
  char *pcVar18;
  stat **ppsVar19;
  undefined *puVar20;
  stat **ppsVar21;
  undefined *puVar23;
  uint uVar25;
  char *pcVar26;
  long in_FS_OFFSET;
  stat *local_1a8;
  char *local_1a0;
  dir_attr *local_198;
  dir_attr **local_190;
  stat *local_188;
  _Bool *local_180;
  char *local_178;
  char *local_170;
  stat stats;
  stat src_st;
  stat **ppsVar22;
  undefined *puVar24;
  
  ppsVar22 = &local_1a8;
  ppsVar21 = &local_1a8;
  lVar2 = *(long *)(in_FS_OFFSET + 0x28);
  local_1a0 = verbose_fmt_string;
  local_190 = attr_list;
  local_180 = new_dst;
  __n = dir_len(const_dir);
  *local_190 = (dir_attr *)0x0;
  ppsVar19 = &local_1a8;
  if (src_offset < __n) {
    sVar10 = strlen(const_dir);
    ppsVar19 = &local_1a8;
    while (ppsVar22 != (stat **)((long)&local_1a8 - (sVar10 + 0x18 & 0xfffffffffffff000))) {
      ppsVar21 = (stat **)((long)ppsVar19 + -0x1000);
      *(undefined8 *)((long)ppsVar19 + -8) = *(undefined8 *)((long)ppsVar19 + -8);
      ppsVar22 = (stat **)((long)ppsVar19 + -0x1000);
      ppsVar19 = (stat **)((long)ppsVar19 + -0x1000);
    }
    uVar17 = (ulong)((uint)(sVar10 + 0x18) & 0xff0);
    lVar4 = -uVar17;
    puVar23 = (undefined *)((long)ppsVar21 + lVar4);
    puVar24 = (undefined *)((long)ppsVar21 + lVar4);
    if (uVar17 != 0) {
      *(undefined8 *)((long)ppsVar21 + -8) = *(undefined8 *)((long)ppsVar21 + -8);
    }
    *(undefined8 *)((long)ppsVar21 + lVar4 + -8) = 0x104b38;
    local_170 = (char *)memcpy((void *)((ulong)((long)ppsVar21 + lVar4 + 0xf) & 0xfffffffffffffff0),
                               const_dir,sVar10 + 1);
    puVar20 = (undefined *)((long)ppsVar21 + lVar4);
    while (puVar23 != (undefined *)((long)ppsVar21 + (lVar4 - (__n + 0x18 & 0xfffffffffffff000)))) {
      puVar24 = puVar20 + -0x1000;
      *(undefined8 *)(puVar20 + -8) = *(undefined8 *)(puVar20 + -8);
      puVar23 = puVar20 + -0x1000;
      puVar20 = puVar20 + -0x1000;
    }
    uVar17 = (ulong)((uint)(__n + 0x18) & 0xff0);
    lVar4 = -uVar17;
    ppsVar19 = (stat **)(puVar24 + lVar4);
    puVar20 = puVar24 + lVar4;
    if (uVar17 != 0) {
      *(undefined8 *)(puVar24 + -8) = *(undefined8 *)(puVar24 + -8);
    }
    pcVar26 = (char *)((ulong)(puVar24 + lVar4 + 0xf) & 0xfffffffffffffff0);
    *(undefined8 *)(puVar24 + lVar4 + -8) = 0x104ba2;
    memcpy(pcVar26,local_170,__n);
    pcVar18 = pcVar26 + src_offset;
    pcVar26[__n] = '\0';
    cVar1 = *pcVar18;
    while (cVar1 == '/') {
      pcVar18 = pcVar18 + 1;
      cVar1 = *pcVar18;
    }
    local_188 = &stats;
    *(undefined8 *)(puVar24 + lVar4 + -8) = 0x104be2;
    iVar6 = __fxstatat(1,dst_dirfd,pcVar18,(stat *)&stats,0);
    if (iVar6 == 0) {
      if ((stats.st_mode & 0xf000) != 0x4000) {
LAB_00105064:
        *(undefined8 *)(puVar24 + lVar4 + -8) = 0x10506e;
        pcVar18 = quotearg_style(shell_escape_always_quoting_style,pcVar26);
        *(undefined8 *)(puVar24 + lVar4 + -8) = 0x105084;
        uVar14 = dcgettext(0,"%s exists but is not a directory",5);
        *(undefined8 *)(puVar24 + lVar4 + -8) = 0x105095;
        error(0,0,uVar14,pcVar18);
LAB_00105095:
        _Var5 = false;
        puVar20 = puVar24 + lVar4;
        goto LAB_00104aa5;
      }
      *local_180 = false;
    }
    else {
      pcVar18 = local_170 + src_offset;
      cVar1 = *pcVar18;
      local_178 = pcVar18;
      while (cVar1 == '/') {
        pcVar18 = pcVar18 + 1;
        cVar1 = *pcVar18;
      }
      local_1a8 = &src_st;
      pcVar11 = pcVar18;
      while( true ) {
        *(undefined8 *)(puVar24 + lVar4 + -8) = 0x104c32;
        pcVar11 = strchr(pcVar11,0x2f);
        ppsVar19 = (stat **)(puVar24 + lVar4);
        if (pcVar11 == (char *)0x0) break;
        *pcVar11 = '\0';
        *(undefined8 *)(puVar24 + lVar4 + -8) = 0x104c5b;
        iVar6 = __fxstatat(1,dst_dirfd,pcVar18,(stat *)local_188,0);
        if ((iVar6 == 0) && ((*(uint *)&x->one_file_system & 0xffffff00) == 0)) {
LAB_00104c75:
          *(undefined8 *)(puVar24 + lVar4 + -8) = 0x104c8f;
          _Var5 = set_process_security_ctx(local_178,local_170,0,false,x);
          if (_Var5 == false) goto LAB_00105095;
          pcVar26 = local_170;
          if ((stats.st_mode & 0xf000) != 0x4000) goto LAB_00105064;
          *local_180 = false;
LAB_00104cb7:
          if ((x->set_security_context != (selabel_handle *)0x0) ||
             (x->preserve_security_context != false)) {
            *(undefined8 *)(puVar24 + lVar4 + -8) = 0x104cd4;
            _Var5 = set_file_security_ctx(local_170,false,x);
            if ((_Var5 == false) && (x->require_preserve_context != false)) goto LAB_00105095;
          }
        }
        else {
          *(undefined8 *)(puVar24 + lVar4 + -8) = 0x104d28;
          iVar7 = __xstat(1,local_178,(stat *)local_1a8);
          if (iVar7 == 0) {
            if ((src_st.st_mode & 0xf000) != 0x4000) {
              uVar8 = 0x14;
              goto LAB_00104f74;
            }
          }
          else {
            *(undefined8 *)(puVar24 + lVar4 + -8) = 0x104d35;
            puVar12 = (uint *)__errno_location();
            uVar8 = *puVar12;
            if (uVar8 != 0) {
LAB_00104f74:
              local_170 = (char *)((ulong)local_170 & 0xffffffff00000000 | (ulong)uVar8);
              *(undefined8 *)(puVar24 + lVar4 + -8) = 0x104f8c;
              pcVar18 = quotearg_style(shell_escape_always_quoting_style,local_178);
              *(undefined8 *)(puVar24 + lVar4 + -8) = 0x104fa2;
              uVar14 = dcgettext(0,"failed to get attributes of %s",5);
              *(undefined8 *)(puVar24 + lVar4 + -8) = 0x104fbb;
              error(0,(ulong)local_170 & 0xffffffff,uVar14,pcVar18);
              _Var5 = false;
              goto LAB_00104aa5;
            }
          }
          *(undefined8 *)(puVar24 + lVar4 + -8) = 0x104d4b;
          pdVar13 = (dir_attr *)xmalloc(0xa8);
          *(undefined4 *)&(pdVar13->st).st_dev = (undefined4)src_st.st_dev;
          *(undefined4 *)((long)&(pdVar13->st).st_dev + 4) = src_st.st_dev._4_4_;
          *(undefined4 *)&(pdVar13->st).st_ino = (undefined4)src_st.st_ino;
          *(undefined4 *)((long)&(pdVar13->st).st_ino + 4) = src_st.st_ino._4_4_;
          *(undefined4 *)&(pdVar13->st).st_nlink = (undefined4)src_st.st_nlink;
          *(undefined4 *)((long)&(pdVar13->st).st_nlink + 4) = src_st.st_nlink._4_4_;
          (pdVar13->st).st_mode = src_st.st_mode;
          (pdVar13->st).st_uid = src_st.st_uid;
          (pdVar13->st).st_gid = src_st.st_gid;
          (pdVar13->st).__pad0 = src_st.__pad0;
          *(undefined4 *)&(pdVar13->st).st_rdev = (undefined4)src_st.st_rdev;
          *(undefined4 *)((long)&(pdVar13->st).st_rdev + 4) = src_st.st_rdev._4_4_;
          *(undefined4 *)&(pdVar13->st).st_size = (undefined4)src_st.st_size;
          *(undefined4 *)((long)&(pdVar13->st).st_size + 4) = src_st.st_size._4_4_;
          *(undefined4 *)&(pdVar13->st).st_blksize = (undefined4)src_st.st_blksize;
          *(undefined4 *)((long)&(pdVar13->st).st_blksize + 4) = src_st.st_blksize._4_4_;
          *(undefined4 *)&(pdVar13->st).st_blocks = (undefined4)src_st.st_blocks;
          *(undefined4 *)((long)&(pdVar13->st).st_blocks + 4) = src_st.st_blocks._4_4_;
          *(undefined4 *)&(pdVar13->st).st_atim.tv_sec = (undefined4)src_st.st_atim.tv_sec;
          *(undefined4 *)((long)&(pdVar13->st).st_atim.tv_sec + 4) = src_st.st_atim.tv_sec._4_4_;
          *(undefined4 *)&(pdVar13->st).st_atim.tv_nsec = (undefined4)src_st.st_atim.tv_nsec;
          *(undefined4 *)((long)&(pdVar13->st).st_atim.tv_nsec + 4) = src_st.st_atim.tv_nsec._4_4_;
          *(undefined4 *)&(pdVar13->st).st_mtim.tv_sec = (undefined4)src_st.st_mtim.tv_sec;
          *(undefined4 *)((long)&(pdVar13->st).st_mtim.tv_sec + 4) = src_st.st_mtim.tv_sec._4_4_;
          *(undefined4 *)&(pdVar13->st).st_mtim.tv_nsec = (undefined4)src_st.st_mtim.tv_nsec;
          *(undefined4 *)((long)&(pdVar13->st).st_mtim.tv_nsec + 4) = src_st.st_mtim.tv_nsec._4_4_;
          *(undefined4 *)&(pdVar13->st).st_ctim.tv_sec = (undefined4)src_st.st_ctim.tv_sec;
          *(undefined4 *)((long)&(pdVar13->st).st_ctim.tv_sec + 4) = src_st.st_ctim.tv_sec._4_4_;
          *(undefined4 *)&(pdVar13->st).st_ctim.tv_nsec = (undefined4)src_st.st_ctim.tv_nsec;
          *(undefined4 *)((long)&(pdVar13->st).st_ctim.tv_nsec + 4) = src_st.st_ctim.tv_nsec._4_4_;
          *(undefined4 *)(pdVar13->st).__glibc_reserved = (undefined4)src_st.__glibc_reserved[0];
          *(undefined4 *)((long)(pdVar13->st).__glibc_reserved + 4) =
               src_st.__glibc_reserved[0]._4_4_;
          *(undefined4 *)((pdVar13->st).__glibc_reserved + 1) =
               (undefined4)src_st.__glibc_reserved[1];
          *(undefined4 *)((long)(pdVar13->st).__glibc_reserved + 0xc) =
               src_st.__glibc_reserved[1]._4_4_;
          *(undefined4 *)((pdVar13->st).__glibc_reserved + 2) =
               (undefined4)src_st.__glibc_reserved[2];
          *(undefined4 *)((long)(pdVar13->st).__glibc_reserved + 0x14) =
               src_st.__glibc_reserved[2]._4_4_;
          pdVar13->slash_offset = (long)pcVar11 - (long)local_170;
          pdVar3 = *local_190;
          pdVar13->restore_mode = false;
          pdVar13->next = pdVar3;
          *local_190 = pdVar13;
          if (iVar6 == 0) goto LAB_00104c75;
          mVar9 = (pdVar13->st).st_mode;
          local_198 = pdVar13;
          *(undefined8 *)(puVar24 + lVar4 + -8) = 0x104e0c;
          _Var5 = set_process_security_ctx(local_178,local_170,mVar9,true,x);
          if (_Var5 == false) goto LAB_00105095;
          *local_180 = true;
          uVar8 = (local_198->st).st_mode;
          if (x->preserve_ownership == false) {
            if (x->preserve_mode == false) {
              uVar25 = 0;
              uVar16 = 0xffffffff;
            }
            else {
              uVar25 = uVar8 & 0x12;
              uVar16 = ~uVar25;
            }
          }
          else {
            uVar25 = uVar8 & 0x3f;
            uVar16 = ~uVar25;
          }
          if (x->explicit_no_preserve_mode != false) {
            uVar8 = 0x1ff;
          }
          *(undefined8 *)(puVar24 + lVar4 + -8) = 0x104e69;
          iVar6 = mkdirat(dst_dirfd,pcVar18,uVar8 & uVar16 & 0xfff);
          if (iVar6 != 0) {
            *(undefined8 *)(puVar24 + lVar4 + -8) = 0x10510c;
            pcVar18 = quotearg_style(shell_escape_always_quoting_style,local_170);
            pcVar26 = "cannot make directory %s";
LAB_001050c8:
            *(undefined8 *)(puVar24 + lVar4 + -8) = 0x1050cf;
            uVar14 = dcgettext(0,pcVar26,5);
            *(undefined8 *)(puVar24 + lVar4 + -8) = 0x1050d7;
            piVar15 = __errno_location();
            iVar6 = *piVar15;
            *(undefined8 *)(puVar24 + lVar4 + -8) = 0x1050e8;
            error(0,iVar6,uVar14,pcVar18);
            _Var5 = false;
            puVar20 = puVar24 + lVar4;
            goto LAB_00104aa5;
          }
          if (local_1a0 != (char *)0x0) {
            *(undefined8 *)(puVar24 + lVar4 + -8) = 0x104ea5;
            __printf_chk(1,local_1a0,local_178,local_170);
          }
          *(undefined8 *)(puVar24 + lVar4 + -8) = 0x104ed0;
          iVar6 = __fxstatat(1,dst_dirfd,pcVar18,(stat *)local_188,0x100);
          if (iVar6 != 0) {
            *(undefined8 *)(puVar24 + lVar4 + -8) = 0x1050b9;
            pcVar18 = quotearg_style(shell_escape_always_quoting_style,local_170);
            pcVar26 = "failed to get attributes of %s";
            goto LAB_001050c8;
          }
          if (x->preserve_mode == false) {
            if ((~stats.st_mode & uVar25) == 0) {
LAB_00104efa:
              if ((stats.st_mode & 0x1c0) == 0x1c0) goto LAB_00104f19;
            }
            else {
              *(undefined8 *)(puVar24 + lVar4 + -8) = 0x105019;
              mVar9 = cached_umask();
              uVar25 = uVar25 & ~mVar9;
              if ((~stats.st_mode & uVar25) == 0) goto LAB_00104efa;
            }
            local_198->restore_mode = true;
            (local_198->st).st_mode = uVar25 | stats.st_mode;
          }
LAB_00104f19:
          if ((stats.st_mode | 0x1c0) != stats.st_mode) {
            *(undefined8 *)(puVar24 + lVar4 + -8) = 0x104f35;
            iVar6 = rpl_fchmodat(dst_dirfd,pcVar18,stats.st_mode | 0x1c0,0x100);
            if (iVar6 != 0) {
              *(undefined8 *)(puVar24 + lVar4 + -8) = 0x10512e;
              pcVar18 = quotearg_style(shell_escape_always_quoting_style,local_170);
              pcVar26 = "setting permissions for %s";
              goto LAB_001050c8;
            }
          }
          if (*local_180 == false) goto LAB_00104cb7;
        }
        cVar1 = pcVar11[1];
        *pcVar11 = '/';
        pcVar11 = pcVar11 + 1;
        while (cVar1 == '/') {
          pcVar11 = pcVar11 + 1;
          cVar1 = *pcVar11;
        }
      }
    }
  }
  _Var5 = true;
  puVar20 = (undefined *)ppsVar19;
LAB_00104aa5:
  if (lVar2 == *(long *)(in_FS_OFFSET + 0x28)) {
    return _Var5;
  }
                    /* WARNING: Subroutine does not return */
  *(undefined **)(puVar20 + -8) = &UNK_00105144;
  __stack_chk_fail();
}

