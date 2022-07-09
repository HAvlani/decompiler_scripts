
/* WARNING: Removing unreachable block (ram,0x00107d70) */
/* WARNING: Could not reconcile some variable overlaps */

_Bool copy_internal(char *src_name,char *dst_name,int dst_dirfd,char *dst_relname,
                   int nonexistent_dst,stat *parent,dir_list *ancestors,cp_options *x,
                   _Bool command_line_arg,_Bool *first_dir_created_per_command_line_arg,
                   _Bool *copy_into_self,_Bool *rename_succeeded_1)

{
  _Bool *p_Var1;
  Interactive IVar2;
  Dereference_symlink DVar3;
  Sparse_type SVar4;
  __dev_t *p_Var5;
  dir_list *pdVar6;
  __dev_t _Var7;
  __ino_t _Var8;
  __uid_t __owner;
  __gid_t __group;
  __off_t _Var9;
  __mode_t _Var10;
  _Bool _Var11;
  byte bVar12;
  char cVar13;
  byte bVar14;
  int iVar15;
  int iVar16;
  mode_t mVar17;
  cp_options *pcVar18;
  char *pcVar19;
  undefined8 uVar20;
  int *piVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  char *pcVar24;
  stat *psVar25;
  size_t sVar26;
  void *__dest;
  _Bool *p_Var27;
  ssize_t sVar28;
  stat *psVar29;
  __off_t _Var30;
  cp_options *pcVar31;
  ulong uVar32;
  byte bVar33;
  uint uVar34;
  uint uVar35;
  uint uVar36;
  long lVar37;
  size_t __n;
  cp_options **ppcVar38;
  undefined *puVar39;
  cp_options **ppcVar40;
  cp_options **ppcVar41;
  cp_options **ppcVar42;
  cp_options **ppcVar43;
  cp_options **ppcVar44;
  cp_options **ppcVar45;
  char *pcVar46;
  Hash_table *pHVar47;
  undefined *puVar48;
  size_t sVar49;
  ulong uVar50;
  cp_options *__offset;
  backup_type bVar51;
  long in_FS_OFFSET;
  bool bVar52;
  byte bVar53;
  undefined3 in_stack_00000019;
  cp_options *local_3d8;
  uint local_3cc;
  Sparse_type local_3c8;
  uint local_3c4;
  _Bool *local_3c0;
  cp_options *local_3b8;
  undefined8 local_3b0;
  char *local_3a8;
  dir_list **local_3a0;
  cp_options *local_398;
  cp_options *local_390;
  uint local_388;
  uint local_384;
  undefined8 local_380;
  stat *local_378;
  stat *local_370;
  _Bool *local_368;
  undefined8 local_360;
  stat *local_358;
  size_t srcbaselen;
  undefined8 local_348;
  char *local_340;
  stat *local_338;
  int local_330;
  uint local_32c;
  stat *local_328;
  size_t dstbaselen;
  _Bool local_copy_into_self;
  _Bool first_dir_created;
  _Bool rename_succeeded;
  cp_options non_command_line_options;
  timespec timespec [2];
  stat src_sb;
  stat dst_sb;
  stat tmp_dst_sb;
  stat dst_back_sb;
  char dummy [1];
  long local_40;
  
  bVar53 = 0;
  ppcVar40 = &local_3d8;
  ppcVar41 = &local_3d8;
  ppcVar38 = &local_3d8;
  ppcVar45 = &local_3d8;
  ppcVar44 = &local_3d8;
  ppcVar43 = &local_3d8;
  ppcVar42 = &local_3d8;
  local_338 = (stat *)dst_name;
  local_340 = dst_relname;
  local_360 = ancestors;
  local_330 = dst_dirfd;
  local_378 = parent;
  local_328 = (stat *)((ulong)local_328 & 0xffffffff00000000 | (ulong)_command_line_arg);
  local_358 = (stat *)first_dir_created_per_command_line_arg;
  iVar16 = x->rename_errno;
  local_370 = (stat *)copy_into_self;
  local_348 = rename_succeeded_1;
  local_368 = (_Bool *)((ulong)local_368 & 0xffffffffffffff00 | (ulong)command_line_arg);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  *copy_into_self = false;
  uVar50 = dstbaselen & 0xffffffffffffff00;
  dstbaselen = uVar50 | x->move_mode;
  if (x->move_mode == false) {
    dstbaselen = uVar50 | 0 < nonexistent_dst;
    if (iVar16 == 0) goto LAB_00106faf;
LAB_00106dc0:
    if ((iVar16 != 0x11) || (x->interactive != I_ALWAYS_NO)) {
      pcVar19 = src_name;
      psVar29 = (stat *)src_name;
      iVar15 = -100;
      goto LAB_00106dd5;
    }
LAB_00106e20:
    if (((byte)local_328 != '\0') && (pHVar47 = x->src_info, pHVar47 != (Hash_table *)0x0)) {
      psVar29 = &src_sb;
      if (((local_32c & 0xf000) != 0x4000) && (x->backup_type == no_backups)) {
        srcbaselen = (size_t)&src_sb;
        bVar12 = seen_file(pHVar47,src_name,&src_sb);
        if ((_Bool)bVar12 != false) {
          pcVar19 = quotearg_style(shell_escape_always_quoting_style,src_name);
          pcVar46 = "warning: source file %s specified more than once";
          ppcVar45 = &local_3d8;
LAB_00109144:
          *(undefined8 *)((long)ppcVar45 + -8) = 0x10914b;
          uVar20 = dcgettext(0,pcVar46,5);
          ppcVar40 = ppcVar45;
          goto LAB_00107aef;
        }
        pHVar47 = x->src_info;
        psVar29 = (stat *)srcbaselen;
      }
      record_file(pHVar47,src_name,psVar29);
    }
    if (x->dereference == DEREF_ALWAYS) {
      local_380 = (_Bool *)CONCAT44(local_380._4_4_,1);
LAB_00106e8a:
      srcbaselen = 0;
      uVar50 = 0;
      ppcVar38 = &local_3d8;
      if (0 < nonexistent_dst) goto LAB_00106ea0;
    }
    else {
      if ((x->dereference != DEREF_COMMAND_LINE_ARGUMENTS) || ((byte)local_328 == '\0')) {
        local_380 = (_Bool *)((ulong)local_380 & 0xffffffff00000000);
        goto LAB_00106e8a;
      }
      local_380 = (_Bool *)CONCAT44(local_380._4_4_,1);
      if (0 < nonexistent_dst) {
        srcbaselen = 0;
        uVar50 = 0;
        goto LAB_00107100;
      }
    }
    if ((iVar16 != 0x11) || (x->interactive != I_ALWAYS_NO)) {
      uVar34 = local_32c & 0xf000;
      if (((uVar34 == 0x8000) ||
          (bVar12 = (uVar34 == 0xa000 || uVar34 == 0x4000) | x->copy_as_regular ^ 1U, bVar12 == 0))
         && (((bVar12 = x->move_mode, (_Bool)bVar12 == false &&
              (bVar12 = x->symbolic_link, (_Bool)bVar12 == false)) &&
             (bVar12 = x->hard_link, (_Bool)bVar12 == false)))) {
        if (x->backup_type != no_backups) {
          bVar12 = 1;
          goto LAB_00107205;
        }
        bVar12 = x->unlink_dest_before_opening;
        if ((_Bool)bVar12 != false) goto LAB_00107205;
        if (nonexistent_dst == 0) goto LAB_0010720a;
LAB_00107a53:
        dstbaselen = CONCAT71(dstbaselen._1_7_,1);
LAB_00107a5a:
        srcbaselen = 0;
        uVar50 = 0;
        ppcVar38 = &local_3d8;
        uVar32 = 0;
        if (iVar16 != 0x11) goto LAB_00106ea0;
      }
      else {
LAB_00107205:
        nonexistent_dst = 0x100;
LAB_0010720a:
        srcbaselen = srcbaselen & 0xffffffffffffff00 | (ulong)bVar12;
        iVar15 = __fxstatat(1,local_330,local_340,(stat *)&dst_sb,nonexistent_dst);
        uVar32 = srcbaselen & 0xff;
        if (iVar15 != 0) {
          piVar21 = __errno_location();
          if (*piVar21 == 0x28) {
            if (x->unlink_dest_after_failed_open != false) goto LAB_00107a5a;
          }
          else if (*piVar21 == 2) goto LAB_00107a53;
          pcVar19 = quotearg_style(shell_escape_always_quoting_style,(char *)local_338);
          uVar20 = dcgettext(0,"cannot stat %s",5);
          bVar12 = 0;
          error(0,*piVar21,uVar20,pcVar19);
          ppcVar41 = &local_3d8;
          goto LAB_0010743b;
        }
      }
      uVar50 = uVar32;
      if (x->interactive == I_ALWAYS_NO) goto LAB_00108160;
      if ((src_sb.st_ino == dst_sb.st_ino) && (src_sb.st_dev == dst_sb.st_dev)) {
        pcVar18 = (cp_options *)(ulong)x->hard_link;
        if (x->hard_link == false) {
          if (x->dereference == DEREF_NEVER) {
            bVar52 = true;
            uVar34 = 1;
            goto LAB_00107271;
          }
          psVar29 = &tmp_dst_sb;
          srcbaselen = srcbaselen & 0xffffffffffffff00 | uVar50;
          iVar16 = __fxstatat(1,local_330,local_340,(stat *)psVar29,0x100);
          uVar50 = srcbaselen & 0xff;
          if (iVar16 == 0) {
            psVar25 = &dst_back_sb;
            iVar16 = __lxstat(1,src_name,(stat *)psVar25);
            uVar50 = srcbaselen & 0xff;
            if (iVar16 == 0) {
              bVar52 = false;
              if (dst_back_sb.st_ino ==
                  CONCAT44(tmp_dst_sb.st_ino._4_4_,(undefined4)tmp_dst_sb.st_ino)) {
                bVar52 = dst_back_sb.st_dev ==
                         CONCAT44(tmp_dst_sb.st_dev._4_4_,(undefined4)tmp_dst_sb.st_dev);
              }
              if ((((dst_back_sb.st_mode & 0xf000) != 0xa000) ||
                  ((tmp_dst_sb.st_mode & 0xf000) != 0xa000)) ||
                 (x->unlink_dest_before_opening == false)) goto LAB_00107295;
            }
          }
        }
        goto LAB_00108163;
      }
      if (x->dereference != DEREF_NEVER) goto LAB_00108160;
      bVar52 = false;
      uVar34 = 0;
LAB_00107271:
      psVar29 = &dst_sb;
      psVar25 = &src_sb;
      if (((src_sb.st_mode & 0xf000) == 0xa000) && ((dst_sb.st_mode & 0xf000) == 0xa000)) {
        srcbaselen = srcbaselen & 0xffffffffffffff00 | uVar50;
        local_384 = uVar34;
        _Var11 = same_nameat(-100,src_name,local_330,local_340);
        pcVar18 = (cp_options *)(ulong)_Var11;
        if (_Var11 == false) {
          uVar50 = srcbaselen & 0xff;
          if ((x->backup_type != no_backups) || (local_384 == 0)) goto LAB_00108163;
          pcVar18 = (cp_options *)0x1;
          bVar12 = x->move_mode ^ 1;
LAB_001097b4:
          if (bVar12 != 0) goto LAB_00108163;
        }
      }
      else {
LAB_00107295:
        if (x->backup_type != no_backups) {
          if (bVar52) {
            pcVar18 = (cp_options *)0x0;
            srcbaselen = srcbaselen & 0xffffffffffffff00 | uVar50;
            _Var11 = same_nameat(-100,src_name,local_330,local_340);
            uVar50 = srcbaselen & 0xff;
            bVar12 = _Var11 ^ 1;
            goto LAB_001097b4;
          }
          if ((((x->move_mode != false) || (x->dereference == DEREF_NEVER)) ||
              ((psVar25->st_mode & 0xf000) != 0xa000)) || ((psVar29->st_mode & 0xf000) == 0xa000))
          goto LAB_00108160;
          goto LAB_001072e6;
        }
        cVar13 = x->move_mode;
        if (((_Bool)cVar13 == false) && (x->unlink_dest_before_opening == false)) {
          if ((psVar25->st_mode & 0xf000) != 0xa000) {
LAB_001091b9:
            if ((psVar29->st_mode & 0xf000) != 0xa000) {
LAB_00109549:
              if ((psVar25->st_ino != psVar29->st_ino) || (psVar25->st_dev != psVar29->st_dev))
              goto LAB_00108160;
              pcVar18 = (cp_options *)(ulong)x->hard_link;
              if (x->hard_link != false) goto LAB_00108163;
            }
LAB_001091cc:
            cVar13 = x->move_mode;
            goto LAB_001091d1;
          }
        }
        else {
          if ((psVar29->st_mode & 0xf000) == 0xa000) goto LAB_00108160;
          if ((bVar52) && (1 < psVar29->st_nlink)) {
            srcbaselen = srcbaselen & 0xffffffffffffff00 | uVar50;
            _Var11 = same_nameat(-100,src_name,local_330,local_340);
            pcVar18 = (cp_options *)(ulong)_Var11;
            uVar50 = srcbaselen & 0xff;
            if (_Var11 != false) {
              if ((psVar25->st_mode & 0xf000) != 0xa000) goto LAB_001091b9;
              goto LAB_001091cc;
            }
            bVar12 = x->move_mode ^ 1;
            goto LAB_001097b4;
          }
          if ((psVar25->st_mode & 0xf000) != 0xa000) goto LAB_00109549;
LAB_001091d1:
          if (((cVar13 != '\0') && ((src_sb.st_mode & 0xf000) == 0xa000)) && (1 < psVar29->st_nlink)
             ) {
            srcbaselen = srcbaselen & 0xffffffffffffff00 | uVar50;
            pcVar19 = canonicalize_file_name(src_name);
            uVar50 = srcbaselen & 0xff;
            if (pcVar19 != (char *)0x0) {
              _Var11 = same_nameat(-100,pcVar19,local_330,local_340);
              pcVar18 = (cp_options *)0x0;
              bVar12 = _Var11 ^ 1;
              rpl_free(pcVar19);
              uVar50 = srcbaselen & 0xff;
              goto LAB_001097b4;
            }
          }
        }
        if ((x->symbolic_link != false) && ((psVar29->st_mode & 0xf000) == 0xa000)) {
LAB_00108160:
          pcVar18 = (cp_options *)0x0;
          goto LAB_00108163;
        }
        if (x->dereference == DEREF_NEVER) {
          if ((psVar25->st_mode & 0xf000) == 0xa000) {
            srcbaselen = srcbaselen & 0xffffffffffffff00 | uVar50;
            iVar16 = __xstat(1,src_name,(stat *)&dst_back_sb);
            uVar50 = srcbaselen & 0xff;
            if (iVar16 != 0) goto LAB_00108160;
          }
          else {
            dst_back_sb.st_dev = psVar25->st_dev;
            dst_back_sb.st_ino = psVar25->st_ino;
            dst_back_sb.st_nlink = psVar25->st_nlink;
            dst_back_sb._24_8_ = *(__syscall_slong_t *)&psVar25->st_mode;
            dst_back_sb.st_gid = psVar25->st_gid;
            dst_back_sb.__pad0 = psVar25->__pad0;
            dst_back_sb.st_rdev._0_4_ = *(undefined4 *)&psVar25->st_rdev;
            dst_back_sb.st_rdev._4_4_ = *(undefined4 *)((long)&psVar25->st_rdev + 4);
            dst_back_sb.st_size._0_4_ = *(undefined4 *)&psVar25->st_size;
            dst_back_sb.st_size._4_4_ = *(undefined4 *)((long)&psVar25->st_size + 4);
            dst_back_sb.st_blksize._0_4_ = *(undefined4 *)&psVar25->st_blksize;
            dst_back_sb.st_blksize._4_4_ = *(undefined4 *)((long)&psVar25->st_blksize + 4);
            dst_back_sb.st_blocks._0_4_ = *(undefined4 *)&psVar25->st_blocks;
            dst_back_sb.st_blocks._4_4_ = *(undefined4 *)((long)&psVar25->st_blocks + 4);
            dst_back_sb.st_atim.tv_sec._0_4_ =
                 *(undefined4 *)&((timespec *)&psVar25->st_atim)->tv_sec;
            dst_back_sb.st_atim.tv_sec._4_4_ =
                 *(undefined4 *)((long)&((timespec *)&psVar25->st_atim)->tv_sec + 4);
            dst_back_sb.st_atim.tv_nsec._0_4_ =
                 *(undefined4 *)&((timespec *)&psVar25->st_atim)->tv_nsec;
            dst_back_sb.st_atim.tv_nsec._4_4_ =
                 *(undefined4 *)((long)&((timespec *)&psVar25->st_atim)->tv_nsec + 4);
            dst_back_sb.st_mtim.tv_sec._0_4_ =
                 *(undefined4 *)&((timespec *)&psVar25->st_mtim)->tv_sec;
            dst_back_sb.st_mtim.tv_sec._4_4_ =
                 *(undefined4 *)((long)&((timespec *)&psVar25->st_mtim)->tv_sec + 4);
            dst_back_sb.st_mtim.tv_nsec._0_4_ =
                 *(undefined4 *)&((timespec *)&psVar25->st_mtim)->tv_nsec;
            dst_back_sb.st_mtim.tv_nsec._4_4_ =
                 *(undefined4 *)((long)&((timespec *)&psVar25->st_mtim)->tv_nsec + 4);
            dst_back_sb.st_ctim.tv_sec._0_4_ =
                 *(undefined4 *)&((timespec *)&psVar25->st_ctim)->tv_sec;
            dst_back_sb.st_ctim.tv_sec._4_4_ =
                 *(undefined4 *)((long)&((timespec *)&psVar25->st_ctim)->tv_sec + 4);
            dst_back_sb.st_ctim.tv_nsec._0_4_ =
                 *(undefined4 *)&((timespec *)&psVar25->st_ctim)->tv_nsec;
            dst_back_sb.st_ctim.tv_nsec._4_4_ =
                 *(undefined4 *)((long)&((timespec *)&psVar25->st_ctim)->tv_nsec + 4);
            dst_back_sb.__glibc_reserved[0]._0_4_ = *(undefined4 *)psVar25->__glibc_reserved;
            dst_back_sb.__glibc_reserved[0]._4_4_ =
                 *(undefined4 *)((long)psVar25->__glibc_reserved + 4);
            dst_back_sb.__glibc_reserved[1]._0_4_ = *(undefined4 *)(psVar25->__glibc_reserved + 1);
            dst_back_sb.__glibc_reserved[1]._4_4_ =
                 *(undefined4 *)((long)psVar25->__glibc_reserved + 0xc);
            dst_back_sb.__glibc_reserved[2]._0_4_ = *(undefined4 *)(psVar25->__glibc_reserved + 2);
            dst_back_sb.__glibc_reserved[2]._4_4_ =
                 *(undefined4 *)((long)psVar25->__glibc_reserved + 0x14);
          }
          if ((psVar29->st_mode & 0xf000) == 0xa000) {
            srcbaselen = srcbaselen & 0xffffffffffffff00 | uVar50;
            iVar16 = __fxstatat(1,local_330,local_340,(stat *)&tmp_dst_sb,0);
            uVar50 = srcbaselen & 0xff;
            if (iVar16 != 0) goto LAB_00108160;
          }
          else {
            tmp_dst_sb.st_dev._0_4_ = *(undefined4 *)&psVar29->st_dev;
            tmp_dst_sb.st_dev._4_4_ = *(undefined4 *)((long)&psVar29->st_dev + 4);
            tmp_dst_sb.st_ino._0_4_ = *(undefined4 *)&psVar29->st_ino;
            tmp_dst_sb.st_ino._4_4_ = *(undefined4 *)((long)&psVar29->st_ino + 4);
            tmp_dst_sb.st_nlink._0_4_ = *(undefined4 *)&psVar29->st_nlink;
            tmp_dst_sb.st_nlink._4_4_ = *(undefined4 *)((long)&psVar29->st_nlink + 4);
            tmp_dst_sb.st_mode = psVar29->st_mode;
            tmp_dst_sb.st_uid = psVar29->st_uid;
            tmp_dst_sb.st_gid = psVar29->st_gid;
            tmp_dst_sb.__pad0 = psVar29->__pad0;
            tmp_dst_sb.st_rdev._0_4_ = *(undefined4 *)&psVar29->st_rdev;
            tmp_dst_sb.st_rdev._4_4_ = *(undefined4 *)((long)&psVar29->st_rdev + 4);
            tmp_dst_sb.st_size._0_4_ = *(undefined4 *)&psVar29->st_size;
            tmp_dst_sb.st_size._4_4_ = *(undefined4 *)((long)&psVar29->st_size + 4);
            tmp_dst_sb.st_blksize._0_4_ = *(undefined4 *)&psVar29->st_blksize;
            tmp_dst_sb.st_blksize._4_4_ = *(undefined4 *)((long)&psVar29->st_blksize + 4);
            tmp_dst_sb.st_blocks._0_4_ = *(undefined4 *)&psVar29->st_blocks;
            tmp_dst_sb.st_blocks._4_4_ = *(undefined4 *)((long)&psVar29->st_blocks + 4);
            tmp_dst_sb.st_atim.tv_sec._0_4_ =
                 *(undefined4 *)&((timespec *)&psVar29->st_atim)->tv_sec;
            tmp_dst_sb.st_atim.tv_sec._4_4_ =
                 *(undefined4 *)((long)&((timespec *)&psVar29->st_atim)->tv_sec + 4);
            tmp_dst_sb.st_atim.tv_nsec._0_4_ =
                 *(undefined4 *)&((timespec *)&psVar29->st_atim)->tv_nsec;
            tmp_dst_sb.st_atim.tv_nsec._4_4_ =
                 *(undefined4 *)((long)&((timespec *)&psVar29->st_atim)->tv_nsec + 4);
            tmp_dst_sb.st_mtim.tv_sec._0_4_ =
                 *(undefined4 *)&((timespec *)&psVar29->st_mtim)->tv_sec;
            tmp_dst_sb.st_mtim.tv_sec._4_4_ =
                 *(undefined4 *)((long)&((timespec *)&psVar29->st_mtim)->tv_sec + 4);
            tmp_dst_sb.st_mtim.tv_nsec._0_4_ =
                 *(undefined4 *)&((timespec *)&psVar29->st_mtim)->tv_nsec;
            tmp_dst_sb.st_mtim.tv_nsec._4_4_ =
                 *(undefined4 *)((long)&((timespec *)&psVar29->st_mtim)->tv_nsec + 4);
            tmp_dst_sb.st_ctim.tv_sec._0_4_ =
                 *(undefined4 *)&((timespec *)&psVar29->st_ctim)->tv_sec;
            tmp_dst_sb.st_ctim.tv_sec._4_4_ =
                 *(undefined4 *)((long)&((timespec *)&psVar29->st_ctim)->tv_sec + 4);
            tmp_dst_sb.st_ctim.tv_nsec._0_4_ =
                 *(undefined4 *)&((timespec *)&psVar29->st_ctim)->tv_nsec;
            tmp_dst_sb.st_ctim.tv_nsec._4_4_ =
                 *(undefined4 *)((long)&((timespec *)&psVar29->st_ctim)->tv_nsec + 4);
            tmp_dst_sb.__glibc_reserved[0]._0_4_ = *(undefined4 *)psVar29->__glibc_reserved;
            tmp_dst_sb.__glibc_reserved[0]._4_4_ =
                 *(undefined4 *)((long)psVar29->__glibc_reserved + 4);
            tmp_dst_sb.__glibc_reserved[1]._0_4_ = *(undefined4 *)(psVar29->__glibc_reserved + 1);
            tmp_dst_sb.__glibc_reserved[1]._4_4_ =
                 *(undefined4 *)((long)psVar29->__glibc_reserved + 0xc);
            tmp_dst_sb.__glibc_reserved[2]._0_4_ = *(undefined4 *)(psVar29->__glibc_reserved + 2);
            tmp_dst_sb.__glibc_reserved[2]._4_4_ =
                 *(undefined4 *)((long)psVar29->__glibc_reserved + 0x14);
          }
          if ((dst_back_sb.st_ino != CONCAT44(tmp_dst_sb.st_ino._4_4_,(undefined4)tmp_dst_sb.st_ino)
              ) || (dst_back_sb.st_dev !=
                    CONCAT44(tmp_dst_sb.st_dev._4_4_,(undefined4)tmp_dst_sb.st_dev)))
          goto LAB_00108160;
          if (x->hard_link != false) {
            pcVar18 = (cp_options *)(ulong)((psVar29->st_mode & 0xf000) != 0xa000);
            goto LAB_00108163;
          }
        }
      }
LAB_001072e6:
      uVar20 = quotearg_n_style(1,4,local_338);
      uVar22 = quotearg_n_style(0,4,src_name);
      uVar23 = dcgettext(0,"%s and %s are the same file",5);
      bVar12 = 0;
      error(0,0,uVar23,uVar22,uVar20);
      ppcVar41 = &local_3d8;
      goto LAB_0010743b;
    }
    uVar50 = 0;
    pcVar18 = (cp_options *)0x0;
LAB_00108163:
    bVar12 = (byte)pcVar18;
    ppcVar41 = &local_3d8;
    if (x->update == false) goto LAB_00108270;
    if ((local_32c & 0xf000) == 0x4000) {
      ppcVar38 = &local_3d8;
      ppcVar44 = &local_3d8;
      if (x->move_mode == false) goto LAB_001082a3;
      goto LAB_001087bb;
    }
    uVar34 = 0;
    if ((x->preserve_timestamps != false) && (uVar34 = 1, x->move_mode != false)) {
      uVar34 = (uint)(dst_sb.st_dev != src_sb.st_dev);
    }
    srcbaselen = srcbaselen & 0xffffffffffffff00 | uVar50;
    iVar16 = utimecmpat(local_330,local_340,&dst_sb,&src_sb,uVar34);
    uVar50 = srcbaselen & 0xff;
    if (iVar16 < 0) {
      if (x->move_mode == false) goto LAB_0010828d;
      goto LAB_001087bb;
    }
    if (local_348 != (_Bool *)0x0) {
      *local_348 = true;
    }
    pcVar19 = remember_copied(local_340,src_sb.st_ino,src_sb.st_dev);
    ppcVar41 = &local_3d8;
    if ((pcVar19 == (char *)0x0) ||
       (_Var11 = create_hard_link((char *)0x0,local_330,pcVar19,(char *)local_338,local_330,
                                  local_340,true,x->verbose,SUB81(local_380,0)),
       ppcVar41 = &local_3d8, _Var11 != false)) {
LAB_00107390:
      bVar12 = 1;
      goto LAB_0010743b;
    }
    ppcVar41 = &local_3d8;
    if (x->preserve_security_context != false) {
LAB_00108267:
      do {
        bVar12 = (byte)pcVar18;
        *(undefined8 *)((long)ppcVar42 + -8) = 0x10826c;
        restore_default_fscreatecon_or_die();
        ppcVar41 = ppcVar42;
LAB_00108270:
        ppcVar43 = ppcVar41;
        ppcVar44 = ppcVar43;
        if (x->move_mode == false) {
          ppcVar38 = ppcVar43;
          if ((local_32c & 0xf000) == 0x4000) goto LAB_001082a3;
LAB_0010828d:
          iVar16 = local_330;
          psVar29 = local_338;
          pcVar19 = local_340;
          ppcVar41 = ppcVar43;
          if (x->interactive == I_ALWAYS_NO) goto LAB_00107390;
          ppcVar38 = ppcVar43;
          if (x->interactive == I_ASK_USER) {
            srcbaselen = srcbaselen & 0xffffffffffffff00 | uVar50 & 0xff;
            *(undefined8 *)((long)ppcVar43 + -8) = 0x1096ce;
            _Var11 = overwrite_ok(x,(char *)psVar29,iVar16,pcVar19,(stat *)&dst_sb.st_mode);
            uVar50 = srcbaselen & 0xff;
            if (_Var11 == false) goto LAB_00107390;
          }
        }
        else {
LAB_001087bb:
          _Var10 = dst_sb.st_mode;
          iVar16 = local_330;
          pcVar19 = local_340;
          srcbaselen._0_1_ = (byte)uVar50;
          IVar2 = x->interactive;
          if (IVar2 == I_ALWAYS_NO) {
LAB_00108850:
            ppcVar41 = ppcVar44;
            if (local_348 != (_Bool *)0x0) {
              *local_348 = true;
            }
            goto LAB_00107390;
          }
          ppcVar38 = ppcVar44;
          if (IVar2 == I_ASK_USER) {
LAB_00108810:
            iVar16 = local_330;
            psVar29 = local_338;
            pcVar19 = local_340;
            srcbaselen = srcbaselen & 0xffffffffffffff00 | (ulong)(byte)srcbaselen;
            *(undefined8 *)((long)ppcVar44 + -8) = 0x10883a;
            _Var11 = overwrite_ok(x,(char *)psVar29,iVar16,pcVar19,(stat *)&dst_sb.st_mode);
            uVar50 = srcbaselen & 0xff;
            if (_Var11 == false) goto LAB_00108850;
          }
          else if ((IVar2 == I_UNSPECIFIED) && (x->stdin_tty != false)) {
            srcbaselen = srcbaselen & 0xffffffffffffff00 | uVar50 & 0xff;
            *(undefined8 *)((long)ppcVar44 + -8) = 0x108800;
            _Var11 = writable_destination(iVar16,pcVar19,_Var10);
            uVar50 = srcbaselen & 0xff;
            if (_Var11 == false) goto LAB_00108810;
          }
        }
LAB_001082a3:
        pcVar19 = local_340;
        bVar14 = (byte)uVar50;
        ppcVar41 = ppcVar38;
        if (bVar12 != 0) goto LAB_00107390;
        uVar34 = local_32c & 0xf000;
        if ((dst_sb.st_mode & 0xf000) == 0x4000) {
          if (uVar34 != 0x4000) {
LAB_00108e5c:
            psVar29 = local_338;
            if ((x->move_mode != false) && (bVar51 = x->backup_type, bVar51 != no_backups)) {
LAB_00108e73:
              bVar14 = (byte)uVar50;
              if ((src_sb.st_mode & 0xf000) == 0x4000) {
LAB_001096e9:
                psVar29 = local_338;
                bVar14 = (byte)uVar50;
                if ((dst_sb.st_mode & 0xf000) == 0x4000) goto LAB_001094f7;
                if (bVar51 == no_backups) {
                  *(undefined8 *)((long)ppcVar38 + -8) = 0x109715;
                  uVar20 = quotearg_n_style_colon(0,3,psVar29);
                  *(undefined8 *)((long)ppcVar38 + -8) = 0x109727;
                  uVar22 = quotearg_n_style_colon(0,3,src_name);
                  pcVar19 = "cannot move directory onto non-directory: %s -> %s";
                  goto LAB_00107197;
                }
              }
LAB_00108e8b:
              srcbaselen = srcbaselen & 0xffffffffffffff00 | (ulong)bVar14;
              *(undefined8 *)((long)ppcVar38 + -8) = 0x108e9a;
              pcVar19 = last_component(src_name);
              uVar50 = srcbaselen & 0xff;
              local_384._0_1_ = (byte)srcbaselen;
              if (*pcVar19 == '.') {
                bVar33 = 1;
                goto LAB_00109ad6;
              }
              goto LAB_00108eae;
            }
            *(undefined8 *)((long)ppcVar38 + -8) = 0x1098f0;
            pcVar19 = quotearg_style(shell_escape_always_quoting_style,(char *)psVar29);
            pcVar46 = "cannot overwrite directory %s with non-directory";
            ppcVar45 = ppcVar38;
            goto LAB_00109144;
          }
LAB_00108344:
          bVar51 = x->backup_type;
LAB_00108347:
          bVar14 = (byte)uVar50;
          bVar33 = x->move_mode;
          if ((_Bool)bVar33 == false) {
            if (bVar51 != no_backups) goto LAB_001094a3;
LAB_0010835d:
            iVar15 = local_330;
            pcVar19 = local_340;
            bVar12 = (dst_sb.st_mode & 0xf000) == 0x4000 | bVar33;
            if (bVar12 == 0) {
              if (x->unlink_dest_before_opening != false) goto LAB_001095d4;
              if (x->data_copy_required == false) goto LAB_0010837a;
              if ((x->preserve_links == false) || (dst_sb.st_nlink < 2)) {
                iVar16 = 0x11;
                srcbaselen = 0;
                if ((x->dereference != DEREF_NEVER) || ((src_sb.st_mode & 0xf000) == 0x8000))
                goto LAB_00106ea0;
              }
LAB_001095d4:
              dstbaselen = dstbaselen & 0xffffffffffffff00 | uVar50 & 0xff;
              *(undefined8 *)((long)ppcVar38 + -8) = 0x1095ef;
              iVar16 = unlinkat(iVar15,pcVar19,0);
              if (iVar16 != 0) {
                *(undefined8 *)((long)ppcVar38 + -8) = 0x109600;
                piVar21 = __errno_location();
                psVar29 = local_338;
                if (*piVar21 != 2) {
                  *(undefined8 *)((long)ppcVar38 + -8) = 0x10a420;
                  pcVar19 = quotearg_style(shell_escape_always_quoting_style,(char *)psVar29);
                  pcVar46 = "cannot remove %s";
                  goto LAB_0010a42f;
                }
              }
              psVar29 = local_338;
              uVar50 = (ulong)(byte)dstbaselen;
              uVar32 = dstbaselen & 0xffffffffffffff00;
              dstbaselen = uVar32 | x->verbose;
              if (x->verbose != false) {
                local_384 = local_384 & 0xffffff00 | (uint)(byte)dstbaselen;
                iVar16 = 0x11;
                *(undefined8 *)((long)ppcVar38 + -8) = 0x10a19e;
                pcVar19 = quotearg_style(shell_escape_always_quoting_style,(char *)psVar29);
                *(undefined8 *)((long)ppcVar38 + -8) = 0x10a1b4;
                uVar20 = dcgettext(0,"removed %s\n",5);
                *(undefined8 *)((long)ppcVar38 + -8) = 0x10a1c6;
                __printf_chk(1,uVar20,pcVar19);
                uVar50 = (ulong)(byte)local_384;
                srcbaselen = 0;
                goto LAB_00106ea0;
              }
              dstbaselen._1_7_ = (undefined7)(uVar32 >> 8);
              dstbaselen = CONCAT71(dstbaselen._1_7_,1);
            }
          }
          else {
            if ((src_sb.st_mode & 0xf000) == 0x4000) goto LAB_001096e9;
LAB_001094f7:
            bVar14 = (byte)uVar50;
            if (bVar51 != no_backups) goto LAB_00108e8b;
          }
LAB_0010837a:
          srcbaselen = 0;
          iVar16 = 0x11;
        }
        else {
          if (uVar34 == 0x4000) {
            if ((x->move_mode != false) && (bVar51 = x->backup_type, bVar51 != no_backups)) {
              if ((byte)local_328 != '\0') goto LAB_001082ea;
              goto LAB_00108e73;
            }
            *(undefined8 *)((long)ppcVar38 + -8) = 0x109867;
            uVar20 = quotearg_n_style(1,4,src_name);
            psVar29 = local_338;
            *(undefined8 *)((long)ppcVar38 + -8) = 0x10987d;
            uVar22 = quotearg_n_style(0,4,psVar29);
            pcVar19 = "cannot overwrite non-directory %s with directory %s";
LAB_00107197:
            *(undefined8 *)((long)ppcVar38 + -8) = 0x10719e;
            uVar23 = dcgettext(0,pcVar19,5);
            *(undefined8 *)((long)ppcVar38 + -8) = 0x1071b2;
            error(0,0,uVar23,uVar22,uVar20);
            ppcVar41 = ppcVar38;
            goto LAB_0010743b;
          }
          bVar51 = x->backup_type;
          if ((byte)local_328 == '\0') goto LAB_00108347;
LAB_001082ea:
          if (bVar51 != numbered_backups) {
            pHVar47 = x->dest_info;
            srcbaselen = srcbaselen & 0xffffffffffffff00 | uVar50 & 0xff;
            *(undefined8 *)((long)ppcVar38 + -8) = 0x108312;
            _Var11 = seen_file(pHVar47,pcVar19,&dst_sb);
            uVar50 = srcbaselen & 0xff;
            if (_Var11 == false) {
              if ((uVar34 != 0x4000) && ((dst_sb.st_mode & 0xf000) == 0x4000)) goto LAB_00108e5c;
              goto LAB_00108344;
            }
            *(undefined8 *)((long)ppcVar38 + -8) = 0x109ec6;
            uVar20 = quotearg_n_style(1,4,src_name);
            psVar29 = local_338;
            *(undefined8 *)((long)ppcVar38 + -8) = 0x109edc;
            uVar22 = quotearg_n_style(0,4,psVar29);
            pcVar19 = "will not overwrite just-created %s with %s";
            goto LAB_00107197;
          }
          if (x->move_mode != false) goto LAB_00108e73;
LAB_001094a3:
          srcbaselen = srcbaselen & 0xffffffffffffff00 | (ulong)bVar14;
          *(undefined8 *)((long)ppcVar38 + -8) = 0x1094b2;
          pcVar19 = last_component(src_name);
          uVar50 = srcbaselen & 0xff;
          if (*pcVar19 == '.') {
            bVar33 = 0;
LAB_00109ad6:
            local_384._0_1_ = (byte)uVar50;
            if ((pcVar19[(ulong)(pcVar19[1] == '.') + 1] == '\0') ||
               (pcVar19[(ulong)(pcVar19[1] == '.') + 1] == '/')) goto LAB_0010835d;
            if (bVar33 != 0) goto LAB_00108eae;
          }
          local_384._0_1_ = (byte)uVar50;
          if ((dst_sb.st_mode & 0xf000) == 0x4000) goto LAB_0010837a;
LAB_00108eae:
          if (bVar51 != numbered_backups) {
            local_384 = local_384 & 0xffffff00 | (uint)(byte)local_384;
            *(undefined8 *)((long)ppcVar38 + -8) = 0x108ec7;
            srcbaselen = strlen(pcVar19);
            pcVar46 = local_340;
            *(undefined8 *)((long)ppcVar38 + -8) = 0x108eda;
            pcVar18 = (cp_options *)last_component(pcVar46);
            local_390 = pcVar18;
            *(undefined8 *)((long)ppcVar38 + -8) = 0x108ee9;
            dstbaselen = strlen((char *)pcVar18);
            pcVar46 = simple_backup_suffix;
            *(undefined8 *)((long)ppcVar38 + -8) = 0x108eff;
            sVar26 = strlen(simple_backup_suffix);
            sVar49 = dstbaselen;
            pcVar18 = local_390;
            if (srcbaselen == sVar26 + dstbaselen) {
              srcbaselen = srcbaselen & 0xffffffffffffff00 | (ulong)(byte)local_384;
              *(undefined8 *)((long)ppcVar38 + -8) = 0x108f37;
              iVar16 = memcmp(pcVar19,pcVar18,sVar49);
              local_384._0_1_ = (byte)srcbaselen;
              if (iVar16 == 0) {
                pcVar19 = pcVar19 + dstbaselen;
                *(undefined8 *)((long)ppcVar38 + -8) = 0x108f5c;
                iVar16 = strcmp(pcVar19,pcVar46);
                pcVar19 = local_340;
                local_384._0_1_ = (byte)srcbaselen;
                if (iVar16 == 0) {
                  dstbaselen = dstbaselen & 0xffffffffffffff00 | srcbaselen & 0xff;
                  *(undefined8 *)((long)ppcVar38 + -8) = 0x108f7e;
                  sVar26 = strlen(pcVar19);
                  *(undefined8 *)((long)ppcVar38 + -8) = 0x108f8d;
                  pcVar19 = subst_suffix(pcVar19,pcVar19 + sVar26,pcVar46);
                  iVar16 = local_330;
                  *(undefined8 *)((long)ppcVar38 + -8) = 0x108fad;
                  iVar16 = __fxstatat(1,iVar16,pcVar19,(stat *)&dst_back_sb,0);
                  *(undefined8 *)((long)ppcVar38 + -8) = 0x108fb7;
                  rpl_free(pcVar19);
                  local_384._0_1_ = (byte)dstbaselen;
                  if (((iVar16 == 0) && (src_sb.st_ino == dst_back_sb.st_ino)) &&
                     (src_sb.st_dev == dst_back_sb.st_dev)) {
                    if (x->move_mode == false) {
                      *(undefined8 *)((long)ppcVar38 + -8) = 0x10aa18;
                      uVar20 = dcgettext(0,"backing up %s might destroy source;  %s not copied",5);
                    }
                    else {
                      *(undefined8 *)((long)ppcVar38 + -8) = 0x10a9c1;
                      uVar20 = dcgettext(0,"backing up %s might destroy source;  %s not moved",5);
                    }
                    *(undefined8 *)((long)ppcVar38 + -8) = 0x10a9d6;
                    uVar22 = quotearg_n_style(1,4,src_name);
                    psVar29 = local_338;
                    *(undefined8 *)((long)ppcVar38 + -8) = 0x10a9ec;
                    uVar23 = quotearg_n_style(0,4,psVar29);
                    *(undefined8 *)((long)ppcVar38 + -8) = 0x10aa00;
                    error(0,0,uVar20,uVar23,uVar22);
                    goto LAB_0010743b;
                  }
                }
              }
            }
          }
          iVar16 = local_330;
          pcVar19 = local_340;
          bVar51 = x->backup_type;
          dstbaselen = dstbaselen & 0xffffffffffffff00 | (ulong)(byte)local_384;
          *(undefined8 *)((long)ppcVar38 + -8) = 0x108fff;
          pcVar46 = backup_file_rename(iVar16,pcVar19,bVar51);
          if (pcVar46 == (char *)0x0) {
            *(undefined8 *)((long)ppcVar38 + -8) = 0x10aceb;
            piVar21 = __errno_location();
            psVar29 = local_338;
            uVar50 = dstbaselen & 0xff;
            if (*piVar21 == 2) {
              dstbaselen = CONCAT71(dstbaselen._1_7_,1);
              iVar16 = 0x11;
              srcbaselen = 0;
              goto LAB_00106ea0;
            }
            *(undefined8 *)((long)ppcVar38 + -8) = 0x10adb9;
            pcVar19 = quotearg_style(shell_escape_always_quoting_style,(char *)psVar29);
            pcVar46 = "cannot backup %s";
LAB_0010a42f:
            *(undefined8 *)((long)ppcVar38 + -8) = 0x10a436;
            uVar20 = dcgettext(0,pcVar46,5);
            iVar16 = *piVar21;
            *(undefined8 *)((long)ppcVar38 + -8) = 0x10a447;
            error(0,iVar16,uVar20,pcVar19);
            goto LAB_0010743b;
          }
          __n = (long)pcVar19 - (long)local_338;
          *(undefined8 *)((long)ppcVar38 + -8) = 0x109022;
          sVar26 = strlen(pcVar46);
          uVar50 = __n + 0x18 + sVar26;
          puVar48 = (undefined *)((long)ppcVar38 + -(uVar50 & 0xfffffffffffff000));
          for (; ppcVar38 != (cp_options **)puVar48;
              ppcVar38 = (cp_options **)((long)ppcVar38 + -0x1000)) {
            *(undefined8 *)((long)ppcVar38 + -8) = *(undefined8 *)((long)ppcVar38 + -8);
          }
          uVar50 = (ulong)((uint)uVar50 & 0xff0);
          lVar37 = -uVar50;
          if (uVar50 != 0) {
            *(undefined8 *)((long)ppcVar38 + -8) = *(undefined8 *)((long)ppcVar38 + -8);
          }
          local_384 = local_384 & 0xffffff00 | (uint)(byte)dstbaselen;
          srcbaselen = (size_t)(void *)((ulong)((long)ppcVar38 + lVar37 + 0xf) & 0xfffffffffffffff0)
          ;
          *(undefined8 *)((long)ppcVar38 + lVar37 + -8) = 0x1090a0;
          __dest = mempcpy((void *)((ulong)((long)ppcVar38 + lVar37 + 0xf) & 0xfffffffffffffff0),
                           local_338,__n);
          *(undefined8 *)((long)ppcVar38 + lVar37 + -8) = 0x1090ae;
          memcpy(__dest,pcVar46,sVar26 + 1);
          iVar16 = 0x11;
          *(undefined8 *)((long)ppcVar38 + lVar37 + -8) = 0x1090bc;
          rpl_free(pcVar46);
          dstbaselen = CONCAT71(dstbaselen._1_7_,1);
          uVar50 = (ulong)(byte)local_384;
          ppcVar38 = (cp_options **)((long)ppcVar38 + lVar37);
        }
LAB_00106ea0:
        if ((byte)local_328 == '\0') {
LAB_00106ead:
          ppcVar42 = ppcVar38;
          if ((x->verbose != false) && (x->move_mode == false)) {
LAB_00107870:
            psVar29 = local_338;
            sVar49 = srcbaselen;
            if ((local_32c & 0xf000) != 0x4000) {
              *(undefined8 *)((long)ppcVar42 + -8) = 0x10789c;
              emit_verbose(src_name,(char *)psVar29,(char *)sVar49);
            }
          }
          if (iVar16 != 0) goto LAB_00106ec8;
          if (x->move_mode != false) goto LAB_00107347;
LAB_001073b8:
          uVar34 = (uint)(byte)dstbaselen;
          pcVar18 = (cp_options *)0x0;
LAB_001073c3:
          uVar35 = local_32c;
          psVar29 = local_338;
          uVar36 = local_32c;
          if (x->set_mode != false) {
            uVar36 = x->mode;
          }
          _Var11 = SUB41(uVar34,0);
          puVar48 = (undefined *)ppcVar42;
          ppcVar41 = ppcVar42;
          if (x->preserve_ownership != false) {
            *(undefined8 *)((long)ppcVar42 + -8) = 0x10748b;
            _Var11 = set_process_security_ctx(src_name,(char *)psVar29,uVar35,_Var11,x);
            if (_Var11 == false) goto LAB_00107438;
            local_384 = uVar36 & 0x3f;
            local_348 = (_Bool *)((ulong)local_348 & 0xffffffff00000000 |
                                 (ulong)local_32c & 0xffffffff0000f000);
            pdVar6 = local_360;
            if ((local_32c & 0xf000) != 0x4000) goto LAB_001074b6;
joined_r0x0010795e:
            for (; _Var8 = src_sb.st_ino, _Var7 = src_sb.st_dev, pdVar6 != (dir_list *)0x0;
                pdVar6 = pdVar6->parent) {
              if ((pdVar6->ino == src_sb.st_ino) && (pdVar6->dev == src_sb.st_dev)) {
                *(undefined8 *)((long)ppcVar42 + -8) = 0x10798d;
                quotearg_style(shell_escape_always_quoting_style,src_name);
                pcVar19 = "cannot copy cyclic symbolic link %s";
                goto LAB_00108563;
              }
            }
            puVar39 = (undefined *)((long)ppcVar42 + -0x20);
            ppcVar41 = (cp_options **)((long)ppcVar42 + -0x20);
            puVar48 = (undefined *)((long)ppcVar42 + -0x20);
            *(undefined8 *)((long)ppcVar42 + -8) = *(undefined8 *)((long)ppcVar42 + -8);
            iVar16 = local_330;
            psVar29 = local_338;
            pcVar19 = local_340;
            local_3a0 = (dir_list **)((ulong)((long)ppcVar42 + -0x11) & 0xfffffffffffffff0);
            *local_3a0 = local_360;
            local_3a0[1] = (dir_list *)_Var8;
            local_3a0[2] = (dir_list *)_Var7;
            if (((byte)dstbaselen != '\0') || ((dst_sb.st_mode & 0xf000) != 0x4000)) {
              uVar35 = ~local_384;
              *(undefined8 *)((long)ppcVar42 + -0x28) = 0x107dec;
              iVar15 = mkdirat(iVar16,pcVar19,uVar35 & uVar36 & 0xfff);
              iVar16 = local_330;
              psVar29 = local_338;
              pcVar19 = local_340;
              if (iVar15 == 0) {
                *(undefined8 *)((long)ppcVar42 + -0x28) = 0x107e18;
                iVar15 = __fxstatat(1,iVar16,pcVar19,(stat *)&dst_sb,0x100);
                _Var10 = dst_sb.st_mode;
                iVar16 = local_330;
                psVar29 = local_338;
                pcVar19 = local_340;
                if (iVar15 == 0) {
                  local_3b0 = (stat *)((ulong)local_3b0 & 0xffffffffffffff00);
                  if ((dst_sb.st_mode & 0x1c0) != 0x1c0) {
                    uVar36 = dst_sb.st_mode | 0x1c0;
                    *(undefined8 *)((long)ppcVar42 + -0x28) = 0x107e5a;
                    iVar16 = rpl_fchmodat(iVar16,pcVar19,uVar36,0x100);
                    psVar29 = local_338;
                    local_388 = _Var10;
                    local_3b0 = (stat *)CONCAT71(local_3b0._1_7_,1);
                    if (iVar16 != 0) {
                      *(undefined8 *)((long)ppcVar42 + -0x28) = 0x109b62;
                      src_name = quotearg_style(shell_escape_always_quoting_style,(char *)psVar29);
                      pcVar19 = "setting permissions for %s";
                      puVar48 = (undefined *)((long)ppcVar42 + -0x20);
                      goto LAB_00108e28;
                    }
                  }
                  pcVar19 = local_340;
                  if (*(char *)&local_358->st_dev == '\0') {
                    *(undefined8 *)((long)ppcVar42 + -0x28) = 0x10959a;
                    remember_copied(pcVar19,dst_sb.st_ino,dst_sb.st_dev);
                    *(undefined *)&local_358->st_dev = 1;
                  }
                  psVar29 = local_338;
                  if (x->verbose != false) {
                    if (x->move_mode == false) {
                      *(undefined8 *)((long)ppcVar42 + -0x28) = 0x109850;
                      emit_verbose(src_name,(char *)psVar29,(char *)0x0);
                    }
                    else {
                      *(undefined8 *)((long)ppcVar42 + -0x28) = 0x107ea2;
                      pcVar19 = quotearg_style(shell_escape_always_quoting_style,(char *)psVar29);
                      *(undefined8 *)((long)ppcVar42 + -0x28) = 0x107eb8;
                      uVar20 = dcgettext(0,"created directory %s\n",5);
                      *(undefined8 *)((long)ppcVar42 + -0x28) = 0x107eca;
                      __printf_chk(1,uVar20,pcVar19);
                    }
                  }
                  goto LAB_00107ed0;
                }
                *(undefined8 *)((long)ppcVar42 + -0x28) = 0x109690;
                src_name = quotearg_style(shell_escape_always_quoting_style,(char *)psVar29);
                pcVar19 = "cannot stat %s";
                puVar48 = (undefined *)((long)ppcVar42 + -0x20);
              }
              else {
                *(undefined8 *)((long)ppcVar42 + -0x28) = 0x108e19;
                src_name = quotearg_style(shell_escape_always_quoting_style,(char *)psVar29);
                pcVar19 = "cannot create directory %s";
              }
              goto LAB_00108e28;
            }
            if ((x->set_security_context != (selabel_handle *)0x0) ||
               (x->preserve_security_context != false)) {
              *(undefined8 *)((long)ppcVar42 + -0x28) = 0x1090fc;
              _Var11 = set_file_security_ctx((char *)psVar29,false,x);
              if ((_Var11 != false) ||
                 (puVar48 = (undefined *)((long)ppcVar42 + -0x20),
                 x->require_preserve_context == false)) goto LAB_0010910b;
              goto un_backup;
            }
LAB_0010910b:
            local_3b0 = (stat *)((ulong)local_3b0 & 0xffffffffffffff00);
            local_384 = 0;
LAB_00107ed0:
            bVar12 = local_378 != (stat *)0x0 & x->one_file_system;
            if ((bVar12 != 0) && (local_378->st_dev != src_sb.st_dev)) goto LAB_001080fd;
            non_command_line_options._0_8_ = *(__dev_t *)x;
            non_command_line_options.interactive = x->interactive;
            non_command_line_options.sparse_mode = x->sparse_mode;
            non_command_line_options.mode = x->mode;
            non_command_line_options._20_4_ = *(__uid_t *)&x->copy_as_regular;
            non_command_line_options._24_4_ = *(__gid_t *)&x->move_mode;
            non_command_line_options._28_4_ = *(int *)&x->one_file_system;
            non_command_line_options.src_info = x->src_info;
            non_command_line_options._32_4_ = *(undefined4 *)&x->explicit_no_preserve_mode;
            non_command_line_options._36_4_ = *(undefined4 *)&x->field_0x24;
            non_command_line_options.set_security_context._0_4_ =
                 *(undefined4 *)&x->set_security_context;
            non_command_line_options.set_security_context._4_4_ =
                 *(undefined4 *)((long)&x->set_security_context + 4);
            non_command_line_options._48_4_ = *(undefined4 *)&x->preserve_links;
            non_command_line_options._52_4_ = *(undefined4 *)&x->require_preserve_context;
            non_command_line_options._56_4_ = *(undefined4 *)&x->recursive;
            non_command_line_options._60_4_ = *(undefined4 *)&x->verbose;
            non_command_line_options.rename_errno = x->rename_errno;
            non_command_line_options.reflink_mode = x->reflink_mode;
            non_command_line_options.dest_info._0_4_ = *(undefined4 *)&x->dest_info;
            non_command_line_options.dest_info._4_4_ = *(undefined4 *)((long)&x->dest_info + 4);
            *(undefined8 *)((long)ppcVar42 + -0x28) = 0x107f40;
            pcVar19 = savedir(src_name,SAVEDIR_SORT_FASTREAD);
            psVar29 = local_370;
            local_3a8 = pcVar19;
            if (pcVar19 == (char *)0x0) {
              *(undefined8 *)((long)ppcVar42 + -0x28) = 0x10ae8e;
              quotearg_style(shell_escape_always_quoting_style,src_name);
              *(undefined8 *)((long)ppcVar42 + -0x28) = 0x10aea4;
              uVar20 = dcgettext(0,"cannot access %s",5);
              *(undefined8 *)((long)ppcVar42 + -0x28) = 0x10aeac;
              piVar21 = __errno_location();
              iVar16 = *piVar21;
              bVar12 = 0;
              *(undefined8 *)((long)ppcVar42 + -0x28) = 0x10aec0;
              error(0,iVar16,uVar20);
              goto LAB_001080fd;
            }
            if (x->dereference == DEREF_COMMAND_LINE_ARGUMENTS) {
              non_command_line_options._0_8_ = CONCAT44(2,non_command_line_options.backup_type);
            }
            if (*pcVar19 == '\0') {
              srcbaselen = (ulong)srcbaselen._1_7_ << 8;
              bVar12 = 1;
              goto LAB_001080e1;
            }
            local_360 = (dir_list *)(local_340 + -(long)local_338);
            local_380 = &rename_succeeded;
            local_368 = &local_copy_into_self;
            local_378 = (stat *)&first_dir_created;
            local_3b8 = x;
            srcbaselen = (ulong)srcbaselen._1_7_ << 8;
            local_390 = &non_command_line_options;
            local_398 = (cp_options *)((ulong)local_398 & 0xffffffff00000000 | (ulong)uVar34);
            local_348 = (_Bool *)CONCAT71(local_348._1_7_,1);
            local_370 = &src_sb;
            goto LAB_00108023;
          }
          local_348 = (_Bool *)((ulong)local_348 & 0xffffffff00000000 |
                               (ulong)local_32c & 0xffffffff0000f000);
          if ((local_32c & 0xf000) == 0x4000) {
            *(undefined8 *)((long)ppcVar42 + -8) = 0x107933;
            _Var11 = set_process_security_ctx(src_name,(char *)psVar29,uVar35,_Var11,x);
            if (_Var11 != false) {
              local_384 = uVar36 & 0x12;
              pdVar6 = local_360;
              goto joined_r0x0010795e;
            }
            goto LAB_00107438;
          }
          *(undefined8 *)((long)ppcVar42 + -8) = 0x107422;
          _Var11 = set_process_security_ctx(src_name,(char *)psVar29,uVar35,_Var11,x);
          local_384 = 0;
          if (_Var11 == false) goto LAB_00107438;
LAB_001074b6:
          _Var9 = src_sb.st_size;
          iVar16 = local_330;
          pcVar19 = local_340;
          bVar14 = x->symbolic_link;
          if ((_Bool)bVar14 != false) {
            if (*(char *)(__dev_t *)src_name != '/') {
              *(undefined8 *)((long)ppcVar42 + -8) = 0x1074d6;
              pcVar19 = dir_name(pcVar19);
              if (((local_330 != -100) || (*pcVar19 != '.')) || (pcVar19[1] != '\0')) {
                *(undefined8 *)((long)ppcVar42 + -8) = 0x1084f8;
                iVar15 = __xstat(1,".",(stat *)&tmp_dst_sb);
                iVar16 = local_330;
                if (iVar15 == 0) {
                  *(undefined8 *)((long)ppcVar42 + -8) = 0x10851d;
                  iVar16 = __fxstatat(1,iVar16,pcVar19,(stat *)&dst_back_sb,0);
                  if ((iVar16 == 0) &&
                     ((CONCAT44(tmp_dst_sb.st_ino._4_4_,(undefined4)tmp_dst_sb.st_ino) !=
                       dst_back_sb.st_ino ||
                      (CONCAT44(tmp_dst_sb.st_dev._4_4_,(undefined4)tmp_dst_sb.st_dev) !=
                       dst_back_sb.st_dev)))) {
                    *(undefined8 *)((long)ppcVar42 + -8) = 0x108541;
                    rpl_free(pcVar19);
                    psVar29 = local_338;
                    *(undefined8 *)((long)ppcVar42 + -8) = 0x108554;
                    quotearg_n_style_colon(0,3,psVar29);
                    pcVar19 = "%s: can make relative symbolic links only in current directory";
LAB_00108563:
                    *(undefined8 *)((long)ppcVar42 + -8) = 0x10856a;
                    uVar20 = dcgettext(0,pcVar19,5);
                    *(undefined8 *)((long)ppcVar42 + -8) = 0x10857b;
                    error(0,0,uVar20);
                    goto un_backup;
                  }
                }
              }
              *(undefined8 *)((long)ppcVar42 + -8) = 0x107501;
              rpl_free(pcVar19);
            }
            iVar16 = local_330;
            pcVar19 = local_340;
            _Var11 = x->unlink_dest_after_failed_open;
            *(undefined8 *)((long)ppcVar42 + -8) = 0x107521;
            iVar16 = force_symlinkat(src_name,iVar16,pcVar19,_Var11,-1);
            local_348._0_1_ = 0;
            if (iVar16 < 1) goto LAB_0010752e;
            *(undefined8 *)((long)ppcVar42 + -8) = 0x108da2;
            src_name = (char *)quotearg_n_style(1,4,src_name);
            psVar29 = local_338;
            *(undefined8 *)((long)ppcVar42 + -8) = 0x108db8;
            quotearg_n_style(0,4,psVar29);
            *(undefined8 *)((long)ppcVar42 + -8) = 0x108dce;
            uVar20 = dcgettext(0,"cannot create symbolic link %s to %s",5);
            *(undefined8 *)((long)ppcVar42 + -8) = 0x108de2;
            error(0,iVar16,uVar20);
            goto un_backup;
          }
          if (x->hard_link != false) {
            uVar32 = 1;
            if (x->unlink_dest_after_failed_open == false) {
              uVar32 = (ulong)(x->interactive == I_ASK_USER);
            }
            *(ulong *)((long)ppcVar42 + -0x10) = (ulong)local_380 & 0xffffffff;
            psVar29 = local_338;
            *(undefined8 *)((long)ppcVar42 + -0x18) = 0;
            *(ulong *)((long)ppcVar42 + -0x20) = uVar32;
            *(undefined8 *)((long)ppcVar42 + -0x28) = 0x108499;
            local_358._0_1_ =
                 create_hard_link(src_name,-100,src_name,(char *)psVar29,iVar16,pcVar19,
                                  *(_Bool *)((long)ppcVar42 + -0x20),
                                  *(_Bool *)((long)ppcVar42 + -0x18),
                                  *(_Bool *)((long)ppcVar42 + -0x10));
            local_348._0_1_ = 0;
            goto joined_r0x001084a2;
          }
          if (((uint)local_348 == 0x8000) || (((uint)local_348 != 0xa000 & x->copy_as_regular) != 0)
             ) {
            DVar3 = x->dereference;
            _rename_succeeded = (char *)0x0;
            local_360 = (dir_list *)((ulong)local_360 & 0xffffffff00000000 | (ulong)src_sb.st_mode);
            local_358 = (stat *)((ulong)local_358 & 0xffffffffffffff00 |
                                (ulong)x->data_copy_required);
            *(undefined8 *)((long)ppcVar42 + -8) = 0x108a7a;
            uVar34 = open_safer(src_name,(uint)(DVar3 == DEREF_NEVER) << 0x11);
            if ((int)uVar34 < 0) {
              *(undefined8 *)((long)ppcVar42 + -8) = 0x10989e;
              src_name = quotearg_style(shell_escape_always_quoting_style,src_name);
              pcVar19 = "cannot open %s for reading";
              goto LAB_00108e28;
            }
            *(undefined8 *)((long)ppcVar42 + -8) = 0x108a98;
            iVar15 = __fxstat(1,uVar34,(stat *)&dst_back_sb);
            iVar16 = local_330;
            pcVar19 = local_340;
            if (iVar15 != 0) {
              *(undefined8 *)((long)ppcVar42 + -8) = 0x109b12;
              quotearg_style(shell_escape_always_quoting_style,src_name);
              pcVar19 = "cannot fstat %s";
              goto LAB_00109b21;
            }
            if ((src_sb.st_ino == dst_back_sb.st_ino) && (src_sb.st_dev == dst_back_sb.st_dev)) {
              local_3a0 = (dir_list **)
                          ((ulong)local_3a0 & 0xffffffff00000000 |
                          (ulong)uVar36 & 0xffffffff000001ff);
              if ((byte)dstbaselen != '\0') {
LAB_00109b76:
                iVar16 = local_330;
                pcVar19 = local_340;
                local_370 = (stat *)((ulong)local_370 & 0xffffffff00000000 |
                                    (ulong)(~local_384 & (uint)local_3a0));
                *(undefined8 *)((long)ppcVar42 + -8) = 0x109ba5;
                iVar15 = openat_safer(iVar16,pcVar19,0xc1);
                *(undefined8 *)((long)ppcVar42 + -8) = 0x109bac;
                psVar29 = (stat *)__errno_location();
                iVar16 = local_330;
                pcVar19 = local_340;
                local_380._0_4_ = *(uint *)&psVar29->st_dev;
                bVar12 = (uint)local_380 == 0x11 & (byte)((uint)iVar15 >> 0x1f);
                dstbaselen = dstbaselen & 0xffffffffffffff00 | (ulong)bVar12;
                if (bVar12 != 0) {
                  bVar12 = x->move_mode;
                  local_380._0_4_ = 0x11;
                  if ((_Bool)bVar12 != false) goto LAB_00109bdf;
                  local_380 = (_Bool *)CONCAT44(local_380._4_4_,0x11);
                  local_378 = psVar29;
                  *(undefined8 *)((long)ppcVar42 + -8) = 0x10a339;
                  sVar28 = readlinkat(iVar16,pcVar19,dummy,1);
                  iVar16 = local_330;
                  psVar29 = local_338;
                  pcVar19 = local_340;
                  if (-1 < sVar28) {
                    if (x->open_dangling_dest_symlink == false) {
                      local_358 = (stat *)((ulong)local_358 & 0xffffffffffffff00);
                      *(undefined8 *)((long)ppcVar42 + -8) = 0x10ad74;
                      quotearg_style(shell_escape_always_quoting_style,(char *)psVar29);
                      *(undefined8 *)((long)ppcVar42 + -8) = 0x10ad8a;
                      uVar20 = dcgettext(0,"not writing through dangling symlink %s",5);
                      *(undefined8 *)((long)ppcVar42 + -8) = 0x10ad9b;
                      error(0,0,uVar20);
                      goto close_src_desc;
                    }
                    *(undefined8 *)((long)ppcVar42 + -8) = 0x10a372;
                    iVar15 = openat_safer(iVar16,pcVar19,0x41);
                    local_380._0_4_ = *(uint *)&local_378->st_dev;
                  }
                }
                bVar12 = (uint)local_380 == 0x15 & (byte)((uint)iVar15 >> 0x1f);
                uVar32 = dstbaselen & 0xffffffffffffff00;
                dstbaselen = uVar32 | bVar12;
                if (bVar12 == 0) {
                  local_3b8 = (cp_options *)
                              ((ulong)local_3b8 & 0xffffffff00000000 |
                              (ulong)(~(uint)local_3a0 & (uint)local_370));
                  dstbaselen._1_7_ = (undefined7)(uVar32 >> 8);
                  if (-1 < iVar15) {
                    dstbaselen = CONCAT71(dstbaselen._1_7_,1);
                    local_3cc = local_384;
                    goto LAB_00108b61;
                  }
                  dstbaselen = CONCAT71(dstbaselen._1_7_,1);
                }
                else {
                  local_380._0_4_ = 0x15;
                  if (*(char *)&local_338->st_dev != '\0') {
                    uVar32 = 0xffffffffffffffff;
                    psVar29 = local_338;
                    do {
                      if (uVar32 == 0) break;
                      uVar32 = uVar32 - 1;
                      p_Var5 = &psVar29->st_dev;
                      psVar29 = (stat *)((long)psVar29 + (ulong)bVar53 * -2 + 1);
                    } while (*(char *)p_Var5 != '\0');
                    local_380._0_4_ =
                         (*(char *)((long)local_338->__glibc_reserved + (~uVar32 - 0x7a)) != '/') +
                         0x14;
                  }
                }
LAB_00109be5:
                psVar29 = local_338;
                local_358 = (stat *)((ulong)local_358 & 0xffffffff00000000 | (ulong)(uint)local_380)
                ;
                *(undefined8 *)((long)ppcVar42 + -8) = 0x109bfd;
                quotearg_style(shell_escape_always_quoting_style,(char *)psVar29);
                *(undefined8 *)((long)ppcVar42 + -8) = 0x109c13;
                uVar20 = dcgettext(0,"cannot create regular file %s",5);
                uVar32 = (ulong)local_358 & 0xffffffff;
                *(undefined8 *)((long)ppcVar42 + -8) = 0x109c2c;
                error(0,uVar32,uVar20);
                local_358._0_1_ = 0;
                goto close_src_desc;
              }
              *(undefined8 *)((long)ppcVar42 + -8) = 0x108b0a;
              iVar15 = openat_safer(iVar16,pcVar19,
                                    (-(uint)((byte)local_358 == '\0') & 0xfffffe00) + 0x201);
              *(undefined8 *)((long)ppcVar42 + -8) = 0x108b11;
              psVar25 = (stat *)__errno_location();
              iVar16 = local_330;
              psVar29 = local_338;
              pcVar19 = local_340;
              local_380._0_4_ = *(uint *)&psVar25->st_dev;
              if (iVar15 < 0) {
                if ((uint)local_380 == 2) {
LAB_0010a28b:
                  psVar29 = local_338;
                  if (x->set_security_context != (selabel_handle *)0x0) {
                    *(undefined8 *)((long)ppcVar42 + -8) = 0x10a2b3;
                    local_358._0_1_ =
                         set_process_security_ctx(src_name,(char *)psVar29,(uint)local_3a0,true,x);
                    if ((_Bool)(byte)local_358 == false) {
                      dstbaselen = dstbaselen & 0xffffffffffffff00;
                      goto close_src_desc;
                    }
                  }
                  goto LAB_00109b76;
                }
                bVar12 = x->unlink_dest_after_failed_open;
                if ((_Bool)bVar12 != false) {
                  local_370 = psVar25;
                  *(undefined8 *)((long)ppcVar42 + -8) = 0x10a271;
                  iVar16 = unlinkat(iVar16,pcVar19,0);
                  psVar29 = local_338;
                  if (iVar16 == 0) {
                    if (x->verbose != false) {
                      *(undefined8 *)((long)ppcVar42 + -8) = 0x10ae48;
                      pcVar19 = quotearg_style(shell_escape_always_quoting_style,(char *)psVar29);
                      *(undefined8 *)((long)ppcVar42 + -8) = 0x10ae5e;
                      uVar20 = dcgettext(0,"removed %s\n",5);
                      *(undefined8 *)((long)ppcVar42 + -8) = 0x10ae70;
                      __printf_chk(1,uVar20,pcVar19);
                    }
                  }
                  else if (*(int *)&local_370->st_dev != 2) {
                    local_358 = local_370;
                    *(undefined8 *)((long)ppcVar42 + -8) = 0x10ab95;
                    quotearg_style(shell_escape_always_quoting_style,(char *)psVar29);
                    *(undefined8 *)((long)ppcVar42 + -8) = 0x10abab;
                    uVar20 = dcgettext(0,"cannot remove %s",5);
                    iVar16 = *(int *)&local_358->st_dev;
                    *(undefined8 *)((long)ppcVar42 + -8) = 0x10abc4;
                    error(0,iVar16,uVar20);
                    local_358._0_1_ = 0;
                    goto close_src_desc;
                  }
                  goto LAB_0010a28b;
                }
LAB_00109bdf:
                dstbaselen = dstbaselen & 0xffffffffffffff00 | (ulong)bVar12;
                goto LAB_00109be5;
              }
              if ((x->set_security_context == (selabel_handle *)0x0) &&
                 (x->preserve_security_context == false)) {
LAB_00108b4d:
                local_3cc = 0;
                local_3b8 = (cp_options *)((ulong)local_3b8 & 0xffffffff00000000);
LAB_00108b61:
                if ((byte)local_358 == '\0') {
LAB_00109cba:
                  local_3b8._0_4_ = x->preserve_ownership | (uint)local_3b8;
                  uVar32 = (ulong)local_358 & 0xffffffff00000000;
                  local_358 = (stat *)(uVar32 | (uint)local_3b8);
                  if ((uint)local_3b8 != 0) {
                    local_358 = (stat *)(uVar32 | (ulong)(uint)local_3b8 & 0xffffffffffffff00);
                    goto LAB_00108b7b;
                  }
                  tmp_dst_sb.st_mode = 0;
                  if (x->preserve_timestamps != false) goto LAB_00109ce6;
                  goto LAB_00109db7;
                }
                if (x->reflink_mode != REFLINK_NEVER) {
                  *(undefined8 *)((long)ppcVar42 + -8) = 0x10a533;
                  iVar16 = ioctl(iVar15,0x40049409,(ulong)uVar34);
                  if (iVar16 == 0) goto LAB_00109cba;
                  if (x->reflink_mode == REFLINK_ALWAYS) {
                    *(undefined8 *)((long)ppcVar42 + -8) = 0x10a558;
                    local_370 = (stat *)quotearg_n_style(1,4,src_name);
                    psVar29 = local_338;
                    *(undefined8 *)((long)ppcVar42 + -8) = 0x10a572;
                    local_360 = (dir_list *)quotearg_n_style(0,4,psVar29);
                    *(undefined8 *)((long)ppcVar42 + -8) = 0x10a58c;
                    local_358 = (stat *)dcgettext(0,"failed to clone %s from %s",5);
                    *(undefined8 *)((long)ppcVar42 + -8) = 0x10a598;
                    piVar21 = __errno_location();
                    psVar29 = local_358;
                    iVar16 = *piVar21;
                    *(undefined8 *)((long)ppcVar42 + -8) = 0x10a5b8;
                    error(0,iVar16,psVar29);
                    local_360._0_1_ = 0;
                    goto close_src_and_dst_desc;
                  }
                }
LAB_00108b7b:
                *(undefined8 *)((long)ppcVar42 + -8) = 0x108b8e;
                iVar16 = __fxstat(1,iVar15,(stat *)&tmp_dst_sb);
                psVar29 = local_338;
                if (iVar16 != 0) {
                  *(undefined8 *)((long)ppcVar42 + -8) = 0x10a94f;
                  local_360 = (dir_list *)
                              quotearg_style(shell_escape_always_quoting_style,(char *)psVar29);
                  pcVar19 = "cannot fstat %s";
                  goto LAB_0010a962;
                }
                local_370 = (stat *)((ulong)local_370 & 0xffffffff00000000);
                local_3b8._0_4_ = (uint)local_3b8 | tmp_dst_sb.st_mode;
                if (tmp_dst_sb.st_mode != (uint)local_3b8) {
                  *(undefined8 *)((long)ppcVar42 + -8) = 0x108bb5;
                  iVar16 = fchmod(iVar15,(uint)local_3b8);
                  if (iVar16 == 0) {
                    local_370._0_4_ = (uint)local_3b8;
                  }
                  local_3b8 = (cp_options *)
                              ((ulong)local_3b8 & 0xffffffff00000000 | (ulong)(uint)local_370);
                }
                if ((byte)local_358 == '\0') goto LAB_0010a15f;
                local_3c0 = (_Bool *)CONCAT44(tmp_dst_sb.st_blksize._4_4_,
                                              (undefined4)tmp_dst_sb.st_blksize);
                local_380 = local_3c0;
                if ((_Bool *)0x1ffffffffffe0000 < local_3c0 + -0x20000) {
                  local_380 = (_Bool *)0x20000;
                  p_Var27 = (_Bool *)0x200;
                  if (local_3c0 + -1 < (_Bool *)0x2000000000000000) {
                    p_Var27 = local_3c0;
                  }
                  local_3c0 = p_Var27;
                }
                if ((dst_back_sb.st_mode & 0xf000) != 0x8000) {
                  uVar36 = 1;
LAB_0010a01b:
                  if (((tmp_dst_sb.st_mode & 0xf000) == 0x8000) &&
                     ((x->sparse_mode == SPARSE_ALWAYS ||
                      ((uVar36 != 1 && (x->sparse_mode == SPARSE_AUTO)))))) {
                    local_370 = (stat *)((ulong)local_370 & 0xffffffff00000000 | (ulong)uVar36);
                    *(undefined8 *)((long)ppcVar42 + -8) = 0x10a616;
                    fdadvise(uVar34,0,0,2);
                    local_copy_into_self = false;
                    if ((uint)local_370 != 3) {
                      SVar4 = x->sparse_mode;
                      local_3c4 = (uint)(x->reflink_mode != REFLINK_NEVER);
                      goto LAB_0010a103;
                    }
                    local_3c4 = (uint)(x->reflink_mode != REFLINK_NEVER);
                    local_3c8 = x->sparse_mode;
LAB_0010a6a0:
                    __offset = local_398;
                    local_copy_into_self = false;
                    local_378 = (stat *)CONCAT44(dst_back_sb.st_size._4_4_,
                                                 (undefined4)dst_back_sb.st_size);
                    if (-1 < (long)local_398) {
                      local_3b0 = (stat *)0x0;
                      local_3a8 = (char *)0x0;
                      local_3d8 = (cp_options *)0x0;
                      local_398 = x;
                      local_390 = pcVar18;
                      local_370 = (stat *)src_name;
                      do {
                        *(undefined8 *)((long)ppcVar42 + -8) = 0x10a711;
                        psVar29 = (stat *)lseek(uVar34,(__off_t)__offset,4);
                        if ((long)psVar29 < 0) {
                          *(undefined8 *)((long)ppcVar42 + -8) = 0x10a722;
                          piVar21 = __errno_location();
                          pcVar18 = local_390;
                          if (*piVar21 != 6) goto cannot_lseek;
                          psVar29 = local_378;
                          if ((long)__offset < (long)local_378) goto LAB_0010a73e;
                          *(undefined8 *)((long)ppcVar42 + -8) = 0x10a8f6;
                          psVar29 = (stat *)lseek(uVar34,0,2);
                          pcVar18 = local_390;
                          if ((long)psVar29 < 0) goto cannot_lseek;
                          if ((long)__offset < (long)psVar29) {
                            local_378 = psVar29;
                            goto LAB_0010a73e;
                          }
                          local_380 = (_Bool *)((ulong)local_380 & 0xffffffffffffff00 |
                                               (ulong)(byte)local_358);
LAB_0010acad:
                          local_378 = psVar29;
                          pcVar18 = local_390;
                          goto LAB_0010a8b4;
                        }
                        if ((long)local_378 < (long)psVar29) {
                          local_378 = psVar29;
                        }
LAB_0010a73e:
                        *(undefined8 *)((long)ppcVar42 + -8) = 0x10a74b;
                        _Var30 = lseek(uVar34,(__off_t)__offset,0);
                        psVar25 = local_338;
                        pcVar18 = local_390;
                        if (_Var30 < 0) goto cannot_lseek;
                        p_Var27 = (_Bool *)((long)__offset + (-(long)local_3a8 - (long)local_3d8));
                        if (p_Var27 == (_Bool *)0x0) {
                          local_358._0_1_ = 0;
                          if (local_3c8 != SPARSE_NEVER) {
                            p_Var27 = local_3c0;
                          }
                          local_3a8 = (char *)((long)psVar29 - (long)__offset);
                        }
                        else if (local_3c8 == SPARSE_NEVER) {
                          *(undefined8 *)((long)ppcVar42 + -8) = 0x10a921;
                          _Var11 = write_zeros(iVar15,(off_t)p_Var27);
                          psVar25 = local_338;
                          src_name = (char *)local_370;
                          pcVar18 = local_390;
                          x = local_398;
                          if (_Var11 == false) {
                            *(undefined8 *)((long)ppcVar42 + -8) = 0x10ad44;
                            local_370 = (stat *)quotearg_n_style_colon(0,3,psVar25);
                            pcVar19 = "%s: write failed";
                            goto LAB_0010ab2f;
                          }
                          local_358._0_1_ = 0;
                          p_Var27 = (_Bool *)0x0;
                          local_3a8 = (char *)((long)psVar29 - (long)__offset);
                        }
                        else {
                          bVar52 = local_3c8 == SPARSE_ALWAYS;
                          *(undefined8 *)((long)ppcVar42 + -8) = 0x10a790;
                          local_358._0_1_ =
                               create_hole(iVar15,(char *)psVar25,bVar52,(off_t)p_Var27);
                          pcVar18 = local_390;
                          src_name = (char *)local_370;
                          x = local_398;
                          if ((_Bool)(byte)local_358 == false) goto LAB_0010ab5b;
                          local_3a8 = (char *)((long)psVar29 - (long)__offset);
                          p_Var27 = local_3c0;
                        }
                        p_Var1 = local_380;
                        pcVar19 = local_3a8;
                        *(_Bool **)((long)ppcVar42 + -8) = &first_dir_created;
                        *(cp_options **)((long)ppcVar42 + -0x10) = &non_command_line_options;
                        uVar32 = (ulong)local_3c4;
                        *(char **)((long)ppcVar42 + -0x18) = pcVar19;
                        *(stat **)((long)ppcVar42 + -0x20) = local_338;
                        *(stat **)((long)ppcVar42 + -0x28) = local_370;
                        *(ulong *)((long)ppcVar42 + -0x30) = uVar32;
                        *(undefined8 *)((long)ppcVar42 + -0x38) = 0x10a7f6;
                        _Var11 = sparse_copy(uVar34,iVar15,(char **)&rename_succeeded,(size_t)p_Var1
                                             ,(size_t)p_Var27,true,
                                             *(_Bool *)((long)ppcVar42 + -0x30),
                                             *(char **)((long)ppcVar42 + -0x28),
                                             *(char **)((long)ppcVar42 + -0x20),
                                             *(uintmax_t *)((long)ppcVar42 + -0x18),
                                             *(off_t **)((long)ppcVar42 + -0x10),
                                             *(_Bool **)((long)ppcVar42 + -8));
                        pcVar18 = local_390;
                        src_name = (char *)local_370;
                        x = local_398;
                        if (_Var11 == false) goto LAB_0010ab5b;
                        psVar29 = (stat *)((long)&__offset->backup_type +
                                          non_command_line_options._0_8_);
                        local_3b0 = psVar29;
                        if (non_command_line_options._0_8_ != 0) {
                          local_358._0_1_ = first_dir_created;
                        }
                        if ((long)non_command_line_options._0_8_ < (long)pcVar19) {
                          local_380 = (_Bool *)((ulong)local_380 & 0xffffffffffffff00 |
                                               (ulong)(byte)local_358);
                          goto LAB_0010acad;
                        }
                        *(undefined8 *)((long)ppcVar42 + -8) = 0x10a838;
                        pcVar31 = (cp_options *)lseek(uVar34,(__off_t)psVar29,3);
                        pcVar18 = local_390;
                        if ((long)pcVar31 < 0) goto LAB_0010a88a;
                        local_3d8 = __offset;
                        __offset = pcVar31;
                      } while( true );
                    }
                    local_3b0 = (stat *)0x0;
                    bVar52 = 0 < (long)(stat *)CONCAT44(dst_back_sb.st_size._4_4_,
                                                        (undefined4)dst_back_sb.st_size);
                    goto LAB_0010abfc;
                  }
                  local_370 = (stat *)((ulong)local_370 & 0xffffffff00000000 | (ulong)uVar36);
                  *(undefined8 *)((long)ppcVar42 + -8) = 0x10a049;
                  fdadvise(uVar34,0,0,2);
                  p_Var27 = local_380;
                  sVar49 = CONCAT44(dst_back_sb.st_blksize._4_4_,(undefined4)dst_back_sb.st_blksize)
                  ;
                  if (0x1ffffffffffe0000 < sVar49 - 0x20000) {
                    sVar49 = 0x20000;
                  }
                  *(undefined8 *)((long)ppcVar42 + -8) = 0x10a083;
                  p_Var27 = (_Bool *)buffer_lcm(sVar49,(size_t)p_Var27,0x7fffffffffffffff);
                  if (((dst_back_sb.st_mode & 0xf000) == 0x8000) &&
                     ((_Bool *)CONCAT44(dst_back_sb.st_size._4_4_,(undefined4)dst_back_sb.st_size) <
                      local_380)) {
                    local_380 = (_Bool *)CONCAT44(dst_back_sb.st_size._4_4_,
                                                  (undefined4)dst_back_sb.st_size) + 1;
                  }
                  local_copy_into_self = false;
                  p_Var1 = p_Var27 + -1 + (long)local_380;
                  if (0 < (long)(p_Var1 + -((ulong)p_Var1 % (ulong)p_Var27))) {
                    p_Var27 = p_Var1 + -((ulong)p_Var1 % (ulong)p_Var27);
                  }
                  local_380 = p_Var27;
                  local_3c4 = (uint)(x->reflink_mode != REFLINK_NEVER);
                  if ((uint)local_370 == 3) {
                    local_3c8 = SPARSE_NEVER;
                    goto LAB_0010a6a0;
                  }
                  local_3c0 = (_Bool *)0x0;
                  SVar4 = x->sparse_mode;
LAB_0010a103:
                  p_Var27 = local_3c0;
                  local_copy_into_self = false;
                  *(_Bool **)((long)ppcVar42 + -8) = &local_copy_into_self;
                  p_Var1 = local_380;
                  *(cp_options **)((long)ppcVar42 + -0x10) = &non_command_line_options;
                  uVar32 = (ulong)local_3c4;
                  *(undefined8 *)((long)ppcVar42 + -0x18) = 0xffffffffffffffff;
                  *(stat **)((long)ppcVar42 + -0x20) = local_338;
                  *(char **)((long)ppcVar42 + -0x28) = src_name;
                  *(ulong *)((long)ppcVar42 + -0x30) = uVar32;
                  *(undefined8 *)((long)ppcVar42 + -0x38) = 0x10a143;
                  local_358._0_1_ =
                       sparse_copy(uVar34,iVar15,(char **)&rename_succeeded,(size_t)p_Var1,
                                   (size_t)p_Var27,SVar4 == SPARSE_ALWAYS,
                                   *(_Bool *)((long)ppcVar42 + -0x30),
                                   *(char **)((long)ppcVar42 + -0x28),
                                   *(char **)((long)ppcVar42 + -0x20),
                                   *(uintmax_t *)((long)ppcVar42 + -0x18),
                                   *(off_t **)((long)ppcVar42 + -0x10),
                                   *(_Bool **)((long)ppcVar42 + -8));
                  goto LAB_0010a14a;
                }
                uVar36 = 1;
                if (CONCAT44(dst_back_sb.st_size._4_4_,(undefined4)dst_back_sb.st_size) / 0x200 <=
                    CONCAT44(dst_back_sb.st_blocks._4_4_,(undefined4)dst_back_sb.st_blocks))
                goto LAB_0010a01b;
                *(undefined8 *)((long)ppcVar42 + -8) = 0x108c7a;
                local_398 = (cp_options *)lseek(uVar34,0,3);
                if (-1 < (long)local_398) {
LAB_0010a015:
                  uVar36 = 3;
                  goto LAB_0010a01b;
                }
                *(undefined8 *)((long)ppcVar42 + -8) = 0x108c8f;
                local_370 = (stat *)__errno_location();
                iVar16 = *(int *)&local_370->st_dev;
                if (iVar16 == 6) goto LAB_0010a015;
                if ((iVar16 == 0x16) || (iVar16 == 0x5f)) {
                  uVar36 = 2;
                  goto LAB_0010a01b;
                }
                *(undefined8 *)((long)ppcVar42 + -8) = 0x108cc3;
                local_358 = (stat *)quotearg_style(shell_escape_always_quoting_style,src_name);
                *(undefined8 *)((long)ppcVar42 + -8) = 0x108cdd;
                uVar20 = dcgettext(0,"cannot lseek %s",5);
                iVar16 = *(int *)&local_370->st_dev;
                *(undefined8 *)((long)ppcVar42 + -8) = 0x108cfa;
                error(0,iVar16,uVar20);
                goto LAB_00108cfa;
              }
              *(undefined8 *)((long)ppcVar42 + -8) = 0x108b3b;
              local_360._0_1_ = set_file_security_ctx((char *)psVar29,false,x);
              if (((_Bool)(byte)local_360 != false) || (x->require_preserve_context == false))
              goto LAB_00108b4d;
              dstbaselen = dstbaselen & 0xffffffffffffff00;
              goto close_src_and_dst_desc;
            }
            *(undefined8 *)((long)ppcVar42 + -8) = 0x109640;
            quotearg_style(shell_escape_always_quoting_style,src_name);
            *(undefined8 *)((long)ppcVar42 + -8) = 0x109656;
            uVar20 = dcgettext(0,"skipping file %s, as it was replaced while being copied",5);
            *(undefined8 *)((long)ppcVar42 + -8) = 0x109667;
            error(0,0,uVar20);
            local_358._0_1_ = 0;
            goto close_src_desc;
          }
          if ((uint)local_348 == 0x1000) {
            local_358 = (stat *)((ulong)local_358 & 0xffffffffffffff00);
            non_command_line_options._0_8_ = 0;
            uVar34 = ~local_384 & local_32c;
            *(undefined8 *)((long)ppcVar42 + -8) = 0x109940;
            iVar15 = __xmknodat(0,iVar16,pcVar19,uVar34,(__dev_t *)&non_command_line_options);
            iVar16 = local_330;
            pcVar19 = local_340;
            bVar14 = (byte)local_358;
            local_348._0_1_ = (byte)local_358;
            if (iVar15 != 0) {
              *(undefined8 *)((long)ppcVar42 + -8) = 0x10996a;
              iVar16 = mkfifoat(iVar16,pcVar19,uVar34 & 0xffffefff);
              psVar29 = local_338;
              bVar14 = (byte)local_358;
              local_348._0_1_ = (byte)local_358;
              if (iVar16 != 0) {
                *(undefined8 *)((long)ppcVar42 + -8) = 0x10998e;
                src_name = quotearg_style(shell_escape_always_quoting_style,(char *)psVar29);
                pcVar19 = "cannot create fifo %s";
                goto LAB_00108e28;
              }
            }
            goto LAB_0010752e;
          }
          if ((((uint)local_348 & 0xffffbfff) == 0x2000) || ((uint)local_348 == 0xc000)) {
            local_358 = (stat *)((ulong)local_358 & 0xffffffffffffff00);
            uVar34 = ~local_384 & local_32c;
            non_command_line_options._0_8_ = src_sb.st_rdev;
            *(undefined8 *)((long)ppcVar42 + -8) = 0x109441;
            iVar16 = __xmknodat(0,iVar16,pcVar19,uVar34,(__dev_t *)&non_command_line_options);
            psVar29 = local_338;
            local_348._0_1_ = (byte)local_358;
            bVar14 = 0;
            if (iVar16 == 0) goto LAB_0010752e;
            *(undefined8 *)((long)ppcVar42 + -8) = 0x109462;
            src_name = quotearg_style(shell_escape_always_quoting_style,(char *)psVar29);
            pcVar19 = "cannot create special file %s";
          }
          else {
            if ((uint)local_348 != 0xa000) {
              *(undefined8 *)((long)ppcVar42 + -8) = 0x109a59;
              quotearg_style(shell_escape_always_quoting_style,src_name);
              pcVar19 = "%s has unknown file type";
              goto LAB_00108563;
            }
            *(undefined8 *)((long)ppcVar42 + -8) = 0x107c22;
            pcVar46 = areadlink_with_size(src_name,_Var9);
            iVar16 = local_330;
            pcVar19 = local_340;
            if (pcVar46 != (char *)0x0) {
              _Var11 = x->unlink_dest_after_failed_open;
              *(undefined8 *)((long)ppcVar42 + -8) = 0x107c4e;
              iVar15 = force_symlinkat(pcVar46,iVar16,pcVar19,_Var11,-1);
              _Var9 = dst_sb.st_size;
              iVar16 = local_330;
              pcVar19 = local_340;
              if (0 < iVar15) {
                if (((x->update == true) && ((byte)dstbaselen == '\0')) &&
                   ((dst_sb.st_mode & 0xf000) == 0xa000)) {
                  uVar32 = 0xffffffffffffffff;
                  pcVar24 = pcVar46;
                  do {
                    if (uVar32 == 0) break;
                    uVar32 = uVar32 - 1;
                    cVar13 = *pcVar24;
                    pcVar24 = pcVar24 + (ulong)bVar53 * -2 + 1;
                  } while (cVar13 != '\0');
                  if (dst_sb.st_size == ~uVar32 - 1) {
                    *(undefined8 *)((long)ppcVar42 + -8) = 0x10a4c9;
                    psVar29 = (stat *)areadlinkat_with_size(iVar16,pcVar19,_Var9);
                    if (psVar29 != (stat *)0x0) {
                      local_358 = psVar29;
                      *(undefined8 *)((long)ppcVar42 + -8) = 0x10a4e4;
                      iVar16 = strcmp((char *)psVar29,pcVar46);
                      psVar29 = local_358;
                      if (iVar16 == 0) {
                        *(undefined8 *)((long)ppcVar42 + -8) = 0x10a4f8;
                        rpl_free(psVar29);
                        *(undefined8 *)((long)ppcVar42 + -8) = 0x10a500;
                        rpl_free(pcVar46);
                        goto LAB_00109f57;
                      }
                      *(undefined8 *)((long)ppcVar42 + -8) = 0x10aeca;
                      rpl_free(psVar29);
                    }
                  }
                }
                *(undefined8 *)((long)ppcVar42 + -8) = 0x107c75;
                rpl_free(pcVar46);
                psVar29 = local_338;
                *(undefined8 *)((long)ppcVar42 + -8) = 0x107c86;
                src_name = quotearg_style(shell_escape_always_quoting_style,(char *)psVar29);
                *(undefined8 *)((long)ppcVar42 + -8) = 0x107c9c;
                uVar20 = dcgettext(0,"cannot create symbolic link %s",5);
                *(undefined8 *)((long)ppcVar42 + -8) = 0x107cae;
                error(0,iVar15,uVar20);
                goto un_backup;
              }
              *(undefined8 *)((long)ppcVar42 + -8) = 0x109f57;
              rpl_free(pcVar46);
LAB_00109f57:
              __group = src_sb.st_gid;
              __owner = src_sb.st_uid;
              iVar16 = local_330;
              pcVar19 = local_340;
              if (x->preserve_security_context == false) {
                local_348._0_1_ = x->preserve_ownership;
                bVar14 = 1;
                if ((_Bool)(byte)local_348 != false) {
                  local_358 = (stat *)((ulong)local_358 & 0xffffffffffffff00 |
                                      (ulong)(byte)local_348);
                  *(undefined8 *)((long)ppcVar42 + -8) = 0x109fa1;
                  iVar16 = fchownat(iVar16,pcVar19,__owner,__group,0x100);
                  if (iVar16 == 0) {
                    local_348._0_1_ = 0;
                    bVar14 = (byte)local_358;
                  }
                  else {
                    *(undefined8 *)((long)ppcVar42 + -8) = 0x109fb9;
                    bVar14 = chown_failure_ok(x);
                    local_348._0_1_ = 0;
                    if ((_Bool)bVar14 == false) {
                      *(undefined8 *)((long)ppcVar42 + -8) = 0x109fda;
                      uVar20 = dcgettext(0,"failed to preserve ownership for %s",5);
                      *(undefined8 *)((long)ppcVar42 + -8) = 0x109fe2;
                      piVar21 = __errno_location();
                      iVar16 = *piVar21;
                      *(undefined8 *)((long)ppcVar42 + -8) = 0x109ff7;
                      error(0,iVar16,uVar20);
                      if (x->require_preserve != false) goto un_backup;
                      local_348._0_1_ = 0;
                      bVar14 = (byte)local_358;
                    }
                  }
                }
                goto LAB_0010752e;
              }
              goto LAB_00108267;
            }
            *(undefined8 *)((long)ppcVar42 + -8) = 0x10a2fc;
            src_name = quotearg_style(shell_escape_always_quoting_style,src_name);
            pcVar19 = "cannot read symbolic link %s";
          }
LAB_00108e28:
          *(undefined8 *)(puVar48 + -8) = 0x108e2f;
          uVar20 = dcgettext(0,pcVar19,5);
          *(undefined8 *)(puVar48 + -8) = 0x108e37;
          piVar21 = __errno_location();
          iVar16 = *piVar21;
          *(undefined8 *)(puVar48 + -8) = 0x108e48;
          error(0,iVar16,uVar20);
          goto un_backup;
        }
LAB_00107100:
        iVar15 = local_330;
        pcVar19 = local_340;
        if ((x->dest_info == (Hash_table *)0x0) || (bVar12 = x->move_mode, (_Bool)bVar12 != false))
        goto LAB_00106ead;
        if (x->backup_type == no_backups) {
          psVar29 = &dst_sb;
          if ((char)uVar50 == '\0') {
            psVar29 = &dst_back_sb;
            *(undefined8 *)((long)ppcVar38 + -8) = 0x108897;
            iVar15 = __fxstatat(1,iVar15,pcVar19,(stat *)psVar29,0x100);
            if (iVar15 != 0) goto LAB_00106ead;
          }
          pcVar19 = local_340;
          if ((psVar29->st_mode & 0xf000) == 0xa000) {
            pHVar47 = x->dest_info;
            *(undefined8 *)((long)ppcVar38 + -8) = 0x107158;
            _Var11 = seen_file(pHVar47,pcVar19,psVar29);
            psVar29 = local_338;
            if (_Var11 != false) {
              *(undefined8 *)((long)ppcVar38 + -8) = 0x107176;
              uVar20 = quotearg_n_style(1,4,psVar29);
              *(undefined8 *)((long)ppcVar38 + -8) = 0x107188;
              uVar22 = quotearg_n_style(0,4,src_name);
              pcVar19 = "will not copy %s through just-created symlink %s";
              goto LAB_00107197;
            }
          }
          goto LAB_00106ead;
        }
        ppcVar42 = ppcVar38;
        if (x->verbose != false) goto LAB_00107870;
        if (iVar16 == 0) goto LAB_001073b8;
LAB_00106ec8:
        _Var8 = src_sb.st_ino;
        _Var7 = src_sb.st_dev;
        pcVar19 = local_340;
        ppcVar41 = ppcVar42;
        if ((x->recursive == false) || ((local_32c & 0xf000) != 0x4000)) {
          cVar13 = x->move_mode;
          if ((_Bool)cVar13 == false) {
            if (x->preserve_links == false) goto LAB_001073b8;
            if (x->hard_link == false) goto LAB_00107826;
            pcVar18 = (cp_options *)0x0;
            goto LAB_0010785e;
          }
          if (src_sb.st_nlink == 1) {
            *(undefined8 *)((long)ppcVar42 + -8) = 0x1089c3;
            pcVar18 = (cp_options *)src_to_dest_lookup(_Var8,_Var7);
LAB_0010859d:
            iVar15 = local_330;
            pcVar19 = local_340;
            if (pcVar18 == (cp_options *)0x0) goto LAB_00106f70;
            if ((local_32c & 0xf000) == 0x4000) goto LAB_00106f14;
            *(ulong *)((long)ppcVar42 + -0x10) = (ulong)local_380 & 0xffffffff;
            psVar29 = local_338;
            *(ulong *)((long)ppcVar42 + -0x18) = (ulong)x->verbose;
            *(undefined8 *)((long)ppcVar42 + -0x20) = 1;
            *(undefined8 *)((long)ppcVar42 + -0x28) = 0x1085f0;
            _Var11 = create_hard_link((char *)0x0,iVar15,(char *)pcVar18,(char *)psVar29,iVar15,
                                      pcVar19,*(_Bool *)((long)ppcVar42 + -0x20),
                                      *(_Bool *)((long)ppcVar42 + -0x18),
                                      *(_Bool *)((long)ppcVar42 + -0x10));
            if (_Var11 == false) goto LAB_001085fc;
            goto LAB_00107390;
          }
          pcVar18 = (cp_options *)0x0;
          if ((x->preserve_links != false) && (x->hard_link == false)) {
LAB_00107826:
            if ((1 < src_sb.st_nlink) ||
               ((((byte)local_328 != '\0' && (x->dereference == DEREF_COMMAND_LINE_ARGUMENTS)) ||
                (pcVar18 = (cp_options *)0x0, x->dereference == DEREF_ALWAYS)))) {
              *(undefined8 *)((long)ppcVar42 + -8) = 0x10859a;
              pcVar18 = (cp_options *)remember_copied(pcVar19,_Var8,_Var7);
              goto LAB_0010859d;
            }
            goto LAB_00107856;
          }
LAB_00107020:
          iVar15 = local_330;
          pcVar19 = local_340;
          if (iVar16 != 0x11) {
LAB_0010702a:
            iVar15 = local_330;
            psVar29 = local_338;
            pcVar19 = local_340;
            if (iVar16 == 0x16) {
              *(undefined8 *)((long)ppcVar42 + -8) = 0x1089e6;
              uVar20 = quotearg_n_style(1,4,top_level_dst_name);
              *(undefined8 *)((long)ppcVar42 + -8) = 0x1089fc;
              uVar22 = quotearg_n_style(0,4,top_level_src_name);
              *(undefined8 *)((long)ppcVar42 + -8) = 0x108a12;
              uVar23 = dcgettext(0,"cannot move %s to a subdirectory of itself, %s",5);
              bVar12 = 1;
              *(undefined8 *)((long)ppcVar42 + -8) = 0x108a2c;
              error(0,0,uVar23,uVar22,uVar20);
              *(undefined *)&local_370->st_dev = 1;
              goto LAB_0010743b;
            }
            if (iVar16 == 0x12) {
              uVar34 = local_32c & 0xf000;
              if (uVar34 == 0x4000) {
                *(undefined8 *)((long)ppcVar42 + -8) = 0x108947;
                iVar16 = unlinkat(iVar15,pcVar19,0x200);
                if (iVar16 != 0) {
                  *(undefined8 *)((long)ppcVar42 + -8) = 0x108954;
                  piVar21 = __errno_location();
                  if (*piVar21 != 2) goto LAB_00107083;
                }
              }
              else {
                *(undefined8 *)((long)ppcVar42 + -8) = 0x10706a;
                iVar16 = unlinkat(iVar15,pcVar19,0);
                if (iVar16 != 0) {
                  *(undefined8 *)((long)ppcVar42 + -8) = 0x107077;
                  piVar21 = __errno_location();
                  if (*piVar21 != 2) {
LAB_00107083:
                    psVar29 = local_338;
                    *(undefined8 *)((long)ppcVar42 + -8) = 0x107099;
                    uVar20 = quotearg_n_style(1,4,psVar29);
                    *(undefined8 *)((long)ppcVar42 + -8) = 0x1070ab;
                    uVar22 = quotearg_n_style(0,4,src_name);
                    *(undefined8 *)((long)ppcVar42 + -8) = 0x1070c1;
                    uVar23 = dcgettext(0,
                                       "inter-device move failed: %s to %s; unable to remove target"
                                       ,5);
                    iVar16 = *piVar21;
                    goto LAB_0010842a;
                  }
                }
                bVar12 = uVar34 != 0x4000 & x->verbose;
                dstbaselen = dstbaselen & 0xffffffffffffff00 | (ulong)bVar12;
                if (bVar12 != 0) {
                  uVar34 = 1;
                  *(undefined8 *)((long)ppcVar42 + -8) = 0x108781;
                  uVar20 = dcgettext(0,"copied ",5);
                  *(undefined8 *)((long)ppcVar42 + -8) = 0x108790;
                  __printf_chk(1,uVar20);
                  psVar29 = local_338;
                  sVar49 = srcbaselen;
                  *(undefined8 *)((long)ppcVar42 + -8) = 0x1087a6;
                  emit_verbose(src_name,(char *)psVar29,(char *)sVar49);
                  goto LAB_001073c3;
                }
              }
              dstbaselen = CONCAT71(dstbaselen._1_7_,1);
              uVar34 = 1;
              goto LAB_001073c3;
            }
            *(undefined8 *)((long)ppcVar42 + -8) = 0x1083f6;
            uVar20 = quotearg_n_style(1,4,psVar29);
            *(undefined8 *)((long)ppcVar42 + -8) = 0x108408;
            uVar22 = quotearg_n_style(0,4,src_name);
            *(undefined8 *)((long)ppcVar42 + -8) = 0x10841e;
            uVar23 = dcgettext(0,"cannot move %s to %s",5);
LAB_0010842a:
            *(undefined8 *)((long)ppcVar42 + -8) = 0x108433;
            error(0,iVar16,uVar23,uVar22,uVar20);
            *(undefined8 *)((long)ppcVar42 + -8) = 0x108446;
            forget_created(src_sb.st_ino,src_sb.st_dev);
            goto LAB_00107438;
          }
          *(undefined8 *)((long)ppcVar42 + -8) = 0x1083aa;
          iVar16 = renameat(-100,src_name,iVar15,pcVar19);
          if (iVar16 != 0) {
            *(undefined8 *)((long)ppcVar42 + -8) = 0x1083b7;
            piVar21 = __errno_location();
            iVar16 = *piVar21;
            if (iVar16 != 0) goto LAB_0010702a;
          }
LAB_00107347:
          if (x->verbose != false) {
            *(undefined8 *)((long)ppcVar42 + -8) = 0x108903;
            uVar20 = dcgettext(0,"renamed ",5);
            *(undefined8 *)((long)ppcVar42 + -8) = 0x108912;
            __printf_chk(1,uVar20);
            psVar29 = local_338;
            sVar49 = srcbaselen;
            *(undefined8 *)((long)ppcVar42 + -8) = 0x108928;
            emit_verbose(src_name,(char *)psVar29,(char *)sVar49);
          }
          psVar29 = local_338;
          if (x->set_security_context != (selabel_handle *)0x0) {
            *(undefined8 *)((long)ppcVar42 + -8) = 0x10736d;
            set_file_security_ctx((char *)psVar29,true,x);
          }
          pcVar19 = local_340;
          if (local_348 != (_Bool *)0x0) {
            *local_348 = true;
          }
          ppcVar41 = ppcVar42;
          if (((byte)local_328 == '\0') || (x->last_file != false)) goto LAB_00107390;
          pHVar47 = x->dest_info;
          *(undefined8 *)((long)ppcVar42 + -8) = 0x1088c7;
          record_file(pHVar47,pcVar19,&src_sb);
          bVar12 = (byte)local_328;
          goto LAB_0010743b;
        }
        if ((byte)local_328 == '\0') {
          *(undefined8 *)((long)ppcVar42 + -8) = 0x106f0c;
          pcVar18 = (cp_options *)src_to_dest_lookup(_Var8,_Var7);
        }
        else {
          *(undefined8 *)((long)ppcVar42 + -8) = 0x1084cf;
          pcVar18 = (cp_options *)remember_copied(pcVar19,_Var8,_Var7);
        }
        if (pcVar18 == (cp_options *)0x0) {
LAB_00106f70:
          cVar13 = x->move_mode;
LAB_00107856:
          if (cVar13 != '\0') goto LAB_00107020;
LAB_0010785e:
          uVar34 = (uint)(byte)dstbaselen;
          goto LAB_001073c3;
        }
LAB_00106f14:
        iVar15 = local_330;
        *(undefined8 *)((long)ppcVar42 + -8) = 0x106f2a;
        _Var11 = same_nameat(-100,src_name,iVar15,(char *)pcVar18);
        iVar15 = local_330;
        pcVar19 = local_340;
        if (_Var11 != false) {
          *(undefined8 *)((long)ppcVar42 + -8) = 0x1093b1;
          quotearg_n_style(1,4,top_level_dst_name);
          *(undefined8 *)((long)ppcVar42 + -8) = 0x1093c7;
          pcVar18 = (cp_options *)quotearg_n_style(0,4,top_level_src_name);
          *(undefined8 *)((long)ppcVar42 + -8) = 0x1093dd;
          uVar20 = dcgettext(0,"cannot copy a directory, %s, into itself, %s",5);
          *(undefined8 *)((long)ppcVar42 + -8) = 0x1093f1;
          error(0,0,uVar20);
          *(undefined *)&local_370->st_dev = 1;
          goto LAB_001085fc;
        }
        *(undefined8 *)((long)ppcVar42 + -8) = 0x106f49;
        _Var11 = same_nameat(iVar15,pcVar19,iVar15,(char *)pcVar18);
        psVar29 = local_338;
        pcVar19 = local_340;
        if (_Var11 != false) {
          *(undefined8 *)((long)ppcVar42 + -8) = 0x109a15;
          pcVar19 = quotearg_style(shell_escape_always_quoting_style,top_level_src_name);
          *(undefined8 *)((long)ppcVar42 + -8) = 0x109a2b;
          uVar20 = dcgettext(0,"warning: source directory %s specified more than once",5);
          *(undefined8 *)((long)ppcVar42 + -8) = 0x109a3c;
          error(0,0,uVar20,pcVar19);
          ppcVar44 = ppcVar42;
          if (x->move_mode != false) goto LAB_00108850;
          goto LAB_00107390;
        }
        if ((x->dereference == DEREF_ALWAYS) ||
           ((x->dereference == DEREF_COMMAND_LINE_ARGUMENTS && ((byte)local_328 != '\0'))))
        goto LAB_00106f70;
        *(undefined8 *)((long)ppcVar42 + -8) = 0x1097e1;
        pcVar18 = (cp_options *)subst_suffix((char *)psVar29,pcVar19,(char *)pcVar18);
        *(undefined8 *)((long)ppcVar42 + -8) = 0x1097f6;
        quotearg_n_style(1,4,pcVar18);
        *(undefined8 *)((long)ppcVar42 + -8) = 0x109808;
        quotearg_n_style(0,4,psVar29);
        *(undefined8 *)((long)ppcVar42 + -8) = 0x10981e;
        uVar20 = dcgettext(0,"will not create hard link %s to directory %s",5);
        *(undefined8 *)((long)ppcVar42 + -8) = 0x109832;
        error(0,0,uVar20);
        *(undefined8 *)((long)ppcVar42 + -8) = 0x10983a;
        rpl_free(pcVar18);
        src_name = (char *)psVar29;
LAB_001085fc:
      } while (x->preserve_security_context != false);
LAB_00107cc4:
      iVar16 = local_330;
      pcVar19 = local_340;
      ppcVar41 = ppcVar42;
      if (srcbaselen != 0) {
        pcVar46 = local_340 + (srcbaselen - (long)local_338);
        *(undefined8 *)((long)ppcVar42 + -8) = 0x107cf5;
        iVar16 = renameat(iVar16,pcVar46,iVar16,pcVar19);
        psVar29 = local_338;
        if (iVar16 != 0) {
          *(undefined8 *)((long)ppcVar42 + -8) = 0x108979;
          pcVar19 = quotearg_style(shell_escape_always_quoting_style,(char *)psVar29);
          pcVar46 = "cannot un-backup %s";
          goto LAB_00107b71;
        }
        if (x->verbose != false) {
          *(undefined8 *)((long)ppcVar42 + -8) = 0x107d1e;
          uVar20 = quotearg_n_style(1,4,psVar29);
          sVar49 = srcbaselen;
          *(undefined8 *)((long)ppcVar42 + -8) = 0x107d34;
          uVar22 = quotearg_n_style(0,4,sVar49);
          *(undefined8 *)((long)ppcVar42 + -8) = 0x107d4a;
          uVar23 = dcgettext(0,"%s -> %s (unbackup)\n",5);
          *(undefined8 *)((long)ppcVar42 + -8) = 0x107d5f;
          __printf_chk(1,uVar23,uVar22,uVar20);
        }
      }
    }
  }
  else {
    if (iVar16 < 0) {
      iVar16 = renameatu(-100,src_name,dst_dirfd,dst_relname,1);
      if (iVar16 == 0) {
        nonexistent_dst = 1;
        *local_348 = true;
        goto LAB_00106faf;
      }
      piVar21 = __errno_location();
      iVar16 = *piVar21;
    }
    bVar52 = iVar16 == 0;
    dstbaselen = dstbaselen & 0xffffffffffffff00 | (ulong)bVar52;
    *local_348 = bVar52;
    nonexistent_dst = (int)bVar52;
    if (iVar16 != 0) goto LAB_00106dc0;
LAB_00106faf:
    if (x->last_file != false) {
      iVar16 = 0;
      goto LAB_00106e20;
    }
    iVar16 = 0;
    pcVar19 = local_340;
    psVar29 = local_338;
    iVar15 = local_330;
LAB_00106dd5:
    iVar15 = __fxstatat(1,iVar15,pcVar19,(stat *)&src_sb,(uint)(x->dereference == DEREF_NEVER) << 8)
    ;
    if (iVar15 == 0) {
      local_32c = src_sb.st_mode;
      if (((src_sb.st_mode & 0xf000) != 0x4000) || (bVar12 = x->recursive, (_Bool)bVar12 != false))
      goto LAB_00106e20;
      pcVar19 = quotearg_style(shell_escape_always_quoting_style,src_name);
      if (x->install_mode != false) {
        pcVar46 = "omitting directory %s";
        goto LAB_00109144;
      }
      uVar20 = dcgettext(0,"-r not specified; omitting directory %s",5);
LAB_00107aef:
      *(undefined8 *)((long)ppcVar40 + -8) = 0x107afd;
      error(0,0,uVar20,pcVar19);
      ppcVar41 = ppcVar40;
      goto LAB_0010743b;
    }
LAB_00107b58:
    *(undefined8 *)((long)ppcVar41 + -8) = 0x107b62;
    pcVar19 = quotearg_style(shell_escape_always_quoting_style,(char *)psVar29);
    pcVar46 = "cannot stat %s";
    ppcVar42 = ppcVar41;
LAB_00107b71:
    *(undefined8 *)((long)ppcVar42 + -8) = 0x107b78;
    uVar20 = dcgettext(0,pcVar46,5);
    *(undefined8 *)((long)ppcVar42 + -8) = 0x107b80;
    piVar21 = __errno_location();
    iVar16 = *piVar21;
    *(undefined8 *)((long)ppcVar42 + -8) = 0x107b91;
    error(0,iVar16,uVar20,pcVar19);
    ppcVar41 = ppcVar42;
  }
  goto LAB_00107438;
LAB_0010a88a:
  local_380 = (_Bool *)((ulong)local_380 & 0xffffffffffffff00 | (ulong)(byte)local_358);
  *(undefined8 *)((long)ppcVar42 + -8) = 0x10a89d;
  piVar21 = __errno_location();
  if (*piVar21 == 6) {
LAB_0010a8b4:
    bVar52 = (long)local_3b0 < (long)local_378;
    src_name = (char *)local_370;
    x = local_398;
    if (((long)local_3b0 < (long)local_378) || ((char)local_380 != '\0')) {
LAB_0010abfc:
      psVar29 = local_378;
      if (local_3c8 == SPARSE_NEVER) {
        lVar37 = (long)local_378 - (long)local_3b0;
        *(undefined8 *)((long)ppcVar42 + -8) = 0x10ae06;
        _Var11 = write_zeros(iVar15,lVar37);
        if (_Var11 == false) goto LAB_0010ae0e;
      }
      else {
        local_370 = (stat *)((ulong)local_370 & 0xffffffffffffff00 | (ulong)bVar52);
        *(undefined8 *)((long)ppcVar42 + -8) = 0x10ac1d;
        iVar16 = ftruncate(iVar15,(__off_t)psVar29);
        psVar29 = local_3b0;
        if (iVar16 != 0) {
LAB_0010ae0e:
          psVar29 = local_338;
          *(undefined8 *)((long)ppcVar42 + -8) = 0x10ae1f;
          local_370 = (stat *)quotearg_style(shell_escape_always_quoting_style,(char *)psVar29);
          pcVar19 = "failed to extend %s";
          goto LAB_0010ab2f;
        }
        if ((local_3c8 == SPARSE_ALWAYS) && ((char)local_370 != '\0')) {
          lVar37 = (long)local_378 - (long)local_3b0;
          *(undefined8 *)((long)ppcVar42 + -8) = 0x10ac59;
          iVar16 = punch_hole(iVar15,(off_t)psVar29,lVar37);
          psVar29 = local_338;
          if (iVar16 < 0) {
            *(undefined8 *)((long)ppcVar42 + -8) = 0x10ac72;
            local_370 = (stat *)quotearg_style(shell_escape_always_quoting_style,(char *)psVar29);
            pcVar19 = "error deallocating %s";
            goto LAB_0010ab2f;
          }
        }
      }
    }
  }
  else {
cannot_lseek:
    src_name = (char *)local_370;
    x = local_398;
    *(undefined8 *)((long)ppcVar42 + -8) = 0x10ab1c;
    local_370 = (stat *)quotearg_style(shell_escape_always_quoting_style,src_name);
    pcVar19 = "cannot lseek %s";
LAB_0010ab2f:
    *(undefined8 *)((long)ppcVar42 + -8) = 0x10ab36;
    local_358 = (stat *)dcgettext(0,pcVar19,5);
    *(undefined8 *)((long)ppcVar42 + -8) = 0x10ab42;
    piVar21 = __errno_location();
    psVar29 = local_358;
    iVar16 = *piVar21;
    *(undefined8 *)((long)ppcVar42 + -8) = 0x10ab5b;
    error(0,iVar16,psVar29);
LAB_0010ab5b:
    local_358 = (stat *)((ulong)local_358 & 0xffffffffffffff00);
  }
LAB_0010a14a:
  _Var7 = non_command_line_options._0_8_;
  if ((byte)local_358 == '\x01') {
    if (local_copy_into_self != false) {
      *(undefined8 *)((long)ppcVar42 + -8) = 0x10aabe;
      iVar16 = ftruncate(iVar15,_Var7);
      psVar29 = local_338;
      if (iVar16 < 0) {
        *(undefined8 *)((long)ppcVar42 + -8) = 0x10aad7;
        local_360 = (dir_list *)quotearg_style(shell_escape_always_quoting_style,(char *)psVar29);
        pcVar19 = "failed to extend %s";
LAB_0010a962:
        *(undefined8 *)((long)ppcVar42 + -8) = 0x10a969;
        local_358 = (stat *)dcgettext(0,pcVar19,5);
        *(undefined8 *)((long)ppcVar42 + -8) = 0x10a975;
        piVar21 = __errno_location();
        psVar29 = local_358;
        iVar16 = *piVar21;
        *(undefined8 *)((long)ppcVar42 + -8) = 0x10a98e;
        error(0,iVar16,psVar29);
        goto LAB_00108cfa;
      }
    }
LAB_0010a15f:
    local_358 = (stat *)((ulong)local_358 & 0xffffffff00000000 | (ulong)local_3b8 & 0xffffffff);
    if (x->preserve_timestamps != false) {
LAB_00109ce6:
      iVar16 = local_330;
      pcVar19 = local_340;
      timespec[0].tv_sec = src_sb.st_atim.tv_sec;
      timespec[0].tv_nsec = src_sb.st_atim.tv_nsec;
      timespec[1].tv_sec = src_sb.st_mtim.tv_sec;
      timespec[1].tv_nsec = src_sb.st_mtim.tv_nsec;
      *(undefined8 *)((long)ppcVar42 + -8) = 0x109d3c;
      iVar16 = fdutimensat(iVar15,iVar16,pcVar19,timespec,0);
      psVar29 = local_338;
      if (iVar16 != 0) {
        *(undefined8 *)((long)ppcVar42 + -8) = 0x10aa2e;
        local_378 = (stat *)quotearg_style(shell_escape_always_quoting_style,(char *)psVar29);
        *(undefined8 *)((long)ppcVar42 + -8) = 0x10aa48;
        local_370 = (stat *)dcgettext(0,"preserving times for %s",5);
        *(undefined8 *)((long)ppcVar42 + -8) = 0x10aa54;
        piVar21 = __errno_location();
        psVar29 = local_370;
        iVar16 = *piVar21;
        *(undefined8 *)((long)ppcVar42 + -8) = 0x10aa6d;
        error(0,iVar16,psVar29);
        if (x->require_preserve != false) goto LAB_00108cfa;
      }
    }
    iVar16 = local_330;
    if ((x->preserve_ownership != false) &&
       ((src_sb.st_uid != tmp_dst_sb.st_uid || (src_sb.st_gid != tmp_dst_sb.st_gid)))) {
      *(stat **)((long)ppcVar42 + -8) = &tmp_dst_sb;
      psVar29 = local_338;
      pcVar19 = local_340;
      *(size_t *)((long)ppcVar42 + -0x10) = dstbaselen & 0xff;
      *(undefined8 *)((long)ppcVar42 + -0x18) = 0x109d9d;
      iVar16 = set_owner(x,(char *)psVar29,iVar16,pcVar19,iVar15,&src_sb,
                         *(_Bool *)((long)ppcVar42 + -0x10),*(stat **)((long)ppcVar42 + -8));
      if (iVar16 == -1) goto LAB_00108cfa;
      if (iVar16 == 0) {
        local_360 = (dir_list *)((ulong)local_360 & 0xfffffffffffff1ff);
      }
    }
LAB_00109db7:
    psVar29 = local_338;
    if ((*(ulong *)&x->move_mode & 0xff0000000000ff) == 0) {
      if (x->set_mode == false) {
        bVar12 = (byte)dstbaselen & x->explicit_no_preserve_mode;
        if (bVar12 == 0) {
          local_360._0_1_ = 1;
          if (((uint)local_358 | local_3cc) != 0) {
            local_360 = (dir_list *)CONCAT71(local_360._1_7_,1);
            *(undefined8 *)((long)ppcVar42 + -8) = 0x109e0b;
            mVar17 = cached_umask();
            if (((uint)local_358 | ~mVar17 & local_3cc) != 0) {
              local_358 = (stat *)((ulong)local_358 & 0xffffffffffffff00 | (ulong)local_360 & 0xff);
              *(undefined8 *)((long)ppcVar42 + -8) = 0x109e35;
              mVar17 = cached_umask();
              *(undefined8 *)((long)ppcVar42 + -8) = 0x109e46;
              iVar16 = fchmod(iVar15,(uint)local_3a0 & ~mVar17);
              psVar29 = local_338;
              local_360._0_1_ = (byte)local_358;
              if (iVar16 != 0) {
                *(undefined8 *)((long)ppcVar42 + -8) = 0x109e67;
                local_360 = (dir_list *)
                            quotearg_style(shell_escape_always_quoting_style,(char *)psVar29);
                *(undefined8 *)((long)ppcVar42 + -8) = 0x109e81;
                local_358 = (stat *)dcgettext(0,"preserving permissions for %s",5);
                *(undefined8 *)((long)ppcVar42 + -8) = 0x109e8d;
                piVar21 = __errno_location();
                psVar29 = local_358;
                iVar16 = *piVar21;
                *(undefined8 *)((long)ppcVar42 + -8) = 0x109ea6;
                error(0,iVar16,psVar29);
                goto LAB_00109ea6;
              }
            }
          }
          goto close_src_and_dst_desc;
        }
        dstbaselen = dstbaselen & 0xffffffffffffff00 | (ulong)bVar12;
        *(undefined8 *)((long)ppcVar42 + -8) = 0x10abd7;
        mVar17 = cached_umask();
        mVar17 = ~mVar17 & 0x1b6;
      }
      else {
        mVar17 = x->mode;
      }
      psVar29 = local_338;
      *(undefined8 *)((long)ppcVar42 + -8) = 0x10a5d2;
      iVar16 = set_acl((char *)psVar29,iVar15,mVar17);
      local_360._0_1_ = iVar16 == 0;
    }
    else {
      *(undefined8 *)((long)ppcVar42 + -8) = 0x10a467;
      iVar16 = copy_acl(src_name,uVar34,(char *)psVar29,iVar15,(mode_t)local_360);
      local_360._0_1_ = 1;
      if (iVar16 != 0) {
LAB_00109ea6:
        local_360._0_1_ = x->require_preserve ^ 1;
      }
    }
  }
  else {
LAB_00108cfa:
    local_360._0_1_ = 0;
  }
close_src_and_dst_desc:
  local_358 = (stat *)((ulong)local_358 & 0xffffffffffffff00 | (ulong)(byte)local_360);
  *(undefined8 *)((long)ppcVar42 + -8) = 0x108d0b;
  iVar16 = close(iVar15);
  psVar29 = local_338;
  if (iVar16 < 0) {
    *(undefined8 *)((long)ppcVar42 + -8) = 0x10a2db;
    quotearg_style(shell_escape_always_quoting_style,(char *)psVar29);
    pcVar19 = "failed to close %s";
LAB_00109b21:
    *(undefined8 *)((long)ppcVar42 + -8) = 0x109b28;
    local_358 = (stat *)dcgettext(0,pcVar19,5);
    *(undefined8 *)((long)ppcVar42 + -8) = 0x109b34;
    piVar21 = __errno_location();
    psVar29 = local_358;
    iVar16 = *piVar21;
    *(undefined8 *)((long)ppcVar42 + -8) = 0x109b49;
    error(0,iVar16,psVar29);
    local_358._0_1_ = 0;
  }
close_src_desc:
  local_358 = (stat *)((ulong)local_358 & 0xffffffffffffff00 | (ulong)(byte)local_358);
  *(undefined8 *)((long)ppcVar42 + -8) = 0x108d2f;
  iVar16 = close(uVar34);
  pcVar19 = _rename_succeeded;
  if (iVar16 < 0) {
    *(undefined8 *)((long)ppcVar42 + -8) = 0x109a91;
    src_name = quotearg_style(shell_escape_always_quoting_style,src_name);
    *(undefined8 *)((long)ppcVar42 + -8) = 0x109aa7;
    uVar20 = dcgettext(0,"failed to close %s",5);
    *(undefined8 *)((long)ppcVar42 + -8) = 0x109aaf;
    piVar21 = __errno_location();
    iVar16 = *piVar21;
    *(undefined8 *)((long)ppcVar42 + -8) = 0x109ac0;
    error(0,iVar16,uVar20);
    pcVar19 = _rename_succeeded;
    *(undefined8 *)((long)ppcVar42 + -8) = 0x109acc;
    rpl_free(pcVar19);
  }
  else {
    bVar14 = 0;
    *(undefined8 *)((long)ppcVar42 + -8) = 0x108d55;
    rpl_free(pcVar19);
    local_348._0_1_ = (byte)local_358;
joined_r0x001084a2:
    if ((byte)local_358 != 0) {
LAB_0010752e:
      psVar29 = local_338;
      local_358._0_1_ = (uint)local_348 != 0x4000;
      if ((((byte)dstbaselen == '\0') &&
          (bVar12 = (x->copy_as_regular ^ 1U) & (byte)local_358, bVar12 != 0)) &&
         ((x->set_security_context != (selabel_handle *)0x0 ||
          (local_358._0_1_ = bVar12, x->preserve_security_context != false)))) {
        local_348 = (_Bool *)((ulong)local_348 & 0xffffffffffffff00 | (ulong)(byte)local_348);
        local_358 = (stat *)((ulong)local_358 & 0xffffffffffffff00 | (ulong)bVar12);
        *(undefined8 *)((long)ppcVar42 + -8) = 0x108639;
        local_358._0_1_ = set_file_security_ctx((char *)psVar29,false,x);
        if ((_Bool)(byte)local_358 == false) {
          dstbaselen = dstbaselen & 0xffffffffffffff00 | (ulong)x->require_preserve_context;
          if (x->require_preserve_context != false) goto un_backup;
        }
      }
      bVar12 = 1;
      if ((byte)local_328 == 0) goto LAB_001075e8;
      local_368 = (_Bool *)((ulong)local_368 & 0xffffffffffffff00);
      puVar39 = (undefined *)ppcVar42;
      bVar12 = (byte)local_328;
      goto LAB_00107574;
    }
  }
un_backup:
  ppcVar42 = (cp_options **)puVar48;
  if (x->preserve_security_context == false) {
    if (pcVar18 == (cp_options *)0x0) {
      *(undefined8 *)(puVar48 + -8) = 0x1089a3;
      forget_created(src_sb.st_ino,src_sb.st_dev);
    }
    goto LAB_00107cc4;
  }
  goto LAB_00108267;
  while( true ) {
    srcbaselen = srcbaselen & 0xffffffffffffff00 | (ulong)((byte)srcbaselen | first_dir_created);
    *(undefined8 *)((long)ppcVar42 + -0x28) = 0x108015;
    sVar26 = strlen(pcVar19);
    pcVar19 = pcVar19 + sVar26 + 1;
    if (*pcVar19 == '\0') break;
LAB_00108023:
    *(undefined8 *)((long)ppcVar42 + -0x28) = 0x108030;
    pcVar46 = file_name_concat(src_name,pcVar19,(char **)0x0);
    psVar25 = local_338;
    *(undefined8 *)((long)ppcVar42 + -0x28) = 0x108044;
    pcVar24 = file_name_concat((char *)psVar25,pcVar19,(char **)0x0);
    iVar16 = local_330;
    psVar25 = local_370;
    first_dir_created = *(_Bool *)&local_358->st_dev;
    *(_Bool **)((long)ppcVar42 + -0x28) = local_380;
    *(_Bool **)((long)ppcVar42 + -0x30) = local_368;
    *(stat **)((long)ppcVar42 + -0x38) = local_378;
    pdVar6 = local_360;
    *(undefined8 *)((long)ppcVar42 + -0x40) = 0;
    *(cp_options **)((long)ppcVar42 + -0x48) = local_390;
    *(dir_list ***)((long)ppcVar42 + -0x50) = local_3a0;
    *(undefined8 *)((long)ppcVar42 + -0x58) = 0x1080a1;
    _Var11 = copy_internal(pcVar46,pcVar24,iVar16,pcVar24 + (long)pdVar6,(int)local_398,psVar25,
                           *(dir_list **)((long)ppcVar42 + -0x50),
                           *(cp_options **)((long)ppcVar42 + -0x48),
                           *(_Bool *)((long)ppcVar42 + -0x40),*(_Bool **)((long)ppcVar42 + -0x38),
                           *(_Bool **)((long)ppcVar42 + -0x30),*(_Bool **)((long)ppcVar42 + -0x28));
    local_348 = (_Bool *)((ulong)local_348 & 0xffffffffffffff00 | (ulong)((byte)local_348 & _Var11))
    ;
    *(byte *)&psVar29->st_dev = *(byte *)&psVar29->st_dev | local_copy_into_self;
    *(undefined8 *)((long)ppcVar42 + -0x28) = 0x1080bd;
    rpl_free(pcVar24);
    *(undefined8 *)((long)ppcVar42 + -0x28) = 0x1080c5;
    rpl_free(pcVar46);
    if (local_copy_into_self != false) break;
  }
  bVar12 = (byte)local_348;
  x = local_3b8;
LAB_001080e1:
  pcVar19 = local_3a8;
  *(undefined8 *)((long)ppcVar42 + -0x28) = 0x1080ed;
  rpl_free(pcVar19);
  *(byte *)&local_358->st_dev = (byte)srcbaselen;
LAB_001080fd:
  if ((byte)local_328 == '\0') {
    bVar14 = 0;
    local_368 = (_Bool *)((ulong)local_368 & 0xffffffffffffff00 | (ulong)local_3b0 & 0xff);
  }
  else {
    local_348._0_1_ = 0;
    bVar14 = 0;
    local_358._0_1_ = 0;
    local_368 = (_Bool *)((ulong)local_368 & 0xffffffffffffff00 | (ulong)local_3b0 & 0xff);
LAB_00107574:
    iVar16 = local_330;
    pcVar19 = local_340;
    ppcVar41 = (cp_options **)puVar39;
    if (x->dest_info != (Hash_table *)0x0) {
      local_348 = (_Bool *)((ulong)local_348 & 0xffffffffffffff00 | (ulong)(byte)local_348);
      local_328 = &dst_back_sb;
      *(undefined8 *)(puVar39 + -8) = 0x1075b0;
      iVar16 = __fxstatat(1,iVar16,pcVar19,(stat *)&dst_back_sb,0x100);
      psVar29 = local_328;
      pcVar19 = local_340;
      if (iVar16 == 0) {
        pHVar47 = x->dest_info;
        local_328 = (stat *)((ulong)local_328 & 0xffffffffffffff00 | (ulong)local_348 & 0xff);
        *(undefined8 *)(puVar39 + -8) = 0x1075dd;
        record_file(pHVar47,pcVar19,psVar29);
        local_348._0_1_ = (byte)local_328;
      }
    }
LAB_001075e8:
    if (((x->hard_link != false) && ((byte)local_358 != 0)) || ((byte)local_348 != 0))
    goto LAB_0010743b;
  }
  iVar16 = local_330;
  pcVar19 = local_340;
  if (x->preserve_timestamps != false) {
    dst_back_sb.st_dev = src_sb.st_atim.tv_sec;
    dst_back_sb.st_ino = src_sb.st_atim.tv_nsec;
    dst_back_sb.st_nlink = src_sb.st_mtim.tv_sec;
    dst_back_sb._24_8_ = src_sb.st_mtim.tv_nsec;
    *(undefined8 *)((long)ppcVar41 + -8) = 0x107667;
    iVar16 = utimensat(iVar16,pcVar19,(timespec *)&dst_back_sb,(uint)(bVar14 != 0) << 8);
    psVar29 = local_338;
    if (iVar16 != 0) {
      *(undefined8 *)((long)ppcVar41 + -8) = 0x10767c;
      local_328 = (stat *)quotearg_style(shell_escape_always_quoting_style,(char *)psVar29);
      *(undefined8 *)((long)ppcVar41 + -8) = 0x107696;
      uVar20 = dcgettext(0,"preserving times for %s",5);
      *(undefined8 *)((long)ppcVar41 + -8) = 0x10769e;
      piVar21 = __errno_location();
      psVar29 = local_328;
      iVar16 = *piVar21;
      *(undefined8 *)((long)ppcVar41 + -8) = 0x1076b3;
      error(0,iVar16,uVar20,psVar29);
      if (x->require_preserve == false) goto LAB_001076c0;
      goto LAB_00107438;
    }
  }
LAB_001076c0:
  iVar16 = local_330;
  pcVar19 = local_340;
  if (bVar14 != 0) goto LAB_0010743b;
  if ((x->preserve_ownership != false) &&
     ((((byte)dstbaselen != '\0' || (src_sb.st_uid != dst_sb.st_uid)) ||
      (src_sb.st_gid != dst_sb.st_gid)))) {
    *(stat **)((long)ppcVar41 + -8) = &dst_sb;
    psVar29 = local_338;
    *(size_t *)((long)ppcVar41 + -0x10) = dstbaselen & 0xff;
    *(undefined8 *)((long)ppcVar41 + -0x18) = 0x107724;
    iVar16 = set_owner(x,(char *)psVar29,iVar16,pcVar19,-1,&src_sb,
                       *(_Bool *)((long)ppcVar41 + -0x10),*(stat **)((long)ppcVar41 + -8));
    if (iVar16 == -1) goto LAB_00107438;
    uVar34 = local_32c & 0xfffff1ff;
    if (iVar16 != 0) {
      uVar34 = local_32c;
    }
    local_32c = uVar34;
  }
  uVar34 = local_32c;
  psVar29 = local_338;
  if ((*(ulong *)&x->move_mode & 0xff0000000000ff) == 0) {
    if (x->set_mode == false) {
      if ((x->explicit_no_preserve_mode & (byte)dstbaselen) == 0) {
        if (local_384 == 0) {
LAB_00107783:
          if ((char)local_368 == '\0') goto LAB_0010743b;
        }
        else {
          *(undefined8 *)((long)ppcVar41 + -8) = 0x1099ad;
          mVar17 = cached_umask();
          iVar16 = local_330;
          pcVar19 = local_340;
          local_384 = local_384 & ~mVar17;
          if (local_384 == 0) goto LAB_00107783;
          if ((char)local_368 != '\x01') {
            if ((byte)dstbaselen != '\0') {
              *(undefined8 *)((long)ppcVar41 + -8) = 0x107b42;
              iVar16 = __fxstatat(1,iVar16,pcVar19,(stat *)&dst_sb,0x100);
              psVar29 = local_338;
              if (iVar16 != 0) goto LAB_00107b58;
            }
            local_388 = dst_sb.st_mode;
            if ((local_384 & ~dst_sb.st_mode) == 0) goto LAB_0010743b;
          }
        }
        iVar16 = local_330;
        pcVar19 = local_340;
        uVar34 = local_388 | local_384;
        *(undefined8 *)((long)ppcVar41 + -8) = 0x1077b3;
        iVar16 = rpl_fchmodat(iVar16,pcVar19,uVar34,0x100);
        psVar29 = local_338;
        if (iVar16 == 0) goto LAB_0010743b;
        *(undefined8 *)((long)ppcVar41 + -8) = 0x1077cc;
        pcVar19 = quotearg_style(shell_escape_always_quoting_style,(char *)psVar29);
        *(undefined8 *)((long)ppcVar41 + -8) = 0x1077e2;
        uVar20 = dcgettext(0,"preserving permissions for %s",5);
        *(undefined8 *)((long)ppcVar41 + -8) = 0x1077ea;
        piVar21 = __errno_location();
        iVar16 = *piVar21;
        *(undefined8 *)((long)ppcVar41 + -8) = 0x1077fb;
        error(0,iVar16,uVar20,pcVar19);
        goto LAB_001077fb;
      }
      uVar34 = 0x1b6;
      if ((local_32c & 0x7000) == 0x4000) {
        uVar34 = 0x1ff;
      }
      *(undefined8 *)((long)ppcVar41 + -8) = 0x1098d4;
      mVar17 = cached_umask();
      mVar17 = ~mVar17 & uVar34;
    }
    else {
      mVar17 = x->mode;
    }
    psVar29 = local_338;
    *(undefined8 *)((long)ppcVar41 + -8) = 0x10948b;
    iVar16 = set_acl((char *)psVar29,-1,mVar17);
    if (iVar16 == 0) goto LAB_0010743b;
  }
  else {
    *(undefined8 *)((long)ppcVar41 + -8) = 0x109178;
    iVar16 = copy_acl(src_name,-1,(char *)psVar29,-1,uVar34);
    if (iVar16 == 0) goto LAB_0010743b;
LAB_001077fb:
    if (x->require_preserve == false) goto LAB_0010743b;
  }
LAB_00107438:
  bVar12 = 0;
LAB_0010743b:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    *(undefined8 *)((long)ppcVar41 + -8) = 0x10a5e2;
    __stack_chk_fail();
  }
  return (_Bool)bVar12;
}

