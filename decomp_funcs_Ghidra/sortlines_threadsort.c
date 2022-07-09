
void * sortlines_thread(void *data)

{
                    /* WARNING: Load size is inaccurate */
  sortlines(*data,*(size_t *)((long)data + 8),*(size_t *)((long)data + 0x10),
            *(merge_node **)((long)data + 0x18),*(merge_node_queue **)((long)data + 0x20),
            *(FILE **)((long)data + 0x28),*(char **)((long)data + 0x30));
  return (void *)0x0;
}

