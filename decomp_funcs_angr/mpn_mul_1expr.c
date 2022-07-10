int mpn_mul_1()
{
    BOT tmp_33;  // tmp #33
    BOT tmp_112;  // tmp #112
    BOT tmp_57;  // tmp #57
    unsigned long|unsigned long long v1;  // rcx
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
            tmp_112 = v8 * (*(v4 + (v6 << 3)) >> 32) <= v3 * *(v4 + (v6 << 3)) + v8 * (*(v4 + (v6 << 3)) >> 32) + (v8 * *(v4 + (v6 << 3)) >> 32);
            v1 = v8 * *(v4 + v6 * 8) + v7 + (v3 * *(v4 + v6 * 8) + v8 * (*(v4 + v6 * 8) >> 32) + (v8 * *(v4 + v6 * 8) >> 32)) * 0x100000000;
            tmp_57 = v3 * *(v4 + v6 * 8) + v8 * (*(v4 + v6 * 8) >> 32) + (v8 * *(v4 + v6 * 8) >> 32) >> 32;
            *(v5 + v6 * 8) = v8 * *(v4 + v6 * 8) + v7 + (v3 * *(v4 + v6 * 8) + v8 * (*(v4 + v6 * 8) >> 32) + (v8 * *(v4 + v6 * 8) >> 32)) * 0x100000000;
            v6 += 1;
            v7 = tmp_57 + ((long long)!(v7 <= v1)) + (tmp_112? v9 : tmp_33);
        }
        while (v2 != v6);
        return v7;
    }
    __assert_fail(); /* do not return */
}
