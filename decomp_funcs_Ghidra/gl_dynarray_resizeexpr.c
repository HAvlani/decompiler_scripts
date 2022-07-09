
_Bool gl_dynarray_resize(dynarray_header *list,size_t size,void *scratch,size_t element_size)

{
  void *__src;
  size_t __size;
  void *__dest;
  int *piVar1;
  
  if (list->allocated < size) {
    __size = SUB168(ZEXT816(size) * ZEXT816(element_size),0);
    if (SUB168(ZEXT816(size) * ZEXT816(element_size) >> 0x40,0) != 0) {
      piVar1 = __errno_location();
      *piVar1 = 0xc;
      return false;
    }
    __src = list->array;
    if (__src == scratch) {
      __dest = malloc(__size);
      if (__dest == (void *)0x0) {
        return false;
      }
      if (__src != (void *)0x0) {
        __dest = memcpy(__dest,__src,list->used * element_size);
      }
    }
    else {
      __dest = realloc(__src,__size);
      if (__dest == (void *)0x0) {
        return false;
      }
    }
    list->array = __dest;
    list->allocated = size;
  }
  list->used = size;
  return true;
}

