
/* WARNING: Removing unreachable block (ram,0x00108cc8) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

longdouble adjust_value(int inexact_style,longdouble value)

{
  ulong uVar1;
  undefined8 in_RDX;
  float10 fVar2;
  
  if ((float10)_DAT_0011212c <= value._0_10_) {
    uVar1 = (long)ROUND(value._0_10_ - (float10)_DAT_0011212c) ^ 0x8000000000000000;
  }
  else {
    uVar1 = (ulong)ROUND(value._0_10_);
  }
  fVar2 = (float10)uVar1;
  if ((long)uVar1 < 0) {
    fVar2 = fVar2 + (float10)_DAT_00112128;
  }
  if (((inexact_style == 0) && (value._0_10_ != fVar2)) && (uVar1 = uVar1 + 1, (long)uVar1 < 0)) {
    return (longdouble)CONCAT88(in_RDX,uVar1);
  }
  return (longdouble)CONCAT88(in_RDX,uVar1);
}

