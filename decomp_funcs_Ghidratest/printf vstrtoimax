
/* WARNING: Could not reconcile some variable overlaps */

intmax_t vstrtoimax(char *s)

{
  long lVar1;
  char cVar2;
  int *piVar3;
  ulong uVar4;
  size_t sVar5;
  size_t sVar6;
  undefined8 uVar7;
  char *__s;
  long in_FS_OFFSET;
  char *end;
  mbstate_t mbstate;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  if (((*s == '\"') || (*s == '\'')) && (uVar4 = (ulong)(byte)s[1], s[1] != 0)) {
    __s = s + 1;
    sVar5 = __ctype_get_mb_cur_max();
    if (sVar5 < 2) {
      cVar2 = s[2];
    }
    else {
      if (s[2] == '\0') goto LAB_0010306c;
      mbstate = (mbstate_t)0x0;
      sVar5 = strlen(__s);
      sVar6 = rpl_mbrtowc((wchar_t *)&end,__s,sVar5,&mbstate);
      if (0 < (long)sVar6) {
        uVar4 = (ulong)(int)end;
        __s = s + sVar6;
      }
      cVar2 = __s[1];
    }
    if ((cVar2 != '\0') && (posixly_correct == false)) {
      uVar7 = dcgettext(0,"warning: %s: character(s) following character constant have been ignored"
                        ,5);
      error(0,0,uVar7,__s + 1);
    }
  }
  else {
    piVar3 = __errno_location();
    *piVar3 = 0;
    uVar4 = __strtol_internal(s,&end,0,0);
    verify_numeric(s,(char *)CONCAT44(end._4_4_,(int)end));
  }
LAB_0010306c:
  if (lVar1 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

