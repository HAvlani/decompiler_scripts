int ximemdup0()
{
    unsigned long v0;  // [bp-0x8]
    char *v3;  // rax
    char *v4;  // rsi
    unsigned long v5;  // r12

    v0 = v5;
    v3 = malloc(v4 + 1);
    if (v3 != 0)
    {
        *(v3 + v4) = 0;
    }
    else
    {
        xalloc_die(); /* do not return */
    }
}
