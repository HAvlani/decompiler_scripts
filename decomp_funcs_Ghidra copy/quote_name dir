
size_t quote_name(char *name,quoting_options *options,int needs_general_quoting,bin_str *color,
                 _Bool allow_pad,obstack *stack,char *absolute_name)

{
  byte bVar1;
  long lVar2;
  byte *pbVar3;
  _Bool _Var4;
  size_t sVar5;
  char *p;
  char *p_00;
  char *pcVar6;
  char cVar7;
  char cVar8;
  size_t sVar9;
  long in_FS_OFFSET;
  size_t in_stack_ffffffffffffdf88;
  long lVar10;
  _Bool pad;
  char *buf;
  char smallbuf [8192];
  
  lVar2 = *(long *)(in_FS_OFFSET + 0x28);
  buf = smallbuf;
  sVar5 = quote_name_buf(&buf,name,options,needs_general_quoting,(size_t *)0x0,&pad,
                         in_stack_ffffffffffffdf88);
  if ((pad != false) && (allow_pad != false)) {
    dired_outbyte(' ');
  }
  if (color != (bin_str *)0x0) {
    _Var4 = is_colored(C_NORM);
    if (_Var4 != false) {
      restore_default_color();
    }
    put_indicator();
    put_indicator();
    put_indicator();
  }
  cVar8 = cwd_some_quoted;
  sVar9 = sVar5;
  if (absolute_name == (char *)0x0) {
    lVar10 = 0;
    cVar8 = '\0';
  }
  else {
    cVar7 = align_variable_outer_quotes;
    if ((align_variable_outer_quotes == false) ||
       (cVar7 = cwd_some_quoted, cwd_some_quoted == false)) {
      lVar10 = 0;
      cVar8 = cVar7;
    }
    else if (pad == false) {
      bVar1 = *buf;
      pbVar3 = (byte *)stdout->_IO_write_ptr;
      sVar9 = sVar5 - 2;
      if (pbVar3 < stdout->_IO_write_end) {
        lVar10 = 1;
        stdout->_IO_write_ptr = (char *)(pbVar3 + 1);
        *pbVar3 = bVar1;
      }
      else {
        __overflow(stdout,(uint)bVar1);
        lVar10 = 1;
      }
    }
    else {
      lVar10 = 0;
      cVar8 = '\0';
    }
    p = file_escape(hostname,false);
    p_00 = file_escape(absolute_name,true);
    pcVar6 = "";
    if (*p_00 != '/') {
      pcVar6 = "/";
    }
    __printf_chk(1,&DAT_00118a85,p,pcVar6);
    rpl_free(p);
    rpl_free(p_00);
  }
  if (stack == (obstack *)0x0) {
    fwrite_unlocked(buf + lVar10,1,sVar9,stdout);
    dired_pos = dired_pos + sVar5;
  }
  else {
    if (dired != false) {
      push_current_dired_pos(stack);
    }
    fwrite_unlocked(buf + lVar10,1,sVar9,stdout);
    dired_pos = dired_pos + sVar5;
    if (dired != false) {
      push_current_dired_pos(stack);
    }
  }
  if ((absolute_name != (char *)0x0) && (fwrite_unlocked(&DAT_00118a99,1,6,stdout), cVar8 != '\0'))
  {
    bVar1 = buf[sVar5 - 1];
    pbVar3 = (byte *)stdout->_IO_write_ptr;
    if (pbVar3 < stdout->_IO_write_end) {
      stdout->_IO_write_ptr = (char *)(pbVar3 + 1);
      *pbVar3 = bVar1;
    }
    else {
      __overflow(stdout,(uint)bVar1);
    }
  }
  if ((buf != name) && (buf != smallbuf)) {
    rpl_free(buf);
  }
  if (lVar2 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return pad + sVar5;
}

