int gmp_default_alloc()
{
    unsigned long long v1;  // rax
    unsigned int v3;  // rdi

    if (((unsigned int)v3) != 0)
    {
        v1 = malloc(((unsigned int)v3));
        if (v1 != 0)
        {
            return v1;
        }
        gmp_die(); /* do not return */
    }
    __assert_fail(); /* do not return */
}
