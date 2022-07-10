int xcalloc()
{
    unsigned long long v2;  // rax
    unsigned int v3;  // rsi
    unsigned int v4;  // rdi

    v2 = calloc(((unsigned int)v4), ((unsigned int)v3));
    if (v2 != 0)
    {
        return v2;
    }
    xalloc_die(); /* do not return */
}
