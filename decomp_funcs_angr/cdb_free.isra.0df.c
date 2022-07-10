int cdb_free.isra.0()
{
    unsigned long v1;  // rax
    unsigned long long v2;  // rax
    unsigned int v3;  // rdi

    if (((int)((unsigned int)v3)) < 0)
    {
        return v1;
    }
    v2 = close(((unsigned int)v3));
    if (((int)v2) == 0)
    {
        return v2;
    }
    else
    {
        __assert_fail(); /* do not return */
    }
}
