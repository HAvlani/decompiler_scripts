int mpn_submul_1()
{
    BOT tmp_19;  // tmp #19
    BOT tmp_33;  // tmp #33
    BOT tmp_118;  // tmp #118
    unsigned long v1;  // rax
    unsigned long long v2;  // rcx
    unsigned long v3;  // rdx
    unsigned long v4;  // rbx
    unsigned long long v5;  // rsi
    unsigned long long v6;  // rdi
    unsigned long long v7;  // r9
    unsigned long long v8;  // r10
    unsigned long long v9;  // r11

    if (!(((char)[D] amd64g_calculate_condition(0xe<64>, 0x14<64>, rdx<8>, 0x0<64>, cc_ndep<8>))))
    {
        v9 = v2;
        v7 = 0;
        v8 = 0;
        v4 = v2 % 0x100000000;
        do
        {
            tmp_19 = v4 * (*(v5 + v7 * 8) >> 32);
            tmp_33 = v4 * (*(v5 + v7 * 8) >> 32) + 0x100000000;
            tmp_118 = v9 * (*(v5 + (v7 << 3)) >> 32) <= v4 * *(v5 + (v7 << 3)) + v9 * (*(v5 + (v7 << 3)) >> 32) + (v9 * *(v5 + (v7 << 3)) >> 32);
            v1 = ...;
            *(v6 + v7 * 8) = *(v6 + v7 * 8) - (v9 * *(v5 + v7 * 8) + v8 + (v4 * *(v5 + v7 * 8) + v9 * (*(v5 + v7 * 8) >> 32) + (v9 * *(v5 + v7 * 8) >> 32)) * 0x100000000);
            v7 += 1;
            v8 = v1 + (tmp_118? tmp_19 : tmp_33);
        }
        while (v3 != v7);
        return v8;
    }
    __assert_fail(); /* do not return */
}
