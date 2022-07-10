typedef struct struct_0 {
    struct struct_1 *field_0;
    unsigned long long field_8;
} struct_0;

typedef struct struct_1 {
    unsigned long long field_0;
    unsigned int field_8;
    unsigned int field_c;
    unsigned long long field_10;
    unsigned long long field_18;
    unsigned long long field_20;
} struct_1;

typedef struct struct_6 {
    unsigned long long field_0;
    unsigned int field_8;
    unsigned int field_c;
    unsigned long long field_10;
} struct_6;

typedef struct struct_5 {
    char field_0;
    char padding_1[7];
    unsigned long long field_8;
} struct_5;

typedef struct struct_3 {
    char padding_0[8];
    unsigned long long field_8;
} struct_3;

typedef struct struct_2 {
    unsigned int field_0;
    unsigned short field_4;
    char field_6;
} struct_2;

typedef struct struct_4 {
    unsigned int field_0;
} struct_4;

int add_exclude()
{
    unsigned long long v1;  // rax
    void *|unsigned long long v10;  // rsi
    struct_0 *|struct_5 * v11;  // rdi
    unsigned long long [2]|unsigned long long v12;  // r12
    unsigned long long v13;  // r13
    struct_5 *|void * v14;  // r14
    struct_3 *v15;  // r15
    unsigned long|struct_4 *|unsigned long long v2;  // rax
    struct_5 * v4;  // rax
    unsigned long long v5;  // rcx
    char [2]|unsigned int|unsigned long long v6;  // rdx
    struct_1 *|struct_6 * v7;  // rbx
    unsigned int|unsigned long v8;  // rbp
    struct_2 *v9;  // rbp

    v13 = v10;
    v12 = v11;
    v7 = v11->field_0;
    if ((v6 & 0x18000000) != 0)
    {
        v1 = fnmatch_pattern_has_wildcards();
        if (((long long)v1) != 0)
        {
            if (v11->field_0 == 0 || v11->field_0->field_8 != 1 || ((v11->field_0->field_c ^ v6) & 0x20000000) != 0)
            {
                v7 = (long long)xzalloc();
                v7->field_8 = 1;
                v7->field_c = v6;
                v1 = v12[0];
                v12[0] = v7;
                v7->field_0 = v1;
            }
            v14 = v7->field_20;
            v11 = v7->field_10;
            if (v7->field_20 == v7->field_18)
            {
                v14 = v7->field_20;
                v7->field_10 = v11;
                v11 = (long long)xpalloc();
            }
            v7->field_20 = v14 + 1;
            v4 = v14 * 9;
            v15 = v11 + v14 * 72;
            *(v11 + v14 * 72) = v6;
            if ((v6 & 0x8000000) != 0)
            {
                if ((((char)v6) & 8) != 0)
                {
                    v2 = strlen(v10);
                    v8 = v2;
                    if (v2 == 0)
                    {
                        v7->field_20 = v14;
                        return v2;
                    }
                    while (true)
                    {
                        if (*(v10 + v8 + 1) == 47)
                        {
                            v8 -= 1;
                            v7->field_20 = v14;
                            return v2;
                        }
                        else
                        {
                            v14 = (long long)ximalloc();
                            memcpy(v14, v10, v8);
                            v9 = v8 + v14;
                            v9->field_0 = 707669800;
                            v9->field_4 = 16169;
                            v9->field_6 = 0;
                            v8 = (long long)rpl_regcomp();
                            v2 = rpl_free();
                        }
                    }
                }
                else
                {
                    v2 = rpl_regcomp();
                    v8 = ((int)v2);
                }
                if ((((char)v6) & 8) == 0 || v2 != 0)
                {
                    if (v8 != 0)
                    {
                        v2 = v7->field_20;
                        v14 = v7->field_20 - 1;
                        v7->field_20 = v14;
                        return v2;
                    }
                    return v2;
                }
            }
            else if ((v6 & 0x4000000) == 0)
            {
                v15->field_8 = v13;
                return v4;
            }
            else
            {
                v13 = (long long)xstrdup();
                v4 = xmalloc();
                v6 = v12[1];
                v4->field_8 = v13;
                v4->field_0 = v6;
                v12[1] = v4;
                v15->field_8 = v13;
                return v4;
            }
        }
    }
    if (((long long)v1) == 0 || (v6 & 0x18000000) == 0)
    {
        if (v11->field_0 == 0 || ((v11->field_0->field_c ^ v6) & 1610612760) != 0 || v11->field_0->field_8 != 0)
        {
            v7 = (long long)xzalloc();
            v7->field_8 = 0;
            v7->field_c = v6;
            v7->field_10 = (long long)hash_initialize();
            v1 = v12[0];
            v12[0] = v7;
            v7->field_0 = v1;
        }
        v12 = (long long)xstrdup();
        if (((int)(v6 & 268435458)) != 0x10000000)
        {
            v2 = hash_insert();
            if (v12 == v2)
            {
                return v2;
            }
        }
        else
        {
            v6 = v12;
            v5 = v12;
            while (true)
            {
                v1 = ((long long)v6[0]);
                v10 = v6 + 1;
                if (v6[0] == 92)
                {
                    if (v6[1] != 0)
                    {
                        v1 = ((long long)v6[1]);
                        v10 = v6 + 2;
                    }
                    else
                    {
                        v5 += 1;
                        *(v5 + 1) = 92;
                        /* goto 4222635; */
                    }
                }
                if (v6[0] != 92 || v6[1] != 0)
                {
                    v5 += 1;
                    *(v5 + 1) = v1;
                    if (((long long)v1) == 0)
                    {
                        break;
                    }
                }
                v6 = rsi<8>;
            }
            v2 = hash_insert();
            if (v12 == v2)
            {
                return v2;
            }
        }
    }
}
