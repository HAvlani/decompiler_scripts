typedef struct struct_0 {
    char padding_0[80];
    struct struct_1 *field_50;
    char padding_58[24];
    unsigned long long field_70;
} struct_0;

typedef struct struct_1 {
    char padding_0[73];
    char field_49;
    char padding_4a[6];
    unsigned long long field_50;
} struct_1;

typedef struct struct_2 {
    char padding_0[8];
    unsigned long long field_8;
} struct_2;

int filesystem_type()
{
    BOT tmp_7;  // tmp #7
    unsigned long v0;  // [bp-0xb8]
    char v1;  // [bp-0xa8]
    unsigned long long v10[2];  // r13
    unsigned long long v3;  // rax
    struct_2 *|unsigned long long v4;  // rax
    unsigned long long v5;  // rbp
    unsigned int v6;  // esi
    struct_0 *v7;  // rdi
    struct_1 *v8;  // r12
    unsigned long long v9;  // r12

    v8 = v7->field_50;
    if (((long long)(v7->field_50->field_49 & 2)) != 0)
    {
        v5 = v8->field_50;
        if (v8->field_50 == 0)
        {
            v8->field_50 = v7->field_50->field_50;
            v5 = (long long)hash_initialize();
        }
        if (v5 != 0 || v8->field_50 != 0)
        {
            v0 = v7->field_70;
            v4 = hash_lookup();
            if (v4 != 0)
            {
                v9 = v4->field_8;
                v3 = v9;
                return v3;
            }
        }
        if (v4 == 0 || v5 == 0 && v8->field_50 == 0)
        {
            if (v6 >= 0)
            {
                v4 = fstatfs(v6, ((int)&v1));
                if (v4 != 0)
                {
                    v9 = 0;
                    v3 = v9;
                    return v3;
                }
                v9 = v1;
                if (v5 == 0)
                {
                    v3 = v9;
                    return v3;
                }
                else
                {
                    v10 = malloc(0x10);
                    if (v10 == 0)
                    {
                        v3 = v9;
                        return v3;
                    }
                    else
                    {
                        tmp_7 = v7->field_70;
                        v10[1] = v1;
                        v10[0] = tmp_7;
                        v4 = hash_insert();
                        if (v4 != 0)
                        {
                            v9 = v1;
                            v3 = v9;
                            return v3;
                        }
                        else
                        {
                            rpl_free();
                            v9 = v1;
                            v3 = v9;
                            return v3;
                        }
                    }
                }
            }
            v9 = 0;
            v3 = v9;
            return v3;
        }
    }
    v9 = 0;
    v3 = v9;
    return v3;
}
