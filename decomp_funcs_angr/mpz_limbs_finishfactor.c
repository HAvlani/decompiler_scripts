typedef struct struct_0 {
    char padding_0[4];
    unsigned int field_4;
    unsigned long long field_8;
} struct_0;

int mpz_limbs_finish()
{
    unsigned long long v1;  // rax
    unsigned long v2;  // rsi
    struct_0 *v3;  // rdi

    v1 = (v2 >> 63 ^ v2) - (v2 >> 63);
    if (v2 == 0)
    {
        v1 = 0;
        v3->field_4 = ((int)v1);
        return v1;
    }
    while (*(v3->field_8 + (v1 << 3) + 8) == 0)
    {
        v1 -= 1;
        if (v1 == 1)
        {
            break;
        }
    }
    if (((char)[D] amd64g_calculate_condition(0x8<64>, 0x14<64>, rsi<8>, 0x0<64>, cc_ndep<8>)))
    {
        v1 = ((long long)(0 - ((int)v1)));
        v3->field_4 = ((int)v1);
        return v1;
    }
    else
    {
        v3->field_4 = ((int)v1);
        return v1;
    }
}
