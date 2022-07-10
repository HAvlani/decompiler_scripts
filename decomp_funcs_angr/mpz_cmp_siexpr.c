typedef struct struct_0 {
    char padding_0[4];
    unsigned int field_4;
    struct struct_1 *field_8;
} struct_0;

int mpz_cmp_si()
{
    unsigned long long v1;  // rax
    unsigned long long v2;  // rax
    unsigned long long v3;  // rdx
    unsigned long long v4;  // rdx
    unsigned long v5;  // rsi
    unsigned long v6;  // rsi
    unsigned long long v7;  // rsi
    struct_0 *v8;  // rdi

    v4 = ((long long)v8->field_4);
    if (((char)[D] amd64g_calculate_condition(0x8<64>, 0x14<64>, rsi<8>, 0x0<64>, cc_ndep<8>)))
    {
        v1 = 1;
        if (((int)v8->field_4) >= 0)
        {
            return v1;
        }
        v1 = -1;
        if (((int)v8->field_4) != -1)
        {
            return v1;
        }
        else
        {
            v7 = 0 - v5;
            return ((long long)(!(v7 <= v8->field_8->field_0) - (v7 < v8->field_8->field_0)));
        }
    }
    else if (((int)v8->field_4) >= 0)
    {
        v1 = 1;
        if (((int)v8->field_4) > 1)
        {
            return v1;
        }
        v2 = 0;
        if (((int)v8->field_4) != 0)
        {
            v4 = 0;
            v2 = v8->field_8->field_0;
            v4 = ((char)(v6 < v8->field_8->field_0));
            v3 = ((long long)(v4 - ((long long)!(rsi<8> <= rax<8>))));
            return v3;
        }
        else
        {
            v3 = ((long long)(v4 - ((long long)!(rsi<8> <= rax<8>))));
            return v3;
        }
    }
    else
    {
        return -1;
    }
}
