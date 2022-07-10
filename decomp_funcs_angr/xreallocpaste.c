int xrealloc()
{
    unsigned long long v1;  // rax
    unsigned int v3;  // rsi
    void *v4;  // rdi

    v1 = realloc(v4, ((unsigned int)v3));
    if (v1 != 0)
    {
        return v1;
    }
    else if (!(v4 != 0))
    {
        xalloc_die(); /* do not return */
    }
    else if (((unsigned int)v3) == 0)
    {
        return v1;
    }
    else
    {
        xalloc_die(); /* do not return */
    }
}
