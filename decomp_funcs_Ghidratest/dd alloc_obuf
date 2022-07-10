
void alloc_obuf(void)

{
  if (obuf != (char *)0x0) {
    return;
  }
  if ((conversions_mask._1_1_ & 8) == 0) {
    if (ibuf != (char *)0x0) {
      obuf = ibuf;
      return;
    }
    alloc_ibuf();
    obuf = ibuf;
    return;
  }
  alloc_obuf();
  return;
}

