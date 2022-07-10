int mpn_sub()
{
    unsigned long v0;  // [bp-0x8]
    unsigned long long v10;  // r11
    unsigned long long|char v2;  // rax
    unsigned long v3;  // rax
    unsigned long long v4;  // rcx
    unsigned long v5;  // rdx
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
                v10 = v2 + *(v4 + v9 * 8);
                v2 = [D] amd64g_calculate_condition(0x2<64>, 0x4<64>, rax<8>, Load(addr=(rcx<8> + (r9<8> << 0x3<8>)), size=8, endness=Iend_LE), Conv(1->64, (Load(addr=(rsi<8> + (0x0<64> << 0x3<8>)), size=8, endness=Iend_LE) < (0x0<64> + Load(addr=(rcx<8> + (0x0<64> << 0x3<8>)), size=8, endness=Iend_LE))))) + ((long long)(*(v6 + v9 * 8) < v2 + *(v4 + v9 * 8)));
                *(v7 + v9 * 8) = *(v6 + v9 * 8) - v10;
                v9 += 1;
            }
            while (v8 != v9);
        }
        if (v5 > v8)
        {
            v4 = v8 * 8;
            do
            {
                v8 = rax<8>;
                v2 = 0;
                v2 = ((char)(*(v6 + v4) < v8));
                *(v7 + v4) = *(v6 + v4) - v8;
                v4 += 8;
            }
            while (v5 << 3 != v4);
            return rax<8>;
        }
        return rax<8>;
    }
    v0 = v3;
    __assert_fail(); /* do not return */
}
