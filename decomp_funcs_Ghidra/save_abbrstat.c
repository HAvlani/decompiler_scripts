
_Bool save_abbr(timezone_t tz,tm *tm)

{
  tm *__s2;
  tm_zone *ptVar1;
  int iVar2;
  size_t sVar3;
  timezone_t ptVar4;
  char *__s1;
  
  __s2 = (tm *)tm->tm_zone;
  if (__s2 == (tm *)0x0) {
    return true;
  }
  if ((__s2 < tm) || (tm + 1 <= __s2)) {
    __s1 = &tz->field_0x9;
    if (*(char *)&__s2->tm_sec != '\0') {
      do {
        iVar2 = strcmp(__s1,(char *)__s2);
        while( true ) {
          if (iVar2 == 0) goto LAB_0010b638;
          if ((*__s1 == '\0') && ((__s1 != &tz->field_0x9 || (tz->tz_is_set == '\0')))) {
            sVar3 = strlen((char *)__s2);
            if ((long)(sVar3 + 1) < (long)tz + (0x80 - (long)__s1)) {
              memcpy(__s1,__s2,sVar3 + 1);
              __s1[sVar3 + 1] = '\0';
            }
            else {
              ptVar4 = tzalloc((char *)__s2);
              tz->next = ptVar4;
              if (ptVar4 == (timezone_t)0x0) {
                return false;
              }
              ptVar4->tz_is_set = '\0';
              __s1 = &ptVar4->field_0x9;
            }
            goto LAB_0010b638;
          }
          sVar3 = strlen(__s1);
          __s1 = __s1 + sVar3 + 1;
          if ((*__s1 != '\0') || (ptVar1 = tz->next, ptVar1 == (tm_zone *)0x0)) break;
          __s1 = &ptVar1->field_0x9;
          iVar2 = strcmp(__s1,(char *)__s2);
          tz = ptVar1;
        }
      } while( true );
    }
    __s1 = "";
LAB_0010b638:
    tm->tm_zone = __s1;
  }
  return true;
}

