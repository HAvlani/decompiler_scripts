int xizalloc()
{
    unsigned long long v1;  // rax
    unsigned int v3;  // rdi

    v1 = calloc(((unsigned int)v3), 0x1);
    if (v1 != 0)
    {
        return v1;
    }
    xalloc_die(); /* do not return */
}
