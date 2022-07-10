int xrealloc()
{
    unsigned long long v2;  // rax
    unsigned int v3;  // rsi
    void *v4;  // rdi

    v2 = realloc(v4, ((unsigned int)v3));
    if (v2 != 0)
    {
        return v2;
    }
    else if (!(v4 != 0))
    {
        xalloc_die(); /* do not return */
    }
    else if (((unsigned int)v3) == 0)
    {
        return v2;
    }
    else
    {
        xalloc_die(); /* do not return */
    }
}
