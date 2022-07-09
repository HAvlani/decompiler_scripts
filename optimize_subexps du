typedef struct struct_1 {
    char padding_0[8];
    struct struct_2 *field_8;
    char padding_10[24];
    char field_28;
    char padding_29[7];
    char field_30;
} struct_1;

typedef struct struct_0 {
    unsigned long long field_0;
} struct_0;

typedef struct struct_3 {
    char padding_0[8];
    unsigned long long field_8;
    char padding_10[24];
    unsigned long long field_28;
    char field_30;
} struct_3;

int optimize_subexps()
{
    BOT tmp_45;  // tmp #45
    struct_0 *|struct_3 *|unsigned long long v1;  // rax
    unsigned long long v2;  // rcx
    struct_1 *v3;  // rsi
    unsigned long long [29] v4;  // rdi

    if (!(v3->field_30 != 4))
    {
        v1 = v4[28];
        if (v4[28] == 0)
        {
            return 0;
        }
        tmp_45 = ((long long)(1 << (((char)*(v1 + ((long long)v3->field_28) * 8)) & 31)));
        v3->field_28 = *(v1 + ((long long)v3->field_28) * 8);
        v4[20] = v4[20] | tmp_45;
        return 0;
    }
    else if (v3->field_30 != 17)
    {
        return 0;
    }
    else
    {
        v1 = v3->field_8;
        if (v3->field_8 == 0)
        {
            return 0;
        }
        else if (v3->field_8->field_30 != 17)
        {
            return 0;
        }
        else
        {
            v2 = v1->field_28;
            v1 = v1->field_8;
            v3->field_8 = v3->field_8->field_8;
            if (v1 != 0)
            {
                *(v3->field_8->field_8 + None) = v3;
            }
            *(v4[28] + v3->field_8->field_28 * 8) = *(v4[28] + v3->field_28 * 8);
            if (v2 > 63)
            {
                return 0;
            }
            v4[20] = v4[20] & (18446744069414584318 << (v2 & 63) | 18446744069414584318 >> 64 - (v2 & 63));
            return 0;
        }
    }
}
