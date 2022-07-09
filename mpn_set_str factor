int mpn_set_str()
{
    unsigned int v0;  // [bp-0x28]
    unsigned long v1;  // [bp-0x20]
    unsigned long long v4;  // rax
    unsigned long long v5;  // rcx
    unsigned long v6;  // rdx
    unsigned long long v7;  // rdi
    unsigned int v8;  // r8d

    v4 = 0;
    if (!(v6 != 0))
    {
        return v4;
    }
    else if (mpn_base_power_of_two_p() == 0)
    {
        v8 = 1;
        v7 = ((long long)v5);
        if (!(((char)[D] amd64g_calculate_condition(0x0<64>, 0x30<64>, Conv(64->64, rcx<8>), Conv(64->64, rcx<8>), cc_ndep<8>))))
        {
            do
            {
                v7 = v5 * v7;
                ((unsigned int)v8) = ((long long)v8) + 1;
            }
            while (!(((char)[D] amd64g_calculate_condition(0x0<64>, 0x30<64>, Conv(64->64, rcx<8>), Conv(64->64, rcx<8>), cc_ndep<8>))));
            v0 = v8;
            v1 = v7;
            v4 = mpn_set_str_other.isra.0();
            return v4;
        }
        v0 = v8;
        v1 = v7;
        v4 = mpn_set_str_other.isra.0();
        return v4;
    }
    else
    {
        v4 = mpn_set_str_bits();
        return v4;
    }
}
