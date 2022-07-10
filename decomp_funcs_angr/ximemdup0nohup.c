int ximemdup0()
{
    unsigned long v0;  // [bp-0x8]
    char *v2;  // rax
    char *v4;  // rsi
    unsigned long v5;  // r12

    v0 = v5;
    v2 = malloc(v4 + 1);
    if (v2 != 0)
    {
        *(v2 + v4) = 0;
    }
    else
    {
        xalloc_die(); /* do not return */
    }
}
