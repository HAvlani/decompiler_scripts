extern unsigned int g_40b017;

int unit_to_umax()
{
    unsigned long long v0;  // [bp-0x30]
    unsigned long v1;  // [bp-0x28]
    unsigned long long v10;  // r12
    unsigned long|void * v5;  // rax
    unsigned long v7;  // rbx
    unsigned long long|void * v8;  // rdi
    unsigned long long v9;  // r12

    v5 = strlen(v8);
    v0 = 0;
    if (v7 != 0)
    {
        v7 = v5;
        v10 = v7 - 1;
        if (((int)*(v8 + v7 + 1)) - 48 > 9)
        {
            v5 = xmalloc();
            v10 += v5;
            v0 = v10;
            v8 = memcpy(v5, v8, v7);
            if (*(v0) == 105)
            {
                if (v7 != 1)
                {
                    if (((int)*(v0 + 1)) - 48 > 9)
                    {
                        *(v0) = 0;
                    }
                }
            }
            if (((int)*(v0 + 1)) - 48 <= 9 || v7 == 1 || *(v0) != 105)
            {
                v0 += 2;
                *(v0 + 1) = 66;
            }
        }
    }
    if (!(xstrtoumax() == 0))
    {
        rpl_free();
        v9 = (long long)quote();
        error(0x1, 0x0, dcgettext(0x0, &g_40b017, 0x5));
    }
    else if (!(*(v0) == 0))
    {
        rpl_free();
        v9 = (long long)quote();
        error(0x1, 0x0, dcgettext(0x0, &g_40b017, 0x5));
    }
    else if (v1 != 0)
    {
        rpl_free();
        return v1;
    }
    else
    {
        rpl_free();
        v9 = (long long)quote();
        error(0x1, 0x0, dcgettext(0x0, &g_40b017, 0x5));
    }
}
