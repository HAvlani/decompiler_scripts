
_Bool gl_scratch_buffer_grow_preserve(scratch_buffer *buffer)

{
  size_t __n;
  ulong __size;
  _Bool _Var1;
  void *pvVar2;
  int *piVar3;
  undefined *__src;
  
  __n = buffer->length;
  __src = (undefined *)buffer->data;
  __size = __n * 2;
  if ((anon_union_conflict61ad_for___space *)__src == &buffer->__space) {
    pvVar2 = malloc(__size);
    if (pvVar2 == (void *)0x0) {
      return false;
    }
    pvVar2 = memcpy(pvVar2,__src,__n);
LAB_0010965c:
    buffer->data = pvVar2;
    _Var1 = true;
    buffer->length = __size;
  }
  else {
    if (__size < __n) {
      piVar3 = __errno_location();
      *piVar3 = 0xc;
    }
    else {
      pvVar2 = realloc(__src,__size);
      if (pvVar2 != (void *)0x0) goto LAB_0010965c;
      __src = (undefined *)buffer->data;
    }
    rpl_free(__src);
    buffer->data = &buffer->__space;
    _Var1 = false;
    buffer->length = 0x400;
  }
  return _Var1;
}

