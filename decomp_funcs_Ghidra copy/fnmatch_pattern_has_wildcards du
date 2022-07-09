
_Bool fnmatch_pattern_has_wildcards(char *str,int options)

{
  char cVar1;
  char *pcVar2;
  
  cVar1 = *str;
joined_r0x00106898:
  if (cVar1 == '\0') {
    return false;
  }
  pcVar2 = str + 1;
  switch(cVar1) {
  case '!':
  case '+':
  case '@':
    if ((options & 0x20U) == 0) break;
    cVar1 = str[1];
    str = pcVar2;
    if (cVar1 == '(') {
switchD_001068ab_caseD_2a:
      return true;
    }
    goto joined_r0x00106898;
  case '(':
  case ')':
  case '.':
  case '{':
  case '}':
    if ((options & 0x8000000U) != 0) {
      return true;
    }
    break;
  case '*':
  case '?':
  case '[':
    goto switchD_001068ab_caseD_2a;
  case '\\':
    if ((options & 0x8000000U) == 0) {
      if (((options & 2U) == 0) && (str[1] != '\0')) {
        pcVar2 = str + 2;
      }
      cVar1 = *pcVar2;
      str = pcVar2;
      goto joined_r0x00106898;
    }
  }
  cVar1 = str[1];
  str = pcVar2;
  goto joined_r0x00106898;
}

