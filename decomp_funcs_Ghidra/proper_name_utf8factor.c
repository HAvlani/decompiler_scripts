
char * proper_name_utf8(char *name_ascii,char *name_utf8)

{
  char cVar1;
  int iVar2;
  char *__s1;
  char *pcVar3;
  size_t sVar4;
  size_t sVar5;
  char *pcVar6;
  char *p;
  void *__dest;
  char *pcVar7;
  undefined8 *puVar8;
  char *p_00;
  
  __s1 = (char *)dcgettext(0,name_ascii,5);
  pcVar3 = locale_charset();
  iVar2 = c_strcasecmp(pcVar3,"UTF-8");
  pcVar6 = __s1;
  if (iVar2 == 0) {
    iVar2 = strcmp(__s1,name_ascii);
    if (name_utf8 == (char *)0x0) {
      if (iVar2 == 0) {
        return name_ascii;
      }
      cVar1 = mbsstr_trimmed_wordbounded(__s1,name_ascii);
      if (cVar1 != '\0') {
        return __s1;
      }
      p_00 = (char *)0x0;
      p = (char *)0x0;
    }
    else {
      pcVar7 = name_utf8;
      p_00 = (char *)0x0;
      pcVar3 = name_utf8;
LAB_00110212:
      if (iVar2 == 0) {
        return pcVar7;
      }
      cVar1 = mbsstr_trimmed_wordbounded(__s1,name_ascii);
      p = (char *)0x0;
      name_ascii = pcVar7;
      if (cVar1 != '\0') goto LAB_00110257;
LAB_0011022c:
      if (((pcVar3 != (char *)0x0) &&
          (cVar1 = mbsstr_trimmed_wordbounded(__s1,pcVar3), cVar1 != '\0')) ||
         ((name_utf8 != (char *)0x0 &&
          (cVar1 = mbsstr_trimmed_wordbounded(__s1,name_utf8), cVar1 != '\0')))) {
        name_utf8 = p_00;
        if (p == (char *)0x0) goto LAB_00110257;
        goto LAB_0011024f;
      }
    }
    sVar4 = strlen(__s1);
    sVar5 = strlen(name_ascii);
    pcVar6 = (char *)xmalloc(sVar4 + 4 + sVar5);
    __sprintf_chk(pcVar6,1,0xffffffffffffffff,"%s (%s)",__s1,name_ascii);
    if (p != (char *)0x0) {
      rpl_free(p);
    }
  }
  else {
    p = xstr_iconv(name_utf8,"UTF-8",pcVar3);
    sVar4 = strlen(pcVar3);
    __dest = xmalloc(sVar4 + 0xb);
    pcVar3 = (char *)memcpy(__dest,pcVar3,sVar4);
    puVar8 = (undefined8 *)(pcVar3 + sVar4);
    *puVar8 = 0x4c534e4152542f2f;
    *(undefined2 *)(puVar8 + 1) = 0x5449;
    *(undefined *)((long)puVar8 + 10) = 0;
    name_utf8 = xstr_iconv(name_utf8,"UTF-8",pcVar3);
    rpl_free(pcVar3);
    pcVar3 = p;
    if (name_utf8 == (char *)0x0) {
joined_r0x0011042b:
      if (p == (char *)0x0) {
        name_utf8 = (char *)0x0;
        iVar2 = strcmp(__s1,name_ascii);
        pcVar7 = name_ascii;
        p_00 = (char *)0x0;
        goto LAB_00110212;
      }
      iVar2 = strcmp(__s1,name_ascii);
      if (iVar2 == 0) {
        return p;
      }
      name_utf8 = (char *)0x0;
    }
    else {
      pcVar7 = strchr(name_utf8,0x3f);
      if (pcVar7 != (char *)0x0) {
        rpl_free(name_utf8);
        goto joined_r0x0011042b;
      }
      iVar2 = strcmp(__s1,name_ascii);
      pcVar7 = name_utf8;
      p_00 = name_utf8;
      if (p == (char *)0x0) goto LAB_00110212;
      if (iVar2 == 0) {
        if (p == name_utf8) {
          return p;
        }
        rpl_free(name_utf8);
        return p;
      }
    }
    cVar1 = mbsstr_trimmed_wordbounded(__s1,name_ascii);
    name_ascii = p;
    p_00 = name_utf8;
    if (cVar1 == '\0') goto LAB_0011022c;
LAB_0011024f:
    rpl_free(p);
    p_00 = name_utf8;
  }
LAB_00110257:
  if (p_00 != (char *)0x0) {
    rpl_free(p_00);
  }
  return pcVar6;
}

