
void randread(randread_source *s,void *buf,size_t size)

{
  undefined *s_00;
  int *piVar1;
  size_t sVar2;
  ulong uVar3;
  int iVar4;
  isaac_word *result;
  void *pvVar5;
  FILE *__stream;
  ulong uVar6;
  
  __stream = (FILE *)s->source;
  if (__stream == (FILE *)0x0) {
    uVar3 = *(ulong *)&s->buf;
    s_00 = &(s->buf).field_0x8;
    pvVar5 = &(s->buf).field_0x820;
    if (uVar3 < size) {
LAB_00111ade:
      memcpy(buf,(void *)((long)pvVar5 + (0x800 - uVar3)),uVar3);
      buf = (void *)((long)buf + uVar3);
      size = size - uVar3;
      if (((ulong)buf & 7) != 0) goto code_r0x00111b08;
      uVar6 = (ulong)((uint)size & 0x7ff);
      uVar3 = size;
      while (result = (isaac_word *)((long)buf + (size - uVar3)), uVar3 != uVar6) {
        isaac_refill((isaac_state *)s_00,result);
        uVar3 = uVar3 - 0x800;
        if (uVar3 == 0) {
          *(undefined8 *)&s->buf = 0;
          return;
        }
      }
      isaac_refill((isaac_state *)s_00,(isaac_word *)pvVar5);
      buf = result;
      size = uVar6;
LAB_00111b7c:
      uVar3 = 0x800;
      goto LAB_00111b81;
    }
    pvVar5 = (void *)((long)pvVar5 + (0x800 - uVar3));
LAB_00111b81:
    memcpy(buf,pvVar5,size);
    *(ulong *)&s->buf = uVar3 - size;
  }
  else {
    piVar1 = __errno_location();
    while( true ) {
      sVar2 = fread_unlocked(buf,1,size,__stream);
      iVar4 = *piVar1;
      buf = (void *)((long)buf + sVar2);
      size = size - sVar2;
      if (size == 0) break;
      pvVar5 = s->handler_arg;
      if ((*(byte *)&s->source->_flags & 0x20) == 0) {
        iVar4 = 0;
      }
      *piVar1 = iVar4;
      (*s->handler)(pvVar5);
      __stream = (FILE *)s->source;
    }
  }
  return;
code_r0x00111b08:
  isaac_refill((isaac_state *)s_00,(isaac_word *)pvVar5);
  uVar3 = 0x800;
  if (size < 0x801) goto LAB_00111b7c;
  goto LAB_00111ade;
}

