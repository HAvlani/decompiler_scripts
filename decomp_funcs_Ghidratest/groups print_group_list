
_Bool print_group_list(char *username,uid_t ruid,gid_t rgid,gid_t egid,_Bool use_names,char delim)

{
  _Bool _Var1;
  int iVar2;
  passwd *ppVar3;
  int *piVar4;
  char *pcVar5;
  undefined8 uVar6;
  __gid_t gid;
  gid_t *p;
  long lVar7;
  long in_FS_OFFSET;
  _Bool _Var8;
  gid_t *groups;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (username == (char *)0x0) {
    ppVar3 = (passwd *)0x0;
    _Var8 = true;
  }
  else {
    ppVar3 = getpwuid(ruid);
    _Var8 = ppVar3 != (passwd *)0x0;
  }
  _Var1 = print_group(rgid,use_names);
  if (_Var1 == false) {
    _Var8 = false;
  }
  if (rgid != egid) {
    pcVar5 = stdout->_IO_write_ptr;
    if (pcVar5 < stdout->_IO_write_end) {
      stdout->_IO_write_ptr = pcVar5 + 1;
      *pcVar5 = delim;
    }
    else {
      __overflow(stdout,(uint)(byte)delim);
    }
    _Var1 = print_group(egid,use_names);
    if (_Var1 == false) {
      _Var8 = false;
    }
  }
  gid = egid;
  if (ppVar3 != (passwd *)0x0) {
    gid = ppVar3->pw_gid;
  }
  iVar2 = xgetgroups(username,gid,&groups);
  if (iVar2 < 0) {
    piVar4 = __errno_location();
    if (username == (char *)0x0) {
      uVar6 = dcgettext(0,"failed to get groups for the current process",5);
      error(0,*piVar4,uVar6);
    }
    else {
      pcVar5 = quote(username);
      uVar6 = dcgettext(0,"failed to get groups for user %s",5);
      error(0,*piVar4,uVar6,pcVar5);
    }
    _Var8 = false;
  }
  else {
    p = groups;
    if (iVar2 != 0) {
      lVar7 = 0;
      do {
        if ((*(gid_t *)((long)p + lVar7) != rgid) && (*(gid_t *)((long)p + lVar7) != egid)) {
          pcVar5 = stdout->_IO_write_ptr;
          if (pcVar5 < stdout->_IO_write_end) {
            stdout->_IO_write_ptr = pcVar5 + 1;
            *pcVar5 = delim;
          }
          else {
            __overflow(stdout,(uint)(byte)delim);
          }
          _Var1 = print_group(*(gid_t *)((long)groups + lVar7),use_names);
          p = groups;
          if (_Var1 == false) {
            _Var8 = false;
          }
        }
        lVar7 = lVar7 + 4;
      } while ((ulong)(iVar2 - 1) * 4 + 4 != lVar7);
    }
    rpl_free(p);
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return _Var8;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

