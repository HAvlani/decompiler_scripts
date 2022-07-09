typedef struct struct_0 {
    unsigned int field_0;
    char padding_4[4];
    unsigned long long field_8;
    char padding_10[8];
    unsigned long long field_18;
} struct_0;

int mpn_div_qr_1_preinv()
{
    unsigned long|unsigned long long v0;  // [bp-0x48]
    unsigned long v1;  // [bp-0x40]
    unsigned long long v10;  // rdi
    unsigned long long v11;  // r9
    unsigned long long v12;  // r10
    unsigned long v13;  // r11
    struct_0 *v14;  // r12
    unsigned long long v15;  // r13
    unsigned long long v16;  // r15
    unsigned long long v3;  // rax
    unsigned long long v4;  // rax
    unsigned long long v5;  // rcx
    struct_0 *v6;  // rcx
    unsigned long long v7;  // rdx
    unsigned long long v8;  // rbx
    unsigned long|unsigned long long v9;  // rsi

    v15 = v7;
    v14 = v6;
    v5 = ((long long)v6->field_0);
    if (((int)v5) != 0)
    {
        if (v10 != 0)
        {
            v8 = (long long)mpn_lshift();
            v15 = 0;
            if (((char)[D] amd64g_calculate_condition(0x8<64>, 0x14<64>, r9<8>, 0x0<64>, cc_ndep<8>)))
            {
                v5 = ((long long)v14->field_0);
                v4 = v8 >> (v5 & 63);
                return v4;
            }
        }
        v1 = v9;
        v3 = gmp_default_alloc();
        v0 = v3;
        v16 = v3;
        v8 = (long long)mpn_lshift();
        v11 = v15 - 1;
        if (!(((char)(v15 - 1 >> 63))))
        {
            v9 = v16;
        }
        if ((v10 == 0 || !(((char)[D] amd64g_calculate_condition(0x8<64>, 0x14<64>, r9<8>, 0x0<64>, cc_ndep<8>)))) && (!(((char)(v15 - 1 >> 63))) || v10 != 0))
        {
            v0 = v9;
        }
    }
    else
    {
        v11 = v7 - 1;
        v12 = v14->field_8;
        v7 = v14->field_18;
        v8 = 0;
        v0 = 0;
        v15 = 0;
        if (((char)[D] amd64g_calculate_condition(0x8<64>, 0x14<64>, r9<8>, 0x0<64>, cc_ndep<8>)))
        {
            v4 = v8 >> (v5 & 63);
            return v4;
        }
    }
    if (((int)v5) == 0 && !(((char)[D] amd64g_calculate_condition(0x8<64>, 0x14<64>, r9<8>, 0x0<64>, cc_ndep<8>))) || !(((char)[D] amd64g_calculate_condition(0x8<64>, 0x14<64>, r9<8>, 0x0<64>, cc_ndep<8>))) && v10 != 0 || v10 == 0 && ((int)v5) != 0 && !(((char)(v15 - 1 >> 63))))
    {
        v13 = v7 % 0x100000000;
        do
        {
            v3 = ...;
            v8 = ...;
            if (v8 >= v12)
            {
                v8 -= v12;
                v3 += 1;
            }
            if (v10 != 0)
            {
                *(v10 + r9<8> * 8) = rax<8>;
            }
            v11 = r9<8> - 1;
        }
        while (v11 != 18446744069414584319);
    }
    if (!(((char)[D] amd64g_calculate_condition(0x8<64>, 0x14<64>, r9<8>, 0x0<64>, cc_ndep<8>))) || v10 == 0 && ((int)v5) != 0)
    {
        if (v15 != 0)
        {
            gmp_default_free();
            v5 = ((long long)v14->field_0);
            v4 = v8 >> (v5 & 63);
            return v4;
        }
        v5 = ((long long)v14->field_0);
        v4 = v8 >> (v5 & 63);
        return v4;
    }
}
