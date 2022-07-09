
int set_owner(cp_options *x,char *dst_name,int dst_dirfd,char *dst_relname,int dest_desc,
             stat *src_sb,_Bool new_dst,stat *dst_sb)

{
  __uid_t __owner;
  __gid_t __group;
  _Bool _Var1;
  int iVar2;
  int *piVar3;
  char *pcVar4;
  undefined8 uVar5;
  uint uVar6;
  uint uVar7;
  int saved_errno;
  
  __owner = src_sb->st_uid;
  __group = src_sb->st_gid;
  if (new_dst == false) {
    if ((*(ulong *)&x->move_mode & 0xff0000000000ff) == 0) {
      if (x->set_mode == false) goto LAB_00106cd0;
      uVar7 = x->mode;
      uVar6 = dst_sb->st_mode;
    }
    else {
      uVar7 = src_sb->st_mode;
      uVar6 = dst_sb->st_mode;
    }
    if ((((ushort)(~(ushort)uVar7 | 0xe00) & uVar6 & 0xfff) != 0) &&
       (iVar2 = qset_acl(dst_name,dest_desc,uVar7 & uVar6 & 0x1c0), iVar2 != 0)) {
      piVar3 = __errno_location();
      if (((*piVar3 != 1) && (*piVar3 != 0x16)) || (x->owner_privileges != false)) {
        pcVar4 = quotearg_style(shell_escape_always_quoting_style,dst_name);
        uVar5 = dcgettext(0,"clearing permissions for %s",5);
        error(0,*piVar3,uVar5,pcVar4);
      }
      goto LAB_00106e0c;
    }
  }
LAB_00106cd0:
  if (dest_desc == -1) {
    iVar2 = fchownat(dst_dirfd,dst_relname,__owner,__group,0x100);
    if (iVar2 == 0) {
      return 1;
    }
    piVar3 = __errno_location();
    iVar2 = *piVar3;
    if ((iVar2 == 1) || (iVar2 == 0x16)) {
      fchownat(dst_dirfd,dst_relname,0xffffffff,__group,0x100);
      *piVar3 = iVar2;
    }
  }
  else {
    iVar2 = fchown(dest_desc,__owner,__group);
    if (iVar2 == 0) {
      return 1;
    }
    piVar3 = __errno_location();
    iVar2 = *piVar3;
    if ((iVar2 == 1) || (iVar2 == 0x16)) {
      fchown(dest_desc,0xffffffff,__group);
      *piVar3 = iVar2;
    }
  }
  _Var1 = chown_failure_ok(x);
  if (_Var1 != false) {
    return 0;
  }
  pcVar4 = quotearg_style(shell_escape_always_quoting_style,dst_name);
  uVar5 = dcgettext(0,"failed to preserve ownership for %s",5);
  piVar3 = __errno_location();
  error(0,*piVar3,uVar5,pcVar4);
LAB_00106e0c:
  return -(uint)x->require_preserve;
}

