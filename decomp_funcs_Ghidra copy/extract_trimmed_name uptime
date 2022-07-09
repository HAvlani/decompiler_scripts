
char * extract_trimmed_name(STRUCT_UTMP *ut)

{
  char *__dest;
  size_t sVar1;
  char *pcVar2;
  
  __dest = (char *)xmalloc(0x21);
  strncpy(__dest,ut->ut_user,0x20);
  __dest[0x20] = '\0';
  sVar1 = strlen(__dest);
  pcVar2 = __dest + sVar1;
  if (__dest < pcVar2) {
    do {
      if (pcVar2[-1] != ' ') {
        return __dest;
      }
      pcVar2 = pcVar2 + -1;
      *pcVar2 = '\0';
    } while (__dest != pcVar2);
  }
  return __dest;
}

