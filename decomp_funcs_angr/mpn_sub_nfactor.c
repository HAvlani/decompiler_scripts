int mpn_sub_n()
{
    unsigned long long v1;  // rax
    unsigned long v2;  // rcx
    unsigned long long v3;  // rdx
    unsigned long long v4;  // rsi
    unsigned long long v5;  // rdi
    unsigned long long v6;  // r8
    unsigned long long v7;  // r10

    v1 = 0;
    if (!(((char)[D] amd64g_calculate_condition(0xe<64>, 0x14<64>, rcx<8>, 0x0<64>, cc_ndep<8>))))
    {
        v6 = 0;
        do
        {
            v7 = v1 + *(v3 + v6 * 8);
            v1 = [D] amd64g_calculate_condition(0x2<64>, 0x4<64>, rax<8>, Load(addr=(rdx<8> + (r8<8> << 0x3<8>)), size=8, endness=Iend_LE), Conv(1->64, (Load(addr=(rsi<8> + (0x0<64> << 0x3<8>)), size=8, endness=Iend_LE) < (0x0<64> + Load(addr=(rdx<8> + (0x0<64> << 0x3<8>)), size=8, endness=Iend_LE))))) + ((long long)(*(v4 + v6 * 8) < v1 + *(v3 + v6 * 8)));
            *(v5 + v6 * 8) = *(v4 + v6 * 8) - v7;
            v6 += 1;
        }
        while (v2 != v6);
        return v1;
    }
    return 0;
}
