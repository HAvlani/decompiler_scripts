typedef struct struct_0 {
    unsigned int field_0;
} struct_0;

int xfts_open()
{
    unsigned long long v2;  // rax

    v2 = rpl_fts_open();
    if (v2 != 0)
    {
        return v2;
    }
    else if (*(__errno_location()) != 22)
    {
        xalloc_die(); /* do not return */
    }
    else
    {
        __assert_fail(); /* do not return */
    }
}
