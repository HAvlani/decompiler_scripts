
void * heap_remove_top(heap *heap)

{
  ulong uVar1;
  size_t sVar2;
  void **ppvVar3;
  void *pvVar4;
  anon_subr_int_void_ptr_void_ptr_for_compare *paVar5;
  int iVar6;
  void **ppvVar7;
  void **ppvVar8;
  ulong uVar9;
  void *pvVar10;
  ulong uVar11;
  
  pvVar10 = (void *)0x0;
  sVar2 = heap->count;
  if (sVar2 != 0) {
    ppvVar3 = heap->array;
    uVar1 = sVar2 - 1;
    pvVar4 = ppvVar3[sVar2];
    pvVar10 = ppvVar3[1];
    heap->count = uVar1;
    ppvVar3[1] = pvVar4;
    paVar5 = heap->compare;
    ppvVar3 = heap->array;
    pvVar4 = ppvVar3[1];
    if (uVar1 >> 1 == 0) {
      ppvVar7 = ppvVar3 + 1;
LAB_0010ef48:
      *ppvVar7 = pvVar4;
    }
    else {
      uVar11 = 1;
      do {
        uVar9 = uVar11 * 2;
        if (uVar9 < uVar1) {
          iVar6 = (*paVar5)(ppvVar3[uVar11 * 2],ppvVar3[uVar9 + 1]);
          ppvVar8 = ppvVar3 + uVar11 * 2;
          if (iVar6 < 0) {
            ppvVar8 = ppvVar3 + uVar9 + 1;
            uVar9 = uVar9 + 1;
          }
        }
        else {
          ppvVar8 = ppvVar3 + uVar11 * 2;
        }
        iVar6 = (*paVar5)(*ppvVar8,pvVar4);
        ppvVar7 = ppvVar3 + uVar11;
        if (iVar6 < 1) goto LAB_0010ef48;
        *ppvVar7 = *ppvVar8;
        uVar11 = uVar9;
      } while (uVar9 <= uVar1 >> 1);
      *ppvVar8 = pvVar4;
    }
  }
  return pvVar10;
}

