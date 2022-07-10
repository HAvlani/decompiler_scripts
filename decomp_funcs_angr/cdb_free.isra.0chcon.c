int cdb_free.isra.0()
{
    unsigned long long v1;  // rax
    unsigned long v2;  // rax
    unsigned int v3;  // rdi

    if (((int)((unsigned int)v3)) < 0)
    {
        return v2;
    }
    v1 = close(((unsigned int)v3));
    if (((int)v1) == 0)
    {
        return v1;
    }
    else
    {
        __assert_fail(); /* do not return */
    }
}
