
/* WARNING: Unknown calling convention yet parameter storage is locked */

_Bool fts_palloc(void)

{
  size_t __size;
  void *pvVar1;
  int *piVar2;
  long in_RDX;
  size_t *in_RSI;
  void **in_RDI;
  
  pvVar1 = *in_RDI;
  __size = *in_RSI + 0x100 + in_RDX;
  if (__size < *in_RSI) {
    rpl_free(pvVar1);
    *in_RDI = (void *)0x0;
    piVar2 = __errno_location();
    *piVar2 = 0x24;
    return false;
  }
  *in_RSI = __size;
  pvVar1 = realloc(pvVar1,__size);
  if (pvVar1 != (void *)0x0) {
    *in_RDI = pvVar1;
    return true;
  }
  rpl_free(*in_RDI);
  *in_RDI = (void *)0x0;
  return false;
}

