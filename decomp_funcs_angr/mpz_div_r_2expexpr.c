typedef struct struct_0 {
    unsigned int field_0;
    unsigned int field_4;
    unsigned long long field_8;
} struct_0;

typedef struct struct_1 {
    char padding_0[4];
    unsigned int field_4;
    unsigned long long field_8;
} struct_1;

typedef struct struct_2 {
    unsigned long long field_0;
} struct_2;

int mpz_div_r_2exp()
{
    struct_1 *v0;  // [bp-0x48]
    unsigned int v1;  // [bp-0x3c]
    unsigned long|unsigned long long v10;  // rdx
    unsigned long long v11;  // rbx
    char v13;  // bpl
    unsigned long long|struct_1 * v14;  // rsi
    unsigned long long|struct_0 * v15;  // rdi
    struct_1 *v16;  // r8
    unsigned long long v17;  // r9
    struct_2 *v18;  // r10
    unsigned long long v19;  // r11
    unsigned long v20;  // r12
    unsigned int v21;  // r12d
    unsigned long long v22;  // r13
    struct_0 *v23;  // r14
    unsigned long long v24;  // r15
    unsigned long v3;  // rax
    struct_2 *|unsigned long long v4;  // rax
    unsigned long long v6;  // rax
    unsigned long long v7;  // rax
    unsigned long long v8;  // rax
    struct_2 *|unsigned int v9;  // rcx

    v23 = v15;
    v24 = ((long long)v14->field_4);
    if (!(((long long)v14->field_4) != 0))
    {
        v15->field_4 = 0;
        return v3;
    }
    else if (v10 != 0)
    {
        v22 = v10 + 63 >> 6;
        v11 = v10 + 63 >> 6;
        if (!(((char)[D] amd64g_calculate_condition(0x4<64>, 0x24<64>, Shr((rdx<8> + 0x3f<64>), 0x6<8>), Shr((rdx<8> + 0x3f<64>), 0x5<8>), cc_ndep<8>))))
        {
            v16 = v14;
            v21 = ((int)v14->field_4);
            if (((long long)v15->field_0) >= v10 + 63 >> 6)
            {
                v17 = v15->field_8;
            }
            else
            {
                v0 = v14;
                v1 = v9;
                v17 = (long long)mpz_realloc();
            }
            v18 = ((long long)((v21 ^ ((int)(v20 >> 31))) - ((int)(v20 >> 31))));
            v19 = 18446744069414584319 >> (((char)(v22 * 64 - v10)) & 63);
            v13 = ((char)[D] amd64g_calculate_condition(0xf<64>, 0x14<64>, Conv(32->64, Load(addr=(rsi<8> + 0x4<64>), size=4, endness=Iend_LE)), 0x0<64>, cc_ndep<8>));
            if (!(v22 > ((long long)((v21 ^ ((int)(v20 >> 31))) - ((int)(v20 >> 31))))))
            {
                v14 = v14->field_8;
                if (v16 != v15)
                {
                    if (v22 != 1)
                    {
                        v8 = 0;
                        do
                        {
                            *(v17 + v8 * 8) = *(v14 + v8 * 8);
                            v8 += 1;
                        }
                        while (v8 != (v10 + 63 >> 6) - 1);
                    }
                }
                v15 = *(v14 + v22 * 8 + 8) & v19;
                *(v17 + v22 * 8 + 8) = *(v14 + v22 * 8 + 8) & v19;
                v7 = v15;
                if (v9 == reg_56<4>)
                {
                    v24 = 0 - v24;
                    mpn_neg();
                    v7 = v18->field_0 & v19;
                    v18->field_0 = v18->field_0 & v19;
                }
            }
            else if (v9 != reg_56<4>)
            {
                v9 = v17 + ((long long)((v14->field_4 ^ ((int)(v20 >> 31))) - ((int)(v20 >> 31)))) * 8 - 8;
                if (v14 != v15)
                {
                    v11 = 0;
                    do
                    {
                        *(v17 + v11 * 8) = *(v14->field_8 + v11 * 8);
                        v11 += 1;
                    }
                    while (v18 != v11);
                    if (v9->field_0 != 0)
                    {
                        v6 = ((long long)(0 - ((int)v11)));
                        v23->field_4 = (((char)[D] amd64g_calculate_condition(0x8<64>, 0x14<64>, r15<8>, 0x0<64>, cc_ndep<8>))? ((int)(0 - ((int)v11))) : ((int)v11));
                        return v6;
                    }
                }
                v7 = v9->field_0;
                v11 = ((long long)((v14->field_4 ^ ((int)(v20 >> 31))) - ((int)(v20 >> 31))));
            }
            else
            {
                v4 = mpn_neg();
                if (v4 != 0)
                {
                    if (((long long)((v14->field_4 ^ ((int)(v20 >> 31))) - ((int)(v20 >> 31)))) < v22 - 1)
                    {
                        v4 = v17 + ((long long)((v14->field_4 ^ ((int)(v20 >> 31))) - ((int)(v20 >> 31)))) * 8;
                        v10 = v17 + v22 * 8 - 8;
                        do
                        {
                            v4->field_0 = 18446744069414584319;
                            v4 += 8;
                        }
                        while (v4 != v10);
                    }
                    *(v17 + v22 * 8 + 8) = v19;
                    v24 = 0 - v24;
                    v7 = v19;
                }
                else
                {
                    __assert_fail(); /* do not return */
                }
            }
            if (v22 <= ((long long)((v21 ^ ((int)(v20 >> 31))) - ((int)(v20 >> 31)))) || v9 == reg_56<4> && v4 != 0 || v14 == v15 && v9 != reg_56<4> || v9 != reg_56<4> && v9->field_0 != 0)
            {
                while (true)
                {
                    if (v7 != 0)
                    {
                        v6 = ((long long)(0 - ((int)v11)));
                        v23->field_4 = (((char)[D] amd64g_calculate_condition(0x8<64>, 0x14<64>, r15<8>, 0x0<64>, cc_ndep<8>))? ((int)(0 - ((int)v11))) : ((int)v11));
                        return v6;
                    }
                }
                v11 = rbx<8> - 1;
                v7 = *(v17 + v11 * 8 + 8);
                v6 = ((long long)(0 - ((int)v11)));
                v23->field_4 = (((char)[D] amd64g_calculate_condition(0x8<64>, 0x14<64>, r15<8>, 0x0<64>, cc_ndep<8>))? ((int)(0 - ((int)v11))) : ((int)v11));
                return v6;
            }
        }
        __assert_fail(); /* do not return */
    }
    else
    {
        v15->field_4 = 0;
        return v3;
    }
}
