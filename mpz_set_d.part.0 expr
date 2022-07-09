typedef struct struct_1 {
    char padding_0[4];
    unsigned int field_4;
} struct_1;

typedef struct struct_0 {
    unsigned int field_0;
    unsigned int field_4;
    unsigned long long field_8;
} struct_0;

typedef struct struct_2 {
    unsigned long long field_0;
} struct_2;

int mpz_set_d.part.0()
{
    BOT tmp_3;  // tmp #3
    BOT tmp_5;  // tmp #5
    BOT tmp_1;  // tmp #1
    BOT tmp_11;  // tmp #11
    BOT tmp_4;  // tmp #4
    BOT tmp_0;  // tmp #0
    BOT tmp_32;  // tmp #32
    BOT tmp_33;  // tmp #33
    BOT tmp_10;  // tmp #10
    BOT tmp_37;  // tmp #37
    BOT tmp_12;  // tmp #12
    unsigned long v0;  // [bp-0x28]
    BOT v10;  // xmm0
    uint128_t v11;  // xmm1
    uint128_t|unsigned long long v12;  // xmm1
    uint128_t v13;  // xmm1
    uint128_t v14;  // xmm2
    unsigned long v15;  // xmm2lq
    uint128_t v16;  // xmm2
    uint128_t v17;  // xmm2
    unsigned long long v18;  // xmm2lq
    unsigned long v19;  // xmm2lq
    unsigned long v2;  // rax
    uint128_t v20;  // xmm2
    uint128_t|unsigned long long v21;  // xmm4lq
    unsigned long long v3;  // rax
    struct_2 *|unsigned long long v4;  // rax
    unsigned long|unsigned long long v5;  // rdx
    unsigned long long v6;  // rbx
    struct_2 *|unsigned long long v7;  // rsi
    struct_1 *v8;  // rdi
    struct_0 *v9;  // rdi

    v12 = (v10 ^ 0x8000000000000000) & v10 < 0 | !(v10 < 0) & v10;
    if (...)
    {
        v21 = 0;
        v21 = 0x43f0000000000000;
        v14 = 0;
        v18 = 0x3bf0000000000000;
        v6 = 1;
        if ((((char)((long long)(BinaryOp CmpF))) & 1) == 0)
        {
            do
            {
                v12 *= xmm2<16>;
                v6 += 1;
                tmp_3 = v12;
            }
            while ((((char)((long long)(BinaryOp CmpF))) & 1) == 0);
        }
        if (((long long)v9->field_0) >= v6)
        {
            v4 = v9->field_8;
        }
        else
        {
            v0 = v12;
            v4 = mpz_realloc();
            v12 = 0;
            v12 = v0;
            v21 = 0x43f0000000000000;
        }
        if (((long long)v9->field_0) < v6 && (((char)((long long)(BinaryOp CmpF))) & 1) != 0 || (((char)((long long)(BinaryOp CmpF))) & 1) != 0 && ((long long)v9->field_0) >= v6)
        {
            tmp_5 = BinaryOp None;
            v5 = tmp_5;
        }
        if ((((char)((long long)(BinaryOp CmpF))) & 1) == 0 && ((long long)v9->field_0) < v6 || (((char)((long long)(BinaryOp CmpF))) & 1) == 0 && ((long long)v9->field_0) >= v6)
        {
            tmp_11 = BinaryOp None;
            v5 = 0x8000000000000000 ^ tmp_11;
        }
        if (!(((char)[D] amd64g_calculate_condition(0x8<64>, 0x14<64>, Xor(t12, 0x8000000000000000<64>), 0x0<64>, 0x0<64>))))
        {
            v16 = 0;
            tmp_4 = BinaryOp FPConvert;
            v16 = tmp_4;
        }
        else
        {
            v20 = 0;
            tmp_32 = BinaryOp FPConvert;
            v15 = tmp_32;
            tmp_37 = xmm2<16>;
            v16 = tmp_37 + tmp_37;
        }
        v13 = xmm1<16> - v16;
        tmp_1 = v13;
        if (((((char)((long long)(BinaryOp CmpF))) & 69 | ((char)((((long long)(BinaryOp CmpF)) & 69) >> 6))) & 1) != 1)
        {
            *(v4 + v6 * 8 + 8) = v5;
            v7 = v6 - 2;
            if (v6 != 1)
            {
                while (true)
                {
                    v11 = v13 * xmm4<16>;
                    tmp_0 = v11;
                    if ((((char)((long long)(BinaryOp CmpF))) & 1) != 0)
                    {
                        tmp_5 = BinaryOp None;
                        v5 = tmp_5;
                    }
                    else
                    {
                        tmp_12 = BinaryOp None;
                        v5 = tmp_12 ^ 0x8000000000000000;
                    }
                    if (!(((char)[D] amd64g_calculate_condition(0x8<64>, 0x14<64>, Xor(t12, 0x8000000000000000<64>), 0x0<64>, 0x0<64>))))
                    {
                        v16 = 0;
                        tmp_4 = BinaryOp FPConvert;
                        v16 = tmp_4;
                    }
                    else
                    {
                        v17 = 0;
                        tmp_32 = BinaryOp FPConvert;
                        v19 = tmp_32;
                        tmp_37 = xmm2<16>;
                        v16 = tmp_37 + tmp_37;
                    }
                    v13 = v11 - v16;
                    tmp_1 = v13;
                    if (((((char)((long long)(BinaryOp CmpF))) & 69 | ((char)((((long long)(BinaryOp CmpF)) & 69) >> 6))) & 1) != 1)
                    {
                        *(v4 + v7 * 8) = rdx<8>;
                        v7 -= 1;
                        v3 = ((long long)(0 - ((int)v6)));
                        v9->field_4 = ((((((long long)(BinaryOp CmpF)) & 69) >> 0 | (((long long)(BinaryOp CmpF)) & 69) >> 6) & 1) == 0? 0 - ((int)v6) : ((int)v6));
                        return v3;
                    }
                    __assert_fail(); /* do not return */
                }
            }
            v3 = ((long long)(0 - ((int)v6)));
            v9->field_4 = ((((((long long)(BinaryOp CmpF)) & 69) >> 0 | (((long long)(BinaryOp CmpF)) & 69) >> 6) & 1) == 0? 0 - ((int)v6) : ((int)v6));
            return v3;
        }
        __assert_fail(); /* do not return */
    }
    v8->field_4 = 0;
    return v2;
}
