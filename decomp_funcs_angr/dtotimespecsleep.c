int dtotimespec()
{
    BOT tmp_58;  // tmp #58
    BOT tmp_59;  // tmp #59
    BOT tmp_47;  // tmp #47
    BOT tmp_63;  // tmp #63
    BOT tmp_9;  // tmp #9
    BOT tmp_72;  // tmp #72
    BOT tmp_73;  // tmp #73
    BOT tmp_74;  // tmp #74
    BOT v1;  // xmm0
    unsigned long v2;  // xmm0lq
    uint128_t v3;  // xmm0
    unsigned long v4;  // xmm1lq
    uint128_t v5;  // xmm1

    if (!(((((char)((long long)(BinaryOp CmpF))) & 69 | ((char)((((long long)(BinaryOp CmpF)) & 69) >> 6))) & 1) != 1))
    {
        return 0x8000000000000000;
    }
    else if (((((char)((long long)(BinaryOp CmpF))) & 69 | ((char)((((long long)(BinaryOp CmpF)) & 69) >> 6))) & 1) == 1)
    {
        return 9223372036854775807;
    }
    else
    {
        v5 = 0;
        tmp_58 = BinaryOp FPConvert;
        v4 = tmp_58;
        tmp_63 = xmm1<16>;
        v3 = (v1 - tmp_63) * 0x41cdcd6500000000;
        tmp_9 = v3;
        tmp_72 = BinaryOp None;
        tmp_73 = BinaryOp FPConvert;
        if (!(((char)(...))))
        {
            return ...;
        }
        return ...;
    }
}
