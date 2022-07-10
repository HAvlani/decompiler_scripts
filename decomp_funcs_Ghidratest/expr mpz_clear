
void mpz_clear(__mpz_struct *r)

{
  if (r->_mp_alloc != 0) {
                    /* WARNING: Could not recover jumptable at 0x001076c3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*gmp_free_func)(r->_mp_d,(long)r->_mp_alloc << 3);
    return;
  }
  return;
}

