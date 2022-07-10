typedef struct struct_1 {
    unsigned long long field_0;
} struct_1;

typedef struct struct_3 {
    char padding_0[16];
    unsigned int field_10;
} struct_3;

extern unsigned int g_408004;
extern unsigned int g_408006;
extern unsigned int g_408017;

int parse_additional_groups()
{
    struct_1 *v0;  // [bp-0x70]
    unsigned long v1;  // [bp-0x68]
    unsigned long|unsigned long long v10;  // rcx
    unsigned long|unsigned long long v11;  // rdx
    unsigned long long v12;  // rbx
    unsigned long long v13;  // rbp
    struct_1 *v14;  // rsi
    unsigned long v15;  // rdi
    unsigned long long v16;  // r13
    unsigned long long v17;  // r14
    unsigned long long v18;  // r15
    unsigned long long v19;  // r15
    char v2;  // [bp-0x5d]
    unsigned int v3;  // [bp-0x5c]
    unsigned long long v4;  // [bp-0x50]
    unsigned long v5;  // [bp-0x48]
    struct_3 *|unsigned long long v8;  // rax
    unsigned long long v9;  // rax

    v1 = v15;
    v0 = v11;
    v3 = ((int)v10);
    v2 = v10;
    v4 = 0;
    v17 = strtok((int)xstrdup(), &g_408004);
    if (v17 != 0)
    {
        v19 = 0;
        v12 = 0;
        v13 = 0;
        while (true)
        {
            v8 = xstrtoumax();
            if (v5 <= -1 && v8 == 0)
            {
                v10 = *(__ctype_b_loc());
                while (true)
                {
                    v11 = ((long long)*(v17));
                    if (((long long)(*(v10 + (((long long)*(v17)) << 1) + 1) & 32)) == 0)
                    {
                        break;
                    }
                    v17 += 1;
                }
                if (v11 != 43)
                {
                    v8 = getgrnam(((int)v17));
                }
            }
            if (v5 > -1 || v8 != 0)
            {
                v8 = getgrnam(((int)v17));
                if (v8 == 0)
                {
                    if (v2 == 0)
                    {
                        v19 = -1;
                        v14->field_0 = v13;
                        rpl_free();
                        v9 = v19;
                        return v9;
                    }
                    v18 = (long long)quote();
                    v19 = -1;
                    error(0x0, *(__errno_location()), dcgettext(0x0, &g_408006, 0x5));
                }
            }
            if ((v5 <= -1 || v8 != 0) && (v8 == 0 || v8 != 0) && (v8 != 0 || v5 > -1 || v8 != 0) && (v11 != 43 || v5 > -1 || v8 != 0))
            {
                v8 = ((long long)v8->field_10);
                v5 = v8;
            }
            if (v8 != 0 || v5 <= -1 && v8 == 0)
            {
                if (v4 == v12)
                {
                    v13 = (long long)x2nrealloc();
                }
                *(rbp<8> + v12 * 4) = ((int)v5);
                v12 += 1;
            }
            if (v8 != 0 || v2 != 0 || v5 <= -1 && v8 == 0)
            {
                v17 = strtok(0x0, &g_408004);
                if (v12 == 0 && ((int)v19) == 0)
                {
                    v17 = v13;
                }
                if (v12 != 0 || ((int)v19) != 0)
                {
                    v14->field_0 = v13;
                    if (((int)v19) == 0)
                    {
                        v0->field_0 = v12;
                        rpl_free();
                        v9 = v19;
                        return v9;
                    }
                    v19 = -1;
                    rpl_free();
                    v9 = v19;
                    return v9;
                }
            }
        }
    }
    if (((char)v3) != 0)
    {
        v16 = (long long)quote();
        error(0x0, 0x0, dcgettext(0x0, &g_408017, 0x5));
        v19 = -1;
        v14->field_0 = v17;
        rpl_free();
        v9 = v19;
        return v9;
    }
    v19 = -1;
    v14->field_0 = v17;
    rpl_free();
    v9 = v19;
    return v9;
}
