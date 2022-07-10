int xicalloc()
{
    unsigned long long v1;  // rax
    unsigned int v3;  // rsi
    unsigned int v4;  // rdi

    v1 = calloc(((unsigned int)v4), ((unsigned int)v3));
    if (v1 != 0)
    {
        return v1;
    }
    xalloc_die(); /* do not return */
}
