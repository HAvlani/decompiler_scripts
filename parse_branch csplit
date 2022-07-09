typedef struct struct_0 {
    char field_0;
    char padding_1[7];
    char field_8;
} struct_0;

typedef struct struct_2 {
    char padding_0[8];
    char field_8;
} struct_2;

typedef struct struct_1 {
    unsigned int field_0;
} struct_1;

int parse_branch()
{
    unsigned long v0;  // [bp-0x80]
    unsigned long v1;  // [bp-0x78]
    unsigned long long v10;  // rax
    unsigned long v13;  // rdx
    struct_0 *v14;  // rsi
    unsigned long v15;  // rdi
    unsigned long v16;  // r8
    struct_1 *v17;  // r9
    struct_2 *v18;  // r14
    unsigned long long v19;  // r15
    char v2;  // [bp-0x69]
    unsigned long v3;  // [bp-0x68]
    unsigned long v4;  // [bp-0x60]
    uint128_t v5;  // [bp-0x58]
    char v6;  // [bp-0x50]
    unsigned long long v8;  // rax

    v0 = v15;
    v3 = v14->field_0;
    v19 = (long long)parse_expression();
    if (v14->field_0 != 0)
    {
        if (v19 == 0)
        {
            v19 = 0;
            v10 = v19;
            return v10;
        }
    }
    if (v14->field_0 == 0 || v19 != 0)
    {
        v8 = ((long long)v14->field_8);
        if (((char)(((int)v14->field_8) & -9)) != 2)
        {
            v4 = &stack_base-88;
            v18 = v13;
            v2 = ((char)(v16 == 0));
            while (true)
            {
                if (v8 == 9 && v2 != 0)
                {
                    v10 = v19;
                    return v10;
                }
                if (v8 != 9 || v2 != 0)
                {
                    if (v1 == 0 && v19 != 0 && v17->field_0 != 0)
                    {
                        v19 = 0;
                        postorder();
                        v10 = v19;
                        return v10;
                        v19 = 0;
                        v10 = v19;
                        return v10;
                    }
                    if (v17->field_0 == 0 || v1 != 0)
                    {
                        if (v1 != 0 && v19 != 0)
                        {
                            v1 = (long long)parse_expression();
                            v5 = 0;
                            v6 = 16;
                            if (v19 != 0)
                            {
                                v19 = create_token_tree.isra.0();
                                v8 = ((long long)v18->field_8);
                                v10 = v19;
                                return v10;
                            }
                            postorder();
                            postorder();
                            v17->field_0 = 12;
                            v19 = 0;
                            v10 = v19;
                            return v10;
                        }
                        if (v1 == 0 || v19 == 0)
                        {
                            v8 = ((long long)v18->field_8);
                            v19 = (v19 == 0? v1 : v19);
                            v10 = v19;
                            return v10;
                        }
                    }
                }
            }
        }
        v10 = v19;
        return v10;
    }
}
