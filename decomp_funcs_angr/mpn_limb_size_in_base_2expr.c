int mpn_limb_size_in_base_2()
{
    unsigned long v0;  // [bp-0x8]
    unsigned long long v2;  // rax
    unsigned long long v3;  // rax
    unsigned long v4;  // rax
    unsigned long long v5;  // rdi

    if (v5 != 0)
    {
        v2 = 0;
        if ((0xfeffffff00000000 & v5) == 0)
        {
            do
            {
                v5 *= 0x100;
                v2 = ((int)v2) + 8;
            }
            while ((0xfeffffff00000000 & v5) == 0);
        }
        if (!(((char)[D] amd64g_calculate_condition(0x8<64>, 0x14<64>, rdi<8>, 0x0<64>, cc_ndep<8>))))
        {
            do
            {
                v2 = ((long long)reg_16<4>) + 1;
                v5 = rdi<8> * 2;
            }
            while (!(((char)[D] amd64g_calculate_condition(0x8<64>, 0x14<64>, rdi<8>, 0x0<64>, cc_ndep<8>))));
            v3 = 64 - rax<8>;
            return v3;
        }
        v3 = 64 - rax<8>;
        return v3;
    }
    v0 = v4;
    __assert_fail(); /* do not return */
}
