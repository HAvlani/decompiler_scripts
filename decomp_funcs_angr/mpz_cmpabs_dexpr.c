typedef struct struct_0 {
    char padding_0[4];
    unsigned int field_4;
    unsigned long long field_8;
} struct_0;

typedef struct struct_1 {
    unsigned long long field_0;
} struct_1;

int mpz_cmpabs_d()
{
    BOT tmp_6;  // tmp #6
    BOT tmp_1;  // tmp #1
    BOT tmp_13;  // tmp #13
    BOT tmp_4;  // tmp #4
    BOT tmp_5;  // tmp #5
    BOT tmp_0;  // tmp #0
    BOT tmp_31;  // tmp #31
    BOT tmp_32;  // tmp #32
    BOT tmp_10;  // tmp #10
    BOT tmp_36;  // tmp #36
    unsigned long|unsigned long long v1;  // rax
    unsigned long v10;  // xmm1lq
    uint128_t v11;  // xmm1
    uint128_t v12;  // xmm3
    unsigned long long v13;  // xmm3lq
    struct_1 * v2;  // rdx
    struct_1 *v3;  // rsi
    struct_0 *v4;  // rdi
    unsigned long v5;  // cc_dep1
    unsigned long long v6;  // cc_dep2
    uint128_t v7;  // xmm0lq
    uint128_t v8;  // xmm0
    uint128_t|unsigned long long v9;  // xmm1lq

    if ((((char)((long long)(BinaryOp CmpF))) & 1) != 0)
    {
        v7 = v8 ^ 0x8000000000000000;
    }
    if (v4->field_4 != 0)
    {
        if (((int)((v4->field_4 ^ v4->field_4 >> 31) - (v4->field_4 >> 31))) != 1)
        {
            v9 = 0;
            v9 = 0x3bf0000000000000;
            v1 = 1;
            do
            {
                v7 = xmm0<16> * xmm1<16>;
                v1 += 1;
            }
            while (((long long)((v4->field_4 ^ v4->field_4 >> 31) - (v4->field_4 >> 31))) != v1);
        }
        v12 = 0;
        v13 = 0x43f0000000000000;
        if ((((char)((long long)(BinaryOp CmpF))) & 1) != 0)
        {
            v3 = v4->field_8;
            v2 = ((long long)((v4->field_4 ^ v4->field_4 >> 31) - (v4->field_4 >> 31))) - 1;
            while (true)
            {
                if ((((char)((long long)(BinaryOp CmpF))) & 1) != 0)
                {
                    tmp_6 = BinaryOp None;
                    v1 = tmp_6;
                    v5 = tmp_6;
                    v6 = *(v3 + v2 * 8);
                    if (tmp_6 < *(v3 + (v2 << 3)))
                    {
                        return 1;
                    }
                }
                tmp_13 = BinaryOp None;
                v1 = tmp_13 ^ 0x8000000000000000;
                v5 = tmp_13 ^ 0x8000000000000000;
                v6 = *(v3 + v2 * 8);
                if ((tmp_13 ^ 0x8000000000000000) < *(v3 + (v2 << 3)))
                {
                    return 1;
                }
                if ((((char)((long long)(BinaryOp CmpF))) & 1) == 0 && (tmp_13 ^ 0x8000000000000000) >= *(v3 + (v2 << 3)) || (((char)((long long)(BinaryOp CmpF))) & 1) != 0 && tmp_6 >= *(v3 + (v2 << 3)))
                {
                    if (((char)[D] amd64g_calculate_condition(0x6<64>, 0x8<64>, cc_dep1<8>, cc_dep2<8>, cc_ndep<8>)))
                    {
                        if (!(((char)[D] amd64g_calculate_condition(0x6<64>, 0x8<64>, cc_dep1<8>, cc_dep2<8>, cc_ndep<8>))))
                        {
                            v9 = 0;
                            tmp_4 = BinaryOp FPConvert;
                            v9 = tmp_4;
                        }
                        else
                        {
                            v11 = 0;
                            tmp_31 = BinaryOp FPConvert;
                            v10 = tmp_31;
                            tmp_36 = xmm1<16>;
                            v9 = tmp_36 + tmp_36;
                        }
                        v2 -= 1;
                        v7 = (xmm0<16> - v9) * xmm3<16>;
                        return ((long long)(0 - ((int)((((((long long)(BinaryOp CmpF)) & 69) >> 0 | (((long long)(BinaryOp CmpF)) & 69) >> 6) & 1) == 0))));
                    }
                    return -1;
                }
            }
        }
        return -1;
    }
    return ((long long)(0 - ((int)((((((long long)(BinaryOp CmpF)) & 69) >> 0 | (((long long)(BinaryOp CmpF)) & 69) >> 6) & 1) == 0))));
}
