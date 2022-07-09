
/* WARNING: Unknown calling convention yet parameter storage is locked */

bin_tree_t * create_token_tree(void)

{
  byte *pbVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  long lVar6;
  bin_tree_t *pbVar7;
  undefined8 *puVar8;
  int iVar9;
  bin_tree_t **in_RCX;
  bin_tree_t **in_RDX;
  int *in_RSI;
  long lVar10;
  long lVar11;
  undefined8 *in_RDI;
  undefined4 *in_R8;
  
  iVar9 = *in_RSI;
  if (iVar9 == 0xf) {
    puVar8 = (undefined8 *)malloc(0x3c8);
    if (puVar8 == (undefined8 *)0x0) {
      return (bin_tree_t *)0x0;
    }
    uVar2 = *in_RDI;
    *in_RDI = puVar8;
    iVar9 = 1;
    lVar10 = 0;
    *puVar8 = uVar2;
    lVar6 = 8;
  }
  else {
    lVar10 = (long)iVar9;
    puVar8 = (undefined8 *)*in_RDI;
    iVar9 = iVar9 + 1;
    lVar6 = lVar10 * 0x40 + 8;
  }
  lVar11 = lVar10 * 0x40;
  *in_RSI = iVar9;
  pbVar7 = (bin_tree_t *)(lVar6 + (long)puVar8);
  puVar8[lVar10 * 8 + 1] = 0;
  puVar8[lVar10 * 8 + 2] = in_RDX;
  puVar8[lVar10 * 8 + 3] = in_RCX;
  uVar3 = in_R8[1];
  uVar4 = in_R8[2];
  uVar5 = in_R8[3];
  *(undefined4 *)(puVar8 + lVar10 * 8 + 6) = *in_R8;
  *(undefined4 *)((long)puVar8 + lVar11 + 0x34) = uVar3;
  *(undefined4 *)(puVar8 + lVar10 * 8 + 7) = uVar4;
  *(undefined4 *)((long)puVar8 + lVar11 + 0x3c) = uVar5;
  pbVar1 = (byte *)((long)puVar8 + lVar11 + 0x3a);
  *pbVar1 = *pbVar1 & 0xf3;
  puVar8[lVar10 * 8 + 4] = 0;
  puVar8[lVar10 * 8 + 5] = 0;
  puVar8[lVar10 * 8 + 8] = 0xffffffffffffffff;
  if (in_RDX != (bin_tree_t **)0x0) {
    *in_RDX = pbVar7;
  }
  if (in_RCX != (bin_tree_t **)0x0) {
    *in_RCX = pbVar7;
  }
  return pbVar7;
}

