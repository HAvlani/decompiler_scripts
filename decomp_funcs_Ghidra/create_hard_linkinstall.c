
_Bool create_hard_link(char *src_name,int src_dirfd,char *src_relname,char *dst_name,int dst_dirfd,
                      char *dst_relname,_Bool replace,_Bool verbose,_Bool dereference)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  char *pcVar4;
  undefined8 uVar5;
  _Bool _Var6;
  
  iVar1 = force_linkat(src_dirfd,src_relname,dst_dirfd,dst_relname,
                       (uint)(dereference != false) << 10,replace,-1);
  if (iVar1 < 1) {
    _Var6 = (_Bool)(verbose & (byte)((uint)iVar1 >> 0x1f));
    if (_Var6 == false) {
      _Var6 = true;
    }
    else {
      pcVar4 = quotearg_style(shell_escape_always_quoting_style,dst_name);
      uVar5 = dcgettext(0,"removed %s\n",5);
      __printf_chk(1,uVar5,pcVar4);
    }
  }
  else {
    pcVar4 = (char *)0x0;
    if (src_name == (char *)0x0) {
      pcVar4 = subst_suffix(dst_name,dst_relname,src_relname);
      src_name = pcVar4;
    }
    uVar5 = quotearg_n_style(1,4,src_name);
    uVar2 = quotearg_n_style(0,4,dst_name);
    uVar3 = dcgettext(0,"cannot create hard link %s to %s",5);
    _Var6 = false;
    error(0,iVar1,uVar3,uVar2,uVar5);
    rpl_free(pcVar4);
  }
  return _Var6;
}

