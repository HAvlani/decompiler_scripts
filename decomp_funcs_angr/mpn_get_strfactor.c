int mpn_get_str()
{
    unsigned long long v0;  // [bp-0x28]
    unsigned long v1;  // [bp-0x20]
    unsigned long long v10;  // r11d
    unsigned long long v3;  // rax
    unsigned long v5;  // rcx
    unsigned long v6;  // rdx
    unsigned long long v7;  // rsi
    unsigned long long v8;  // rdi
    unsigned long long v9;  // r10

    if (!(!(((char)[D] amd64g_calculate_condition(0xe<64>, 0x14<64>, rcx<8>, 0x0<64>, cc_ndep<8>)))))
    {
        __assert_fail(); /* do not return */
    }
    else if (!(*(v6 + (v5 << 3) + 8) != 0))
    {
        __assert_fail(); /* do not return */
    }
    else if (mpn_base_power_of_two_p() == 0)
    {
        v9 = v7;
        v10 = 1;
        v8 = v7;
        if (!(((char)[D] amd64g_calculate_condition(0xe<64>, 0x14<64>, rcx<8>, 0x0<64>, cc_ndep<8>))))
        {
            do
            {
                v8 = v9 * v8;
                v10 = ((int)v10) + 1;
            }
            while (!(((char)[D] amd64g_calculate_condition(0xe<64>, 0x14<64>, rcx<8>, 0x0<64>, cc_ndep<8>))));
            v1 = v8;
            v0 = v10;
            v3 = mpn_get_str_other.isra.0();
            return v3;
        }
        v1 = v8;
        v0 = v10;
        v3 = mpn_get_str_other.isra.0();
        return v3;
    }
    else
    {
        v3 = mpn_get_str_bits();
        return v3;
    }
}
