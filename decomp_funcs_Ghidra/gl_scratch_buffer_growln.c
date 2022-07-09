
_Bool gl_scratch_buffer_grow(scratch_buffer *buffer)

{
  ulong __size;
  ulong uVar1;
  void *pvVar2;
  int *piVar3;
  
  uVar1 = buffer->length;
  __size = uVar1 * 2;
  if ((anon_union_conflict61ad_for___space *)buffer->data != &buffer->__space) {
    rpl_free(buffer->data);
    uVar1 = buffer->length;
  }
  if (__size < uVar1) {
    piVar3 = __errno_location();
    *piVar3 = 0xc;
  }
  else {
    pvVar2 = malloc(__size);
    if (pvVar2 != (void *)0x0) {
      buffer->data = pvVar2;
      buffer->length = __size;
      return true;
    }
  }
  buffer->data = &buffer->__space;
  buffer->length = 0x400;
  return false;
}

