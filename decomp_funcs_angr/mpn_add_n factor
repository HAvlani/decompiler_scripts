int mpn_add_n()
{
    BOT tmp_4;  // tmp #4
    BOT tmp_3;  // tmp #3
    BOT tmp_9;  // tmp #9
    unsigned long long v1;  // rax
    unsigned long v2;  // rcx
    unsigned long long v3;  // rdx
    unsigned long long v4;  // rsi
    unsigned long long v5;  // rdi
    unsigned long long v6;  // r8

    v1 = 0;
    if (!(((char)[D] amd64g_calculate_condition(0xe<64>, 0x14<64>, rcx<8>, 0x0<64>, cc_ndep<8>))))
    {
        v6 = 0;
        do
        {
            tmp_4 = *(v4 + v6 * 8);
            tmp_3 = v1 + *(v4 + v6 * 8);
            tmp_9 = *(v3 + v6 * 8);
            *(v5 + v6 * 8) = v1 + *(v4 + v6 * 8) + *(v3 + v6 * 8);
            v1 = ((long long)[D] amd64g_calculate_condition(0x2<64>, 0x4<64>, rax<8>, t4, And([D] amd64g_calculate_rflags_c(0x4<64>, t3, t9, And(((((t3 + t9) <= t3)) ? (0x1<64>) : (0x0<64>)), 0x1<64>)), 0x1<64>))) + ((tmp_3 + tmp_9 <= tmp_3? 1 : 0) & 1);
            v6 += 1;
        }
        while (v2 != v6);
        return v1;
    }
    return 0;
}
