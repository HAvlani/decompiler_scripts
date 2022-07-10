int xirealloc()
{
    unsigned long long v2;  // rax
    unsigned long long v3;  // rsi
    unsigned long v4;  // rsi
    void *v5;  // rdi

    v4 = v3 | ((long long)(v3 == 0));
    v2 = realloc(v5, v4);
    if (v2 != 0)
    {
        return v2;
    }
    xalloc_die(); /* do not return */
}
