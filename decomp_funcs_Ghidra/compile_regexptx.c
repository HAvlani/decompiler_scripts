
void compile_regex(regex_data *regex)

{
  uchar *puVar1;
  size_t length;
  char *pcVar2;
  char *pcVar3;
  undefined8 uVar4;
  long lVar5;
  bool bVar6;
  
  bVar6 = ignore_case == false;
  pcVar3 = regex->string;
  (regex->pattern).fastmap = regex->fastmap;
  puVar1 = folded_chars;
  if (bVar6) {
    puVar1 = (uchar *)0x0;
  }
  (regex->pattern).buffer = (re_dfa_t *)0x0;
  (regex->pattern).allocated = 0;
  (regex->pattern).translate = puVar1;
  length = strlen(pcVar3);
  pcVar2 = rpl_re_compile_pattern(pcVar3,length,&regex->pattern);
  if (pcVar2 != (char *)0x0) {
    pcVar3 = quote(pcVar3);
    uVar4 = dcgettext(0,"%s (for regexp %s)",5);
    lVar5 = 1;
    error(1,0,uVar4,pcVar2,pcVar3);
    if (lVar5 < 1) {
      return;
    }
    do {
      pcVar3 = stdout->_IO_write_ptr;
      if (pcVar3 < stdout->_IO_write_end) {
        stdout->_IO_write_ptr = pcVar3 + 1;
        *pcVar3 = ' ';
      }
      else {
        __overflow(stdout,0x20);
      }
      lVar5 = lVar5 + -1;
    } while (lVar5 != 0);
    return;
  }
  rpl_re_compile_fastmap(&regex->pattern);
  return;
}

