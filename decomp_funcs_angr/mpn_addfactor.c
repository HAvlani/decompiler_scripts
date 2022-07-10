int mpn_add()
{
    BOT tmp_4;  // tmp #4
    BOT tmp_3;  // tmp #3
    BOT tmp_9;  // tmp #9
    BOT tmp_1;  // tmp #1
    unsigned long v0;  // [bp-0x8]
    unsigned long long v2;  // rax
    unsigned long v3;  // rax
    unsigned long long v4;  // rcx
    unsigned long long v5;  // rdx
    unsigned long long v6;  // rsi
    unsigned long long v7;  // rdi
    unsigned long long v8;  // r8
    unsigned long long v9;  // r9

    if (v5 >= v8)
    {
        v2 = 0;
        v9 = 0;
        if (!(((char)[D] amd64g_calculate_condition(0xe<64>, 0x14<64>, r8<8>, 0x0<64>, cc_ndep<8>))))
        {
            do
            {
                tmp_4 = *(v6 + v9 * 8);
                tmp_3 = v2 + *(v6 + v9 * 8);
                tmp_9 = *(v4 + v9 * 8);
                *(v7 + v9 * 8) = v2 + *(v6 + v9 * 8) + *(v4 + v9 * 8);
                v2 = ((long long)[D] amd64g_calculate_condition(0x2<64>, 0x4<64>, rax<8>, t4, And([D] amd64g_calculate_rflags_c(0x4<64>, t3, t9, And(((((t3 + t9) <= t3)) ? (0x1<64>) : (0x0<64>)), 0x1<64>)), 0x1<64>))) + ((tmp_3 + tmp_9 <= tmp_3? 1 : 0) & 1);
                v9 += 1;
            }
            while (v8 != v9);
        }
        if (v5 > v8)
        {
            v4 = v8 * 8;
            v5 *= 8;
            do
            {
                tmp_1 = *(v6 + v4);
                *(v7 + v4) = rax<8> + *(v6 + v4);
                v4 += 8;
                v2 = [D] amd64g_calculate_condition(0x2<64>, 0x4<64>, rax<8>, t1, And(((((t3 + t9) <= t3)) ? (0x1<64>) : (0x0<64>)), 0x1<64>));
            }
            while (v5 != v4);
            return v2;
        }
        return v2;
    }
    v0 = v3;
    __assert_fail(); /* do not return */
}
