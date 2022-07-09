typedef struct struct_1 {
    unsigned int field_0;
} struct_1;

int xvasprintf()
{
    BOT tmp_14;  // tmp #14
    unsigned long long v0;  // [bp-0x18]
    unsigned long long v2;  // rax
    unsigned long long v3;  // rax
    unsigned long long v6;  // rdi
    unsigned long long v7;  // rdi
    unsigned long long|unsigned int v8;  // r8d

    v8 = v7;
    v3 = ((long long)*(v7));
    v6 = 0;
    tmp_14 = v3;
    if (((long long)tmp_14) == 0)
    {
        v2 = xstrcat();
        return v2;
    }
    while (true)
    {
        if (*(v8 + (v6 << 1) + 1) == 115 && v3 == 37)
        {
            v6 += 1;
            v3 = ((long long)*(v8 + v6 * 2));
            v2 = xstrcat();
            return v2;
        }
        if (*(v8 + (v6 << 1) + 1) != 115 || v3 != 37)
        {
            v8 = rpl_vasprintf();
            v2 = v0;
            if (v8 >= 0)
            {
                return v2;
            }
            else if (*(__errno_location()) != 12)
            {
                v2 = 0;
                break;
            }
            else
            {
                xalloc_die(); /* do not return */
            }
        }
    }
    return v2;
}
