int xalignalloc()
{
    unsigned long long v2;  // rax

    v2 = aligned_alloc();
    if (v2 != 0)
    {
        return v2;
    }
    xalloc_die(); /* do not return */
}
