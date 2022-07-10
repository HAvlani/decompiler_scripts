int xreallocarray()
{
    unsigned long long v1;  // rax
    unsigned long v3;  // rdx
    unsigned long v4;  // rsi
    unsigned long v5;  // rdi

    v1 = reallocarray();
    if (v1 != 0)
    {
        return v1;
    }
    else if (!(v5 != 0))
    {
        xalloc_die(); /* do not return */
    }
    else if (v4 == 0)
    {
        return v1;
    }
    else if (v3 == 0)
    {
        return v1;
    }
    else
    {
        xalloc_die(); /* do not return */
    }
}
