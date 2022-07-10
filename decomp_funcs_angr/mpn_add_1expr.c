int mpn_add_1()
{
    BOT tmp_1;  // tmp #1
    unsigned long v0;  // [bp-0x8]
    unsigned long v2;  // rax
    unsigned long long v4;  // rax
    unsigned long long v5;  // rcx
    unsigned long v6;  // rdx
    unsigned long long v7;  // rsi
    unsigned long long v8;  // rdi
    unsigned long long v9;  // r8

    if (!(((char)[D] amd64g_calculate_condition(0xe<64>, 0x14<64>, rdx<8>, 0x0<64>, cc_ndep<8>))))
    {
        v4 = v5;
        v9 = 0;
        do
        {
            tmp_1 = *(v7 + v9 * 8);
            *(v8 + v9 * 8) = v4 + *(v7 + v9 * 8);
            v9 += 1;
            v4 = [D] amd64g_calculate_condition(0x2<64>, 0x4<64>, rax<8>, t1, cc_ndep<8>);
        }
        while (v6 != v9);
        return v4;
    }
    v0 = v2;
    mpn_add_1.part.0(); /* do not return */
}
