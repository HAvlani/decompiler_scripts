
int getmonth(char *month,char **ea)

{
  char cVar1;
  byte bVar2;
  byte *pbVar3;
  byte *pbVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  bool bVar8;
  
  cVar1 = blanks[(byte)*month];
  while (cVar1 != '\0') {
    pbVar4 = (byte *)month + 1;
    month = (char *)((byte *)month + 1);
    cVar1 = blanks[*pbVar4];
  }
  uVar5 = 0;
  uVar7 = 0xc;
  do {
    uVar6 = uVar5 + uVar7 >> 1;
    pbVar4 = (byte *)monthtab[uVar6].name;
    bVar2 = *pbVar4;
    pbVar3 = (byte *)month;
    while( true ) {
      if (bVar2 == 0) {
        if (ea != (char **)0x0) {
          *ea = (char *)pbVar3;
        }
        return monthtab[uVar6].val;
      }
      bVar8 = bVar2 <= (byte)fold_toupper[*pbVar3];
      if (!bVar8) goto LAB_001070ff;
      if (bVar8 && fold_toupper[*pbVar3] != bVar2) break;
      bVar2 = pbVar4[1];
      pbVar4 = pbVar4 + 1;
      pbVar3 = pbVar3 + 1;
    }
    uVar5 = uVar6 + 1;
    uVar6 = uVar7;
LAB_001070ff:
    uVar7 = uVar6;
    if (uVar6 <= uVar5) {
      return 0;
    }
  } while( true );
}

