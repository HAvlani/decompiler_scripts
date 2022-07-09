
void replace_invalid_chars(char *cell)

{
  char *pcVar1;
  long lVar2;
  int iVar3;
  size_t sVar4;
  size_t __n;
  char *pcVar5;
  char *s;
  long in_FS_OFFSET;
  wchar_t wc;
  mbstate_t mbstate;
  
  lVar2 = *(long *)(in_FS_OFFSET + 0x28);
  sVar4 = strlen(cell);
  mbstate = (mbstate_t)0x0;
  pcVar1 = cell + sVar4;
  if (cell != pcVar1) {
    s = cell;
    do {
      while( true ) {
        __n = rpl_mbrtowc(&wc,s,(long)pcVar1 - (long)s,&mbstate);
        if (__n <= (ulong)((long)pcVar1 - (long)s)) break;
        __n = 1;
LAB_00105794:
        s = s + __n;
        *cell = '?';
        cell = cell + 1;
        mbstate = (mbstate_t)0x0;
        if (pcVar1 == s) goto LAB_001057ac;
      }
      iVar3 = iswcntrl(wc);
      if (iVar3 != 0) goto LAB_00105794;
      pcVar5 = s + __n;
      memmove(cell,s,__n);
      cell = cell + __n;
      s = pcVar5;
    } while (pcVar1 != pcVar5);
  }
LAB_001057ac:
  *cell = '\0';
  if (lVar2 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

