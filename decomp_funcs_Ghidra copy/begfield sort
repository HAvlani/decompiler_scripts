
/* WARNING: Unknown calling convention yet parameter storage is locked */

char * begfield(void)

{
  long lVar1;
  long lVar2;
  byte *pbVar3;
  char cVar4;
  long *in_RDX;
  long in_RSI;
  byte *in_RDI;
  byte *pbVar5;
  long lVar6;
  
  pbVar3 = in_RDI + in_RSI + -1;
  lVar1 = *in_RDX;
  lVar2 = in_RDX[1];
  pbVar5 = in_RDI;
  if (tab == 0x80) {
    if (pbVar3 <= in_RDI) goto LAB_00107b70;
    lVar6 = lVar1 + -1;
    if (lVar1 != 0) {
      do {
        cVar4 = blanks[*in_RDI];
        while (cVar4 == '\0') {
          pbVar5 = in_RDI;
          if (pbVar3 <= in_RDI) goto LAB_00107b70;
          do {
            in_RDI = in_RDI + 1;
            pbVar5 = pbVar3;
            if (pbVar3 == in_RDI) goto LAB_00107b70;
            cVar4 = blanks[*in_RDI];
          } while ((_Bool)cVar4 == false);
          pbVar5 = in_RDI;
          if (pbVar3 <= in_RDI) goto LAB_00107b70;
          lVar6 = lVar6 + -1;
          if (lVar6 == -1) goto LAB_00107b98;
        }
        in_RDI = in_RDI + 1;
        if (pbVar3 <= in_RDI) {
          if (in_RDI + lVar2 < pbVar3) {
            pbVar3 = in_RDI + lVar2;
          }
          return (char *)pbVar3;
        }
      } while( true );
    }
  }
  else {
    if (pbVar3 <= in_RDI) goto LAB_00107b70;
    lVar6 = lVar1 + -1;
    if (lVar1 != 0) {
      do {
        while (tab == (char)*in_RDI) {
          pbVar5 = in_RDI;
          if ((pbVar3 <= in_RDI) || (in_RDI = in_RDI + 1, pbVar5 = in_RDI, pbVar3 <= in_RDI))
          goto LAB_00107b70;
          lVar6 = lVar6 + -1;
          if (lVar6 == -1) goto LAB_00107b98;
        }
        in_RDI = in_RDI + 1;
        pbVar5 = in_RDI;
      } while (in_RDI < pbVar3);
      goto LAB_00107b70;
    }
  }
LAB_00107b98:
  if (*(char *)(in_RDX + 6) != '\0') {
    do {
      if (blanks[*pbVar5] == false) {
        if (pbVar5 + lVar2 < pbVar3) {
          pbVar3 = pbVar5 + lVar2;
        }
        return (char *)pbVar3;
      }
      pbVar5 = pbVar5 + 1;
    } while (pbVar5 < pbVar3);
  }
LAB_00107b70:
  if (pbVar5 + lVar2 < pbVar3) {
    pbVar3 = pbVar5 + lVar2;
  }
  return (char *)pbVar3;
}

