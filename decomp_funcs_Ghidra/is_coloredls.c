
_Bool is_colored(indicator_no type)

{
  size_t sVar1;
  byte *pbVar2;
  int iVar3;
  _Bool _Var4;
  
  _Var4 = false;
  sVar1 = color_indicator[type].len;
  if (sVar1 != 0) {
    pbVar2 = (byte *)color_indicator[type].string;
    if (sVar1 == 1) {
      return *pbVar2 != 0x30;
    }
    _Var4 = true;
    if (sVar1 == 2) {
      iVar3 = *pbVar2 - 0x30;
      if (iVar3 == 0) {
        iVar3 = pbVar2[1] - 0x30;
      }
      return iVar3 != 0;
    }
  }
  return _Var4;
}

