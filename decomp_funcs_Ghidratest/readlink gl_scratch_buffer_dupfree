
void * gl_scratch_buffer_dupfree(scratch_buffer *buffer,size_t size)

{
  undefined *__src;
  undefined *__dest;
  void *pvVar1;
  
  __src = (undefined *)buffer->data;
  if ((anon_union_conflict1a44_for___space *)__src == &buffer->__space) {
    __dest = (undefined *)malloc(size);
    if (__dest != (undefined *)0x0) {
      pvVar1 = memcpy(__dest,__src,size);
      return pvVar1;
    }
  }
  else {
    __dest = (undefined *)realloc(__src,size);
    if (__dest == (undefined *)0x0) {
      __dest = __src;
    }
  }
  return __dest;
}

