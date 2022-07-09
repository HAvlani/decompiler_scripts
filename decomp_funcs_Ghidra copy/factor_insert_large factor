
void factor_insert_large(factors *factors,uintmax_t p1,uintmax_t p0)

{
  if (p1 == 0) {
    factor_insert_multiplicity(factors,p0,1);
    return;
  }
  if (factors->plarge[1] == 0) {
    factors->plarge[0] = p0;
    factors->plarge[1] = p1;
    return;
  }
                    /* WARNING: Subroutine does not return */
  __assert_fail("factors->plarge[1] == 0","src/factor.c",0x22e,"factor_insert_large");
}

