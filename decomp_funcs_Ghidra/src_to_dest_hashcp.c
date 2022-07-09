
size_t src_to_dest_hash(void *x,size_t table_size)

{
                    /* WARNING: Load size is inaccurate */
  return *x % table_size;
}

