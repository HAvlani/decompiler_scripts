
void freev(VALUE *v)

{
  if (v->type != string) {
    mpz_clear((__mpz_struct *)&v->u);
    rpl_free(v);
    return;
  }
  rpl_free(*(void **)&v->u);
  rpl_free(v);
  return;
}

