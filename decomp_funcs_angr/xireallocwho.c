int xirealloc()
{
    unsigned long long v1;  // rax
    unsigned long v3;  // rsi
    unsigned long v4;  // rsi
    void *v5;  // rdi

    v4 = v3 | ((long long)(v3 == 0));
    v1 = realloc(v5, v4);
    if (v1 != 0)
    {
        return v1;
    }
    xalloc_die(); /* do not return */
}
