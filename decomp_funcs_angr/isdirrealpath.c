extern unsigned int g_409004;

int isdir()
{
    char v0;  // [bp-0xb8]
    unsigned int v1;  // [bp-0xa0]
    char v3;  // al
    unsigned long long v4;  // rax
    unsigned long long v5;  // rax
    unsigned int v6;  // edi
    unsigned long long v7;  // r13

    v5 = __xstat(0x1, v6, ((int)&v0));
    if (v5 == 0)
    {
        v4 = ((long long)(v1 & 0xf000));
        v3 = ((char)((v1 & 0xf000) == 0x4000));
        return rax<8>;
    }
    v7 = (long long)quotearg_style();
    error(0x1, *(__errno_location()), dcgettext(0x0, &g_409004, 0x5));
}
