
void argmatch_valid(char **arglist,void *vallist,size_t valsize)

{
  FILE *__stream;
  int iVar1;
  char *pcVar2;
  long lVar3;
  void *__s1;
  
  __stream = stderr;
  __s1 = (void *)0x0;
  pcVar2 = (char *)dcgettext(0,"Valid arguments are:",5);
  fputs_unlocked(pcVar2,__stream);
  lVar3 = 0;
  pcVar2 = *arglist;
  while (pcVar2 != (char *)0x0) {
    if ((lVar3 == 0) || (iVar1 = memcmp(__s1,vallist,valsize), iVar1 != 0)) {
      pcVar2 = quote(pcVar2);
      __fprintf_chk(stderr,1,"\n  - %s",pcVar2);
      __s1 = vallist;
    }
    else {
      pcVar2 = quote(pcVar2);
      __fprintf_chk(stderr,1,&DAT_00111be7,pcVar2);
    }
    lVar3 = lVar3 + 1;
    vallist = (void *)((long)vallist + valsize);
    pcVar2 = arglist[lVar3];
  }
  pcVar2 = stderr->_IO_write_ptr;
  if (pcVar2 < stderr->_IO_write_end) {
    stderr->_IO_write_ptr = pcVar2 + 1;
    *pcVar2 = '\n';
    return;
  }
  __overflow(stderr,10);
  return;
}

