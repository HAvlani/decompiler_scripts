typedef struct struct_0 {
    unsigned int field_0;
    unsigned int field_4;
    unsigned long long field_8;
} struct_0;

int mpz_roinit_n()
{
    unsigned long long|unsigned int v1;  // rcx
    unsigned long v2;  // rdx
    unsigned long v3;  // rsi
    struct_0 *v4;  // rdi

    v4->field_0 = 0;
    v4->field_8 = v3;
    v1 = (v2 >> 63 ^ v2) - (v2 >> 63);
    if (v2 == 0)
    {
        v1 = 0;
        v4->field_4 = ((unsigned int)v1);
        return v4;
    }
    while (*(v3 + (v1 << 3) + 8) == 0)
    {
        v1 -= 1;
        if (v1 == 1)
        {
            break;
        }
    }
    if (((char)[D] amd64g_calculate_condition(0x8<64>, 0x14<64>, rdx<8>, 0x0<64>, cc_ndep<8>)))
    {
        v1 = ((long long)(0 - ((int)v1)));
        v4->field_4 = ((unsigned int)v1);
        return v4;
    }
    else
    {
        v4->field_4 = ((unsigned int)v1);
        return v4;
    }
}
