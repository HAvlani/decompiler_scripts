
randread_source * randread_new(char *name,size_t bytes_bound)

{
  undefined *s;
  int iVar1;
  FILE *__stream;
  randread_source *prVar2;
  long lVar3;
  int *piVar4;
  size_t __n;
  undefined *puVar5;
  
  if (bytes_bound == 0) {
    prVar2 = (randread_source *)xmalloc(0x1038);
    prVar2->source = (FILE *)0x0;
    prVar2->handler = randread_error;
    prVar2->handler_arg = (void *)0x0;
  }
  else {
    if (name == (char *)0x0) {
      prVar2 = (randread_source *)xmalloc(0x1038);
      if (0x800 < bytes_bound) {
        bytes_bound = 0x800;
      }
      prVar2->source = (FILE *)0x0;
      s = &(prVar2->buf).field_0x8;
      prVar2->handler = randread_error;
      prVar2->handler_arg = (void *)0x0;
      *(undefined8 *)&prVar2->buf = 0;
      puVar5 = s;
      do {
        while( true ) {
          if (s + bytes_bound <= puVar5) {
            isaac_seed((isaac_state *)s);
            return prVar2;
          }
          lVar3 = getrandom(puVar5,(long)(s + bytes_bound) - (long)puVar5,0);
          if (lVar3 < 0) break;
          puVar5 = puVar5 + lVar3;
        }
        piVar4 = __errno_location();
        iVar1 = *piVar4;
      } while (iVar1 == 4);
      randread_free_body(prVar2);
      *piVar4 = iVar1;
    }
    else {
      __stream = (FILE *)fopen_safer(name,"rb");
      if (__stream != (FILE *)0x0) {
        prVar2 = (randread_source *)xmalloc(0x1038);
        prVar2->source = (FILE *)__stream;
        __n = 0x1000;
        if (bytes_bound < 0x1001) {
          __n = bytes_bound;
        }
        prVar2->handler = randread_error;
        prVar2->handler_arg = name;
        setvbuf(__stream,(char *)&prVar2->buf,0,__n);
        return prVar2;
      }
    }
    prVar2 = (randread_source *)0x0;
  }
  return prVar2;
}

