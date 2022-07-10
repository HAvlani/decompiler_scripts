int xizalloc()
{
    unsigned long long v2;  // rax
    unsigned int v3;  // rdi

    v2 = calloc(((unsigned int)v3), 0x1);
    if (v2 != 0)
    {
        return v2;
    }
    xalloc_die(); /* do not return */
}
