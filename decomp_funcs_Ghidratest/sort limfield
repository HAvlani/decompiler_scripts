
/* WARNING: Unknown calling convention yet parameter storage is locked */

char * limfield(void)

{
  byte *pbVar1;
  ulong uVar2;
  byte *pbVar3;
  long in_RDX;
  char cVar4;
  long in_RSI;
  long lVar5;
  byte *in_RDI;
  ulong uVar6;
  long lVar7;
  
  uVar2 = *(ulong *)(in_RDX + 0x18);
  pbVar1 = in_RDI + in_RSI + -1;
  lVar5 = *(long *)(in_RDX + 0x10) + (ulong)(uVar2 == 0);
  if (tab == 0x80) {
    if ((in_RDI < pbVar1) && (lVar7 = lVar5 + -1, pbVar3 = in_RDI, lVar5 != 0)) {
      do {
        cVar4 = blanks[*pbVar3];
        while (cVar4 == '\0') {
          in_RDI = pbVar3;
          if (pbVar1 <= pbVar3) goto LAB_00107cb0;
          do {
            pbVar3 = pbVar3 + 1;
            in_RDI = pbVar1;
            if (pbVar1 == pbVar3) goto LAB_00107cb0;
            cVar4 = blanks[*pbVar3];
          } while ((_Bool)cVar4 == false);
          in_RDI = pbVar3;
          if ((pbVar1 <= pbVar3) || (lVar7 = lVar7 + -1, lVar7 == -1)) goto LAB_00107cb0;
        }
        in_RDI = pbVar3 + 1;
        pbVar3 = in_RDI;
      } while (in_RDI < pbVar1);
    }
  }
  else if ((in_RDI < pbVar1) && (uVar6 = lVar5 - 1, lVar5 != 0)) {
    do {
      while (tab == (char)*in_RDI) {
        if (pbVar1 <= in_RDI) goto LAB_00107cb0;
        if ((uVar2 | uVar6) == 0) {
          return (char *)in_RDI;
        }
        in_RDI = in_RDI + 1;
        if ((pbVar1 <= in_RDI) || (uVar6 = uVar6 - 1, uVar6 == 0xffffffffffffffff))
        goto LAB_00107cb0;
      }
      in_RDI = in_RDI + 1;
    } while (in_RDI < pbVar1);
  }
LAB_00107cb0:
  if (uVar2 == 0) {
    return (char *)in_RDI;
  }
  if ((*(char *)(in_RDX + 0x31) != '\0') && (in_RDI < pbVar1)) {
    while (blanks[*in_RDI] != false) {
      in_RDI = in_RDI + 1;
      if (pbVar1 == in_RDI) {
        pbVar3 = pbVar1 + uVar2;
        if (pbVar1 <= pbVar1 + uVar2) {
          pbVar3 = pbVar1;
        }
        return (char *)pbVar3;
      }
    }
  }
  pbVar3 = in_RDI + uVar2;
  if (pbVar1 <= in_RDI + uVar2) {
    pbVar3 = pbVar1;
  }
  return (char *)pbVar3;
}

