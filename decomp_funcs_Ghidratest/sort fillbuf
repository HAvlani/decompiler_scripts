
_Bool fillbuf(buffer *buf,FILE *fp,char *file)

{
  char cVar1;
  size_t sVar2;
  char cVar3;
  keyfield *pkVar4;
  _Bool _Var5;
  ulong __n;
  size_t sVar6;
  byte *pbVar7;
  size_t sVar8;
  char *pcVar9;
  byte *pbVar10;
  byte *pbVar11;
  byte *pbVar12;
  size_t sVar13;
  byte *__ptr;
  byte *pbVar14;
  byte **ppbVar15;
  size_t sVar16;
  byte **ppbVar17;
  long in_FS_OFFSET;
  byte *local_88;
  size_t line_alloc;
  long local_40;
  
  pkVar4 = keylist;
  cVar3 = eolchar;
  sVar16 = merge_buffer_size;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (buf->eof == false) {
    sVar13 = buf->used;
    sVar6 = buf->left;
    pbVar12 = (byte *)buf->buf;
    sVar2 = buf->line_bytes;
    if (sVar13 == sVar6) {
      sVar8 = buf->nlines;
    }
    else {
      memmove(pbVar12,pbVar12 + (sVar13 - sVar6),sVar6);
      sVar13 = buf->left;
      pbVar12 = (byte *)buf->buf;
      buf->nlines = 0;
      buf->used = sVar13;
      sVar8 = 0;
    }
    pbVar11 = (byte *)(sVar16 - 0x22);
    sVar16 = buf->alloc;
    do {
      __ptr = pbVar12 + sVar13;
      ppbVar15 = (byte **)(pbVar12 + sVar8 * -0x20 + sVar16);
      pbVar10 = pbVar12 + ((sVar16 - sVar2 * sVar8) - (long)__ptr);
      if (sVar8 != 0) {
        pbVar12 = ppbVar15[1] + (long)*ppbVar15;
      }
      do {
        if (pbVar10 <= (byte *)(sVar2 + 1)) break;
        __n = (ulong)(pbVar10 + -1) / (ulong)(byte *)(sVar2 + 1);
        sVar6 = fread_unlocked(__ptr,1,__n,(FILE *)fp);
        pbVar10 = pbVar10 + -sVar6;
        local_88 = __ptr + sVar6;
        if (__n != sVar6) {
          if ((fp->_flags & 0x20U) != 0) {
            pcVar9 = (char *)dcgettext(0,"read failed",5);
                    /* WARNING: Subroutine does not return */
            sort_die(pcVar9,file);
          }
          if ((fp->_flags & 0x10U) != 0) {
            buf->eof = true;
            if ((byte *)buf->buf == local_88) goto LAB_00109029;
            if ((pbVar12 != local_88) && (local_88[-1] != cVar3)) {
              *local_88 = cVar3;
              local_88 = local_88 + 1;
            }
          }
        }
        ppbVar17 = ppbVar15;
        pbVar14 = pbVar12;
        while (pbVar12 = pbVar14, ppbVar15 = ppbVar17,
              pbVar7 = (byte *)memchr(__ptr,(int)cVar3,(long)local_88 - (long)__ptr),
              pbVar7 != (byte *)0x0) {
          __ptr = pbVar7 + 1;
          ppbVar17 = ppbVar15 + -4;
          *pbVar7 = 0;
          *ppbVar17 = pbVar12;
          pbVar14 = __ptr + -(long)pbVar12;
          ppbVar15[-3] = pbVar14;
          if (pbVar11 < pbVar14) {
            pbVar11 = pbVar14;
          }
          pbVar10 = pbVar10 + -sVar2;
          pbVar14 = __ptr;
          if (pkVar4 != (keyfield *)0x0) {
            if (pkVar4->eword != 0xffffffffffffffff) {
              pbVar7 = (byte *)limfield();
            }
            sVar16 = pkVar4->sword;
            ppbVar15[-1] = pbVar7;
            if (sVar16 == 0xffffffffffffffff) {
              if (pkVar4->skipsblanks != false) {
                cVar1 = blanks[*pbVar12];
                while (cVar1 != '\0') {
                  pbVar14 = pbVar12 + 1;
                  pbVar12 = pbVar12 + 1;
                  cVar1 = blanks[*pbVar14];
                }
              }
              ppbVar15[-2] = pbVar12;
              pbVar14 = __ptr;
            }
            else {
              pbVar12 = (byte *)begfield();
              ppbVar15[-2] = pbVar12;
              pbVar14 = __ptr;
            }
          }
        }
        __ptr = local_88;
      } while (buf->eof == false);
      pcVar9 = buf->buf;
      buf->used = (long)__ptr - (long)pcVar9;
      buf->nlines = (long)(pcVar9 + (buf->alloc - (long)ppbVar15)) >> 5;
      if ((long)(pcVar9 + (buf->alloc - (long)ppbVar15)) >> 5 != 0) goto LAB_00109178;
      line_alloc = buf->alloc >> 5;
      pbVar12 = (byte *)x2nrealloc(pcVar9,&line_alloc,0x20);
      sVar16 = line_alloc << 5;
      buf->buf = (char *)pbVar12;
      sVar13 = buf->used;
      buf->alloc = sVar16;
      sVar8 = buf->nlines;
    } while( true );
  }
LAB_00109029:
  _Var5 = false;
LAB_0010902b:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return _Var5;
LAB_00109178:
  merge_buffer_size = (size_t)(pbVar11 + 0x22);
  _Var5 = true;
  buf->left = (long)__ptr - (long)pbVar12;
  goto LAB_0010902b;
}

