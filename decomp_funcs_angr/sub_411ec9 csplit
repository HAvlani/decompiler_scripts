typedef struct struct_3 {
    char padding_0[48];
    unsigned long long field_30;
} struct_3;

typedef struct struct_4 {
    char padding_0[72];
    unsigned long long field_48;
} struct_4;

typedef struct struct_2 {
    char padding_0[8];
    char field_8;
} struct_2;

typedef struct struct_1 {
    unsigned int field_0;
} struct_1;

typedef struct struct_0 {
    char padding_0[168];
    unsigned long long field_a8;
} struct_0;

typedef struct struct_5 {
    char padding_0[40];
    unsigned long long field_28;
} struct_5;

int sub_411ec9()
{
    struct_2 *v0;  // [bp+0x8]
    struct_0 *v1;  // [bp+0x18]
    unsigned long v10;  // r8
    struct_4 *v12;  // r15
    unsigned long v2;  // [bp+0x20]
    struct_5 *v3;  // [bp+0x28]
    struct_1 *v4;  // [bp+0x40]
    uint128_t v5;  // [bp+0xb0]
    char v6;  // [bp+0xb8]
    unsigned long long v8;  // rbx
    struct_3 *v9;  // rsi

    v8 = v9->field_30;
    v2 = v10;
    v9->field_30 = v8 + 1;
    v12->field_48 = v12->field_48 + (long long)peek_token();
    if (v0->field_8 != 9)
    {
        if (v4->field_0 == 0)
        {
            if (v0->field_8 != 9)
            {
                if ((long long)parse_reg_exp() != 0)
                {
                    postorder();
                    v4->field_0 = 8;
                }
                else
                {
                    v4->field_0 = 8;
                }
            }
        }
    }
    if (v0->field_8 == 9 || v4->field_0 == 0 && v0->field_8 == 9)
    {
        if (v9->field_30 > 8)
        {
            v5 = 0;
            v6 = 17;
            v3 = (long long)create_token_tree.isra.0();
            if (v3 == 0)
            {
                v4->field_0 = 12;
            }
            else
            {
                v3->field_28 = v9->field_30;
            }
        }
        else
        {
            v1->field_a8 = v1->field_a8 | 1 << (((char)v9->field_30) & 31);
            v5 = 0;
            v6 = 17;
            v3 = (long long)create_token_tree.isra.0();
            if (v3 == 0)
            {
                v4->field_0 = 12;
            }
            else
            {
                v3->field_28 = v9->field_30;
            }
        }
    }
}
