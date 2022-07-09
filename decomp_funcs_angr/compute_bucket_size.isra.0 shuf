int compute_bucket_size.isra.0()
{
    BOT tmp_8;  // tmp #8
    BOT tmp_5;  // tmp #5
    BOT tmp_9;  // tmp #9
    BOT tmp_35;  // tmp #35
    BOT tmp_32;  // tmp #32
    BOT tmp_36;  // tmp #36
    BOT tmp_38;  // tmp #38
    BOT tmp_3;  // tmp #3
    BOT tmp_11;  // tmp #11
    BOT tmp_12;  // tmp #12
    BOT tmp_2;  // tmp #2
    unsigned long|unsigned long long v1;  // rax
    unsigned int v10;  // ymm0
    unsigned long long v2;  // rcx
    unsigned long v3;  // rdx
    char|unsigned long long v4;  // rsi
    unsigned long long v5;  // rdi
    unsigned long long v6;  // r8
    uint128_t v7;  // xmm0
    BOT|uint128_t v8;  // xmm0
    uint128_t v9;  // xmm0

    if (((long long)v4) == 0)
    {
        if (!(((char)[D] amd64g_calculate_condition(0x8<64>, 0x14<64>, rdi<8>, 0x0<64>, cc_ndep<8>))))
        {
            v7 = 0;
            tmp_8 = BinaryOp None;
            v7 = tmp_8;
        }
        else
        {
            v9 = 0;
            tmp_35 = BinaryOp None;
            v10 = tmp_35;
            tmp_38 = xmm0<16>;
            v7 = tmp_38 + tmp_38;
        }
        v8 = v7 / v8;
        v6 = 0;
        tmp_3 = v8;
        if (!((((char)((long long)(BinaryOp CmpF))) & 1) != 0))
        {
            return v6;
        }
        else if ((((char)((long long)(BinaryOp CmpF))) & 1) == 0)
        {
            tmp_11 = BinaryOp None;
            v5 = 0x8000000000000000 ^ tmp_11;
        }
        else
        {
            tmp_2 = BinaryOp None;
            v5 = tmp_2;
            /* goto 4228464; */
        }
    }
    if (((long long)v4) != 0 || (((char)((long long)(BinaryOp CmpF))) & 1) != 0)
    {
        v6 = (10 <= v5? v5 : 10) | 1;
        if (((10 <= v5? v5 : 10) | 1) != 18446744069414584319)
        {
            while (true)
            {
                v2 = v6 - ((((long long)(v6 * 12297829382473034411 >> 64)) >> 1) + (((long long)(v6 * 12297829382473034411 >> 64)) & 18446744069414584318));
                v1 = v6 - ((((long long)(v6 * 12297829382473034411 >> 64)) >> 1) + (((long long)(v6 * 12297829382473034411 >> 64)) & 18446744069414584318));
                if (v2 != 0 && v6 > 9)
                {
                    v5 = 16;
                    v4 = 9;
                    v2 = 3;
                    while (true)
                    {
                        v2 += 2;
                        v4 += v5;
                        v3 = ((long long)((0 CONCAT v6) % v2 >> 64));
                        v1 = ((long long)((0 CONCAT v6) % v2 >> 64));
                        v5 += 8;
                    }
                    if (v6 > v4)
                    {
                        v6 += 2;
                    }
                }
                if (v1 == 0 || v2 == 0 && v6 > 9)
                {
                    v6 += 2;
                    return 0;
                }
                v1 = [D] amd64g_calculate_condition(0x5<64>, 0x24<64>, Shr(r8<8>, 0x3d<8>), Shr(r8<8>, 0x3c<8>), 0x0<64>);
                if ((((char)(v6 >> 60)) & 1) == 0)
                {
                    return 0;
                    if (v1 != 0)
                    {
                        return 0;
                        return v6;
                    }
                }
            }
        }
        return 0;
    }
}
