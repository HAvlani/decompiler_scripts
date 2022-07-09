
/* WARNING: Could not reconcile some variable overlaps */

char * find_mount_point(char *file,stat *file_stat)

{
  undefined2 *puVar1;
  scratch_buffer *buffer;
  _Bool _Var2;
  char cVar3;
  uint uVar4;
  int iVar5;
  uint *puVar6;
  char *pcVar7;
  size_t sVar8;
  char *pcVar9;
  undefined8 uVar10;
  int *piVar11;
  char *pcVar12;
  undefined2 *puVar13;
  ssize_t sVar14;
  Hash_table *pHVar15;
  char *pcVar16;
  char cVar17;
  scratch_buffer *buffer_00;
  undefined2 *__buf;
  saved_cwd *psVar18;
  undefined *puVar20;
  saved_cwd *psVar21;
  saved_cwd *psVar22;
  uint uVar23;
  char *pcVar24;
  long lVar25;
  long lVar26;
  undefined2 *puVar27;
  undefined8 uVar28;
  stat *psVar29;
  uint uVar30;
  ulong uVar31;
  long in_FS_OFFSET;
  bool bVar32;
  saved_cwd cwd;
  stat last_stat;
  stat st;
  saved_cwd *psVar19;
  
  psVar19 = &cwd;
  psVar18 = &cwd;
  psVar22 = &cwd;
  psVar21 = &cwd;
  lVar25 = *(long *)(in_FS_OFFSET + 0x28);
  uVar4 = save_cwd(&cwd);
  pcVar7 = (char *)(ulong)uVar4;
  puVar6 = (uint *)__errno_location();
  if (uVar4 != 0) {
    pcVar24 = (char *)0x0;
    uVar10 = dcgettext(0,"cannot get current directory",5);
    error(0,*puVar6,uVar10);
    goto LAB_00106b40;
  }
  if ((file_stat->st_mode & 0xf000) == 0x4000) {
    last_stat.st_dev._0_4_ = *(undefined4 *)&file_stat->st_dev;
    last_stat.st_dev._4_4_ = *(undefined4 *)((long)&file_stat->st_dev + 4);
    last_stat.st_ino._0_4_ = *(undefined4 *)&file_stat->st_ino;
    last_stat.st_ino._4_4_ = *(undefined4 *)((long)&file_stat->st_ino + 4);
    last_stat.st_nlink._0_4_ = *(undefined4 *)&file_stat->st_nlink;
    last_stat.st_nlink._4_4_ = *(undefined4 *)((long)&file_stat->st_nlink + 4);
    last_stat.st_mode = file_stat->st_mode;
    last_stat.st_uid = file_stat->st_uid;
    last_stat.st_gid = file_stat->st_gid;
    last_stat.__pad0 = file_stat->__pad0;
    last_stat.st_rdev._0_4_ = *(undefined4 *)&file_stat->st_rdev;
    last_stat.st_rdev._4_4_ = *(undefined4 *)((long)&file_stat->st_rdev + 4);
    last_stat.st_size._0_4_ = *(undefined4 *)&file_stat->st_size;
    last_stat.st_size._4_4_ = *(undefined4 *)((long)&file_stat->st_size + 4);
    last_stat.st_blksize._0_4_ = *(undefined4 *)&file_stat->st_blksize;
    last_stat.st_blksize._4_4_ = *(undefined4 *)((long)&file_stat->st_blksize + 4);
    last_stat.st_blocks._0_4_ = *(undefined4 *)&file_stat->st_blocks;
    last_stat.st_blocks._4_4_ = *(undefined4 *)((long)&file_stat->st_blocks + 4);
    last_stat.st_atim.tv_sec._0_4_ = *(undefined4 *)&(file_stat->st_atim).tv_sec;
    last_stat.st_atim.tv_sec._4_4_ = *(undefined4 *)((long)&(file_stat->st_atim).tv_sec + 4);
    last_stat.st_atim.tv_nsec._0_4_ = *(undefined4 *)&(file_stat->st_atim).tv_nsec;
    last_stat.st_atim.tv_nsec._4_4_ = *(undefined4 *)((long)&(file_stat->st_atim).tv_nsec + 4);
    last_stat.st_mtim.tv_sec._0_4_ = *(undefined4 *)&(file_stat->st_mtim).tv_sec;
    last_stat.st_mtim.tv_sec._4_4_ = *(undefined4 *)((long)&(file_stat->st_mtim).tv_sec + 4);
    last_stat.st_mtim.tv_nsec._0_4_ = *(undefined4 *)&(file_stat->st_mtim).tv_nsec;
    last_stat.st_mtim.tv_nsec._4_4_ = *(undefined4 *)((long)&(file_stat->st_mtim).tv_nsec + 4);
    last_stat.st_ctim.tv_sec._0_4_ = *(undefined4 *)&(file_stat->st_ctim).tv_sec;
    last_stat.st_ctim.tv_sec._4_4_ = *(undefined4 *)((long)&(file_stat->st_ctim).tv_sec + 4);
    last_stat.st_ctim.tv_nsec._0_4_ = *(undefined4 *)&(file_stat->st_ctim).tv_nsec;
    last_stat.st_ctim.tv_nsec._4_4_ = *(undefined4 *)((long)&(file_stat->st_ctim).tv_nsec + 4);
    last_stat.__glibc_reserved[0]._0_4_ = *(undefined4 *)file_stat->__glibc_reserved;
    last_stat.__glibc_reserved[0]._4_4_ = *(undefined4 *)((long)file_stat->__glibc_reserved + 4);
    last_stat.__glibc_reserved[1]._0_4_ = *(undefined4 *)(file_stat->__glibc_reserved + 1);
    last_stat.__glibc_reserved[1]._4_4_ = *(undefined4 *)((long)file_stat->__glibc_reserved + 0xc);
    last_stat.__glibc_reserved[2]._0_4_ = *(undefined4 *)(file_stat->__glibc_reserved + 2);
    last_stat.__glibc_reserved[2]._4_4_ = *(undefined4 *)((long)file_stat->__glibc_reserved + 0x14);
    iVar5 = chdir(file);
    psVar21 = &cwd;
    if (iVar5 < 0) goto LAB_00106bbb;
LAB_001069ee:
    puVar20 = (undefined *)psVar21;
    while( true ) {
      *(undefined8 *)(puVar20 + -8) = 0x106acb;
      iVar5 = __xstat(1,"..",(stat *)&st);
      if (iVar5 < 0) break;
      if ((CONCAT44(st.st_dev._4_4_,(undefined4)st.st_dev) !=
           CONCAT44(last_stat.st_dev._4_4_,(undefined4)last_stat.st_dev)) ||
         (CONCAT44(st.st_ino._4_4_,(undefined4)st.st_ino) ==
          CONCAT44(last_stat.st_ino._4_4_,(undefined4)last_stat.st_ino))) {
        *(undefined8 *)(puVar20 + -8) = 0x106b1d;
        pcVar24 = xgetcwd();
        goto done;
      }
      *(undefined8 *)(puVar20 + -8) = 0x106a38;
      iVar5 = chdir("..");
      if (iVar5 < 0) {
        *(undefined8 *)(puVar20 + -8) = 0x106b79;
        pcVar9 = quotearg_style(shell_escape_always_quoting_style,"..");
        pcVar24 = "cannot change to directory %s";
        goto LAB_00106af3;
      }
      last_stat.st_dev._0_4_ = (undefined4)st.st_dev;
      last_stat.st_dev._4_4_ = st.st_dev._4_4_;
      last_stat.st_ino._0_4_ = (undefined4)st.st_ino;
      last_stat.st_ino._4_4_ = st.st_ino._4_4_;
      last_stat.st_nlink._0_4_ = (undefined4)st.st_nlink;
      last_stat.st_nlink._4_4_ = st.st_nlink._4_4_;
      last_stat.st_mode = st.st_mode;
      last_stat.st_uid = st.st_uid;
      last_stat.st_gid = st.st_gid;
      last_stat.__pad0 = st.__pad0;
      last_stat.st_rdev._0_4_ = (undefined4)st.st_rdev;
      last_stat.st_rdev._4_4_ = st.st_rdev._4_4_;
      last_stat.st_size._0_4_ = (undefined4)st.st_size;
      last_stat.st_size._4_4_ = st.st_size._4_4_;
      last_stat.st_blksize._0_4_ = (undefined4)st.st_blksize;
      last_stat.st_blksize._4_4_ = st.st_blksize._4_4_;
      last_stat.st_blocks._0_4_ = (undefined4)st.st_blocks;
      last_stat.st_blocks._4_4_ = st.st_blocks._4_4_;
      last_stat.st_atim.tv_sec._0_4_ = (undefined4)st.st_atim.tv_sec;
      last_stat.st_atim.tv_sec._4_4_ = st.st_atim.tv_sec._4_4_;
      last_stat.st_atim.tv_nsec._0_4_ = (undefined4)st.st_atim.tv_nsec;
      last_stat.st_atim.tv_nsec._4_4_ = st.st_atim.tv_nsec._4_4_;
      last_stat.st_mtim.tv_sec._0_4_ = (undefined4)st.st_mtim.tv_sec;
      last_stat.st_mtim.tv_sec._4_4_ = st.st_mtim.tv_sec._4_4_;
      last_stat.st_mtim.tv_nsec._0_4_ = (undefined4)st.st_mtim.tv_nsec;
      last_stat.st_mtim.tv_nsec._4_4_ = st.st_mtim.tv_nsec._4_4_;
      last_stat.st_ctim.tv_sec._0_4_ = (undefined4)st.st_ctim.tv_sec;
      last_stat.st_ctim.tv_sec._4_4_ = st.st_ctim.tv_sec._4_4_;
      last_stat.st_ctim.tv_nsec._0_4_ = (undefined4)st.st_ctim.tv_nsec;
      last_stat.st_ctim.tv_nsec._4_4_ = st.st_ctim.tv_nsec._4_4_;
      last_stat.__glibc_reserved[0]._0_4_ = (undefined4)st.__glibc_reserved[0];
      last_stat.__glibc_reserved[0]._4_4_ = st.__glibc_reserved[0]._4_4_;
      last_stat.__glibc_reserved[1]._0_4_ = (undefined4)st.__glibc_reserved[1];
      last_stat.__glibc_reserved[1]._4_4_ = st.__glibc_reserved[1]._4_4_;
      last_stat.__glibc_reserved[2]._0_4_ = (undefined4)st.__glibc_reserved[2];
      last_stat.__glibc_reserved[2]._4_4_ = st.__glibc_reserved[2]._4_4_;
    }
    *(undefined8 *)(puVar20 + -8) = 0x106ae4;
    pcVar9 = quotearg_style(shell_escape_always_quoting_style,"..");
    pcVar24 = "cannot stat %s";
LAB_00106af3:
    *(undefined8 *)(puVar20 + -8) = 0x106afa;
    uVar10 = dcgettext(0,pcVar24,5);
    uVar4 = *puVar6;
    pcVar24 = (char *)0x0;
    *(undefined8 *)(puVar20 + -8) = 0x106b10;
    error(0,uVar4,uVar10,pcVar9);
  }
  else {
    pcVar7 = dir_name(file);
    sVar8 = strlen(pcVar7);
    psVar21 = &cwd;
    while (psVar19 !=
           (saved_cwd *)((long)&last_stat + (-0x10 - (sVar8 + 0x18 & 0xfffffffffffff000)))) {
      psVar18 = (saved_cwd *)((long)psVar21 + -0x1000);
      *(undefined8 *)((long)psVar21 + -8) = *(undefined8 *)((long)psVar21 + -8);
      psVar19 = (saved_cwd *)((long)psVar21 + -0x1000);
      psVar21 = (saved_cwd *)((long)psVar21 + -0x1000);
    }
    uVar31 = (ulong)((uint)(sVar8 + 0x18) & 0xff0);
    lVar26 = -uVar31;
    puVar20 = (undefined *)((long)psVar18 + lVar26);
    psVar22 = (saved_cwd *)((long)psVar18 + lVar26);
    if (uVar31 != 0) {
      *(undefined8 *)((long)psVar18 + -8) = *(undefined8 *)((long)psVar18 + -8);
    }
    *(undefined8 *)((long)psVar18 + lVar26 + -8) = 0x1068f6;
    file = (char *)memcpy((void *)((ulong)((long)psVar18 + lVar26 + 0xf) & 0xfffffffffffffff0),
                          pcVar7,sVar8 + 1);
    *(undefined8 *)((long)psVar18 + lVar26 + -8) = 0x106901;
    rpl_free(pcVar7);
    *(undefined8 *)((long)psVar18 + lVar26 + -8) = 0x106909;
    iVar5 = chdir(file);
    if (iVar5 < 0) {
LAB_00106bbb:
      *(undefined8 *)((long)psVar22 + -8) = 0x106bc5;
      pcVar7 = quotearg_style(shell_escape_always_quoting_style,file);
      *(undefined8 *)((long)psVar22 + -8) = 0x106bdb;
      uVar10 = dcgettext(0,"cannot change to directory %s",5);
      uVar4 = *puVar6;
      pcVar24 = (char *)0x0;
      *(undefined8 *)((long)psVar22 + -8) = 0x106bf1;
      error(0,uVar4,uVar10,pcVar7);
      psVar21 = psVar22;
      goto LAB_00106b40;
    }
    *(undefined8 *)((long)psVar18 + lVar26 + -8) = 0x106929;
    iVar5 = __xstat(1,".",(stat *)&last_stat);
    psVar21 = (saved_cwd *)((long)psVar18 + lVar26);
    pcVar7 = file;
    if (-1 < iVar5) goto LAB_001069ee;
    *(undefined8 *)((long)psVar18 + lVar26 + -8) = 0x10693e;
    pcVar9 = quotearg_style(shell_escape_always_quoting_style,file);
    *(undefined8 *)((long)psVar18 + lVar26 + -8) = 0x106954;
    uVar10 = dcgettext(0,"cannot stat current directory (now %s)",5);
    uVar4 = *puVar6;
    pcVar24 = (char *)0x0;
    *(undefined8 *)((long)psVar18 + lVar26 + -8) = 0x10696a;
    error(0,uVar4,uVar10,pcVar9);
  }
done:
  uVar4 = *puVar6;
  *(undefined8 *)(puVar20 + -8) = 0x106b2c;
  iVar5 = restore_cwd(&cwd);
  if (iVar5 == 0) {
    *(undefined8 *)(puVar20 + -8) = 0x106b3c;
    free_cwd(&cwd);
    *puVar6 = uVar4;
    psVar21 = (saved_cwd *)puVar20;
LAB_00106b40:
    if (lVar25 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
      *(undefined8 *)((long)psVar21 + -8) = 0x106c00;
      __stack_chk_fail();
    }
    return pcVar24;
  }
  *(undefined8 *)(puVar20 + -8) = 0x106c13;
  uVar10 = dcgettext(0,"failed to return to initial working directory",5);
  uVar23 = *puVar6;
  pcVar9 = (char *)0x1;
  *(undefined8 *)(puVar20 + -8) = 0x106c26;
  error(1,uVar23,uVar10);
  *(char **)(puVar20 + -8) = pcVar7;
  *(saved_cwd **)(puVar20 + -0x10) = &cwd;
  uVar30 = uVar23 & 3;
  *(uint **)(puVar20 + -0x18) = puVar6;
  *(char **)(puVar20 + -0x20) = pcVar24;
  *(undefined **)(puVar20 + -0x28) = &stack0xfffffffffffffff8;
  *(ulong *)(puVar20 + -0x30) = (ulong)uVar4;
  *(undefined8 *)(puVar20 + -0x40) = *(undefined8 *)(in_FS_OFFSET + 0x28);
  if (((uVar30 - 1 & uVar30) != 0) || (pcVar9 == (char *)0x0)) {
    *(undefined8 *)(puVar20 + -0xd80) = 0x106ddd;
    piVar11 = __errno_location();
    *piVar11 = 0x16;
    pcVar7 = (char *)0x0;
    goto LAB_00106d82;
  }
  cVar3 = *pcVar9;
  if (cVar3 == '\0') {
    *(undefined8 *)(puVar20 + -0xd80) = 0x107165;
    piVar11 = __errno_location();
    *piVar11 = 2;
    pcVar7 = (char *)0x0;
    goto LAB_00106d82;
  }
  __buf = (undefined2 *)(puVar20 + -0xc68);
  *(undefined8 *)(puVar20 + -0x860) = 0x400;
  *(undefined **)(puVar20 + -0xd70) = puVar20 + -0x858;
  sVar8 = 0x400;
  *(undefined **)(puVar20 + -0x868) = puVar20 + -0x858;
  *(undefined **)(puVar20 + -0xd78) = puVar20 + -0x448;
  *(undefined **)(puVar20 + -0x458) = puVar20 + -0x448;
  *(undefined8 *)(puVar20 + -0x450) = 0x400;
  *(undefined2 **)(puVar20 + -0xd68) = __buf;
  *(undefined2 **)(puVar20 + -0xc78) = __buf;
  *(undefined8 *)(puVar20 + -0xc70) = 0x400;
  if (cVar3 == '/') {
    puVar20[-0xc68] = 0x2f;
    __buf = *(undefined2 **)(puVar20 + -0xd68);
    puVar13 = (undefined2 *)(puVar20 + -0xc67);
LAB_00106f95:
    puVar20[-0xd40] = 0;
    *(uint *)(puVar20 + -0xd4c) = uVar23 & 4;
    buffer_00 = (scratch_buffer *)(puVar20 + -0xc78);
    *(undefined8 *)(puVar20 + -0xd58) = 0;
    *(undefined4 *)(puVar20 + -0xd34) = 0;
    *(undefined **)(puVar20 + -0xd48) = puVar20 + -0x458;
    *(uint *)(puVar20 + -0xd38) = uVar30;
    do {
      pcVar7 = pcVar9;
      cVar17 = cVar3;
      if (cVar3 == '/') {
        do {
          cVar17 = pcVar9[1];
          pcVar9 = pcVar9 + 1;
        } while (cVar17 == '/');
        pcVar7 = pcVar9;
        if (cVar17 == '\0') break;
      }
      do {
        pcVar24 = pcVar9;
        cVar3 = pcVar24[1];
        pcVar9 = pcVar24 + 1;
        if (cVar3 == '\0') break;
      } while (cVar3 != '/');
      lVar25 = (long)pcVar9 - (long)pcVar7;
      *(long *)(puVar20 + -0xd60) = lVar25;
      if (lVar25 == 0) break;
      if (lVar25 == 1) {
        if (cVar17 != '.') goto LAB_001070c5;
      }
      else if (((*(long *)(puVar20 + -0xd60) == 2) && (cVar17 == '.')) && (pcVar7[1] == '.')) {
        if (((undefined2 *)((long)__buf + 1) < puVar13) &&
           (puVar13 = (undefined2 *)((long)puVar13 + -1), __buf < puVar13)) {
          do {
            if (*(char *)((long)puVar13 + -1) == '/') break;
            puVar13 = (undefined2 *)((long)puVar13 + -1);
          } while (puVar13 != __buf);
        }
      }
      else {
LAB_001070c5:
        if (*(char *)((long)puVar13 + -1) != '/') {
          *(char *)puVar13 = '/';
          puVar13 = (undefined2 *)((long)puVar13 + 1);
        }
        lVar25 = *(long *)(puVar20 + -0xd60);
        pcVar12 = (char *)((long)__buf + (*(long *)(puVar20 + -0xc70) - (long)puVar13));
        while (pcVar12 < (char *)(lVar25 + 2)) {
          lVar26 = (long)puVar13 - (long)__buf;
          *(undefined8 *)(puVar20 + -0xd80) = 0x107122;
          _Var2 = gl_scratch_buffer_grow_preserve(buffer_00);
          if (_Var2 == false) {
                    /* WARNING: Subroutine does not return */
            *(undefined **)(puVar20 + -0xd80) = &UNK_0010712b;
            xalloc_die();
          }
          __buf = *(undefined2 **)(puVar20 + -0xc78);
          puVar13 = (undefined2 *)((long)__buf + lVar26);
          pcVar12 = (char *)(*(long *)(puVar20 + -0xc70) - lVar26);
        }
        *(undefined2 **)(puVar20 + -0xd30) = __buf;
        *(undefined8 *)(puVar20 + -0xd80) = 0x10718d;
        puVar13 = (undefined2 *)mempcpy(puVar13,pcVar7,*(size_t *)(puVar20 + -0xd60));
        iVar5 = *(int *)(puVar20 + -0xd4c);
        __buf = *(undefined2 **)(puVar20 + -0xd30);
        *(char *)puVar13 = '\0';
        if (iVar5 == 0) {
          *(undefined2 **)(puVar20 + -0xd60) = puVar13;
          buffer = *(scratch_buffer **)(puVar20 + -0xd48);
          *(char **)(puVar20 + -0xd30) = pcVar7;
          *(scratch_buffer **)(puVar20 + -0xd28) = buffer_00;
          while( true ) {
            lVar25 = *(long *)(puVar20 + -0x450);
            pcVar7 = *(char **)(puVar20 + -0x458);
            *(undefined8 *)(puVar20 + -0xd80) = 0x107322;
            sVar14 = readlink((char *)__buf,pcVar7,lVar25 - 1U);
            if (sVar14 < (long)(lVar25 - 1U)) break;
            *(undefined8 *)(puVar20 + -0xd80) = 0x107333;
            _Var2 = gl_scratch_buffer_grow(buffer);
            if (_Var2 == false) goto LAB_00106f78;
          }
          puVar13 = *(undefined2 **)(puVar20 + -0xd60);
          *(ssize_t *)(puVar20 + -0xd60) = sVar14;
          pcVar12 = *(char **)(puVar20 + -0xd30);
          buffer_00 = *(scratch_buffer **)(puVar20 + -0xd28);
          if (sVar14 < 0) goto LAB_001071a4;
          if (*(int *)(puVar20 + -0xd34) < 0x14) {
            *(int *)(puVar20 + -0xd34) = *(int *)(puVar20 + -0xd34) + 1;
LAB_00106ee9:
            lVar25 = *(long *)(puVar20 + -0xd60);
            cVar3 = puVar20[-0xd40];
            *(undefined2 **)(puVar20 + -0xd20) = puVar13;
            *(undefined2 **)(puVar20 + -0xd28) = __buf;
            pcVar7[lVar25] = '\0';
            pcVar24 = *(char **)(puVar20 + -0x868);
            if (cVar3 == '\0') {
              *(undefined8 *)(puVar20 + -0xd80) = 0x1073b3;
              sVar8 = strlen(pcVar9);
              uVar10 = *(undefined8 *)(puVar20 + -0xd28);
              *(size_t *)(puVar20 + -0xd30) = sVar8;
              uVar28 = *(undefined8 *)(puVar20 + -0xd20);
              uVar31 = *(long *)(puVar20 + -0xd60) + sVar8;
              if (*(ulong *)(puVar20 + -0x860) < uVar31 || *(ulong *)(puVar20 + -0x860) == uVar31)
              goto LAB_00106f43;
            }
            else {
              *(long *)(puVar20 + -0xd10) = (long)pcVar9 - (long)pcVar24;
              *(undefined8 *)(puVar20 + -0xd80) = 0x106f23;
              sVar8 = strlen(pcVar9);
              uVar10 = *(undefined8 *)(puVar20 + -0xd28);
              uVar28 = *(undefined8 *)(puVar20 + -0xd20);
              uVar31 = lVar25 + sVar8;
              *(size_t *)(puVar20 + -0xd30) = sVar8;
              if (*(ulong *)(puVar20 + -0x860) < uVar31 || *(ulong *)(puVar20 + -0x860) == uVar31) {
LAB_00106f43:
                *(undefined8 *)(puVar20 + -0xd28) = uVar10;
                do {
                  *(undefined8 *)(puVar20 + -0xd80) = 0x106f6e;
                  _Var2 = gl_scratch_buffer_grow_preserve((scratch_buffer *)(puVar20 + -0x868));
                  if (_Var2 == false) goto LAB_00106f78;
                } while (*(ulong *)(puVar20 + -0x860) < uVar31 ||
                         *(ulong *)(puVar20 + -0x860) == uVar31);
                uVar10 = *(undefined8 *)(puVar20 + -0xd28);
                pcVar24 = *(char **)(puVar20 + -0x868);
                if (puVar20[-0xd40] == '\0') goto LAB_001073d8;
              }
              pcVar9 = pcVar24 + *(long *)(puVar20 + -0xd10);
            }
LAB_001073d8:
            sVar8 = *(size_t *)(puVar20 + -0xd60);
            *(undefined8 *)(puVar20 + -0xd28) = uVar28;
            *(undefined8 *)(puVar20 + -0xd40) = uVar10;
            *(undefined8 *)(puVar20 + -0xd80) = 0x1073fd;
            memmove(pcVar24 + sVar8,pcVar9,*(long *)(puVar20 + -0xd30) + 1);
            *(undefined8 *)(puVar20 + -0xd80) = 0x10740b;
            memcpy(pcVar24,pcVar7,sVar8);
            __buf = *(undefined2 **)(puVar20 + -0xd40);
            puVar27 = *(undefined2 **)(puVar20 + -0xd28);
            puVar13 = (undefined2 *)((long)__buf + 1);
            pcVar9 = pcVar24;
            if (*pcVar7 == '/') {
              *(char *)__buf = '/';
              cVar3 = *pcVar24;
              puVar20[-0xd40] = 1;
            }
            else {
              puVar20[-0xd40] = 1;
              cVar3 = *pcVar24;
              bVar32 = puVar13 < puVar27;
              puVar13 = puVar27;
              if (bVar32) {
                do {
                  puVar13 = (undefined2 *)((long)puVar27 + -1);
                  if (puVar13 == __buf) break;
                  puVar1 = puVar27 + -1;
                  puVar27 = puVar13;
                } while (*(char *)puVar1 != '/');
                puVar20[-0xd40] = 1;
              }
            }
            goto LAB_00107073;
          }
          if (*pcVar12 == '\0') goto LAB_00106ee9;
          *(undefined2 **)(puVar20 + -0xd18) = puVar13;
          *(undefined2 **)(puVar20 + -0xd28) = __buf;
          pcVar16 = (char *)(((long)pcVar12 - (long)pcVar9) + (long)puVar13);
          *(stat **)(puVar20 + -0xd30) = (stat *)(puVar20 + -0xd08);
          *pcVar16 = '\0';
          puVar13 = (undefined2 *)&DAT_00111ffc;
          if (*(char *)__buf != '\0') {
            puVar13 = __buf;
          }
          *(char **)(puVar20 + -0xd20) = pcVar16;
          *(undefined8 *)(puVar20 + -0xd80) = 0x106e61;
          iVar5 = __xstat(1,(char *)puVar13,(stat *)(puVar20 + -0xd08));
          __buf = *(undefined2 **)(puVar20 + -0xd28);
          puVar13 = *(undefined2 **)(puVar20 + -0xd18);
          if (iVar5 != 0) {
LAB_0010739a:
            bVar32 = true;
            goto error;
          }
          lVar25 = *(long *)(puVar20 + -0xd58);
          psVar29 = *(stat **)(puVar20 + -0xd30);
          **(char **)(puVar20 + -0xd20) = *pcVar12;
          if (lVar25 == 0) {
            *(undefined2 **)(puVar20 + -0xd20) = puVar13;
            *(undefined8 *)(puVar20 + -0xd80) = 0x1074a9;
            pHVar15 = hash_initialize(7,(Hash_tuning *)0x0,triple_hash,triple_compare_ino_str,
                                      triple_free);
            psVar29 = *(stat **)(puVar20 + -0xd30);
            __buf = *(undefined2 **)(puVar20 + -0xd28);
            *(Hash_table **)(puVar20 + -0xd58) = pHVar15;
            puVar13 = *(undefined2 **)(puVar20 + -0xd20);
            if (pHVar15 == (Hash_table *)0x0) goto LAB_00106f78;
          }
          *(undefined2 **)(puVar20 + -0xd20) = puVar13;
          *(undefined2 **)(puVar20 + -0xd28) = __buf;
          *(stat **)(puVar20 + -0xd30) = psVar29;
          *(undefined8 *)(puVar20 + -0xd80) = 0x106eae;
          _Var2 = seen_file(*(Hash_table **)(puVar20 + -0xd58),pcVar12,psVar29);
          psVar29 = *(stat **)(puVar20 + -0xd30);
          __buf = *(undefined2 **)(puVar20 + -0xd28);
          puVar13 = *(undefined2 **)(puVar20 + -0xd20);
          if (_Var2 == false) {
            *(undefined2 **)(puVar20 + -0xd28) = puVar13;
            *(undefined2 **)(puVar20 + -0xd30) = __buf;
            *(undefined8 *)(puVar20 + -0xd80) = 0x106edf;
            record_file(*(Hash_table **)(puVar20 + -0xd58),pcVar12,psVar29);
            __buf = *(undefined2 **)(puVar20 + -0xd30);
            puVar13 = *(undefined2 **)(puVar20 + -0xd28);
            goto LAB_00106ee9;
          }
          if (*(int *)(puVar20 + -0xd38) != 2) {
            *(undefined8 *)(puVar20 + -0xd80) = 0x107394;
            piVar11 = __errno_location();
            *piVar11 = 0x28;
            goto LAB_0010739a;
          }
        }
        else {
LAB_001071a4:
          if (*(int *)(puVar20 + -0xd38) != 2) {
            pcVar7 = pcVar9;
            if (*pcVar9 == '/') {
              do {
                do {
                  pcVar12 = pcVar7;
                  cVar3 = pcVar12[1];
                  pcVar7 = pcVar12 + 1;
                } while (cVar3 == '/');
                if (cVar3 == '\0') {
LAB_00107340:
                  *(undefined2 **)(puVar20 + -0xd30) = puVar13;
                  *(undefined2 **)(puVar20 + -0xd60) = __buf;
                  *puVar13 = dir_suffix;
                  *(undefined8 *)(puVar20 + -0xd80) = 0x107369;
                  iVar5 = faccessat(-100,(char *)__buf,0,0x200);
                  __buf = *(undefined2 **)(puVar20 + -0xd60);
                  puVar13 = *(undefined2 **)(puVar20 + -0xd30);
                  bVar32 = iVar5 != 0;
                  goto LAB_00107248;
                }
                if (cVar3 != '.') break;
                cVar3 = pcVar12[2];
                if (cVar3 == '\0') goto LAB_00107340;
                if (cVar3 == '.') {
                  if ((pcVar12[3] == '\0') || (pcVar12[3] == '/')) goto LAB_00107340;
                  break;
                }
                pcVar7 = pcVar12 + 2;
              } while (cVar3 == '/');
              if (*(int *)(puVar20 + -0xd4c) != 0) goto LAB_00107200;
LAB_00107228:
              *(undefined2 **)(puVar20 + -0xd30) = puVar13;
              *(undefined2 **)(puVar20 + -0xd60) = __buf;
              *(undefined8 *)(puVar20 + -0xd80) = 0x107237;
              piVar11 = __errno_location();
              __buf = *(undefined2 **)(puVar20 + -0xd60);
              puVar13 = *(undefined2 **)(puVar20 + -0xd30);
              bVar32 = *piVar11 != 0x16;
            }
            else {
              if (*(int *)(puVar20 + -0xd4c) == 0) goto LAB_00107228;
              if (*pcVar9 != '\0') goto LAB_00107200;
              *(undefined2 **)(puVar20 + -0xd30) = puVar13;
              *(undefined2 **)(puVar20 + -0xd60) = __buf;
              *(undefined8 *)(puVar20 + -0xd80) = 0x107516;
              iVar5 = faccessat(-100,(char *)__buf,0,0x200);
              puVar13 = *(undefined2 **)(puVar20 + -0xd30);
              __buf = *(undefined2 **)(puVar20 + -0xd60);
              bVar32 = iVar5 != 0;
            }
LAB_00107248:
            if (bVar32) {
              if (*(int *)(puVar20 + -0xd38) != 1) goto error;
              *(undefined2 **)(puVar20 + -0xd30) = puVar13;
              *(undefined2 **)(puVar20 + -0xd60) = __buf;
              *(undefined8 *)(puVar20 + -0xd80) = 0x107263;
              piVar11 = __errno_location();
              __buf = *(undefined2 **)(puVar20 + -0xd60);
              puVar13 = *(undefined2 **)(puVar20 + -0xd30);
              if (*piVar11 != 2) goto error;
              *(undefined8 *)(puVar20 + -0xd80) = 0x107281;
              sVar8 = strspn(pcVar9,"/");
              __buf = *(undefined2 **)(puVar20 + -0xd60);
              puVar13 = *(undefined2 **)(puVar20 + -0xd30);
              if (pcVar9[sVar8] != '\0') goto error;
            }
          }
        }
LAB_00107200:
        cVar3 = pcVar24[1];
      }
LAB_00107073:
    } while (cVar3 != '\0');
    bVar32 = false;
    if ((undefined2 *)((long)__buf + 1) < puVar13) {
      puVar13 = (undefined2 *)((long)puVar13 - (ulong)(*(char *)((long)puVar13 + -1) == '/'));
      bVar32 = false;
    }
error:
    if (*(Hash_table **)(puVar20 + -0xd58) != (Hash_table *)0x0) {
      *(undefined8 *)(puVar20 + -0xd80) = 0x1070b3;
      hash_free(*(Hash_table **)(puVar20 + -0xd58));
    }
  }
  else {
    while( true ) {
      *(undefined8 *)(puVar20 + -0xd80) = 0x106d05;
      pcVar7 = getcwd((char *)__buf,sVar8);
      if (pcVar7 != (char *)0x0) break;
      *(undefined8 *)(puVar20 + -0xd80) = 0x106d13;
      piVar11 = __errno_location();
      if (*piVar11 == 0xc) goto LAB_00106f78;
      if (*piVar11 != 0x22) {
        bVar32 = true;
        puVar13 = __buf;
        goto LAB_00106d2f;
      }
      *(undefined8 *)(puVar20 + -0xd80) = 0x106db8;
      _Var2 = gl_scratch_buffer_grow((scratch_buffer *)(puVar20 + -0xc78));
      if (_Var2 == false) goto LAB_00106f78;
      __buf = *(undefined2 **)(puVar20 + -0xc78);
      sVar8 = *(size_t *)(puVar20 + -0xc70);
    }
    *(undefined8 *)(puVar20 + -0xd80) = 0x1072b2;
    puVar13 = (undefined2 *)rawmemchr(__buf,0);
    cVar3 = *pcVar9;
    if (cVar3 != '\0') goto LAB_00106f95;
    if (((undefined2 *)((long)__buf + 1) < puVar13) && (*(char *)((long)puVar13 + -1) == '/')) {
      puVar13 = (undefined2 *)((long)puVar13 + -1);
      bVar32 = false;
    }
    else {
      bVar32 = false;
    }
  }
LAB_00106d2f:
  if (*(void **)(puVar20 + -0x868) != *(void **)(puVar20 + -0xd70)) {
    *(undefined8 *)(puVar20 + -0xd80) = 0x106d43;
    rpl_free(*(void **)(puVar20 + -0x868));
  }
  if (*(void **)(puVar20 + -0x458) != *(void **)(puVar20 + -0xd78)) {
    *(undefined8 *)(puVar20 + -0xd80) = 0x106d56;
    rpl_free(*(void **)(puVar20 + -0x458));
  }
  if (bVar32) {
    pcVar7 = (char *)0x0;
    if (*(void **)(puVar20 + -0xc78) != *(void **)(puVar20 + -0xd68)) {
      *(undefined8 *)(puVar20 + -0xd78) = 0;
      *(undefined8 *)(puVar20 + -0xd80) = 0x10714e;
      rpl_free(*(void **)(puVar20 + -0xc78));
      pcVar7 = *(char **)(puVar20 + -0xd78);
    }
  }
  else {
    *(char *)puVar13 = '\0';
    *(undefined8 *)(puVar20 + -0xd80) = 0x106d79;
    pcVar7 = (char *)gl_scratch_buffer_dupfree
                               ((scratch_buffer *)(puVar20 + -0xc78),
                                (size_t)((long)puVar13 + (1 - (long)__buf)));
    if (pcVar7 == (char *)0x0) {
LAB_00106f78:
                    /* WARNING: Subroutine does not return */
      *(undefined **)(puVar20 + -0xd80) = &UNK_00106f7d;
      xalloc_die();
    }
  }
LAB_00106d82:
  if (*(long *)(puVar20 + -0x40) != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    *(undefined8 *)(puVar20 + -0xd80) = 0x1074d0;
    __stack_chk_fail();
  }
  return pcVar7;
}

