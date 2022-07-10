typedef struct struct_0 {
    unsigned int field_0;
} struct_0;

extern unsigned int g_408028;
extern unsigned int g_408050;
extern unsigned long long stdout[7];

int print_group_list()
{
    unsigned int v0;  // [bp-0x4c]
    unsigned long long v1;  // [bp-0x48]
    unsigned int v10;  // esi
    unsigned long|unsigned long long v11;  // rdi
    unsigned long v12;  // r9
    unsigned long long v13;  // r12
    unsigned long|unsigned long long v14;  // r13
    char|unsigned int v15;  // r13b
    unsigned long long v17;  // r14
    unsigned long long v18;  // r15
    char *v3;  // rax
    unsigned long long v4;  // rax
    char *v5;  // rax
    unsigned long long|unsigned int v6;  // rax
    unsigned int v7;  // ecx
    unsigned int v8;  // edx
    struct_0 *v9;  // rbx

    v0 = ((int)v12);
    if (v11 != 0)
    {
        v18 = getpwuid(v10);
        v15 = ((char)(v18 != 0));
    }
    else
    {
        v18 = 0;
        v15 = 1;
    }
    v14 = ((long long)((long long)print_group() == 0? 0 : ((int)r13<8>)));
    if (v8 != v7)
    {
        v5 = *(stdout + 40);
        if (*(stdout + 40) < *(stdout + 48))
        {
            *(stdout + 40) = *(stdout + 40) + 1;
            *(v5) = ((char)v0);
        }
        else
        {
            __overflow();
        }
        v14 = ((long long)(((long long)print_group() & 255) == 0? 0 : ((int)r13<8>)));
    }
    v6 = xgetgroups();
    if (((int)v6) >= 0)
    {
        v11 = v1;
        if (!(((char)[D] amd64g_calculate_condition(0x4<64>, 0x13<64>, rax<8>, 0x0<64>, cc_ndep<8>))))
        {
            v18 = 0;
            v17 = ((long long)(((int)v6) - 1)) * 4 + 4;
            v0 = ((int)v12);
            do
            {
                v6 = ((int)*(v11 + v18));
                if (v6 != v7 && *(v11 + v18) != v8)
                {
                    v3 = *(stdout + 40);
                    if (*(stdout + 40) < *(stdout + 48))
                    {
                        *(stdout + 40) = *(stdout + 40) + 1;
                        *(v3) = v12;
                    }
                    else
                    {
                        __overflow();
                    }
                    v6 = print_group();
                    v11 = v1;
                    if (((long long)v6) == 0)
                    {
                        v14 = 0;
                    }
                }
                v18 += 4;
            }
            while (v17 != v18);
            rpl_free();
            v4 = v14;
            return v4;
        }
        rpl_free();
        v4 = v14;
        return v4;
    }
    v9 = __errno_location();
    if (v11 != 0)
    {
        v13 = (long long)quote();
        error(0x0, v9->field_0, dcgettext(0x0, &g_408028, 0x5));
        v14 = 0;
        v4 = v14;
        return v4;
    }
    else
    {
        error(0x0, v9->field_0, dcgettext(0x0, &g_408050, 0x5));
        v14 = 0;
        v4 = v14;
        return v4;
    }
}
