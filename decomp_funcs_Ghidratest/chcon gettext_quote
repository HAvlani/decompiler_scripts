
char * gettext_quote(char *msgid,quoting_style s)

{
  byte *pbVar1;
  char *pcVar2;
  
  pbVar1 = (byte *)locale_charset();
  if ((*pbVar1 & 0xdf) == 0x55) {
    if (((((pbVar1[1] & 0xdf) == 0x54) && ((pbVar1[2] & 0xdf) == 0x46)) && (pbVar1[3] == 0x2d)) &&
       ((pbVar1[4] == 0x38 && (pbVar1[5] == 0)))) {
      pcVar2 = &DAT_0010bf05;
      if (*msgid != '`') {
        pcVar2 = &DAT_0010befa;
      }
      return pcVar2;
    }
  }
  else if (((((*pbVar1 & 0xdf) == 0x47) && ((pbVar1[1] & 0xdf) == 0x42)) && (pbVar1[2] == 0x31)) &&
          (((pbVar1[3] == 0x38 && (pbVar1[4] == 0x30)) &&
           ((pbVar1[5] == 0x33 && ((pbVar1[6] == 0x30 && (pbVar1[7] == 0)))))))) {
    pcVar2 = &DAT_0010befe;
    if (*msgid != '`') {
      pcVar2 = &DAT_0010bf02;
    }
    return pcVar2;
  }
  pcVar2 = "\"";
  if (s != clocale_quoting_style) {
    pcVar2 = "\'";
  }
  return pcVar2;
}

