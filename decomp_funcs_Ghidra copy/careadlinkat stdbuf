
char * careadlinkat(int fd,char *filename,char *buffer,size_t buffer_size,allocator *alloc,
                   anon_subr_ssize_t_int_char_ptr_char_ptr_size_t *preadlinkat)

{
  int iVar1;
  ssize_t sVar2;
  int *piVar3;
  char *pcVar4;
  void *__dest;
  size_t sVar5;
  size_t __n;
  long in_FS_OFFSET;
  char stack_buf [1024];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (alloc == (allocator *)0x0) {
    alloc = &stdlib_allocator;
  }
  if (buffer == (char *)0x0) {
    buffer = stack_buf;
    sVar5 = 0x400;
    pcVar4 = buffer;
  }
  else {
    sVar5 = 0x7fffffffffffffff;
    pcVar4 = buffer;
    if (buffer_size < 0x8000000000000000) {
      sVar5 = buffer_size;
    }
  }
  while( true ) {
    sVar2 = (*preadlinkat)(fd,filename,buffer,sVar5);
    if (sVar2 < 0) {
      if (pcVar4 == buffer) {
        buffer = (char *)0x0;
      }
      else {
        piVar3 = __errno_location();
        iVar1 = *piVar3;
        (*alloc->free)(buffer);
        *piVar3 = iVar1;
        buffer = (char *)0x0;
      }
      goto LAB_00106701;
    }
    if (sVar2 < (long)sVar5) break;
    if (pcVar4 != buffer) {
      (*alloc->free)(buffer);
    }
    if (0x3ffffffffffffffe < (long)sVar5) {
      piVar3 = __errno_location();
      *piVar3 = 0x24;
      buffer = (char *)0x0;
      goto LAB_00106701;
    }
    __n = sVar5 * 2 + 1;
    buffer = (char *)(*alloc->allocate)(__n);
    sVar5 = __n;
    if (buffer == (char *)0x0) {
LAB_001066e5:
      if (alloc->die != (anon_subr_void_size_t_for_die *)0x0) {
        (*alloc->die)(__n);
      }
      piVar3 = __errno_location();
      *piVar3 = 0xc;
      buffer = (char *)0x0;
LAB_00106701:
      if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
        __stack_chk_fail();
      }
      return buffer;
    }
  }
  buffer[sVar2] = '\0';
  __n = sVar2 + 1;
  if (buffer != stack_buf) {
    if (((((long)__n < (long)sVar5) && (pcVar4 != buffer)) &&
        (alloc->reallocate != (anon_subr_void_ptr_void_ptr_size_t_for_reallocate *)0x0)) &&
       (pcVar4 = (char *)(*alloc->reallocate)(buffer,__n), pcVar4 != (char *)0x0)) {
      buffer = pcVar4;
    }
    goto LAB_00106701;
  }
  __dest = (*alloc->allocate)(__n);
  if (__dest != (void *)0x0) {
    buffer = (char *)memcpy(__dest,buffer,__n);
    goto LAB_00106701;
  }
  goto LAB_001066e5;
}

