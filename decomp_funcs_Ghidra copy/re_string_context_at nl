
uint re_string_context_at(re_string_t *input,Idx idx,int eflags)

{
  byte bVar1;
  wint_t __wc;
  uint uVar2;
  int iVar3;
  
  if (idx < 0) {
LAB_0010a280:
    return input->tip_context;
  }
  if (input->len == idx) {
    uVar2 = (-(uint)((eflags & 2U) == 0) & 2) + 8;
  }
  else {
    if (1 < input->mb_cur_max) {
      do {
        __wc = input->wcs[idx];
        if (__wc != 0xffffffff) {
          if ((input->word_ops_used != '\0') &&
             ((iVar3 = iswalnum(__wc), iVar3 != 0 || (__wc == 0x5f)))) {
            return 1;
          }
          if (__wc != 10) {
            return 0;
          }
          goto LAB_0010a261;
        }
        idx = idx + -1;
      } while (idx != -1);
      goto LAB_0010a280;
    }
    bVar1 = input->mbs[idx];
    uVar2 = 1;
    if (((input->word_char[(long)(ulong)bVar1 >> 6] >> (bVar1 & 0x3f) & 1) == 0) &&
       (uVar2 = 0, bVar1 == 10)) {
LAB_0010a261:
      return (uint)(input->newline_anchor != '\0') * 2;
    }
  }
  return uVar2;
}

