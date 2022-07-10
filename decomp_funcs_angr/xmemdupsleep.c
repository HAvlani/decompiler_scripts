int xmemdup()
{
    unsigned long v0;  // [bp-0x8]
    unsigned long long v2;  // rax
    unsigned int v4;  // rsi
    unsigned long v5;  // r12

    v0 = v5;
    v2 = malloc(((unsigned int)v4));
    if (v2 != 0)
    {
    }
    else
    {
        xalloc_die(); /* do not return */
    }
}
