
char * areadlinkat_with_size(int fd,char *file,size_t size)

{
  long lVar1;
  ulong uVar2;
  char *pcVar3;
  int *piVar4;
  void *__dest;
  char *p;
  ulong __len;
  long in_FS_OFFSET;
  char stackbuf [128];
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  __len = 0x80;
  if (size != 0) {
    __len = 0x401;
    if (size < 0x401) {
      __len = size + 1;
    }
  }
  while (((__len == 0x80 && (pcVar3 = stackbuf, p = (char *)0x0, size == 0)) ||
         (pcVar3 = (char *)malloc(__len), p = pcVar3, pcVar3 != (char *)0x0))) {
    uVar2 = readlinkat(fd,file,pcVar3,__len);
    if ((long)uVar2 < 0) {
      rpl_free(p);
      p = (char *)0x0;
      goto LAB_0010b88b;
    }
    if (uVar2 < __len) {
      pcVar3[uVar2] = '\0';
      uVar2 = uVar2 + 1;
      if (p == (char *)0x0) {
        __dest = malloc(uVar2);
        if (__dest == (void *)0x0) break;
        p = (char *)memcpy(__dest,pcVar3,uVar2);
      }
      else if ((uVar2 < __len) && (pcVar3 = (char *)realloc(p,uVar2), pcVar3 != (char *)0x0)) {
        p = pcVar3;
      }
      goto LAB_0010b88b;
    }
    rpl_free(p);
    if (__len < 0x4000000000000000) {
      __len = __len * 2;
    }
    else {
      if (0x7ffffffffffffffe < __len) {
        piVar4 = __errno_location();
        *piVar4 = 0xc;
        p = (char *)0x0;
LAB_0010b88b:
        if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
          __stack_chk_fail();
        }
        return p;
      }
      __len = 0x7fffffffffffffff;
    }
  }
  p = (char *)0x0;
  goto LAB_0010b88b;
}

