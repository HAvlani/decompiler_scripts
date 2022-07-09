
FTSENT * rpl_fts_read(FTS *param_1)

{
  FTSENT *__s;
  ushort uVar1;
  Hash_table *table;
  size_t sVar2;
  char *pcVar3;
  long lVar4;
  _Bool _Var5;
  ushort uVar6;
  int iVar7;
  int *piVar8;
  FTSENT *pFVar9;
  size_t sVar10;
  size_t sVar11;
  FTSENT *pFVar12;
  FTSENT *p;
  uint uVar13;
  _ftsent *p_Var14;
  
  pFVar12 = param_1->fts_cur;
  if (pFVar12 == (FTSENT *)0x0) {
    return (FTSENT *)0x0;
  }
  uVar13 = param_1->fts_options;
  if ((uVar13 & 0x2000) != 0) {
    return (FTSENT *)0x0;
  }
  uVar6 = pFVar12->fts_instr;
  pFVar12->fts_instr = 3;
  if (uVar6 == 1) {
    uVar6 = fts_stat(param_1,pFVar12,false);
    pFVar12->fts_info = uVar6;
    return pFVar12;
  }
  uVar1 = pFVar12->fts_info;
  if (uVar6 == 2) {
    if (1 < (ushort)(uVar1 - 0xc)) {
      if (uVar1 == 1) goto LAB_0010b277;
      goto LAB_0010b1a8;
    }
    uVar6 = fts_stat(param_1,pFVar12,true);
    pFVar12->fts_info = uVar6;
    if (uVar6 == 1) {
      if ((param_1->fts_options & 4U) != 0) {
        param_1->fts_cur = pFVar12;
        goto LAB_0010b467;
      }
      iVar7 = diropen();
      pFVar12->fts_symfd = iVar7;
      if (iVar7 < 0) {
        piVar8 = __errno_location();
        iVar7 = *piVar8;
        pFVar12->fts_info = 7;
        pFVar12->fts_errno = iVar7;
        param_1->fts_cur = pFVar12;
        return pFVar12;
      }
      pFVar12->fts_flags = pFVar12->fts_flags | 2;
      uVar6 = pFVar12->fts_info;
      goto LAB_0010b453;
    }
    param_1->fts_cur = pFVar12;
    if (uVar6 != 0xb) {
      return pFVar12;
    }
LAB_0010b4d0:
    lVar4 = pFVar12->fts_statp[0].st_size;
    if (lVar4 != 2) {
      if (lVar4 != 1) {
        pFVar12 = (FTSENT *)rpl_fts_read_cold();
        return pFVar12;
      }
      return pFVar12;
    }
    uVar6 = fts_stat(param_1,pFVar12,false);
    pFVar12->fts_info = uVar6;
  }
  else {
    if (uVar1 == 1) {
      if (uVar6 == 4) goto LAB_0010b312;
LAB_0010b277:
      if (((uVar13 & 0x40) != 0) && (pFVar12->fts_statp[0].st_dev != param_1->fts_dev)) {
LAB_0010b312:
        if ((*(byte *)&pFVar12->fts_flags & 2) != 0) {
          close(pFVar12->fts_symfd);
        }
        if (param_1->fts_child != (FTSENT *)0x0) {
          fts_lfree(param_1->fts_child);
          param_1->fts_child = (_ftsent *)0x0;
        }
        iVar7 = param_1->fts_options;
        pFVar12->fts_info = 6;
        leave_dir_isra_0(iVar7,&param_1->fts_cycle,pFVar12);
        return pFVar12;
      }
      if (param_1->fts_child == (FTSENT *)0x0) {
LAB_0010b520:
        p = fts_build(param_1,3);
        param_1->fts_child = p;
        if (p == (FTSENT *)0x0) {
          uVar13 = param_1->fts_options;
          if ((uVar13 & 0x2000) != 0) {
            return (FTSENT *)0x0;
          }
          if ((pFVar12->fts_errno != 0) && (pFVar12->fts_info != 4)) {
            pFVar12->fts_info = 7;
          }
          leave_dir_isra_0(uVar13,&param_1->fts_cycle,pFVar12);
          return pFVar12;
        }
      }
      else {
        if ((uVar13 & 0x1000) != 0) {
          param_1->fts_options = uVar13 & 0xffffefff;
          fts_lfree(param_1->fts_child);
          param_1->fts_child = (_ftsent *)0x0;
          goto LAB_0010b520;
        }
        iVar7 = fts_safe_changedir(param_1,pFVar12,-1,pFVar12->fts_accpath);
        if (iVar7 == 0) {
          p = param_1->fts_child;
        }
        else {
          piVar8 = __errno_location();
          iVar7 = *piVar8;
          pFVar12->fts_flags = pFVar12->fts_flags | 1;
          pFVar12->fts_errno = iVar7;
          p = param_1->fts_child;
          for (p_Var14 = p; p_Var14 != (FTSENT *)0x0; p_Var14 = p_Var14->fts_link) {
            p_Var14->fts_accpath = p_Var14->fts_parent->fts_accpath;
          }
        }
      }
      param_1->fts_child = (_ftsent *)0x0;
    }
    else {
LAB_0010b1a8:
      do {
        p = pFVar12->fts_link;
        if (p == (FTSENT *)0x0) {
          p_Var14 = pFVar12->fts_parent;
          if (p_Var14->fts_dirp != (DIR *)0x0) {
            sVar2 = p_Var14->fts_pathlen;
            param_1->fts_cur = p_Var14;
            param_1->fts_path[sVar2] = '\0';
            p = fts_build(param_1,3);
            if (p != (FTSENT *)0x0) {
              rpl_free(pFVar12);
              goto LAB_0010b412;
            }
            if ((*(byte *)((long)&param_1->fts_options + 1) & 0x20) != 0) {
              return (FTSENT *)0x0;
            }
            p_Var14 = pFVar12->fts_parent;
          }
          param_1->fts_cur = p_Var14;
          rpl_free(pFVar12);
          if (p_Var14->fts_level == -1) {
            rpl_free(p_Var14);
            piVar8 = __errno_location();
            *piVar8 = 0;
            param_1->fts_cur = (_ftsent *)0x0;
            return (FTSENT *)0x0;
          }
          if (p_Var14->fts_info == 0xb) {
                    /* WARNING: Subroutine does not return */
            abort();
          }
          param_1->fts_path[p_Var14->fts_pathlen] = '\0';
          if (p_Var14->fts_level == 0) {
            iVar7 = restore_initial_cwd(param_1);
            if (iVar7 == 0) goto LAB_0010b213;
LAB_0010b60e:
            piVar8 = __errno_location();
            uVar13 = param_1->fts_options | 0x2000;
            uVar6 = p_Var14->fts_info;
            p_Var14->fts_errno = *piVar8;
            param_1->fts_options = uVar13;
            if (uVar6 == 2) {
              return (FTSENT *)0x0;
            }
          }
          else {
            if ((p_Var14->fts_flags & 2) == 0) {
              if (((p_Var14->fts_flags & 1) == 0) &&
                 (iVar7 = fts_safe_changedir(param_1,p_Var14->fts_parent,-1,".."), iVar7 != 0))
              goto LAB_0010b60e;
LAB_0010b213:
              uVar13 = param_1->fts_options;
            }
            else {
              iVar7 = p_Var14->fts_symfd;
              if ((param_1->fts_options & 4U) == 0) {
                if ((param_1->fts_options & 0x200U) == 0) {
                  iVar7 = fchdir(iVar7);
                  if (iVar7 != 0) {
                    piVar8 = __errno_location();
                    p_Var14->fts_errno = *piVar8;
                    param_1->fts_options = param_1->fts_options | 0x2000;
                  }
                  iVar7 = p_Var14->fts_symfd;
                }
                else {
                  cwd_advance_fd(param_1,iVar7,1);
                  iVar7 = p_Var14->fts_symfd;
                }
              }
              close(iVar7);
              uVar13 = param_1->fts_options;
            }
            if (p_Var14->fts_info == 2) goto LAB_0010b243;
          }
          if (p_Var14->fts_errno == 0) {
            p_Var14->fts_info = 6;
            leave_dir_isra_0(uVar13,&param_1->fts_cycle,p_Var14);
            uVar13 = param_1->fts_options;
          }
          else {
            p_Var14->fts_info = 7;
          }
LAB_0010b243:
          if ((uVar13 & 0x2000) != 0) {
            return (FTSENT *)0x0;
          }
          return p_Var14;
        }
        param_1->fts_cur = p;
        rpl_free(pFVar12);
        pFVar12 = p;
        if (p->fts_level == 0) {
          iVar7 = restore_initial_cwd(param_1);
          if (iVar7 != 0) {
            param_1->fts_options = param_1->fts_options | 0x2000;
            return (FTSENT *)0x0;
          }
          table = (Hash_table *)param_1->fts_cycle;
          if ((param_1->fts_options & 0x102U) == 0) {
            rpl_free(table);
          }
          else if (table != (Hash_table *)0x0) {
            hash_free(table);
          }
          pcVar3 = param_1->fts_path;
          __s = p + 1;
          p->fts_pathlen = p->fts_namelen;
          memmove(pcVar3,__s,p->fts_namelen + 1);
          pFVar9 = (FTSENT *)strrchr((char *)__s,0x2f);
          if ((pFVar9 != (FTSENT *)0x0) &&
             ((__s != pFVar9 || (*(char *)((long)&p[1].fts_cycle + 1) != '\0')))) {
            pcVar3 = (char *)((long)&pFVar9->fts_cycle + 1);
            sVar10 = strlen(pcVar3);
            memmove(__s,pcVar3,sVar10 + 1);
            p->fts_namelen = sVar10;
          }
          pcVar3 = param_1->fts_path;
          p->fts_path = pcVar3;
          p->fts_accpath = pcVar3;
          setup_dir();
          uVar6 = p->fts_info;
          goto LAB_0010b453;
        }
      } while (p->fts_instr == 4);
      if (p->fts_instr == 2) {
        uVar6 = fts_stat(param_1,p,true);
        p->fts_info = uVar6;
        if ((uVar6 == 1) && ((param_1->fts_options & 4U) == 0)) {
          iVar7 = diropen();
          p->fts_symfd = iVar7;
          if (iVar7 < 0) {
            piVar8 = __errno_location();
            iVar7 = *piVar8;
            p->fts_info = 7;
            p->fts_errno = iVar7;
          }
          else {
            p->fts_flags = p->fts_flags | 2;
          }
        }
        p->fts_instr = 3;
      }
    }
LAB_0010b412:
    sVar2 = p->fts_parent->fts_pathlen;
    sVar11 = sVar2 - 1;
    if (p->fts_parent->fts_path[sVar2 - 1] != '/') {
      sVar11 = sVar2;
    }
    pcVar3 = param_1->fts_path;
    pcVar3[sVar11] = '/';
    memmove(pcVar3 + sVar11 + 1,p + 1,p->fts_namelen + 1);
    uVar6 = p->fts_info;
    pFVar12 = p;
LAB_0010b453:
    param_1->fts_cur = pFVar12;
    if (uVar6 == 0xb) goto LAB_0010b4d0;
  }
  if (uVar6 != 1) {
    return pFVar12;
  }
LAB_0010b467:
  if (pFVar12->fts_level == 0) {
    param_1->fts_dev = pFVar12->fts_statp[0].st_dev;
  }
  _Var5 = enter_dir();
  if (_Var5 == false) {
    piVar8 = __errno_location();
    pFVar12 = (FTSENT *)0x0;
    *piVar8 = 0xc;
  }
  return pFVar12;
}

