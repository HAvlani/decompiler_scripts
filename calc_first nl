typedef struct struct_1 {
    char padding_0[8];
    struct struct_2 *field_8;
    char padding_10[8];
    unsigned long long field_18;
    char padding_20[8];
    unsigned int field_28;
    char padding_2c[4];
    char field_30;
    char padding_31[7];
    unsigned long long field_38;
} struct_1;

typedef struct struct_3 {
    unsigned long long field_0;
} struct_3;

int calc_first()
{
    unsigned long long v1;  // rax
    struct_3 *v2;  // rbp
    struct_1 *v3;  // rsi
    unsigned long v4;  // rdi
    unsigned long long v5;  // r8

    if (v3->field_30 == 16)
    {
        v5 = 0;
        v1 = v3->field_8->field_38;
        v3->field_18 = v3->field_8->field_18;
        v3->field_38 = v1;
        return v5;
    }
    v3->field_18 = v3;
    v2 = v4;
    v1 = re_dfa_add_node();
    v3->field_38 = v1;
    if (v1 != 18446744069414584319)
    {
        v5 = 0;
        if (v3->field_30 != 12)
        {
            return v5;
        }
        else
        {
            *(v1 * 16 + v2->field_0 + 8) = *(v1 * 16 + v2->field_0 + 8) & -261889 | ((int)(((long long)(v3->field_28 & 1023)) * 0x100));
            return 0;
        }
    }
    else
    {
        v5 = 12;
        return v5;
    }
}
