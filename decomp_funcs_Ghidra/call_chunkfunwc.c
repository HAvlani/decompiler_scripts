
void * call_chunkfun(obstack *h,size_t size)

{
  void *pvVar1;
  
  if ((h->field_0x50 & 1) != 0) {
                    /* WARNING: Could not recover jumptable at 0x00107cce. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    pvVar1 = (void *)(*(code *)h->chunkfun)(h->extra_arg);
    return pvVar1;
  }
                    /* WARNING: Could not recover jumptable at 0x00107cd3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pvVar1 = (void *)(*(code *)h->chunkfun)(size);
  return pvVar1;
}

