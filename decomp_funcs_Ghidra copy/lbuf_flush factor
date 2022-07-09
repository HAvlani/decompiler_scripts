
void lbuf_flush(void)

{
  size_t sVar1;
  undefined8 uVar2;
  uint *puVar3;
  uintmax_t prime;
  size_t count;
  ulong uVar4;
  factors *factors;
  
  count = (long)lbuf.end - (long)lbuf.buf;
  sVar1 = full_write(1,lbuf.buf,count);
  if (sVar1 == count) {
    lbuf.end = lbuf.buf;
    return;
  }
  uVar2 = dcgettext(0,"write error",5);
  puVar3 = (uint *)__errno_location();
  factors = (factors *)0x1;
  uVar4 = (ulong)*puVar3;
  error(1,uVar4,"%s",uVar2);
  if (uVar4 != 0) {
    if (factors->plarge[1] == 0) {
      factors->plarge[0] = prime;
      factors->plarge[1] = uVar4;
      return;
    }
                    /* WARNING: Subroutine does not return */
    __assert_fail("factors->plarge[1] == 0","src/factor.c",0x22e,"factor_insert_large");
  }
  factor_insert_multiplicity(factors,prime,1);
  return;
}

