int mpn_sub_1()
{
    unsigned long v0;  // [bp-0x8]
    unsigned long long v10;  // r10
    unsigned long long v3;  // al
    unsigned long v4;  // rax
    unsigned long long v5;  // rcx
    unsigned long v6;  // rdx
    unsigned long long v7;  // rsi
    unsigned long long v8;  // rdi
    unsigned long long v9;  // r8

    if (!(((char)[D] amd64g_calculate_condition(0xe<64>, 0x14<64>, rdx<8>, 0x0<64>, cc_ndep<8>))))
    {
        v3 = v5;
        v9 = 0;
        do
        {
            v10 = v3;
            v3 = 0;
            v3 = ((char)!(v10 <= *(v7 + (v9 << 3))));
            *(v8 + v9 * 8) = *(v7 + v9 * 8) - v10;
            v9 += 1;
        }
        while (v6 != v9);
        return rax<8>;
    }
    v0 = v4;
    mpn_sub_1.part.0(); /* do not return */
}
