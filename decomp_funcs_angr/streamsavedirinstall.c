typedef struct struct_0 {
    unsigned long long field_0;
} struct_0;

typedef struct struct_1 {
    unsigned int field_0;
} struct_1;

extern struct_0 comparison_function_table;

int streamsavedir()
{
    BOT tmp_18;  // tmp #18
    unsigned long v0;  // [bp-0x80]
    unsigned long|unsigned long long [2] v1;  // [bp-0x78]
    char *|unsigned long long v11;  // rbx
    unsigned long long v12;  // rbx
    unsigned long long v13;  // rbp
    unsigned long|unsigned long long|struct_0 * v14;  // rsi
    unsigned long v15;  // rdi
    void *v17;  // r10
    unsigned long v18;  // r11
    struct_1 *|unsigned long long v19;  // r12
    unsigned long|char [22] v2;  // [bp-0x70]
    unsigned long long v20;  // r13
    unsigned long long v21;  // r13
    unsigned long long v22;  // r14
    unsigned long long v23;  // r15
    unsigned long|struct_0 * v3;  // [bp-0x68]
    unsigned long v4;  // [bp-0x60]
    unsigned long long v5;  // [bp-0x50]
    unsigned long long v6;  // [bp-0x48]
    unsigned long long v8;  // rax
    unsigned long long v9;  // rax

    v5 = 0;
    v6 = 0;
    v0 = *(comparison_function_table + v14 * 8);
    if (v15 != 0)
    {
        v11 = 0;
        v20 = 0;
        v23 = 0;
        v22 = 0;
        v19 = __errno_location();
        v4 = &stack_base-80;
        while (true)
        {
            v19->field_0 = 0;
            if (v2 != 0)
            {
                v8 = ((long long)v2[19]);
                if (v2[20] == 46 && v2[19] == 46)
                {
                    v8 = ((long long)v2[21]);
                }
                v1 = v2 + 19;
                v2 = readdir();
                v18 = strlen(v1) + 1;
                if (v0 != 0)
                {
                    if (v6 == v20)
                    {
                        v3 = v1;
                        v1 = v2;
                        v23 = (long long)xpalloc();
                    }
                    tmp_18 = v20;
                    v3 = v2;
                    v20 += 1;
                    v2 = v18;
                    v1 = tmp_18 * 16 + r15<8>;
                    v1[0] = (long long)xstrdup();
                    v1[1] = v3->field_0;
                }
                else
                {
                    if (v5 - v11 <= v2)
                    {
                        v2 = v1;
                        v1 = v2;
                        v22 = (long long)xpalloc();
                    }
                    v1 = v2;
                    memcpy(r14<8> + v11, v17, v2);
                    v18 = v1;
                }
                v11 += v18;
            }
            else if (v19->field_0 != 0)
            {
                rpl_free();
                rpl_free();
                v9 = v22;
                return v9;
            }
            else if (v0 != 0)
            {
                if (v20 == 0)
                {
                    v11 = (long long)ximalloc();
                }
                else
                {
                    v14 = v20;
                    v21 = v20 * 16;
                    v12 = 0;
                    qsort(((int)v23), v14, 0x10, ((int)v0));
                    v20 = v21 + v23;
                    v13 = v23;
                    v22 = (long long)ximalloc();
                    while (true)
                    {
                        v14 = *(v13);
                        v19 = v22 + v12;
                        v13 += 16;
                        v12 = v12 + stpcpy(((int)(v22 + v12)), v14) - v19 + 1;
                        rpl_free();
                        if (v13 == v20)
                        {
                            break;
                        }
                    }
                    v11 = v12 + v22;
                }
                rpl_free();
            }
            else
            {
                if (v11 == v5)
                {
                    v22 = (long long)xirealloc();
                }
                v11 += v22;
                *(v11) = 0;
                v9 = v22;
                return v9;
            }
        }
        *(v11) = 0;
        v9 = v22;
        return v9;
    }
    v9 = v22;
    return v9;
}
