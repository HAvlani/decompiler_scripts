
void di_ent_free(void *v)

{
  hash_free(*(Hash_table **)((long)v + 8));
  rpl_free(v);
  return;
}

