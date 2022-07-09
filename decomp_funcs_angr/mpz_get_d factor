typedef struct struct_0 {
    char padding_0[4];
    unsigned int field_4;
    unsigned long long field_8;
} struct_0;

typedef struct struct_1 {
    unsigned long long field_0;
} struct_1;

int mpz_get_d()
{
    BOT tmp_4;  // tmp #4
    BOT tmp_5;  // tmp #5
    BOT tmp_0;  // tmp #0
    BOT tmp_31;  // tmp #31
    BOT tmp_32;  // tmp #32
    BOT tmp_10;  // tmp #10
    BOT tmp_36;  // tmp #36
    unsigned long|unsigned long long v1;  // rax
    uint128_t v10;  // xmm0
    unsigned long v11;  // xmm0lq
    uint128_t v12;  // xmm1lq
    unsigned long v13;  // xmm1lq
    uint128_t v14;  // xmm1
    uint128_t v15;  // xmm2
    unsigned long long v16;  // xmm2lq
    unsigned long long v2;  // rcx
    unsigned long long v3;  // rdx
    struct_1 * v4;  // rdx
    unsigned long long|unsigned int v5;  // rsi
    struct_1 *|struct_0 * v6;  // rdi
    unsigned long long v7;  // r8
    unsigned long long v8;  // r9
    uint128_t v9;  // xmm0

    v8 = ((long long)v6->field_4);
    if (v6->field_4 != 0)
    {
        v6 = v6->field_8;
        v7 = ((long long)((((int)(v8 >> 31)) ^ ((int)v8)) - ((int)(v8 >> 31))));
        v3 = *(v6 + ((long long)((((int)(v8 >> 31)) ^ ((int)v8)) - ((int)(v8 >> 31)))) * 8 + 8);
        v1 = *(v6 + ((long long)((((int)(v8 >> 31)) ^ ((int)v8)) - ((int)(v8 >> 31)))) * 8 + 8);
        if (...)
        {
            do
            {
                v1 *= 0x100;
                v2 = 8;
            }
            while ((0xfeffffff00000000 & v1) == 0);
            if (!(((char)[D] amd64g_calculate_condition(0x8<64>, 0x14<64>, rax<8>, 0x0<64>, cc_ndep<8>))))
            {
                /* goto 4233608; */
            }
        }
        else if (((char)[D] amd64g_calculate_condition(0x8<64>, 0x14<64>, rax<8>, 0x0<64>, cc_ndep<8>)))
        {
            v1 = 0xfffffffefffff800;
            v5 = -11;
            /* goto 4233838; */
        }
        if (...)
        {
            v5 = ((long long)(((int)v2) - 11));
            if (((int)(v2 - 11)) >= 0)
            {
            }
            else
            {
                v1 = 18446744069414584319 << (((char)(0 - -3)) & 63);
            }
        }
        if (...)
        {
            v3 &= v1;
        }
        if (!(((char)[D] amd64g_calculate_condition(0x8<64>, 0x14<64>, rax<8>, 0x0<64>, cc_ndep<8>))))
        {
            do
            {
                v2 = 1;
                v1 *= 2;
            }
            while (!(((char)[D] amd64g_calculate_condition(0x8<64>, 0x14<64>, rax<8>, 0x0<64>, cc_ndep<8>))));
            v9 = 0;
            tmp_4 = BinaryOp FPConvert;
            v9 = tmp_4;
        }
        else
        {
            v10 = 0;
            tmp_31 = BinaryOp FPConvert;
            v11 = tmp_31;
            tmp_36 = xmm0<16>;
            v9 = tmp_36 + tmp_36;
        }
        v4 = v7 - 2;
        if (v7 != 1)
        {
            v15 = 0;
            v16 = 0x43f0000000000000;
            do
            {
                v9 = xmm0<16> * xmm2<16>;
                if (((int)rsi<8>) > 0)
                {
                    v1 = *(v6 + v4 * 8);
                    v5 = ((int)(((int)rsi<8>) - 64));
                    if (((int)(rsi<8> - 64)) < 0)
                    {
                        v1 &= 18446744069414584319 << (((char)(0 - v5)) & 63);
                    }
                    if (!(((char)[D] amd64g_calculate_condition(0x8<64>, 0x14<64>, rax<8>, 0x0<64>, cc_ndep<8>))))
                    {
                        v12 = 0;
                        tmp_4 = BinaryOp FPConvert;
                        v12 = tmp_4;
                    }
                    else
                    {
                        v14 = 0;
                        tmp_31 = BinaryOp FPConvert;
                        v13 = tmp_31;
                        tmp_36 = xmm1<16>;
                        v12 = tmp_36 + tmp_36;
                    }
                    v9 += v12;
                }
                v4 -= 1;
            }
            while (v4 != 18446744069414584319);
            if (((int)v8) >= 0)
            {
                return v1;
            }
            return v1;
        }
        else if (((int)v8) >= 0)
        {
            return v1;
        }
        else
        {
            return v1;
        }
    }
    return v1;
}
