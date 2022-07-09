int gmp_default_alloc()
{
    unsigned long long v2;  // rax
    unsigned int v3;  // rdi

    if (((unsigned int)v3) != 0)
    {
        v2 = malloc(((unsigned int)v3));
        if (v2 != 0)
        {
            return v2;
        }
        gmp_die(); /* do not return */
    }
    __assert_fail(); /* do not return */
}
