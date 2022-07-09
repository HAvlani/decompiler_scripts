
FTSENT * fts_build(FTS *sp,int type)

{
  byte bVar1;
  FTSENT *p;
  DIR *__dirp;
  char *pcVar2;
  bool bVar3;
  FTSENT *pFVar4;
  char *pcVar5;
  _Bool _Var6;
  ushort uVar7;
  uint uVar8;
  int iVar9;
  int *piVar10;
  dirent *pdVar11;
  size_t namelen;
  FTSENT *pFVar12;
  _ftsent *p_Var13;
  long lVar14;
  long lVar15;
  __off_t _Var16;
  uint uVar17;
  DIR *__dirp_00;
  size_t sVar18;
  ulong uVar19;
  long in_FS_OFFSET;
  bool bVar20;
  ulong local_a0;
  FTSENT *local_98;
  FTSENT *local_90;
  char *local_70;
  ulong local_68;
  size_t local_60;
  char local_4b;
  int dir_fd;
  long local_40;
  
  p = sp->fts_cur;
  __dirp = (DIR *)p->fts_dirp;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (__dirp == (DIR *)0x0) {
    uVar17 = sp->fts_options;
    uVar8 = uVar17 & 0x10;
    if ((uVar8 != 0) && (uVar8 = 0x20000, (uVar17 & 1) != 0)) {
      uVar8 = (uint)(p->fts_level != 0) << 0x11;
    }
    iVar9 = -100;
    if ((uVar17 & 0x204) == 0x200) {
      iVar9 = sp->fts_cwd_fd;
    }
    local_90 = (FTSENT *)opendirat(iVar9,p->fts_accpath,uVar8,&dir_fd);
    p->fts_dirp = (DIR *)local_90;
    if (local_90 == (FTSENT *)0x0) {
      if (type == 3) {
        p->fts_info = 4;
        piVar10 = __errno_location();
        p->fts_errno = *piVar10;
        goto LAB_0010a775;
      }
      goto LAB_0010aa98;
    }
    if (p->fts_info == 0xb) {
      uVar7 = fts_stat(sp,p,false);
      p->fts_info = uVar7;
    }
    else if ((sp->fts_options & 0x100U) != 0) {
      leave_dir_isra_0(sp->fts_options,&sp->fts_cycle,p);
      fts_stat(sp,p,false);
      _Var6 = enter_dir();
      if (_Var6 == false) {
        piVar10 = __errno_location();
        local_90 = (FTSENT *)0x0;
        *piVar10 = 0xc;
        goto LAB_0010a775;
      }
    }
    local_68 = (ulong)(-(uint)(sp->fts_compar ==
                              (anon_subr_int__ftsent_ptr_ptr__ftsent_ptr_ptr_for_fts_compar *)0x0) &
                      0x186a1) - 1;
    if (type == 2) {
LAB_0010a998:
      bVar20 = false;
      uVar17 = sp->fts_options;
    }
    else {
      if ((((sp->fts_options & 0x38U) == 0x18) && (p->fts_statp[0].st_nlink == 2)) &&
         (lVar15 = filesystem_type(p,dir_fd), lVar15 != 0x9fa0)) {
        if (lVar15 < 0x9fa1) {
          if ((lVar15 == 0) || (lVar15 == 0x6969)) goto LAB_0010a67d;
        }
        else if ((lVar15 == 0x5346414f) || (lVar15 == 0xff534d42)) goto LAB_0010a67d;
        if (type != 3) goto LAB_0010a998;
        bVar3 = false;
        bVar20 = true;
      }
      else {
LAB_0010a67d:
        bVar20 = type == 3;
        bVar3 = true;
      }
      if ((*(byte *)((long)&sp->fts_options + 1) & 2) != 0) {
        dir_fd = rpl_fcntl(dir_fd,0x406,3);
      }
      if ((-1 < dir_fd) && (iVar9 = fts_safe_changedir(sp,p,dir_fd,(char *)0x0), iVar9 == 0))
      goto LAB_0010a17f;
      if ((bVar20) && (bVar3)) {
        piVar10 = __errno_location();
        p->fts_errno = *piVar10;
      }
      p->fts_flags = p->fts_flags | 1;
      closedir((DIR *)p->fts_dirp);
      uVar17 = sp->fts_options;
      p->fts_dirp = (DIR *)0x0;
      if (((uVar17 & 0x200) != 0) && (-1 < dir_fd)) {
        close(dir_fd);
        uVar17 = sp->fts_options;
      }
      p->fts_dirp = (DIR *)0x0;
      bVar20 = false;
    }
  }
  else {
    dir_fd = dirfd(__dirp);
    if (dir_fd < 0) {
      closedir((DIR *)p->fts_dirp);
      p->fts_dirp = (DIR *)0x0;
      if (type == 3) {
        p->fts_info = 4;
        piVar10 = __errno_location();
        p->fts_errno = *piVar10;
      }
LAB_0010aa98:
      local_90 = (FTSENT *)0x0;
      goto LAB_0010a775;
    }
    if (sp->fts_compar == (anon_subr_int__ftsent_ptr_ptr__ftsent_ptr_ptr_for_fts_compar *)0x0) {
      local_68 = 100000;
      uVar17 = sp->fts_options;
      bVar20 = true;
    }
    else {
      local_68 = 0xffffffffffffffff;
LAB_0010a17f:
      bVar20 = true;
      uVar17 = sp->fts_options;
    }
  }
  sVar18 = p->fts_pathlen;
  local_a0 = sVar18;
  local_60 = sVar18 - 1;
  if (p->fts_path[sVar18 - 1] != '/') {
    local_a0 = sVar18 + 1;
    local_60 = sVar18;
  }
  local_70 = (char *)0x0;
  if ((uVar17 & 4) != 0) {
    local_70 = sp->fts_path + local_60 + 1;
    sp->fts_path[local_60] = '/';
  }
  __dirp_00 = p->fts_dirp;
  lVar15 = p->fts_level;
  uVar19 = sp->fts_pathlen - local_a0;
  if (__dirp_00 == (DIR *)0x0) {
    if ((*(byte *)&sp->fts_options & 4) != 0) {
      local_90 = (FTSENT *)0x0;
      sVar18 = 0;
      bVar3 = false;
LAB_0010a876:
      local_70 = local_70 + -1;
      goto LAB_0010a87c;
    }
    local_90 = (FTSENT *)0x0;
    if ((bool)(bVar20 & __dirp == (DIR *)0x0)) {
      bVar3 = false;
      sVar18 = 0;
      goto LAB_0010a908;
    }
LAB_0010a931:
    if (((type == 3) && (p->fts_info != 7)) && (p->fts_info != 4)) {
      p->fts_info = 6;
    }
    fts_lfree(local_90);
    local_90 = (FTSENT *)0x0;
  }
  else {
    piVar10 = __errno_location();
    sVar18 = 0;
    bVar3 = false;
    local_4b = '\0';
    local_98 = (FTSENT *)0x0;
    local_90 = (FTSENT *)0x0;
LAB_0010a266:
    do {
      *piVar10 = 0;
      pdVar11 = readdir((DIR *)__dirp_00);
      if (pdVar11 == (dirent *)0x0) {
        if (*piVar10 != 0) {
          p->fts_errno = *piVar10;
          p->fts_info = (-(ushort)(((ulong)__dirp | sVar18) == 0) & 0xfffd) + 7;
        }
        if ((DIR *)p->fts_dirp != (DIR *)0x0) {
          closedir((DIR *)p->fts_dirp);
          p->fts_dirp = (DIR *)0x0;
        }
break_without_closedir:
        if (local_4b == '\0') goto LAB_0010a85f;
        goto LAB_0010a3b9;
      }
      if ((((*(byte *)&sp->fts_options & 0x20) != 0) || (pdVar11->d_name[0] != '.')) ||
         ((pdVar11->d_name[1] != '\0' && (*(short *)(pdVar11->d_name + 1) != 0x2e)))) {
        namelen = strlen(pdVar11->d_name);
        pFVar12 = fts_alloc(sp,pdVar11->d_name,namelen);
        if (pFVar12 == (FTSENT *)0x0) {
mem1:
          iVar9 = *piVar10;
          rpl_free(pFVar12);
          fts_lfree(local_90);
          closedir((DIR *)p->fts_dirp);
          p->fts_dirp = (DIR *)0x0;
          p->fts_info = 7;
          local_90 = (FTSENT *)0x0;
          sp->fts_options = sp->fts_options | 0x2000;
          *piVar10 = iVar9;
          goto LAB_0010a775;
        }
        if (uVar19 <= namelen) {
          pcVar2 = sp->fts_path;
          _Var6 = fts_palloc();
          if (_Var6 == false) goto mem1;
          pcVar5 = local_70;
          if ((sp->fts_path != pcVar2) &&
             (local_4b = _Var6, pcVar5 = sp->fts_path + local_a0,
             (*(byte *)&sp->fts_options & 4) == 0)) {
            pcVar5 = local_70;
          }
          local_70 = pcVar5;
          uVar19 = sp->fts_pathlen - local_a0;
        }
        if (CARRY8(namelen,local_a0)) {
          rpl_free(pFVar12);
          fts_lfree(local_90);
          closedir((DIR *)p->fts_dirp);
          p->fts_dirp = (DIR *)0x0;
          p->fts_info = 7;
          local_90 = (FTSENT *)0x0;
          sp->fts_options = sp->fts_options | 0x2000;
          *piVar10 = 0x24;
          goto LAB_0010a775;
        }
        uVar17 = sp->fts_options;
        pFVar12->fts_level = lVar15 + 1;
        p_Var13 = sp->fts_cur;
        pFVar12->fts_pathlen = namelen + local_a0;
        pFVar12->fts_parent = p_Var13;
        pFVar12->fts_statp[0].st_ino = pdVar11->d_ino;
        if ((uVar17 & 4) == 0) {
          pFVar12->fts_accpath = (char *)(pFVar12 + 1);
        }
        else {
          pFVar12->fts_accpath = pFVar12->fts_path;
          memmove(local_70,pFVar12 + 1,pFVar12->fts_namelen + 1);
          uVar17 = sp->fts_options;
        }
        if ((sp->fts_compar == (anon_subr_int__ftsent_ptr_ptr__ftsent_ptr_ptr_for_fts_compar *)0x0)
           || ((uVar17 & 0x400) != 0)) {
          bVar1 = pdVar11->d_type;
          uVar8 = bVar1 - 1;
          if (((uVar17 & 8) == 0) || ((bVar1 & 0xfb) == 0)) {
            pFVar12->fts_info = 0xb;
            if (uVar8 < 0xc) goto LAB_0010a4c0;
            pFVar12->fts_statp[0].st_mode = 0;
            _Var16 = 2;
          }
          else {
            if (((uVar17 & 0x10) == 0) && (bVar1 == 10)) {
              pFVar12->fts_info = 0xb;
LAB_0010a4c0:
              _Var16 = 2;
            }
            else {
              pFVar12->fts_info = 0xb;
              if (0xb < uVar8) {
                pFVar12->fts_statp[0].st_mode = 0;
                _Var16 = 1;
                goto LAB_0010a34f;
              }
              _Var16 = 1;
            }
            pFVar12->fts_statp[0].st_mode = *(__mode_t *)(CSWTCH_49 + (ulong)uVar8 * 4);
          }
LAB_0010a34f:
          pFVar12->fts_statp[0].st_size = _Var16;
        }
        else {
          uVar7 = fts_stat(sp,pFVar12,false);
          pFVar12->fts_info = uVar7;
        }
        pFVar12->fts_link = (_ftsent *)0x0;
        pFVar4 = pFVar12;
        if (local_90 != (FTSENT *)0x0) {
          local_98->fts_link = pFVar12;
          pFVar4 = local_90;
        }
        local_90 = pFVar4;
        local_98 = pFVar12;
        if (sVar18 == 10000) {
          if (sp->fts_compar == (anon_subr_int__ftsent_ptr_ptr__ftsent_ptr_ptr_for_fts_compar *)0x0)
          {
            lVar14 = filesystem_type(p,dir_fd);
            if (((lVar14 == 0x1021994) || (lVar14 == 0xff534d42)) || (lVar14 == 0x6969)) {
              sVar18 = 0x2711;
              bVar3 = false;
              goto LAB_0010a254;
            }
            bVar3 = true;
          }
          sVar18 = 0x2711;
          __dirp_00 = p->fts_dirp;
          if (__dirp_00 == (DIR *)0x0) break;
          goto LAB_0010a266;
        }
        sVar18 = sVar18 + 1;
        if (local_68 <= sVar18) goto break_without_closedir;
      }
LAB_0010a254:
      __dirp_00 = p->fts_dirp;
    } while (__dirp_00 != (DIR *)0x0);
    if (local_4b != '\0') {
LAB_0010a3b9:
      pcVar2 = sp->fts_path;
      for (p_Var13 = sp->fts_child; p_Var13 != (_ftsent *)0x0; p_Var13 = p_Var13->fts_link) {
        if ((_ftsent *)p_Var13->fts_accpath != p_Var13 + 1) {
          p_Var13->fts_accpath =
               pcVar2 + ((long)(_ftsent *)p_Var13->fts_accpath - (long)p_Var13->fts_path);
        }
        p_Var13->fts_path = pcVar2;
      }
      lVar15 = local_90->fts_level;
      pFVar12 = local_90;
      while (-1 < lVar15) {
        if ((FTSENT *)pFVar12->fts_accpath != pFVar12 + 1) {
          pFVar12->fts_accpath =
               pcVar2 + ((long)(FTSENT *)pFVar12->fts_accpath - (long)pFVar12->fts_path);
        }
        p_Var13 = pFVar12->fts_link;
        pFVar12->fts_path = pcVar2;
        if (p_Var13 == (_ftsent *)0x0) {
          p_Var13 = pFVar12->fts_parent;
        }
        pFVar12 = p_Var13;
        lVar15 = p_Var13->fts_level;
      }
    }
LAB_0010a85f:
    if ((*(byte *)&sp->fts_options & 4) != 0) {
      if ((sp->fts_pathlen == local_a0) || (sVar18 == 0)) goto LAB_0010a876;
LAB_0010a87c:
      *local_70 = '\0';
    }
    if ((__dirp == (DIR *)0x0) && (bVar20)) {
      if ((type == 1) || (sVar18 == 0)) {
LAB_0010a908:
        if (p->fts_level == 0) {
          iVar9 = restore_initial_cwd(sp);
        }
        else {
          iVar9 = fts_safe_changedir(sp,p->fts_parent,-1,"..");
        }
        if (iVar9 != 0) {
          p->fts_info = 7;
          sp->fts_options = sp->fts_options | 0x2000;
          fts_lfree(local_90);
          local_90 = (FTSENT *)0x0;
          goto LAB_0010a775;
        }
        goto LAB_0010a928;
      }
    }
    else {
LAB_0010a928:
      if (sVar18 == 0) goto LAB_0010a931;
    }
    if (bVar3) {
      sp->fts_compar = fts_compare_ino;
      local_90 = fts_sort(sp,local_90,sVar18);
      sp->fts_compar = (anon_subr_int__ftsent_ptr_ptr__ftsent_ptr_ptr_for_fts_compar *)0x0;
    }
    else if ((sp->fts_compar != (anon_subr_int__ftsent_ptr_ptr__ftsent_ptr_ptr_for_fts_compar *)0x0)
            && (sVar18 != 1)) {
      local_90 = fts_sort(sp,local_90,sVar18);
    }
  }
LAB_0010a775:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return local_90;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

