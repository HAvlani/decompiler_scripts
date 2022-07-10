
_Bool build_type_arg(char **typep,re_pattern_buffer *regexp,char *fastmap)

{
  char cVar1;
  size_t length;
  char *pcVar2;
  
  cVar1 = *optarg;
  if (cVar1 == 'p') {
    pcVar2 = optarg + 1;
    *typep = optarg;
    optarg = pcVar2;
    pcVar2 = optarg;
    regexp->buffer = (re_dfa_t *)0x0;
    regexp->fastmap = fastmap;
    regexp->allocated = 0;
    regexp->translate = (uchar *)0x0;
    rpl_re_syntax_options = 0x2c6;
    length = strlen(pcVar2);
    pcVar2 = rpl_re_compile_pattern(pcVar2,length,regexp);
    if (pcVar2 != (char *)0x0) {
                    /* WARNING: Subroutine does not return */
      error(1,0,"%s",pcVar2);
    }
    return true;
  }
  if (cVar1 < 'q') {
    if ((cVar1 != 'a') && (cVar1 != 'n')) {
      return false;
    }
  }
  else if (cVar1 != 't') {
    return false;
  }
  *typep = optarg;
  return true;
}

