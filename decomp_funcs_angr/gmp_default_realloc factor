int gmp_default_realloc()
{
    unsigned long long v1;  // rax
    unsigned int v3;  // rdx
    void *v4;  // rdi

    v1 = realloc(v4, ((unsigned int)v3));
    if (v1 != 0)
    {
        return v1;
    }
    gmp_die(); /* do not return */
}
