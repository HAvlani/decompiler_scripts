typedef struct struct_0 {
    unsigned int field_0;
} struct_0;

int xfts_open()
{
    unsigned long long v3;  // rax

    v3 = rpl_fts_open();
    if (v3 != 0)
    {
        return v3;
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
