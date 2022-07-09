
/* WARNING: Unknown calling convention yet parameter storage is locked */

void prfield(void)

{
  long lVar1;
  long *in_RDX;
  ulong in_RSI;
  ulong in_RDI;
  undefined8 *puVar2;
  
  if (in_RDI < in_RSI) {
    puVar2 = (undefined8 *)(in_RDI * 0x10 + *in_RDX);
    lVar1 = puVar2[1];
    if (lVar1 != 0) {
      (*(code *)PTR_fwrite_unlocked_0010df50)(*puVar2,1,lVar1,stdout);
      return;
    }
  }
  if (empty_filler != (char *)0x0) {
    fputs_unlocked(empty_filler,stdout);
    return;
  }
  return;
}

