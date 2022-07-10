
void add_field_list(char *str)

{
  outlist **ppoVar1;
  char cVar2;
  outlist *poVar3;
  char *pcVar4;
  size_t sVar5;
  char *pcVar6;
  undefined8 uVar7;
  uint uVar8;
  
  do {
    pcVar6 = (char *)0x0;
    pcVar4 = strpbrk(str,", \t");
    if (pcVar4 != (char *)0x0) {
      *pcVar4 = '\0';
      pcVar6 = pcVar4 + 1;
    }
    cVar2 = *str;
    if (cVar2 == '0') {
      if (str[1] != '\0') {
        pcVar6 = quote(str);
        uVar7 = dcgettext(0,"invalid field specifier: %s",5);
                    /* WARNING: Subroutine does not return */
        error(1,0,uVar7,pcVar6);
      }
      sVar5 = 0;
      uVar8 = 0;
    }
    else {
      if (1 < (byte)(cVar2 - 0x31U)) {
        pcVar6 = quote(str);
        uVar7 = dcgettext(0,"invalid file number in field spec: %s",5);
                    /* WARNING: Subroutine does not return */
        error(1,0,uVar7,pcVar6);
      }
      if (str[1] != '.') {
        pcVar6 = quote(str);
        uVar7 = dcgettext(0,"invalid field specifier: %s",5);
                    /* WARNING: Subroutine does not return */
        error(1,0,uVar7,pcVar6);
      }
      uVar8 = (int)cVar2 - 0x30;
      sVar5 = string_to_join_field(str + 2);
      if (2 < uVar8) {
                    /* WARNING: Subroutine does not return */
        __assert_fail("file == 0 || file == 1 || file == 2","src/join.c",0x337,"add_field");
      }
      if ((uVar8 == 0) && (sVar5 != 0)) {
                    /* WARNING: Subroutine does not return */
        __assert_fail("file != 0 || field == 0","src/join.c",0x338,"add_field");
      }
    }
    poVar3 = (outlist *)xmalloc(0x18);
    poVar3->file = uVar8;
    poVar3->field = sVar5;
    poVar3->next = (outlist *)0x0;
    ppoVar1 = &outlist_end->next;
    outlist_end = poVar3;
    *ppoVar1 = poVar3;
    str = pcVar6;
    if (pcVar6 == (char *)0x0) {
      return;
    }
  } while( true );
}

