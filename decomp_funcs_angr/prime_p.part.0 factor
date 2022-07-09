extern unsigned int g_417208;
extern <missing-type> g_41a301;
extern <missing-type> g_41a59c;

int prime_p.part.0()
{
    BOT tmp_27;  // tmp #27
    BOT tmp_2;  // tmp #2
    BOT tmp_19;  // tmp #19
    unsigned long v0;  // [bp-0x178]
    unsigned long v1;  // [bp-0x170]
    unsigned long long v10;  // rax
    unsigned long long v11;  // eax
    unsigned long|unsigned long long v12;  // rcx
    unsigned long|unsigned long long v13;  // rdx
    unsigned long long v14;  // rbx
    unsigned long long|unsigned int v15;  // esi
    unsigned long long v16;  // rdi
    unsigned long v17;  // r11
    unsigned long long v18;  // r12
    unsigned long|unsigned long long v19;  // r14
    unsigned long long|unsigned int v2;  // [bp-0x164]
    unsigned long long v20;  // r15
    unsigned int v21;  // cc_dep1
    unsigned long v3;  // [bp-0x160]
    unsigned long v4;  // [bp-0x158]
    unsigned int v5;  // [bp-0x150]
    char v6;  // [bp-0x149]
    char v7;  // [bp-0x4e]
    unsigned long|unsigned long long v9;  // rax

    v19 = v16 - 1;
    v11 = 0;
    v0 = v16 - 1;
    if ((((char)((int)v16)) & 1) != 0)
    {
        do
        {
            v19 = v19 % 2;
            v11 = ((int)v11) + 1;
            tmp_27 = v19;
        }
        while (((long long)(tmp_27 & 1)) == 0);
        v2 = v11;
    }
    else
    {
        v2 = 0;
        v19 = v0;
    }
    v12 = v16;
    v20 = 0;
    v15 = 64;
    v13 = 0;
    v10 = 1;
    do
    {
        v16 = v12 * 0x8000000000000000;
        v12 = v12 % 2;
        v13 = v13 % 2 | v16;
        if (v12 < v10 || v13 <= v20 && ((char)(v12 == v10)))
        {
            tmp_2 = v20;
            v20 -= v13;
            v10 = v10 - rcx<8> - ((long long)(tmp_2 < v13));
        }
        v21 = ((unsigned int)v15);
        v15 = ((long long)((unsigned int)v15)) - 1;
    }
    while (v21 != 1);
    v6 = (char)millerrabin();
    if (((long long)v6) != 0)
    {
        v3 = &stack_base-328;
        factor();
        v4 = r14<8>;
        tmp_19 = ((long long)v7);
        v5 = ((int)v7);
        v1 = &stack_base-328 + ((long long)(((int)tmp_19) - 1)) * 8;
        v14 = v20;
        while (true)
        {
            while (true)
            {
                v10 = powm();
                if (v10 != v14)
                {
                    return ((long long)v6);
                }
                if (v10 == v14 || v1 != v17)
                {
                    v18 = 2 + 288797732808819201;
                    v13 = ((long long)(v14 * v18 >> 64));
                    v20 = ((long long)(v14 * v18));
                    v9 = ((long long)(v14 * v18 >> 64));
                    if (v12 > v13)
                    {
                        v15 = 64;
                        v13 = 0;
                        do
                        {
                            v16 = v12 * 0x8000000000000000;
                            v12 = v12 % 2;
                            v13 = v13 % 2 | v16;
                            if (v12 < v9 || ((char)(v12 == v9)) && v13 <= v20)
                            {
                                tmp_2 = v20;
                                v20 -= v13;
                                v9 = v9 - rcx<8> - ((long long)(tmp_2 < v13));
                            }
                            v21 = v15;
                            v15 = ((long long)v15) - 1;
                        }
                        while (v21 != 1);
                    }
                    else
                    {
                        __assert_fail(); /* do not return */
                    }
                    if (((long long)(v14 * v18 >> 64)) == 0 || v12 > v13)
                    {
                        v10 = millerrabin();
                        if (((long long)v10) != 0)
                        {
                            v6 = 0;
                            return ((long long)v6);
                            error(0x0, 0x0, dcgettext(0x0, &g_417208, 0x5));
                            abort(); /* do not return */
                        }
                    }
                }
            }
        }
        return ((long long)v6);
    }
    v6 = 0;
    return ((long long)v6);
}
