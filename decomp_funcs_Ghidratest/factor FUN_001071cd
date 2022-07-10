
int FUN_001071cd(long param_1,long param_2,long param_3)

{
  ulong uVar1;
  ulong uVar2;
  
  do {
    param_3 = param_3 + -1;
    if (param_3 < 0) {
      return 0;
    }
    uVar1 = *(ulong *)(param_1 + param_3 * 8);
    uVar2 = *(ulong *)(param_2 + param_3 * 8);
  } while (uVar1 == uVar2);
  return (-(uint)(uVar2 < uVar1) & 2) - 1;
}

