
char * rpl_re_compile_pattern(char *pattern,size_t length,re_pattern_buffer *bufp)

{
  int iVar1;
  char *pcVar2;
  
  bufp->field_0x38 =
       (byte)(((uint)(rpl_re_syntax_options >> 0x19) & 1) << 4) | 0x80 | bufp->field_0x38 & 0x6f;
  iVar1 = re_compile_internal(bufp,pattern,length);
  if (iVar1 != 0) {
    pcVar2 = (char *)dcgettext(0,"Success" + __re_error_msgid_idx[iVar1],5);
    return pcVar2;
  }
  return (char *)0x0;
}

