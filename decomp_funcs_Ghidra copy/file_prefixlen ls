
idx_t file_prefixlen(char *s,ptrdiff_t *len)

{
  char cVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  bool bVar7;
  
  uVar2 = *len;
  uVar5 = 0;
  uVar4 = 0;
joined_r0x0010def7:
  do {
    uVar6 = uVar4;
    uVar3 = uVar5;
    uVar5 = uVar3 + 1;
    if ((uVar5 < uVar2) && (s[uVar3] == '.')) {
      cVar1 = s[uVar3 + 1];
      if (cVar1 < '[') {
        if ('@' < cVar1) goto LAB_0010df1d;
      }
      else if (((byte)(cVar1 + 0x9fU) < 0x1a) || (cVar1 == '~')) {
LAB_0010df1d:
        for (uVar5 = uVar3 + 2; uVar4 = uVar6, uVar5 < uVar2; uVar5 = uVar5 + 1) {
          cVar1 = s[uVar5];
          if (cVar1 < '[') {
            if ((cVar1 < 'A') && (9 < (byte)(cVar1 - 0x30U))) break;
          }
          else if ((0x19 < (byte)(cVar1 + 0x9fU)) && (cVar1 != '~')) break;
        }
        goto joined_r0x0010def7;
      }
    }
    bVar7 = uVar2 == uVar3;
    if ((long)uVar2 < 0) {
      bVar7 = s[uVar3] == '\0';
    }
    uVar4 = uVar5;
    if (bVar7) {
      *len = uVar3;
      return uVar6;
    }
  } while( true );
}

