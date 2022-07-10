typedef struct struct_0 {
    char padding_0[8];
    unsigned long long field_8;
    char padding_10[24];
    unsigned long long field_28;
    char padding_30[2];
    char field_32;
} struct_0;

typedef struct struct_1 {
    struct struct_2 *field_0;
    char padding_8[48];
    char field_38;
} struct_1;

typedef struct struct_4 {
    char padding_0[40];
    unsigned long long field_28;
    char padding_30[2];
    char field_32;
} struct_4;

typedef struct struct_3 {
    unsigned int field_0;
} struct_3;

int lower_subexp()
{
    BOT tmp_25;  // tmp #25
    BOT tmp_42;  // tmp #42
    unsigned long v0;  // [bp-0x188]
    unsigned long v1;  // [bp-0x68]
    struct_1 *v10;  // rsi
    struct_3 *v11;  // rdi
    unsigned long long v12;  // r12
    struct_4 *|unsigned long long v13;  // r13
    struct_4 *|unsigned long long v14;  // r15
    uint128_t v2;  // [bp-0x58]
    char v3;  // [bp-0x50]
    unsigned long long v5;  // rax
    unsigned long long v6;  // rax
    unsigned long long v7;  // rcx
    struct_0 *v8;  // rdx
    struct_0 *v9;  // rbx

    v9 = v8;
    v12 = v8->field_8;
    if (!(((long long)(v10->field_38 & 16)) != 0))
    {
        v2 = 0;
        v1 = &stack_base-88;
        v3 = 8;
        v2 = 0;
        v13 = (long long)create_token_tree.isra.0();
        v3 = 9;
        v5 = create_token_tree.isra.0();
        v14 = v5;
        v7 = v5;
        if (v8->field_8 == 0)
        {
            /* goto 4232466; */
        }
    }
    else if (v8->field_8 != 0)
    {
        v5 = v8->field_28;
        if (v8->field_28 <= 63)
        {
            v0 = v10->field_0->field_a0;
            if ((((char)(((long long)*(&stack_base-392 + ((v5 & 63) >> 3))) >> ((long long)((char)(v5 & 63 & 7))))) & 1) != 0)
            {
                v2 = 0;
                v1 = &stack_base-88;
                v3 = 8;
                v2 = 0;
                v13 = (long long)create_token_tree.isra.0();
                v3 = 9;
                v14 = (long long)create_token_tree.isra.0();
            }
            else
            {
                v6 = v12;
                return v6;
            }
        }
        else
        {
            v6 = v12;
            return v6;
        }
    }
    else
    {
        v2 = 0;
        v1 = &stack_base-88;
        v3 = 8;
        v2 = 0;
        v13 = (long long)create_token_tree.isra.0();
        v3 = 9;
        v5 = create_token_tree.isra.0();
        v7 = v5;
        v14 = v5;
        /* goto 4232466; */
    }
    if (...)
    {
        v1 = &stack_base-88;
        v2 = 0;
        v3 = 16;
        v7 = (long long)create_token_tree.isra.0();
    }
    if (...)
    {
        v2 = 0;
        v1 = v7;
        v3 = 16;
        v12 = (long long)create_token_tree.isra.0();
        if (!(v12 != 0))
        {
            v12 = 0;
            v11->field_0 = 12;
            v6 = v12;
            return v6;
        }
        else if (!(v1 != 0))
        {
            v12 = 0;
            v11->field_0 = 12;
            v6 = v12;
            return v6;
        }
        else if (!(v13 != 0))
        {
            v12 = 0;
            v11->field_0 = 12;
            v6 = v12;
            return v6;
        }
        else if (v14 != 0)
        {
            tmp_25 = v9->field_28;
            v14->field_28 = v9->field_28;
            v13->field_28 = tmp_25;
            tmp_42 = ((int)v9->field_32);
            v14->field_32 = ((char)(((int)v14->field_32) & -9 | ((int)(v9->field_32 & 8))));
            v13->field_32 = ((char)(((int)v13->field_32) & -9 | tmp_42 & 8));
            v6 = v12;
            return v6;
        }
        else
        {
            v12 = 0;
            v11->field_0 = 12;
            v6 = v12;
            return v6;
        }
    }
}
