typedef struct struct_0 {
    char padding_0[28];
    unsigned int field_1c;
    uint128_t field_20;
    unsigned long long field_28;
    unsigned long long field_30;
    unsigned long long field_38;
    unsigned long long field_40;
    unsigned long long field_48;
    unsigned long long field_50;
    unsigned long long field_58;
    unsigned long long field_60;
    char padding_68[57];
    char field_a1;
    char padding_a2[6];
    unsigned long long field_a8;
    char padding_b0[24];
    unsigned long long field_c8;
    char padding_d0[8];
    char field_d8;
} struct_0;

int digits_to_date_time()
{
    unsigned long v1;  // [bp+0x10]
    unsigned long v2;  // [bp+0x18]
    unsigned long long v3;  // rax
    struct_0 *v4;  // rdi
    unsigned long long v5;  // r8

    v3 = *(v4 + 0xa8);
    v5 = v1;
    if (*(v4 + 0xa8) != 0)
    {
        if (v4->field_28 == 0)
        {
            if (*(v4 + 0xa1) == 0)
            {
                if (!(*(v4 + 0xc8) == 0))
                {
                    v4->padding_d0 = 1;
                    v4->field_28 = v2;
                    v4->field_20 = *((int128_t *)(((char *)&v1) + -8));
                    return v2;
                }
                else if (v2 > 2)
                {
                    v4->padding_d0 = 1;
                    v4->field_28 = v2;
                    v4->field_20 = *((int128_t *)(((char *)&v1) + -8));
                    return v2;
                }
                else
                {
                    *(v4 + 0xc8) = 1;
                    v4->field_40 = v1;
                    v4->field_48 = 0;
                    v4->field_50 = 0;
                    v4->field_58 = 0;
                    v4->field_1c = 2;
                    return v3;
                }
            }
        }
    }
    if (*(v4 + 0xa8) == 0 || *(v4 + 0xa1) != 0 || v4->field_28 != 0)
    {
        if (v2 > 4)
        {
            *(v4 + 0xa8) = *(v4 + 0xa8) + 1;
            v4->field_28 = v2 - 4;
            v4->field_38 = v5 - ((((long long)(v5 * 11805916207174113035 >> 64)) + v5 >> 6) - (v5 >> 63)) * 100;
            v4->field_30 = ...;
            *(v4 + 0x28) = (((long long)(v5 * 3777893186295716171 >> 64)) >> 11) - (v5 >> 63);
            return ((long long)(v5 * 3777893186295716171));
        }
        *(v4 + 0xc8) = *(v4 + 0xc8) + 1;
        if (v2 > 2)
        {
            v4->field_40 = (((long long)(v5 * 11805916207174113035 >> 64)) + v5 >> 6) - (v5 >> 63);
            v3 = ((((long long)(v5 * 11805916207174113035 >> 64)) + v5 >> 6) - (v5 >> 63)) * 100;
            v4->field_48 = v1 - ((((long long)(v1 * 11805916207174113035 >> 64)) + v1 >> 6) - (v1 >> 63)) * 100;
            v4->field_50 = 0;
            v4->field_58 = 0;
            v4->field_1c = 2;
            return v3;
        }
        else
        {
            v4->field_40 = v1;
            v4->field_48 = 0;
            v4->field_50 = 0;
            v4->field_58 = 0;
            v4->field_1c = 2;
            return v3;
        }
    }
}
