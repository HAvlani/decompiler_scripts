
void write_counts(uintmax_t lines,uintmax_t words,uintmax_t chars,uintmax_t bytes,
                 uintmax_t linelength,char *file)

{
  long lVar1;
  char *pcVar2;
  char *pcVar3;
  char *pcVar4;
  long in_FS_OFFSET;
  char buf [21];
  
  pcVar3 = "%*s";
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  if (print_lines != false) {
    pcVar4 = umaxtostr(lines,buf);
    pcVar3 = " %*s";
    __printf_chk(1,"%*s",number_width,pcVar4);
  }
  pcVar4 = pcVar3;
  if (print_words != false) {
    pcVar2 = umaxtostr(words,buf);
    pcVar4 = " %*s";
    __printf_chk(1,pcVar3,number_width,pcVar2);
  }
  pcVar3 = pcVar4;
  if (print_chars != false) {
    pcVar2 = umaxtostr(chars,buf);
    pcVar3 = " %*s";
    __printf_chk(1,pcVar4,number_width,pcVar2);
  }
  pcVar4 = pcVar3;
  if (print_bytes != false) {
    pcVar2 = umaxtostr(bytes,buf);
    pcVar4 = " %*s";
    __printf_chk(1,pcVar3,number_width,pcVar2);
  }
  if (print_linelength != false) {
    pcVar3 = umaxtostr(linelength,buf);
    __printf_chk(1,pcVar4,number_width,pcVar3);
  }
  if (file != (char *)0x0) {
    pcVar3 = strchr(file,10);
    if (pcVar3 != (char *)0x0) {
      file = (char *)quotearg_n_style_colon(0,3,file);
    }
    __printf_chk(1," %s",file);
  }
  pcVar3 = stdout->_IO_write_ptr;
  if (pcVar3 < stdout->_IO_write_end) {
    stdout->_IO_write_ptr = pcVar3 + 1;
    *pcVar3 = '\n';
  }
  else {
    __overflow(stdout,10);
  }
  if (lVar1 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

