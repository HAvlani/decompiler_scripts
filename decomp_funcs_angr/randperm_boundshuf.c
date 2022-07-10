int randperm_bound()
{
    BOT tmp_4;  // tmp #4
    BOT tmp_0;  // tmp #0
    BOT tmp_31;  // tmp #31
    unsigned long v1;  // rsi
    unsigned long v2;  // rdi

    if (v1 != 0)
    {
        tmp_4 = BinaryOp ExpCmpNE;
        tmp_31 = UnaryOp Clz;
        return v2 * ((long long)(64 - ((int)((tmp_4? 63 - tmp_31 : rsi<8>) ^ 63)))) + 7 >> 3;
    }
    return 0;
}
