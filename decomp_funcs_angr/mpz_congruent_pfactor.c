typedef struct struct_0 {
    char padding_0[4];
    unsigned int field_4;
} struct_0;

extern char dummy_limb.5449;

int mpz_congruent_p()
{
    unsigned long long v0;  // [bp-0x38]
    unsigned long v1;  // [bp-0x30]
    unsigned long long v4;  // rax
    char v5;  // dl
    struct_0 *v6;  // rdx
    unsigned long long v7;  // r12b
    unsigned long long v8;  // r12

    v5 = ((char)[D] amd64g_calculate_condition(0xf<64>, 0x13<64>, Conv(32->64, Load(addr=(rdx<8> + 0x4<64>), size=4, endness=Iend_LE)), 0x0<64>, cc_ndep<8>));
    if (((char)[D] amd64g_calculate_condition(0xf<64>, 0x13<64>, Conv(32->64, Load(addr=(rdx<8> + 0x4<64>), size=4, endness=Iend_LE)), 0x0<64>, cc_ndep<8>)) != ((char)(((long long)v6->field_4) >> 31)))
    {
        v1 = &dummy_limb.5449;
        v0 = 0;
        mpz_sub();
        v8 = 0;
        v7 = ((char)(mpz_div_qr() == 0));
        if (((int)v0) == 0)
        {
            v4 = r12<8>;
            return v4;
        }
        gmp_default_free();
        v4 = r12<8>;
        return v4;
    }
    v8 = 0;
    v7 = ((char)(mpz_cmp() == 0));
    v4 = r12<8>;
    return v4;
}
