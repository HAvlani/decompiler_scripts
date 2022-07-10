typedef struct struct_0 {
    char padding_0[4];
    unsigned int field_4;
} struct_0;

int mpz_mul_si()
{
    struct_0 *v2;  // rbp
    unsigned long long v3;  // rdi

    v2 = v3;
    if (!(((char)[D] amd64g_calculate_condition(0x8<64>, 0x14<64>, rdx<8>, 0x0<64>, cc_ndep<8>))))
    {
    }
    else
    {
        mpz_mul_ui();
        v2->field_4 = 0 - v2->field_4;
        return (long long)mpz_set();
    }
}
