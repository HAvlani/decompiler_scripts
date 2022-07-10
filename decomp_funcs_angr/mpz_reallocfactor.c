typedef struct struct_0 {
    unsigned int field_0;
    unsigned int field_4;
    unsigned long long field_8;
} struct_0;

int mpz_realloc()
{
    unsigned long long v1;  // rax
    unsigned long v2;  // rbx
    struct_0 *v3;  // rbp
    unsigned long long v4;  // rsi
    unsigned long v5;  // rsi
    struct_0 *v6;  // rdi

    v3 = v6;
    v2 = (((char)[D] amd64g_calculate_condition(0xf<64>, 0x14<64>, rsi<8>, 0x0<64>, cc_ndep<8>))? v5 : 1);
    if (v6->field_0 == 0)
    {
        v1 = gmp_default_alloc();
        v6->field_8 = v1;
    }
    else
    {
        v1 = gmp_default_realloc();
        v6->field_8 = v1;
    }
    v4 = ((long long)v3->field_4);
    v3->field_0 = ((int)v2);
    if ((((char)(v4 >> 31 & 1 ^ 1))? v4 : ((long long)(0 - ((int)v4)))) > v2)
    {
        v3->field_4 = 0;
        return v1;
    }
    return v1;
}
