typedef struct struct_0 {
    unsigned int field_0;
    unsigned int field_4;
    unsigned long long field_8;
} struct_0;

typedef struct struct_1 {
    char padding_0[4];
    unsigned int field_4;
} struct_1;

typedef struct struct_2 {
    unsigned long long field_0;
} struct_2;

int mpz_set_si()
{
    struct_2 * v1;  // rax
    unsigned int v2;  // eax
    unsigned long v3;  // rax
    unsigned long v4;  // rsi
    struct_1 *v5;  // rdi
    struct_0 *v6;  // rdi

    if (!(!(((char)[D] amd64g_calculate_condition(0x8<64>, 0x14<64>, rsi<8>, 0x0<64>, cc_ndep<8>)))))
    {
        v2 = ((int)v6->field_0);
        v6->field_4 = -1;
        if (v2 > 0)
        {
            v1 = v6->field_8;
            v1->field_0 = 0 - v4;
            return v1;
        }
        v1 = mpz_realloc();
        v1->field_0 = 0 - v4;
        return v1;
    }
    else
    {
        v5->field_4 = 0;
        return v3;
    }
}
