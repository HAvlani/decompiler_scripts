
size_t dev_info_hash(void *x,size_t table_size)

{
                    /* WARNING: Load size is inaccurate */
  return *x % table_size;
}
