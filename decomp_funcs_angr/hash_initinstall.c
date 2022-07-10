extern struct_0 src_to_dest;

int hash_init()
{
    src_to_dest = (long long)hash_initialize();
    if (src_to_dest != 0)
    {
        return src_to_dest;
    }
    xalloc_die(); /* do not return */
}
