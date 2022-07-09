
/* WARNING: Unknown calling convention yet parameter storage is locked */

reg_errcode_t check_subexp_matching_top(void)

{
  long *plVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  ulong *puVar5;
  undefined8 *puVar6;
  void *__ptr;
  undefined8 in_RCX;
  long lVar7;
  long *in_RDX;
  long lVar8;
  long *in_RSI;
  long in_RDI;
  
  plVar1 = *(long **)(in_RDI + 0x98);
  if (0 < *in_RSI) {
    lVar8 = 0;
    do {
      while( true ) {
        lVar2 = *(long *)(*in_RDX + lVar8 * 8);
        puVar5 = (ulong *)(lVar2 * 0x10 + *plVar1);
        if (((*(char *)(puVar5 + 1) == '\b') && (uVar3 = *puVar5, (long)uVar3 < 0x40)) &&
           (((ulong)plVar1[0x14] >> (uVar3 & 0x3f) & 1) != 0)) break;
        lVar8 = lVar8 + 1;
        if (*in_RSI <= lVar8) {
          return _REG_NOERROR;
        }
      }
      __ptr = *(void **)(in_RDI + 0xf8);
      lVar7 = *(long *)(in_RDI + 0xe8);
      if (*(long *)(in_RDI + 0xf0) == lVar7) {
        lVar4 = lVar7 * 2;
        __ptr = realloc(__ptr,lVar7 << 4);
        if (__ptr == (void *)0x0) {
          return _REG_ESPACE;
        }
        *(void **)(in_RDI + 0xf8) = __ptr;
        lVar7 = *(long *)(in_RDI + 0xe8);
        *(long *)(in_RDI + 0xf0) = lVar4;
      }
      puVar6 = (undefined8 *)calloc(1,0x30);
      *(undefined8 **)((long)__ptr + lVar7 * 8) = puVar6;
      if (puVar6 == (undefined8 *)0x0) {
        return _REG_ESPACE;
      }
      *puVar6 = in_RCX;
      lVar8 = lVar8 + 1;
      puVar6[1] = lVar2;
      *(long *)(in_RDI + 0xe8) = lVar7 + 1;
    } while (lVar8 < *in_RSI);
  }
  return _REG_NOERROR;
}

