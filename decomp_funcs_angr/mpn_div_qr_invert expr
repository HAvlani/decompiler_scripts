typedef struct struct_0 {
    unsigned int field_0;
    char padding_4[4];
    unsigned long long field_8;
    unsigned long long field_10;
    unsigned long long field_18;
} struct_0;

int mpn_div_qr_invert()
{
    unsigned long long v1;  // rax
    unsigned long long v10[2];  // rsi
    unsigned long long v11;  // rdi
    unsigned long v12;  // rdi
    unsigned long long v13;  // rdi
    unsigned long long v14;  // r8
    unsigned long long v15;  // r8
    unsigned long long v16;  // r9
    unsigned long long v2;  // rax
    unsigned long long v3;  // rax
    unsigned long long v4;  // rax
    unsigned long long v5;  // rdx
    unsigned long long v6;  // rdx
    unsigned long v7;  // rdx
    struct_0 *v8;  // rbp
    unsigned long|unsigned long long v9;  // rsi

    if (v7 != 0)
    {
        v8 = v12;
        if (v7 != 2)
        {
            v15 = v7 * 8;
            v13 = *(v9 + v7 * 8 + 8);
            v16 = *(v9 + v7 * 8 + 16);
            if (*(v9 + (v7 << 3) + 8) != 0)
            {
                v1 = *(v9 + v7 * 8 + 8);
                v6 = 0;
                if ((0xfeffffff00000000 & v13) == 0)
                {
                    do
                    {
                        v1 *= 0x100;
                        v6 = ((long long)(((int)v6) + 8));
                    }
                    while ((0xfeffffff00000000 & v1) == 0);
                }
                else if (((char)[D] amd64g_calculate_condition(0x8<64>, 0x14<64>, rax<8>, 0x0<64>, cc_ndep<8>)))
                {
                    v8->field_0 = 0;
                    v8->field_8 = v13;
                    v8->field_10 = v16;
                    v3 = mpn_invert_3by2();
                    v8->field_18 = v3;
                    return v3;
                }
                if (!(((char)[D] amd64g_calculate_condition(0x8<64>, 0x14<64>, rax<8>, 0x0<64>, cc_ndep<8>))))
                {
                    do
                    {
                        v6 = ((int)v6) + 1;
                        v1 *= 2;
                    }
                    while (!(((char)[D] amd64g_calculate_condition(0x8<64>, 0x14<64>, rax<8>, 0x0<64>, cc_ndep<8>))));
                }
                if ((0xfeffffff00000000 & v13) == 0 || !(((char)[D] amd64g_calculate_condition(0x8<64>, 0x14<64>, rax<8>, 0x0<64>, cc_ndep<8>))))
                {
                    v8->field_0 = ((int)rdx<8>);
                    if (((int)rdx<8>) != 0)
                    {
                        v13 = v13 << (((char)rdx<8>) & 63) | v16 >> (((char)(64 - ((int)rdx<8>))) & 63);
                        v9 = *(v9 + v15 + 24) >> (((char)(64 - ((int)rdx<8>))) & 63);
                        v16 = v16 << (((char)rdx<8>) & 63) | v9;
                        v8->field_8 = v13;
                        v8->field_10 = v16;
                        v3 = mpn_invert_3by2();
                        v8->field_18 = v3;
                        return v3;
                    }
                    v8->field_8 = v13;
                    v8->field_10 = v16;
                    v3 = mpn_invert_3by2();
                    v8->field_18 = v3;
                    return v3;
                }
            }
            __assert_fail(); /* do not return */
        }
        else
        {
            v11 = v10[1];
            v14 = v10[0];
            if (v10[1] != 0)
            {
                v2 = v11;
                v5 = 0;
                if ((0xfeffffff00000000 & v11) == 0)
                {
                    do
                    {
                        v2 *= 0x100;
                        v5 = ((int)v5) + 8;
                    }
                    while ((0xfeffffff00000000 & v2) == 0);
                }
                else if (((char)[D] amd64g_calculate_condition(0x8<64>, 0x14<64>, rax<8>, 0x0<64>, cc_ndep<8>)))
                {
                    v8->field_0 = 0;
                    v8->field_8 = v11;
                    v8->field_10 = v14;
                    v4 = mpn_invert_3by2();
                    v8->field_18 = v4;
                    return v4;
                }
                if (!(((char)[D] amd64g_calculate_condition(0x8<64>, 0x14<64>, rax<8>, 0x0<64>, cc_ndep<8>))))
                {
                    do
                    {
                        v5 = ((long long)v5) + 1;
                        v2 *= 2;
                    }
                    while (!(((char)[D] amd64g_calculate_condition(0x8<64>, 0x14<64>, rax<8>, 0x0<64>, cc_ndep<8>))));
                }
                if ((0xfeffffff00000000 & v11) == 0 || !(((char)[D] amd64g_calculate_condition(0x8<64>, 0x14<64>, rax<8>, 0x0<64>, cc_ndep<8>))))
                {
                    v8->field_0 = ((int)v5);
                    if (((int)v5) != 0)
                    {
                        v2 = v14 >> (((char)(64 - ((int)v5))) & 63);
                        v14 <<= ((char)v5) & 63;
                        v11 = v11 << (((char)v5) & 63) | v2;
                        v8->field_8 = v11;
                        v8->field_10 = v14;
                        v4 = mpn_invert_3by2();
                        v8->field_18 = v4;
                        return v4;
                    }
                    v8->field_8 = v11;
                    v8->field_10 = v14;
                    v4 = mpn_invert_3by2();
                    v8->field_18 = v4;
                    return v4;
                }
            }
            __assert_fail(); /* do not return */
        }
    }
    else
    {
        __assert_fail(); /* do not return */
    }
}
