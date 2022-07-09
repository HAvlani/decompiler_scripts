int xirealloc()
{
    unsigned long long v1;  // rax
    unsigned int v3;  // rsi
    unsigned long v4;  // rsi
    void *v5;  // rdi

    v4 = ((unsigned int)v3) | ((long long)(((unsigned int)v3) == 0));
    v1 = realloc(v5, v4);
    if (v1 != 0)
    {
        return v1;
    }
    xalloc_die(); /* do not return */
}
