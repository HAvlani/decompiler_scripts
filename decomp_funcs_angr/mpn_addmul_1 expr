int mpn_addmul_1()
{
    BOT tmp_33;  // tmp #33
    BOT tmp_118;  // tmp #118
    BOT tmp_51;  // tmp #51
    BOT tmp_57;  // tmp #57
    BOT tmp_66;  // tmp #66
    BOT tmp_153;  // tmp #153
    unsigned long long v1;  // rcx
    unsigned long v2;  // rdx
    unsigned long long v3;  // rbx
    unsigned long long v4;  // rsi
    unsigned long long v5;  // rdi
    unsigned long long v6;  // r9
    unsigned long long v7;  // r10
    unsigned long long v8;  // r11
    unsigned long long v9;  // r13

    if (!(((char)[D] amd64g_calculate_condition(0xe<64>, 0x14<64>, rdx<8>, 0x0<64>, cc_ndep<8>))))
    {
        v8 = v1;
        v6 = 0;
        v7 = 0;
        v3 = v1 % 0x100000000;
        do
        {
            v9 = v3 * (*(v4 + v6 * 8) >> 32);
            tmp_33 = v3 * (*(v4 + v6 * 8) >> 32) + 0x100000000;
            tmp_118 = v8 * (*(v4 + (v6 << 3)) >> 32) <= v3 * *(v4 + (v6 << 3)) + v8 * (*(v4 + (v6 << 3)) >> 32) + (v8 * *(v4 + (v6 << 3)) >> 32);
            tmp_51 = v8 * *(v4 + v6 * 8) + v7 + (v3 * *(v4 + v6 * 8) + v8 * (*(v4 + v6 * 8) >> 32) + (v8 * *(v4 + v6 * 8) >> 32)) * 0x100000000;
            tmp_57 = v3 * *(v4 + v6 * 8) + v8 * (*(v4 + v6 * 8) >> 32) + (v8 * *(v4 + v6 * 8) >> 32) >> 32;
            tmp_66 = *(v5 + v6 * 8);
            tmp_153 = ((long long)!(v7 <= v8 * *(v4 + (v6 << 3)) + v7 + (v3 * *(v4 + (v6 << 3)) + v8 * (*(v4 + (v6 << 3)) >> 32) + (v8 * *(v4 + (v6 << 3)) >> 32) << 32)));
            *(v5 + v6 * 8) = v8 * *(v4 + v6 * 8) + v7 + (v3 * *(v4 + v6 * 8) + v8 * (*(v4 + v6 * 8) >> 32) + (v8 * *(v4 + v6 * 8) >> 32)) * 0x100000000 + *(v5 + v6 * 8);
            v6 += 1;
            v7 = tmp_57 + tmp_153 + ((tmp_51 + tmp_66 <= tmp_51? 1 : 0) & 1) + (tmp_118? v9 : tmp_33);
        }
        while (v2 != v6);
        return v7;
    }
    __assert_fail(); /* do not return */
}
