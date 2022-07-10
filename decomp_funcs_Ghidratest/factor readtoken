
/* WARNING: Could not reconcile some variable overlaps */

size_t readtoken(FILE *stream,char *delim,size_t n_delim,token_buffer *tokenbuffer)

{
  ulong *puVar1;
  byte bVar2;
  uint uVar3;
  byte *pbVar4;
  char *pa;
  ulong uVar5;
  size_t sVar6;
  long in_FS_OFFSET;
  idx_t n;
  word isdelim [4];
  long local_40;
  
  pbVar4 = (byte *)(delim + n_delim);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  isdelim._0_16_ = (undefined  [16])0x0;
  isdelim._16_16_ = (undefined  [16])0x0;
  if (n_delim == 0) goto LAB_0011227d;
  do {
    bVar2 = *delim;
    delim = (char *)((byte *)delim + 1);
    puVar1 = (ulong *)((long)isdelim + (ulong)(bVar2 >> 3 & 0x18));
    *puVar1 = *puVar1 | 1 << (bVar2 & 0x3f);
  } while (pbVar4 != (byte *)delim);
  pbVar4 = (byte *)stream->_IO_read_ptr;
  if (stream->_IO_read_end <= pbVar4) goto LAB_00112287;
LAB_00112260:
  stream->_IO_read_ptr = (char *)(pbVar4 + 1);
  uVar5 = (ulong)*pbVar4;
  do {
    if ((isdelim[(ulong)(long)(int)uVar5 >> 6] >> (uVar5 & 0x3f) & 1) == 0) {
      n = tokenbuffer->size;
      pa = tokenbuffer->buffer;
      sVar6 = 0;
      while( true ) {
        if (sVar6 == n) {
          pa = (char *)xpalloc(pa,&n,1,-1,1);
        }
        if (((int)uVar5 < 0) || ((isdelim[(ulong)(long)(int)uVar5 >> 6] >> (uVar5 & 0x3f) & 1) != 0)
           ) break;
        pa[sVar6] = (char)uVar5;
        sVar6 = sVar6 + 1;
        pbVar4 = (byte *)stream->_IO_read_ptr;
        if (pbVar4 < stream->_IO_read_end) {
          stream->_IO_read_ptr = (char *)(pbVar4 + 1);
          uVar5 = (ulong)*pbVar4;
        }
        else {
          uVar3 = __uflow((_IO_FILE *)stream);
          uVar5 = (ulong)uVar3;
        }
      }
      pa[sVar6] = '\0';
      tokenbuffer->buffer = pa;
      tokenbuffer->size = n;
LAB_0011229c:
      if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
        return sVar6;
      }
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
LAB_0011227d:
    pbVar4 = (byte *)stream->_IO_read_ptr;
    if (pbVar4 < stream->_IO_read_end) goto LAB_00112260;
LAB_00112287:
    uVar3 = __uflow((_IO_FILE *)stream);
    uVar5 = (ulong)uVar3;
    if ((int)uVar3 < 0) {
      sVar6 = 0xffffffffffffffff;
      goto LAB_0011229c;
    }
  } while( true );
}

