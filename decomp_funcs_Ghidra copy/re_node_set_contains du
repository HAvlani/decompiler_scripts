
/* WARNING: Unknown calling convention yet parameter storage is locked */

Idx re_node_set_contains(void)

{
  ulong uVar1;
  ulong uVar2;
  long in_RDX;
  long *in_RSI;
  ulong uVar3;
  long in_RDI;
  
  if (0 < in_RDI) {
    uVar3 = 0;
    uVar1 = in_RDI - 1;
    while (uVar2 = uVar1, uVar3 < uVar2) {
      uVar1 = uVar2 + uVar3 >> 1;
      if (*(long *)(*in_RSI + uVar1 * 8) < in_RDX) {
        uVar3 = uVar1 + 1;
        uVar1 = uVar2;
      }
    }
    if (in_RDX == *(long *)(*in_RSI + uVar3 * 8)) {
      return uVar3 + 1;
    }
  }
  return 0;
}

