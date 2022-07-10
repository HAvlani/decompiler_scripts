int xmalloc()
{
    unsigned long long v1;  // rax
    unsigned int v3;  // rdi

    v1 = malloc(((unsigned int)v3));
    if (v1 != 0)
    {
        return v1;
    }
    xalloc_die(); /* do not return */
}
