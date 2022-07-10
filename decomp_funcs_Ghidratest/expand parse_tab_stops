
void parse_tab_stops(char *stops)

{
  char cVar1;
  char cVar2;
  char cVar3;
  char cVar4;
  _Bool _Var5;
  ushort **ppuVar6;
  size_t s;
  char *pcVar7;
  char *pcVar8;
  undefined8 uVar9;
  uint uVar10;
  char cVar11;
  ulong uVar12;
  ulong tabval;
  byte bVar13;
  char *local_48;
  
  bVar13 = *stops;
  if (bVar13 != 0) {
    cVar3 = '\x01';
    cVar2 = '\0';
    local_48 = (char *)0x0;
    cVar4 = '\0';
    tabval = 0;
    cVar1 = '\0';
LAB_0010310e:
    do {
      cVar11 = cVar1;
      uVar12 = tabval;
      if ((bVar13 == 0x2c) || (ppuVar6 = __ctype_b_loc(), (*(byte *)(*ppuVar6 + bVar13) & 1) != 0))
      {
        if (cVar11 != '\0') {
          if (cVar4 == '\0') {
            if (cVar2 != '\0') {
              cVar2 = set_increment_size(tabval);
              if ((_Bool)cVar2 == false) goto LAB_001033bf;
              cVar11 = '\0';
              bVar13 = stops[1];
              stops = stops + 1;
              cVar1 = '\0';
              if (bVar13 == 0) break;
              goto LAB_0010310e;
            }
            add_tab_stop(tabval);
            cVar11 = '\0';
            cVar4 = cVar2;
          }
          else {
            cVar4 = set_extend_size(tabval);
            if ((_Bool)cVar4 == false) goto LAB_001033bf;
            cVar11 = '\0';
          }
        }
      }
      else if (bVar13 == 0x2f) {
        if (cVar11 == '\0') {
          cVar2 = '\0';
          cVar4 = '\x01';
        }
        else {
          cVar2 = '\0';
          pcVar7 = quote(stops);
          uVar9 = dcgettext(0,"\'/\' specifier not at start of number: %s",5);
          error(0,0,uVar9,pcVar7);
          cVar3 = '\0';
          cVar4 = cVar11;
        }
      }
      else if (bVar13 == 0x2b) {
        if (cVar11 == '\0') {
          cVar4 = '\0';
          cVar2 = '\x01';
        }
        else {
          pcVar7 = quote(stops);
          uVar9 = dcgettext(0,"\'+\' specifier not at start of number: %s",5);
          error(0,0,uVar9,pcVar7);
          cVar3 = '\0';
          cVar4 = '\0';
          cVar2 = cVar11;
        }
      }
      else {
        uVar10 = (int)(char)bVar13 - 0x30;
        if (9 < uVar10) {
          pcVar7 = quote(stops);
          uVar9 = dcgettext(0,"tab size contains invalid character(s): %s",5);
          error(0,0,uVar9,pcVar7);
          goto LAB_001033bf;
        }
        if (cVar11 == '\0') {
          cVar11 = '\x01';
          uVar12 = (long)(int)uVar10;
          local_48 = stops;
        }
        else if ((0x1999999999999999 < tabval) ||
                (uVar12 = (long)(int)uVar10 + tabval * 10, uVar12 < tabval)) {
          s = strspn(local_48,"0123456789");
          pcVar7 = ximemdup0(local_48,s);
          pcVar8 = quote(pcVar7);
          uVar9 = dcgettext(0,"tab stop is too large %s",5);
          error(0,0,uVar9,pcVar8);
          rpl_free(pcVar7);
          cVar3 = '\0';
          stops = local_48 + (s - 1);
          uVar12 = tabval;
        }
      }
      bVar13 = stops[1];
      stops = stops + 1;
      tabval = uVar12;
      cVar1 = cVar11;
    } while (bVar13 != 0);
    if (cVar11 != '\0') {
      if (cVar3 == '\0') goto LAB_001033bf;
      if (cVar4 != '\0') {
        _Var5 = set_extend_size(uVar12);
        if (_Var5 != false) {
          return;
        }
        goto LAB_001033bf;
      }
      if (cVar2 == '\0') {
        add_tab_stop(uVar12);
        return;
      }
      cVar3 = set_increment_size(uVar12);
    }
    if (cVar3 == '\0') {
LAB_001033bf:
                    /* WARNING: Subroutine does not return */
      exit(1);
    }
  }
  return;
}

