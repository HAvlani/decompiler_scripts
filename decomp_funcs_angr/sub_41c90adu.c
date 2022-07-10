typedef struct struct_2 {
    unsigned int field_0;
} struct_2;

typedef struct struct_3 {
    char padding_0[176];
    char field_b0;
    char padding_b1[7];
    unsigned long long field_b8;
    unsigned long long field_c0;
    uint128_t field_c8;
} struct_3;

typedef struct struct_4 {
    char padding_0[184];
    unsigned long long field_b8;
} struct_4;

typedef struct struct_0 {
    char padding_0[72];
    unsigned long long field_48;
} struct_0;

int sub_41c90a()
{
    BOT tmp_17;  // tmp #17
    struct_2 *v0;  // [bp+0x8]
    struct_3 *v1;  // [bp+0x18]
    struct_4 *v10;  // rsi
    struct_3 *|char *|unsigned long long v11;  // rdi
    unsigned int v12;  // r9d
    unsigned long long v13;  // r12
    struct_0 *v14;  // r15
    unsigned long v2;  // [bp+0x28]
    uint128_t v3;  // [bp+0xb0]
    char v4;  // [bp+0xb8]
    unsigned long long v5;  // rax
    unsigned long long v6;  // rcx
    unsigned long long v7;  // rdx
    unsigned int|unsigned long long v8;  // ebx
    unsigned long long v9;  // rbp

    v9 = ((long long)v0->field_0);
    if ((((short)v0->field_0) & 783) != 0)
    {
        if (((long long)(v1->field_b0 & 16)) == 0)
        {
            v11 = v1;
            v5 = ((long long)(((int)v1->field_b0) | 16));
            tmp_17 = ((char)(((int)v1->field_b0) | 16));
            v1->field_b0 = ((char)(((int)v1->field_b0) | 16));
            if (((long long)(tmp_17 & 8)) == 0)
            {
                v11->field_b8 = 0x3ff000000000000;
                v11->field_c0 = 576460745995190270;
                if (((long long)(v5 & 4)) != 0)
                {
                    *(v11 + 0xc8) = 0;
                    v9 = ((long long)v0->field_0);
                }
                else
                {
                    v8 = 128;
                    v13 = 2;
                }
            }
            else
            {
                v8 = 0;
                v13 = 0;
            }
            if (((long long)(v5 & 4)) == 0 || ((long long)(tmp_17 & 8)) != 0)
            {
                v7 = *(__ctype_b_loc());
                v10 = v1 + ((long long)v13) * 8;
                v12 = ((int)(v8 + 0x100 - ((long long)v13) * 64));
                v11 = v7 + v8 * 2;
                do
                {
                    v5 = 0;
                    do
                    {
                        v6 = v5;
                        if (((int)(v8 + v5)) == 95 || ((long long)(*(v11 + (v5 << 1)) & 8)) != 0)
                        {
                            v10->field_b8 = v10->field_b8 | 1 << (v6 & 63);
                        }
                        v5 += 1;
                    }
                    while (v5 != 64);
                    v8 = ((int)(((int)v8) + 64));
                    v11 -= 18446744069414584192;
                }
                while (v12 != ((int)v8) + 64);
            }
        }
    }
    if (!((((int)(v9 - 0x100)) & -257) == 0))
    {
        v2 = (long long)create_token_tree.isra.0();
        if (v2 != 0)
        {
            v14->field_48 = v14->field_48 + (long long)peek_token();
        }
    }
    else if (((int)v9) != 0x100)
    {
        v0->field_0 = 5;
        v0->field_0 = 10;
        v8 = (long long)create_token_tree.isra.0();
        v9 = (long long)create_token_tree.isra.0();
        v3 = 0;
        v4 = 10;
        v5 = create_token_tree.isra.0();
        v2 = v5;
        v11 = v5;
        v14->field_48 = v14->field_48 + (long long)peek_token();
    }
    else
    {
        v0->field_0 = 6;
        v0->field_0 = 9;
        v8 = (long long)create_token_tree.isra.0();
        v9 = (long long)create_token_tree.isra.0();
        v3 = 0;
        v4 = 10;
        v5 = create_token_tree.isra.0();
        v2 = v5;
        v11 = v5;
        v14->field_48 = v14->field_48 + (long long)peek_token();
    }
}
