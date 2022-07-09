
int heap_insert(heap *heap,void *item)

{
  anon_subr_int_void_ptr_void_ptr_for_compare *paVar1;
  void *pvVar2;
  int iVar3;
  void **ppvVar4;
  void **ppvVar5;
  ulong uVar6;
  
  uVar6 = heap->count;
  ppvVar5 = heap->array;
  if (heap->capacity - 1 <= uVar6) {
    ppvVar5 = (void **)x2nrealloc(ppvVar5,&heap->capacity,8);
    uVar6 = heap->count;
    heap->array = ppvVar5;
  }
  uVar6 = uVar6 + 1;
  heap->count = uVar6;
  ppvVar5[uVar6] = item;
  paVar1 = heap->compare;
  ppvVar5 = heap->array;
  pvVar2 = ppvVar5[uVar6];
  while (uVar6 != 1) {
    iVar3 = (*paVar1)(ppvVar5[uVar6 >> 1],pvVar2);
    ppvVar4 = ppvVar5 + uVar6;
    if (0 < iVar3) goto LAB_0010ee0f;
    *ppvVar4 = ppvVar5[uVar6 >> 1];
    uVar6 = uVar6 >> 1;
  }
  ppvVar4 = ppvVar5 + 1;
LAB_0010ee0f:
  *ppvVar4 = pvVar2;
  return 0;
}

