typedef struct struct_0 {
    char padding_0[4];
    unsigned int field_4;
    unsigned long long field_8;
} struct_0;

typedef struct struct_1 {
    unsigned long long field_0;
} struct_1;

int mpz_tstbit()
{
    unsigned long long v1;  // rax
    unsigned int v10;  // r8d
    unsigned long long v11;  // r9
    unsigned long long v2;  // rax
    unsigned long long v3;  // rcx
    struct_1 * v4;  // rdx
    unsigned long long v5;  // rsi
    unsigned long long v6;  // rsi
    unsigned long v7;  // rsi
    struct_1 *v8;  // rdi
    struct_0 *v9;  // rdi

    v11 = ((long long)v9->field_4);
    v3 = v6;
    v7 = v6 % 64;
    v4 = v7;
    if (((long long)((v9->field_4 ^ ((int)(((long long)v9->field_4) >> 31))) - ((int)(((long long)v9->field_4) >> 31)))) > v4)
    {
        v8 = v9->field_8;
        v10 = ((int)(((int)v3) & 63));
        v5 = *(v8 + v4 * 8);
        v1 = ((long long)(((int)(v5 >> (v3 & 63))) & 1));
        if (!(((char)[D] amd64g_calculate_condition(0x8<64>, 0x14<64>, r9<8>, 0x0<64>, cc_ndep<8>))))
        {
            return v1;
        }
        if (v10 != 0)
        {
            v5 <<= ((char)(64 - v10)) & 63;
            if (v5 != 0)
            {
                v2 = ((long long)(((int)v1) ^ 1));
                return v2;
            }
        }
        if (v5 == 0 || v10 == 0)
        {
            while (true)
            {
                v4 -= 1;
                if (v4 != 18446744069414584319)
                {
                    v2 = ((long long)(((int)v1) ^ 1));
                    return v2;
                }
                else
                {
                    return v1;
                }
            }
        }
    }
    return ((long long)v9->field_4) >> 63;
}
