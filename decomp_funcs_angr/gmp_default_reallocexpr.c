int gmp_default_realloc()
{
    unsigned long long v2;  // rax
    unsigned int v3;  // rdx
    void *v4;  // rdi

    v2 = realloc(v4, ((unsigned int)v3));
    if (v2 != 0)
    {
        return v2;
    }
    gmp_die(); /* do not return */
}
