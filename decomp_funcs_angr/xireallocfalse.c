int xirealloc()
{
    unsigned long long v1;  // rax
    unsigned long v3;  // rsi
    unsigned long v4;  // rsi
    void *v5;  // rdi

    v3 = v4 | ((long long)(v4 == 0));
    v1 = realloc(v5, v3);
    if (v1 != 0)
    {
        return v1;
    }
    xalloc_die(); /* do not return */
}
