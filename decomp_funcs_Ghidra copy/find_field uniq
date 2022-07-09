
/* WARNING: Unknown calling convention yet parameter storage is locked */

char * find_field(void)

{
  ushort *puVar1;
  size_t sVar2;
  ushort **ppuVar3;
  ulong uVar4;
  ulong uVar5;
  ushort uVar6;
  ulong uVar7;
  byte *in_RSI;
  long in_RDI;
  ulong uVar8;
  
  sVar2 = skip_fields;
  uVar7 = in_RDI - 1;
  if ((skip_fields == 0) || (uVar7 == 0)) {
    uVar5 = 0;
  }
  else {
    ppuVar3 = __ctype_b_loc();
    uVar8 = 0;
    puVar1 = *ppuVar3;
    uVar4 = (ulong)*in_RSI;
    uVar6 = puVar1[uVar4];
    uVar5 = 0;
    while( true ) {
      while (((char)uVar4 == '\n' || ((uVar6 & 1) != 0))) {
        uVar5 = uVar5 + 1;
        if (uVar7 <= uVar5) goto LAB_00103510;
        uVar4 = (ulong)in_RSI[uVar5];
        uVar6 = puVar1[uVar4];
      }
      if (uVar7 <= uVar5) break;
      while (((char)uVar4 != '\n' && ((uVar6 & 1) == 0))) {
        uVar5 = uVar5 + 1;
        if (uVar5 == uVar7) goto LAB_00103510;
        uVar4 = (ulong)in_RSI[uVar5];
        uVar6 = puVar1[uVar4];
      }
      uVar8 = uVar8 + 1;
      if ((uVar7 <= uVar5) || (sVar2 <= uVar8)) break;
    }
LAB_00103510:
    uVar7 = uVar7 - uVar5;
  }
  if (skip_chars <= uVar7) {
    uVar7 = skip_chars;
  }
  return (char *)(in_RSI + uVar5 + uVar7);
}

