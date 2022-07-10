typedef struct struct_0 {
    char padding_0[8];
    struct struct_1 *field_8;
    struct struct_2 *field_10;
    char padding_18[8];
    unsigned long long field_20;
    char padding_28[8];
    char field_30;
} struct_0;

int calc_next()
{
    BOT tmp_13;  // tmp #13
    struct_0 *v1;  // rsi

    if (!(v1->field_30 != 11))
    {
        v1->field_8->field_20 = v1;
        return 0;
    }
    else if (v1->field_30 != 16)
    {
        if (v1->field_8 != 0)
        {
            v1->field_8->field_20 = v1->field_20;
        }
        if (v1->field_10 != 0)
        {
            v1->field_10->field_20 = v1->field_20;
            return 0;
        }
        return 0;
    }
    else
    {
        tmp_13 = v1->field_10;
        v1->field_8->field_20 = v1->field_10->field_18;
        *(tmp_13 + 32) = v1->field_20;
        return 0;
    }
}
