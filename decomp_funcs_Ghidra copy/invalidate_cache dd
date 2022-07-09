
_Bool invalidate_cache(int fd,off_t len)

{
  int iVar1;
  long *plVar2;
  int *piVar3;
  off_t oVar4;
  long lVar5;
  long __len;
  long lVar6;
  char cVar7;
  
  plVar2 = &o_pending_7466;
  cVar7 = o_nocache_eof;
  if (fd == 0) {
    plVar2 = &i_pending_7465;
    cVar7 = i_nocache_eof;
  }
  __len = *plVar2;
  if (len == 0) {
    lVar6 = 0;
    if ((__len == 0) && (cVar7 == '\0')) {
      return true;
    }
  }
  else {
    lVar5 = __len + len;
    if (SCARRY8(__len,len)) {
      *plVar2 = 0x1ffff;
      lVar6 = 0x1ffff;
      __len = 0x7ffffffffffe0000;
    }
    else {
      lVar6 = (ulong)((int)lVar5 + ((uint)(lVar5 >> 0x5f) >> 0xf) & 0x1ffff) -
              ((ulong)(lVar5 >> 0x3f) >> 0x2f);
      *plVar2 = lVar6;
      if (lVar5 <= lVar6) {
        return true;
      }
      __len = lVar5 - lVar6;
      if (__len == 0) {
        return true;
      }
    }
  }
  if (fd == 0) {
    oVar4 = input_offset;
    if (input_seekable == false) {
      piVar3 = __errno_location();
      *piVar3 = 0x1d;
      return false;
    }
LAB_001051ed:
    if (oVar4 < 0) {
      return false;
    }
  }
  else {
    if (invalidate_cache::lexical_block_0::output_offset == -1) {
      return false;
    }
    if (invalidate_cache::lexical_block_0::output_offset < 0) {
      oVar4 = lseek(1,0,1);
      invalidate_cache::lexical_block_0::output_offset = oVar4;
      goto LAB_001051ed;
    }
    oVar4 = invalidate_cache::lexical_block_0::output_offset;
    if (len != 0) {
      oVar4 = invalidate_cache::lexical_block_0::output_offset + lVar6 + __len;
      invalidate_cache::lexical_block_0::output_offset = oVar4;
      goto LAB_001051ed;
    }
  }
  lVar5 = oVar4 - __len;
  if ((len == 0) && (__len != 0)) {
    if (cVar7 == '\0') {
      lVar5 = lVar5 - lVar6;
      goto LAB_0010520e;
    }
  }
  else {
    lVar5 = lVar5 - lVar6;
    if (__len != 0) goto LAB_0010520e;
  }
  __len = 0;
  lVar5 = lVar5 - lVar5 % page_size;
LAB_0010520e:
  iVar1 = posix_fadvise(fd,lVar5,__len,4);
  return iVar1 != -1;
}

