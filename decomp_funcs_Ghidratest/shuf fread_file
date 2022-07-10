
char * fread_file(FILE *stream,int flags,size_t *length)

{
  long lVar1;
  int iVar2;
  int iVar3;
  char *__dest;
  size_t sVar4;
  int *piVar5;
  __off_t _Var6;
  char *pcVar7;
  ulong __n;
  size_t __size;
  size_t __n_00;
  long in_FS_OFFSET;
  stat st;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  iVar2 = fileno((FILE *)stream);
  iVar2 = __fxstat(1,iVar2,(stat *)&st);
  if ((((iVar2 < 0) || ((st.st_mode & 0xf000) != 0x8000)) ||
      (_Var6 = ftello((FILE *)stream), _Var6 < 0)) || (st.st_size <= _Var6)) {
    __size = 0x2000;
  }
  else {
    __size = (st.st_size - _Var6) + 1;
    if (st.st_size - _Var6 == 0x7fffffffffffffff) {
      piVar5 = __errno_location();
      __dest = (char *)0x0;
      *piVar5 = 0xc;
      goto LAB_00106ecd;
    }
  }
  __dest = (char *)malloc(__size);
  if (__dest != (char *)0x0) {
    __n = 0;
LAB_00106e42:
    do {
      pcVar7 = __dest;
      __n_00 = __size - __n;
      sVar4 = fread(pcVar7 + __n,1,__n_00,(FILE *)stream);
      __n = __n + sVar4;
      if (__n_00 != sVar4) {
        piVar5 = __errno_location();
        iVar2 = *piVar5;
        iVar3 = ferror((FILE *)stream);
        if (iVar3 == 0) {
          __dest = pcVar7;
          if (__n < __size - 1) {
            if ((flags & 2U) == 0) {
              pcVar7 = (char *)realloc(pcVar7,__n + 1);
              if (pcVar7 != (char *)0x0) {
                __dest = pcVar7;
              }
            }
            else {
              __dest = (char *)malloc(__n + 1);
              if (__dest == (char *)0x0) {
                __explicit_bzero_chk(pcVar7 + __n,__size - __n,0xffffffffffffffff);
                __dest = pcVar7;
              }
              else {
                memcpy(__dest,pcVar7,__n);
                __explicit_bzero_chk(pcVar7,__size,0xffffffffffffffff);
                rpl_free(pcVar7);
              }
            }
          }
          __dest[__n] = '\0';
          *length = __n;
        }
        else {
LAB_00106f96:
          if ((flags & 2U) == 0) goto LAB_00106ec0;
LAB_00106fa1:
          __explicit_bzero_chk(pcVar7,__size,0xffffffffffffffff);
          __dest = (char *)0x0;
          rpl_free(pcVar7);
          *piVar5 = iVar2;
        }
        goto LAB_00106ecd;
      }
      if (__size == 0x7fffffffffffffff) {
        piVar5 = __errno_location();
        iVar2 = 0xc;
        goto LAB_00106f96;
      }
      sVar4 = (__size >> 1) + __size;
      if (0x7fffffffffffffff - (__size >> 1) <= __size) {
        sVar4 = 0x7fffffffffffffff;
      }
      if ((flags & 2U) != 0) {
        __dest = (char *)malloc(sVar4);
        if (__dest == (char *)0x0) {
          piVar5 = __errno_location();
          iVar2 = *piVar5;
          __size = sVar4;
          goto LAB_00106fa1;
        }
        memcpy(__dest,pcVar7,__size);
        __explicit_bzero_chk(pcVar7,__size,0xffffffffffffffff);
        rpl_free(pcVar7);
        __size = sVar4;
        goto LAB_00106e42;
      }
      __dest = (char *)realloc(pcVar7,sVar4);
      __size = sVar4;
    } while (__dest != (char *)0x0);
    piVar5 = __errno_location();
    iVar2 = *piVar5;
LAB_00106ec0:
    __dest = (char *)0x0;
    rpl_free(pcVar7);
    *piVar5 = iVar2;
  }
LAB_00106ecd:
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return __dest;
}

