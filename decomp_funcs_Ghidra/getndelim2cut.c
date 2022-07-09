
/* WARNING: Could not reconcile some variable overlaps */

ssize_t getndelim2(char **lineptr,size_t *linesize,size_t offset,size_t nmax,int delim1,int delim2,
                  FILE *stream)

{
  byte *pbVar1;
  size_t sVar2;
  int iVar3;
  char *s;
  ulong uVar4;
  char *pcVar5;
  void *pvVar6;
  ssize_t sVar7;
  ulong __size;
  ulong uVar8;
  char *__dest;
  long lVar9;
  size_t sVar10;
  bool bVar11;
  long in_FS_OFFSET;
  uint local_8c;
  char *local_88;
  uint local_78;
  uint local_74;
  size_t buffer_len;
  long local_40;
  
  sVar10 = *linesize;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_88 = *lineptr;
  if (local_88 == (char *)0x0) {
    sVar10 = 0x40;
    if (nmax < 0x41) {
      sVar10 = nmax;
    }
    local_88 = (char *)malloc(sVar10);
    if (local_88 != (char *)0x0) goto LAB_0010429c;
  }
  else {
LAB_0010429c:
    if ((sVar10 < offset) || (uVar8 = sVar10 - offset, uVar8 == 0 && nmax <= sVar10)) {
LAB_00104410:
      *lineptr = local_88;
      *linesize = sVar10;
      sVar7 = -1;
      goto LAB_0010442c;
    }
    local_8c = delim2;
    local_74 = delim2;
    if ((delim1 != -1) && (local_8c = delim1, delim2 == -1)) {
      local_74 = delim1;
    }
    __dest = local_88 + offset;
    do {
      s = freadptr(stream,&buffer_len);
      sVar2 = buffer_len;
      if (s == (char *)0x0) {
        pbVar1 = (byte *)stream->_IO_read_ptr;
        if (pbVar1 < stream->_IO_read_end) {
          stream->_IO_read_ptr = (char *)(pbVar1 + 1);
          local_78 = (uint)*pbVar1;
        }
        else {
          local_78 = __uflow((_IO_FILE *)stream);
          if (local_78 == 0xffffffff) {
            if (__dest == local_88) goto LAB_00104410;
            break;
          }
        }
        buffer_len = 1;
        bVar11 = local_8c == local_78 || local_74 == local_78;
        uVar4 = 2;
      }
      else if ((local_8c == 0xffffffff) ||
              (pvVar6 = memchr2(s,local_8c,local_74,buffer_len), pvVar6 == (void *)0x0)) {
        uVar4 = sVar2 + 1;
        bVar11 = false;
      }
      else {
        bVar11 = true;
        buffer_len = (long)pvVar6 + (1 - (long)s);
        uVar4 = (long)pvVar6 + (2 - (long)s);
      }
      __size = sVar10;
      if ((uVar8 < uVar4) && (sVar10 < nmax)) {
        __size = sVar10 + 0x40;
        if (0x3f < sVar10) {
          __size = sVar10 * 2;
        }
        lVar9 = (long)__dest - (long)local_88;
        if (__size - lVar9 < uVar4) {
          __size = lVar9 + uVar4;
        }
        if ((__size <= sVar10) || (nmax < __size)) {
          __size = nmax;
        }
        if (((long)(__size - offset) < 0) &&
           (__size = offset + 0x8000000000000000, sVar10 == __size)) goto LAB_00104410;
        uVar8 = __size - lVar9;
        pcVar5 = (char *)realloc(local_88,__size);
        if (pcVar5 == (char *)0x0) goto LAB_00104410;
        __dest = pcVar5 + lVar9;
        local_88 = pcVar5;
      }
      if (1 < uVar8) {
        uVar4 = uVar8 - 1;
        if (buffer_len <= uVar8 - 1) {
          uVar4 = buffer_len;
        }
        if (s == (char *)0x0) {
          *__dest = (char)local_78;
        }
        else {
          memcpy(__dest,s,uVar4);
        }
        __dest = __dest + uVar4;
        uVar8 = uVar8 - uVar4;
      }
      sVar10 = __size;
      if ((s != (char *)0x0) && (iVar3 = freadseek(stream,buffer_len), iVar3 != 0))
      goto LAB_00104410;
    } while (!bVar11);
    *__dest = '\0';
    *lineptr = local_88;
    *linesize = sVar10;
    sVar7 = (long)__dest - (long)(local_88 + offset);
    if (sVar7 != 0) goto LAB_0010442c;
  }
  sVar7 = -1;
LAB_0010442c:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return sVar7;
}

