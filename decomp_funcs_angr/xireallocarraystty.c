int xireallocarray()
{
    unsigned long long v1;  // rax
    unsigned long v3;  // rdx
    unsigned long v4;  // rsi

    if (!(v4 != 0))
    {
        v1 = reallocarray();
        if (v1 != 0)
        {
            return v1;
        }
        xalloc_die(); /* do not return */
    }
    else if (v3 != 0)
    {
        v1 = reallocarray();
        if (v1 != 0)
        {
            return v1;
        }
        xalloc_die(); /* do not return */
    }
    else
    {
        v1 = reallocarray();
        if (v1 != 0)
        {
            return v1;
        }
        xalloc_die(); /* do not return */
    }
}
