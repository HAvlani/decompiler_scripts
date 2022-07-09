
void append_quoted(char *str)

{
  bool bVar1;
  char *pcVar2;
  byte *pbVar3;
  byte bVar4;
  
  bVar4 = *str;
  if (bVar4 == 0) {
    return;
  }
  bVar1 = true;
  do {
    if (print_ls_colors == false) {
      if (bVar4 != 0x3d) {
        if ((char)bVar4 < '>') {
          if (bVar4 != 0x27) {
            if (bVar4 == 0x3a) goto LAB_00102d7e;
            goto LAB_00102df0;
          }
          if (lsc_obstack.chunk_limit == lsc_obstack.next_free) {
            _obstack_newchunk(&lsc_obstack,1);
          }
          pcVar2 = lsc_obstack.next_free + 1;
          *lsc_obstack.next_free = '\'';
          lsc_obstack.next_free = pcVar2;
          if (lsc_obstack.chunk_limit == lsc_obstack.next_free) {
            _obstack_newchunk(&lsc_obstack,1);
          }
          pcVar2 = lsc_obstack.next_free + 1;
          *lsc_obstack.next_free = '\\';
          lsc_obstack.next_free = pcVar2;
          if (lsc_obstack.chunk_limit == lsc_obstack.next_free) {
            _obstack_newchunk(&lsc_obstack,1);
          }
          bVar1 = true;
          pcVar2 = lsc_obstack.next_free + 1;
          *lsc_obstack.next_free = '\'';
          lsc_obstack.next_free = pcVar2;
        }
        else {
          bVar1 = (bool)(bVar1 ^ 1);
          if ((bVar4 & 0xfd) != 0x5c) {
            bVar1 = true;
          }
        }
        goto LAB_00102d30;
      }
LAB_00102d7e:
      if (!bVar1) {
LAB_00102df0:
        bVar1 = true;
        goto LAB_00102d30;
      }
      if (lsc_obstack.chunk_limit == lsc_obstack.next_free) {
        _obstack_newchunk(&lsc_obstack,1);
      }
      pcVar2 = lsc_obstack.next_free + 1;
      *lsc_obstack.next_free = '\\';
      lsc_obstack.next_free = pcVar2;
      if (lsc_obstack.chunk_limit == lsc_obstack.next_free) goto LAB_00102db0;
    }
    else {
LAB_00102d30:
      if (lsc_obstack.chunk_limit == lsc_obstack.next_free) {
LAB_00102db0:
        _obstack_newchunk(&lsc_obstack,1);
      }
    }
    pbVar3 = (byte *)lsc_obstack.next_free + 1;
    *lsc_obstack.next_free = *str;
    lsc_obstack.next_free = (char *)pbVar3;
    bVar4 = ((byte *)str)[1];
    str = (char *)((byte *)str + 1);
    if (bVar4 == 0) {
      return;
    }
  } while( true );
}

