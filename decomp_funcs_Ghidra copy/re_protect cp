
_Bool re_protect(char *const_dst_name,int dst_dirfd,char *dst_relname,dir_attr *attr_list,
                cp_options *x)

{
  char cVar1;
  __gid_t _Var2;
  __uid_t __owner;
  mode_t mVar3;
  long lVar4;
  long lVar5;
  timespec **pptVar6;
  _Bool _Var7;
  int iVar8;
  size_t sVar9;
  char *pcVar10;
  undefined8 uVar11;
  int *piVar12;
  ulong uVar13;
  timespec **pptVar14;
  undefined uVar16;
  char *pcVar17;
  long in_FS_OFFSET;
  timespec *local_78;
  char *local_70;
  timespec timespec [2];
  timespec **pptVar15;
  
  pptVar14 = (timespec **)&local_78;
  lVar4 = *(long *)(in_FS_OFFSET + 0x28);
  local_70 = dst_relname;
  sVar9 = strlen(const_dst_name);
  pptVar15 = (timespec **)&local_78;
  pptVar6 = (timespec **)&local_78;
  while (pptVar15 != (timespec **)((long)&local_78 - (sVar9 + 0x18 & 0xfffffffffffff000))) {
    pptVar14 = (timespec **)((long)pptVar6 + -0x1000);
    *(undefined8 *)((long)pptVar6 + -8) = *(undefined8 *)((long)pptVar6 + -8);
    pptVar15 = (timespec **)((long)pptVar6 + -0x1000);
    pptVar6 = (timespec **)((long)pptVar6 + -0x1000);
  }
  uVar13 = (ulong)((uint)(sVar9 + 0x18) & 0xff0);
  lVar5 = -uVar13;
  if (uVar13 != 0) {
    *(undefined8 *)((long)pptVar14 + -8) = *(undefined8 *)((long)pptVar14 + -8);
  }
  *(undefined8 *)((long)pptVar14 + lVar5 + -8) = 0x1047f3;
  pcVar10 = (char *)memcpy((void *)((ulong)((long)pptVar14 + lVar5 + 0xf) & 0xfffffffffffffff0),
                           const_dst_name,sVar9 + 1);
  pcVar17 = pcVar10 + ((long)local_70 - (long)const_dst_name);
  if (attr_list != (dir_attr *)0x0) {
    local_78 = timespec;
    do {
      _Var7 = x->preserve_timestamps;
      pcVar10[attr_list->slash_offset] = '\0';
      if (_Var7 != false) {
        timespec[0].tv_sec = (attr_list->st).st_atim.tv_sec;
        timespec[0].tv_nsec = (attr_list->st).st_atim.tv_nsec;
        timespec[1].tv_sec = (attr_list->st).st_mtim.tv_sec;
        timespec[1].tv_nsec = (attr_list->st).st_mtim.tv_nsec;
        *(undefined8 *)((long)pptVar14 + lVar5 + -8) = 0x1048a6;
        iVar8 = utimensat(dst_dirfd,pcVar17,(timespec *)local_78,0);
        if (iVar8 != 0) {
          *(undefined8 *)((long)pptVar14 + lVar5 + -8) = 0x1048bb;
          pcVar10 = quotearg_style(shell_escape_always_quoting_style,pcVar10);
          *(undefined8 *)((long)pptVar14 + lVar5 + -8) = 0x1048d1;
          uVar11 = dcgettext(0,"failed to preserve times for %s",5);
          *(undefined8 *)((long)pptVar14 + lVar5 + -8) = 0x1048d9;
          piVar12 = __errno_location();
          iVar8 = *piVar12;
          *(undefined8 *)((long)pptVar14 + lVar5 + -8) = 0x1048ea;
          error(0,iVar8,uVar11,pcVar10);
          uVar16 = 0;
          goto LAB_001049ee;
        }
      }
      if (x->preserve_ownership != false) {
        _Var2 = (attr_list->st).st_gid;
        __owner = (attr_list->st).st_uid;
        *(undefined8 *)((long)pptVar14 + lVar5 + -8) = 0x10490f;
        iVar8 = fchownat(dst_dirfd,pcVar17,__owner,_Var2,0x100);
        if (iVar8 == 0) goto LAB_0010482b;
        *(undefined8 *)((long)pptVar14 + lVar5 + -8) = 0x10491f;
        _Var7 = chown_failure_ok(x);
        if (_Var7 != false) {
          _Var2 = (attr_list->st).st_gid;
          *(undefined8 *)((long)pptVar14 + lVar5 + -8) = 0x104940;
          fchownat(dst_dirfd,pcVar17,0xffffffff,_Var2,0x100);
          cVar1 = x->preserve_mode;
          goto joined_r0x00104948;
        }
        local_70 = (char *)((ulong)local_70 & 0xffffffffffffff00);
        *(undefined8 *)((long)pptVar14 + lVar5 + -8) = 0x104a2a;
        pcVar10 = quotearg_style(shell_escape_always_quoting_style,pcVar10);
        pcVar17 = "failed to preserve ownership for %s";
LAB_001049bb:
        *(undefined8 *)((long)pptVar14 + lVar5 + -8) = 0x1049c2;
        uVar11 = dcgettext(0,pcVar17,5);
        *(undefined8 *)((long)pptVar14 + lVar5 + -8) = 0x1049ca;
        piVar12 = __errno_location();
        iVar8 = *piVar12;
        *(undefined8 *)((long)pptVar14 + lVar5 + -8) = 0x1049db;
        error(0,iVar8,uVar11,pcVar10);
        uVar16 = SUB81(local_70,0);
        goto LAB_001049ee;
      }
LAB_0010482b:
      cVar1 = x->preserve_mode;
joined_r0x00104948:
      if (cVar1 == '\0') {
        if (attr_list->restore_mode != false) {
          mVar3 = (attr_list->st).st_mode;
          local_70 = (char *)((ulong)local_70 & 0xffffffffffffff00);
          *(undefined8 *)((long)pptVar14 + lVar5 + -8) = 0x104997;
          iVar8 = rpl_fchmodat(dst_dirfd,pcVar17,mVar3,0x100);
          if (iVar8 != 0) {
            *(undefined8 *)((long)pptVar14 + lVar5 + -8) = 0x1049ac;
            pcVar10 = quotearg_style(shell_escape_always_quoting_style,pcVar10);
            pcVar17 = "failed to preserve permissions for %s";
            goto LAB_001049bb;
          }
        }
      }
      else {
        mVar3 = (attr_list->st).st_mode;
        *(undefined8 *)((long)pptVar14 + lVar5 + -8) = 0x104969;
        iVar8 = copy_acl(pcVar17,-1,pcVar10,-1,mVar3);
        if (iVar8 != 0) {
          uVar16 = 0;
          goto LAB_001049ee;
        }
      }
      pcVar10[attr_list->slash_offset] = '/';
      attr_list = attr_list->next;
    } while (attr_list != (dir_attr *)0x0);
  }
  uVar16 = 1;
LAB_001049ee:
  if (lVar4 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    *(code **)((long)pptVar14 + lVar5 + -8) = make_dir_parents_private;
    __stack_chk_fail();
  }
  return (_Bool)uVar16;
}

