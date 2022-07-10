
int compare_words(void *void_first,void *void_second)

{
  long lVar1;
  long lVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  
  lVar1 = *(long *)((long)void_second + 8);
  lVar2 = *(long *)((long)void_first + 8);
  lVar5 = lVar2;
  if (lVar1 <= lVar2) {
    lVar5 = lVar1;
  }
  if (ignore_case == false) {
    if (0 < lVar5) {
                    /* WARNING: Load size is inaccurate */
                    /* WARNING: Load size is inaccurate */
      lVar4 = 0;
      do {
        iVar3 = (uint)*(byte *)(*void_first + lVar4) - (uint)*(byte *)(*void_second + lVar4);
        if (iVar3 != 0) {
          return iVar3;
        }
        lVar4 = lVar4 + 1;
      } while (lVar5 != lVar4);
    }
  }
  else if (0 < lVar5) {
                    /* WARNING: Load size is inaccurate */
    lVar4 = 0;
                    /* WARNING: Load size is inaccurate */
    do {
      if ((uint)folded_chars[*(byte *)(*void_first + lVar4)] -
          (uint)folded_chars[*(byte *)(*void_second + lVar4)] != 0) {
        return (uint)folded_chars[*(byte *)(*void_first + lVar4)] -
               (uint)folded_chars[*(byte *)(*void_second + lVar4)];
      }
      lVar4 = lVar4 + 1;
    } while (lVar5 != lVar4);
  }
  if (lVar1 <= lVar2) {
    return (int)(lVar1 < lVar2);
  }
  return -1;
}

