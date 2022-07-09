
size_t print_name_with_quoting(fileinfo *f,_Bool symlink_target,obstack *stack,size_t start_col)

{
  color_ext_type *pcVar1;
  _Bool _Var2;
  uint uVar3;
  int iVar4;
  size_t sVar5;
  size_t sVar6;
  ulong uVar7;
  long lVar8;
  bin_str *color;
  uint uVar9;
  char *__s;
  char cVar10;
  
  if (symlink_target == false) {
    __s = f->name;
    if (print_with_color == false) goto LAB_00108a62;
    uVar9 = (uint)f->linkok;
    if ((color_symlink_as_referent == false) || (f->linkok == false)) {
      uVar7 = (ulong)(f->stat).st_mode;
    }
    else {
      uVar7 = (ulong)f->linkmode;
    }
LAB_00108b04:
    cVar10 = f->stat_ok;
    uVar3 = uVar9;
    if ((_Bool)cVar10 == false) goto LAB_00108b15;
LAB_00108c23:
    uVar3 = (uint)uVar7 & 0xf000;
    if (uVar3 == 0x8000) {
      if (((uVar7 & 0x800) != 0) && (_Var2 = is_colored(C_SETUID), _Var2 != false)) {
        lVar8 = 0x100;
        goto LAB_00108b6e;
      }
      uVar9 = (uint)uVar7;
      if (((uVar7 & 0x400) != 0) && (_Var2 = is_colored(C_SETGID), _Var2 != false)) {
        lVar8 = 0x110;
        goto LAB_00108b6e;
      }
      _Var2 = is_colored(C_CAP);
      if ((_Var2 != false) && (f->has_capability != false)) {
        lVar8 = 0x150;
        goto LAB_00108b6e;
      }
      if (((uVar9 & 0x49) != 0) && (_Var2 = is_colored(C_EXEC), _Var2 != false)) {
        lVar8 = 0xe0;
        goto LAB_00108b6e;
      }
      if ((1 < (f->stat).st_nlink) && (_Var2 = is_colored(C_MULTIHARDLINK), _Var2 != false)) {
        lVar8 = 0x160;
        goto LAB_00108b6e;
      }
      goto LAB_00108cb0;
    }
    if (uVar3 != 0x4000) {
      if (uVar3 != 0xa000) {
        lVar8 = 0x80;
        if ((((uVar3 != 0x1000) && (lVar8 = 0x90, uVar3 != 0xc000)) &&
            (lVar8 = 0xa0, uVar3 != 0x6000)) && (lVar8 = 0xb0, uVar3 != 0x2000)) {
          lVar8 = 0xd0;
        }
        goto LAB_00108b6e;
      }
      uVar7 = 7;
      goto LAB_00108b36;
    }
    if (((uint)uVar7 & 0x202) == 0x202) {
      _Var2 = is_colored(C_STICKY_OTHER_WRITABLE);
      lVar8 = 0x140;
      if (_Var2 != false) goto LAB_00108b6e;
    }
    uVar9 = (uint)uVar7;
    if ((uVar7 & 2) != 0) {
      _Var2 = is_colored(C_OTHER_WRITABLE);
      lVar8 = 0x130;
      if (_Var2 != false) goto LAB_00108b6e;
    }
    lVar8 = 0x60;
    if ((uVar9 & 0x200) != 0) {
      _Var2 = is_colored(C_STICKY);
      lVar8 = (-(ulong)(_Var2 == false) & 0xffffffffffffff40) + 0x120;
    }
  }
  else {
    __s = f->linkname;
    if (print_with_color == false) goto LAB_00108a62;
    uVar7 = (ulong)f->linkmode;
    if (f->linkok == false) {
      _Var2 = is_colored(C_MISSING);
      uVar9 = 0xffffffff;
      if (_Var2 == false) goto LAB_00108b04;
      lVar8 = 0xc0;
      goto LAB_00108b6e;
    }
    cVar10 = f->stat_ok;
    uVar9 = 0;
    uVar3 = 0;
    if ((_Bool)cVar10 != false) goto LAB_00108c23;
LAB_00108b15:
    uVar9 = uVar3;
    uVar3 = *(uint *)(filetype_indicator_11567 + (ulong)f->filetype * 4);
    uVar7 = (ulong)uVar3;
    cVar10 = uVar3 == 7;
    if (uVar3 == 5) {
LAB_00108cb0:
      sVar6 = strlen(__s);
      for (pcVar1 = color_ext_list; pcVar1 != (color_ext_type *)0x0; pcVar1 = pcVar1->next) {
        uVar7 = (pcVar1->ext).len;
        if ((uVar7 <= sVar6) &&
           (iVar4 = c_strncasecmp(__s + (sVar6 - uVar7),(pcVar1->ext).string,uVar7), iVar4 == 0)) {
          color = &pcVar1->seq;
          goto LAB_00108b78;
        }
      }
      lVar8 = 0x50;
    }
    else {
LAB_00108b36:
      if ((uVar9 == 0) && (cVar10 != '\0')) {
        lVar8 = 0xd0;
        if (color_symlink_as_referent == false) {
          _Var2 = is_colored(C_ORPHAN);
          lVar8 = (-(ulong)(_Var2 == false) & 0xffffffffffffffa0) + 0xd0;
        }
      }
      else {
        lVar8 = uVar7 << 4;
      }
    }
  }
LAB_00108b6e:
  color = (bin_str *)((long)&color_indicator[0].len + lVar8);
LAB_00108b78:
  if (color->string == (char *)0x0) {
    _Var2 = is_colored(C_NORM);
    if (_Var2 == false) {
LAB_00108a62:
      sVar5 = quote_name(__s,filename_quoting_options,f->quoted,(bin_str *)0x0,
                         (_Bool)(symlink_target ^ 1),stack,f->absolute_name);
      process_signals();
      return sVar5;
    }
    color = (bin_str *)0x0;
  }
  sVar5 = quote_name(__s,filename_quoting_options,f->quoted,color,(_Bool)(symlink_target ^ 1),stack,
                     f->absolute_name);
  process_signals();
  prep_non_filename_text();
  if (line_length == 0) {
    return sVar5;
  }
  if (start_col / line_length == ((sVar5 - 1) + start_col) / line_length) {
    return sVar5;
  }
  put_indicator();
  return sVar5;
}

