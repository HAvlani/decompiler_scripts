
char * create_fullname(char *gecos_name,char *user_name)

{
  char cVar1;
  undefined auVar2 [16];
  size_t sVar3;
  ulong uVar4;
  char *pcVar5;
  ushort **ppuVar6;
  __int32_t **pp_Var7;
  char *pcVar8;
  byte *pbVar9;
  char *pcVar10;
  long lVar11;
  ulong uVar12;
  bool bVar13;
  
  lVar11 = 0;
  sVar3 = strlen(gecos_name);
  uVar12 = sVar3 + 1;
  pcVar8 = gecos_name;
  do {
    while( true ) {
      cVar1 = *pcVar8;
      pcVar8 = pcVar8 + 1;
      if (cVar1 != '&') break;
      lVar11 = lVar11 + 1;
    }
  } while (cVar1 != '\0');
  if (lVar11 != 0) {
    sVar3 = strlen(user_name);
    auVar2 = ZEXT816(sVar3) * ZEXT816(lVar11 - 1);
    uVar4 = SUB168(auVar2,0);
    if ((SUB168(auVar2 >> 0x40,0) != 0) ||
       (bVar13 = CARRY8(uVar12,uVar4), uVar12 = uVar12 + uVar4, bVar13)) {
                    /* WARNING: Subroutine does not return */
      xalloc_die();
    }
  }
  pcVar5 = (char *)xmalloc(uVar12);
  cVar1 = *gecos_name;
  pcVar8 = pcVar5;
  do {
    while( true ) {
      if (cVar1 == '\0') {
        *pcVar8 = '\0';
        return pcVar5;
      }
      if (cVar1 == '&') break;
      *pcVar8 = cVar1;
      pcVar10 = pcVar8 + 1;
LAB_00102ea6:
      cVar1 = gecos_name[1];
      gecos_name = gecos_name + 1;
      pcVar8 = pcVar10;
    }
    ppuVar6 = __ctype_b_loc();
    uVar12 = (ulong)(byte)*user_name;
    pbVar9 = (byte *)user_name;
    pcVar10 = pcVar8;
    if ((*(byte *)((long)*ppuVar6 + uVar12 * 2 + 1) & 2) != 0) {
      pp_Var7 = __ctype_toupper_loc();
      pcVar10 = pcVar8 + 1;
      pbVar9 = (byte *)(user_name + 1);
      *pcVar8 = (char)(*pp_Var7)[uVar12];
      uVar12 = (ulong)(byte)user_name[1];
    }
    if ((char)uVar12 == '\0') goto LAB_00102ea6;
    do {
      pbVar9 = pbVar9 + 1;
      *pcVar10 = (char)uVar12;
      pcVar10 = pcVar10 + 1;
      uVar12 = (ulong)*pbVar9;
    } while (*pbVar9 != 0);
    cVar1 = gecos_name[1];
    gecos_name = gecos_name + 1;
    pcVar8 = pcVar10;
  } while( true );
}

