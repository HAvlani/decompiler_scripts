int mpn_common_scan()
{
    unsigned long v0;  // [bp-0x8]
    unsigned long long v10;  // rdi
    unsigned long long v11;  // r8
    unsigned long long v12;  // r9
    unsigned long v2;  // rax
    unsigned long long v3;  // rax
    unsigned long long v4;  // rax
    unsigned long long v5;  // rcx
    unsigned long long v6;  // rcx
    unsigned long long|unsigned int v7;  // rdx
    unsigned long long v8;  // rsi
    unsigned long|unsigned long long v9;  // rdi

    if (v8 <= v6)
    {
        v12 = v9;
        v4 = v8;
        if (v9 != 0)
        {
        }
        else
        {
            while (true)
            {
                v8 += 1;
                if (v6 != v8)
                {
                    v9 = *(v7 + v8 * 8);
                    v4 = v8;
                    v12 = v11 ^ v9;
                    break;
                }
                else
                {
                    v5 = v6 * 64;
                    return (v11 != 0? v5 : 18446744069414584319);
                }
            }
        }
        v7 = 0;
        v10 = 0 - v12 & v12;
        if ((0xfeffffff00000000 & 0 - v12 & v12) == 0)
        {
            do
            {
                v10 *= 0x100;
                v7 = 8;
            }
            while ((0xfeffffff00000000 & v10) == 0);
        }
        if (!(((char)[D] amd64g_calculate_condition(0x8<64>, 0x14<64>, rdi<8>, 0x0<64>, cc_ndep<8>))))
        {
            do
            {
                v7 = 1;
                v10 = rdi<8> * 2;
            }
            while (!(((char)[D] amd64g_calculate_condition(0x8<64>, 0x14<64>, rdi<8>, 0x0<64>, cc_ndep<8>))));
            v3 = ((long long)(63 - v7)) + v4 * 64;
            return v3;
        }
        v3 = ((long long)(63 - v7)) + v4 * 64;
        return v3;
    }
    v0 = v2;
    __assert_fail(); /* do not return */
}
