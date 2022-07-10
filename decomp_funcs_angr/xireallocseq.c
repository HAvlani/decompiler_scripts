int xirealloc()
{
    unsigned long long v2;  // rax
    unsigned long v3;  // rsi
    unsigned int v4;  // rsi
    void *v5;  // rdi

    v3 = ((unsigned int)v4) | ((long long)(((unsigned int)v4) == 0));
    v2 = realloc(v5, v3);
    if (v2 != 0)
    {
        return v2;
    }
    xalloc_die(); /* do not return */
}
