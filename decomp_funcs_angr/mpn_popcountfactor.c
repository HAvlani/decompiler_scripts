int mpn_popcount()
{
    unsigned long|unsigned long long v1;  // rcx
    unsigned long v2;  // rsi
    unsigned int v3;  // rdi
    unsigned long v4;  // r8
    unsigned long|unsigned long long v5;  // r9
    unsigned long long v6;  // r10
    unsigned long v7;  // cc_dep1
    unsigned long v8;  // cc_dep2

    if (!(((char)[D] amd64g_calculate_condition(0xe<64>, 0x14<64>, rsi<8>, 0x0<64>, cc_ndep<8>))))
    {
        v4 = ((unsigned int)v3);
        v6 = ((unsigned int)v3) + v2 * 8;
        v5 = 0;
        do
        {
            v1 = *(v4);
            if (*(v4) != 0)
            {
                v3 = 0;
                do
                {
                    v2 = ((long long)(((int)v1) - (((int)v1) % 2 & 21845) & 13107));
                    ((unsigned int)v3) = ((long long)(...));
                    v7 = v1 % 0x10000;
                    v8 = v1 % 0x8000;
                    v1 = v1 % 0x10000;
                }
                while (!(((char)[D] amd64g_calculate_condition(0xe<64>, 0x14<64>, rsi<8>, 0x0<64>, cc_ndep<8>))));
                v5 = 0 + ((unsigned int)v3);
            }
            v4 += 8;
        }
        while (v6 != v4);
        return v5;
    }
    return 0;
}
