
int compare_occurs(void *void_first,void *void_second)

{
  ulong uVar1;
  uint uVar2;
  
  uVar2 = compare_words(void_first,void_second);
  if (uVar2 == 0) {
                    /* WARNING: Load size is inaccurate */
    uVar1 = *void_second;
                    /* WARNING: Load size is inaccurate */
    if (*void_first < uVar1) {
      uVar2 = 0xffffffff;
    }
    else {
      uVar2 = (uint)(*void_first >= uVar1 && *void_first != uVar1);
    }
  }
  return uVar2;
}

