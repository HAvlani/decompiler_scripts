
void format_user_or_group(char *name,uintmax_t id,int width)

{
  int iVar1;
  size_t s_len;
  
  if (name != (char *)0x0) {
    iVar1 = gnu_mbswidth(name,0);
    iVar1 = width - iVar1;
    if (iVar1 < 0) {
      iVar1 = 0;
    }
    s_len = strlen(name);
    dired_outbuf(name,s_len);
    do {
      iVar1 = iVar1 + -1;
      dired_outbyte(' ');
    } while (iVar1 != -1);
    return;
  }
  iVar1 = __printf_chk(1,"%*lu ",width,id);
  dired_pos = dired_pos + iVar1;
  return;
}

