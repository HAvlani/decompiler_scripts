
_Bool first_last_page(int oi,char c,char *pages)

{
  _Bool _Var1;
  strtol_error sVar2;
  size_t sVar3;
  char *pcVar4;
  intmax_t iVar5;
  char cVar6;
  char *pcVar7;
  long in_FS_OFFSET;
  char *p;
  uintmax_t first;
  uintmax_t last;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  last = 0xffffffffffffffff;
  sVar2 = xstrtoumax(pages,&p,10,&first,"");
  if ((sVar2 & ~LONGINT_INVALID_SUFFIX_CHAR) != LONGINT_OK) {
LAB_00103656:
    pcVar4 = (char *)(ulong)sVar2;
    xstrtol_fatal(pcVar4,oi,(int)c,long_options,pages);
    pcVar7 = pcVar4;
    sVar3 = strlen(pcVar4);
    if (sVar3 < 0x80000000) {
      col_sep_string = pcVar4;
      col_sep_length = (int)sVar3;
      return SUB81(sVar3,0);
    }
    integer_overflow();
    pcVar4 = (char *)dcgettext(0,"invalid number of columns",5);
    iVar5 = xdectoimax(pcVar7,1,0x7fffffff,"",pcVar4,0);
    columns = (int)iVar5;
    explicit_columns = true;
    return SUB81(iVar5,0);
  }
  if ((p != pages) && (first != 0)) {
    cVar6 = *p;
    if (cVar6 == ':') {
      pcVar7 = p + 1;
      sVar2 = xstrtoumax(pcVar7,&p,10,&last,"");
      if (sVar2 != LONGINT_OK) goto LAB_00103656;
      if ((p == pcVar7) || (last < first)) goto LAB_001035e8;
      cVar6 = *p;
    }
    if (cVar6 == '\0') {
      first_page_number = first;
      last_page_number = last;
      _Var1 = true;
      goto LAB_001035ea;
    }
  }
LAB_001035e8:
  _Var1 = false;
LAB_001035ea:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return _Var1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

