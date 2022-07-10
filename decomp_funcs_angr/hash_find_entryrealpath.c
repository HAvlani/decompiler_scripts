typedef struct struct_3 {
    char padding_0[72];
    unsigned long long field_48;
} struct_3;

typedef struct struct_0 {
    unsigned long long field_0;
} struct_0;

typedef struct struct_2 {
    char field_0;
    char padding_1[7];
    struct struct_1 *field_8;
} struct_2;

typedef struct struct_1 {
    char field_0;
    char padding_1[7];
    unsigned long long field_8;
} struct_1;

int hash_find_entry()
{
    struct_1 *|unsigned long long v1;  // rax
    struct_3 *v10;  // r12
    unsigned long long v2;  // rax
    unsigned long v3;  // rcx
    struct_0 *|unsigned long long [2]|struct_1 * v4;  // rdx
    struct_0 *|struct_2 * v5;  // rbx
    unsigned long long v6;  // rbp
    unsigned long long v7;  // rsi
    unsigned long long v8;  // rsi
    unsigned long long v9;  // rdi

    v10 = v9;
    v6 = v8;
    v1 = safe_hasher();
    v4->field_0 = v5;
    v7 = v5->field_0;
    if (v5->field_0 != 0)
    {
        v5 = v1;
        if (v1 != v9)
        {
            v9 = v6;
            v1 = *(r12<8> + 56)();
            if (((long long)v1) != 0)
            {
                v2 = v5->field_0;
            }
            else
            {
                while (true)
                {
                    v1 = v5->field_8;
                    if (v5->field_8 != 0)
                    {
                        v2 = 0;
                        return v2;
                        v7 = v1->field_0;
                        if (v1->field_0 != v9)
                        {
                            v1 = *(r12<8> + 56)();
                            if (((long long)v1) == 0)
                            {
                                v5 = v5->field_8;
                            }
                            else
                            {
                                v4 = v5->field_8;
                                v2 = v5->field_8->field_0;
                                if (((long long)v3) != 0)
                                {
                                    v5->field_8 = v4[1];
                                    v4[0] = 0;
                                    v4[1] = v10->field_48;
                                    v10->field_48 = v4;
                                    return v2;
                                    return v2;
                                }
                            }
                        }
                        else
                        {
                            v4 = v5->field_8;
                            v2 = v5->field_8->field_0;
                            if (((long long)v3) != 0)
                            {
                                v5->field_8 = v4[1];
                                v4[0] = 0;
                                v4[1] = v10->field_48;
                                v10->field_48 = v4;
                                return v2;
                                return v2;
                            }
                        }
                    }
                }
            }
        }
        else
        {
            v2 = v7;
        }
        if (v1 == v9 || ((long long)v1) != 0)
        {
            if (((long long)v3) != 0)
            {
                v4 = v5->field_8;
                if (v5->field_8 != 0)
                {
                    v5->field_0 = v4->field_0;
                    v4->field_0 = 0;
                    v4->field_8 = v10->field_48;
                    v10->field_48 = v4;
                    return v2;
                }
                v5->field_0 = 0;
                return v2;
            }
            return v2;
        }
    }
    v2 = 0;
    return v2;
}
