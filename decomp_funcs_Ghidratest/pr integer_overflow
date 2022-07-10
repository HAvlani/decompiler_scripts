
void integer_overflow(void)

{
  strtol_error sVar1;
  undefined8 uVar2;
  size_t sVar3;
  char *pcVar4;
  intmax_t iVar5;
  char cVar6;
  char *s;
  char cVar7;
  ulong uVar8;
  char *pcVar9;
  long in_FS_OFFSET;
  char *pcStack80;
  uintmax_t uStack72;
  uintmax_t uStack64;
  long lStack56;
  
  uVar2 = dcgettext(0,"integer overflow",5);
  cVar7 = '\0';
  uVar8 = 1;
  error(1,0,uVar2);
  lStack56 = *(long *)(in_FS_OFFSET + 0x28);
  uStack64 = 0xffffffffffffffff;
  sVar1 = xstrtoumax(s,&pcStack80,10,&uStack72,"");
  if ((sVar1 & ~LONGINT_INVALID_SUFFIX_CHAR) == LONGINT_OK) {
    if ((pcStack80 != s) && (uStack72 != 0)) {
      cVar6 = *pcStack80;
      if (cVar6 == ':') {
        pcVar9 = pcStack80 + 1;
        sVar1 = xstrtoumax(pcVar9,&pcStack80,10,&uStack64,"");
        if (sVar1 != LONGINT_OK) goto LAB_00103656;
        if ((pcStack80 == pcVar9) || (uStack64 < uStack72)) goto LAB_001035ea;
        cVar6 = *pcStack80;
      }
      if (cVar6 == '\0') {
        first_page_number = uStack72;
        last_page_number = uStack64;
      }
    }
LAB_001035ea:
    if (lStack56 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
    return;
  }
LAB_00103656:
  pcVar4 = (char *)(ulong)sVar1;
  xstrtol_fatal(pcVar4,uVar8 & 0xffffffff,(int)cVar7,long_options,s);
  pcVar9 = pcVar4;
  sVar3 = strlen(pcVar4);
  if (0x7fffffff < sVar3) {
    integer_overflow();
    pcVar4 = (char *)dcgettext(0,"invalid number of columns",5);
    iVar5 = xdectoimax(pcVar9,1,0x7fffffff,"",pcVar4,0);
    columns = (int)iVar5;
    explicit_columns = true;
    return;
  }
  col_sep_string = pcVar4;
  col_sep_length = (int)sVar3;
  return;
}

