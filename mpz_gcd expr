typedef struct struct_3 {
    unsigned int field_0;
    unsigned int field_4;
    unsigned long long field_8;
} struct_3;

typedef struct struct_1 {
    char padding_0[4];
    unsigned int field_4;
} struct_1;

typedef struct struct_2 {
    unsigned int field_0;
    char padding_4[4];
    unsigned long long field_8;
} struct_2;

typedef struct struct_0 {
    unsigned long long field_0;
} struct_0;

extern char dummy_limb.5449;

int mpz_gcd()
{
    BOT tmp_33;  // tmp #33
    BOT tmp_13;  // tmp #13
    BOT tmp_32;  // tmp #32
    BOT tmp_19;  // tmp #19
    BOT tmp_23;  // tmp #23
    struct_1 *|unsigned long|unsigned long long v0;  // [bp-0x58]
    unsigned int v1;  // [bp-0x54]
    unsigned long long v14;  // rcx
    unsigned long long v15;  // rcx
    unsigned long long v16;  // rdx
    struct_1 *|unsigned int|unsigned long long v17;  // rdx
    struct_1 * v18;  // esi
    unsigned long long v19;  // rsi
    struct_0 *|unsigned long v2;  // [bp-0x50]
    unsigned long long v20;  // rsi
    unsigned int|struct_2 *|unsigned long long v21;  // edi
    struct_3 *v22;  // r12
    unsigned long v23;  // r13
    struct_0 *v24;  // fs
    struct_1 *|unsigned int|unsigned long long v3;  // [bp-0x48]
    struct_1 *|unsigned int v4;  // [bp-0x44]
    struct_0 *|unsigned long v5;  // [bp-0x40]
    unsigned long v6;  // [bp-0x30]
    unsigned long long v8;  // rax
    unsigned int|struct_0 *|unsigned long long v9;  // rax

    v22 = v21;
    v21 = ((int)v18->field_4);
    if (!(v21 != 0))
    {
        mpz_set();
        tmp_33 = ((long long)(((long long)v22->field_4) >> 31));
        v22->field_4 = v22->field_4 ^ ((int)(((long long)v22->field_4) >> 31));
        v22->field_4 = v22->field_4 - ((int)tmp_33);
        return v6 ^ *(v24 + 0x28);
    }
    else if (v17->field_4 != 0)
    {
        v0 = 0;
        v2 = &dummy_limb.5449;
        v5 = &dummy_limb.5449;
        v3 = 0;
        mpz_set();
        v1 = ((int)*((int *)(((char *)&v0) + 4))) ^ ((int)(((long long)((int)*((int *)(((char *)&v0) + 4)))) >> 31));
        v1 -= ((int)(0 >> 31));
        mpz_set();
        v4 = ((int)*((int *)(((char *)&v3) + 4))) ^ ((int)(((long long)((int)*((int *)(((char *)&v3) + 4)))) >> 31));
        v4 -= ((int)(0 >> 31));
        v23 = (!((long long)mpz_make_odd() <= (long long)mpz_make_odd())? (long long)mpz_make_odd() : (long long)mpz_make_odd());
        if (v1 < v4)
        {
            v8 = v0;
            v5 = v2;
            v17 = v3;
            v2 = &dummy_limb.5449;
            v0 = v17;
            v3 = v8;
        }
        mpz_div_qr();
        if (((int)*((int *)(((char *)&v0) + 4))) == 0)
        {
            tmp_13 = ((long long)v22->field_0);
            v18 = ((long long)((int)v0));
            v22->field_0 = ((int)v3);
            v3 = ((int)tmp_13);
            tmp_32 = v22->field_8;
            v22->field_8 = &dummy_limb.5449;
            v17 = ((int)((int)*((int *)(((char *)&v3) + 4))));
            v5 = tmp_32;
            v9 = ((int)v22->field_4);
            v22->field_4 = v17;
            v4 = v9;
        }
        else
        {
            while (true)
            {
                mpz_make_odd();
                v9 = mpz_cmp();
                if (((int)v9) != 0)
                {
                    if (((char)[D] amd64g_calculate_condition(0x8<64>, 0x14<64>, rcx<8>, 0x0<64>, cc_ndep<8>)))
                    {
                        v17 = v3;
                        v3 = ((int)v0);
                        v2 = &dummy_limb.5449;
                        v5 = &dummy_limb.5449;
                        v9 = ((long long)((int)*((int *)(((char *)&v0) + 4))));
                        v0 = v17;
                        v4 = ((int)v9);
                    }
                    if (v9 != 1)
                    {
                        mpz_sub();
                    }
                    else
                    {
                        mpz_div_qr();
                        if (*(v21) > 0)
                        {
                            v9 = *(v21 + 8);
                        }
                        else
                        {
                            v9 = mpz_realloc();
                        }
                        v19 = v5->field_0;
                        v21 = v5->field_0 | v2->field_0;
                        if ((v5->field_0 | v2->field_0) != 0)
                        {
                            if (False)
                            {
                                v19 = 49568;
                                /* goto 4234187; */
                            }
                            v14 = 0 - v21 & v21;
                            v21 = 0;
                            do
                            {
                                v14 *= 0x100;
                                v21 = 8;
                            }
                            while ((0xfeffffff00000000 & v14) == 0);
                            if (!(((char)[D] amd64g_calculate_condition(0x8<64>, 0x14<64>, rcx<8>, 0x0<64>, cc_ndep<8>))))
                            {
                                do
                                {
                                    v21 = 1;
                                    v14 = rcx<8> * 2;
                                }
                                while (!(((char)[D] amd64g_calculate_condition(0x8<64>, 0x14<64>, rcx<8>, 0x0<64>, cc_ndep<8>))));
                            }
                            v15 = ((long long)(63 - v21));
                            v16 = 49568 >> (((char)(63 - v21)) & 63);
                            v20 = 49568 >> (((char)(63 - v21)) & 63);
                            if (((long long)(((char)(49568 >> (((char)63) & 63))) & 1)) == 0)
                            {
                            }
                            else
                            {
                                v16 = v20;
                                v20 = 49568 >> (63 & 63);
                            }
                            if (((long long)(((char)(49568 >> (((char)63) & 63))) & 1)) == 0 || (((char)((int)(49568 >> (((char)63) & 63)))) & 1) == 0)
                            {
                                do
                                {
                                    v16 = v16 % 2;
                                    tmp_19 = v16;
                                }
                                while (((long long)(tmp_19 & 1)) == 0);
                            }
                            while (rsi<8> != rdx<8>)
                            {
                                if (rdx<8> < rsi<8>)
                                {
                                    v20 = rsi<8> - rdx<8>;
                                    do
                                    {
                                        v20 = v20 % 2;
                                        tmp_19 = v20;
                                    }
                                    while (((long long)(tmp_19 & 1)) == 0);
                                }
                                else
                                {
                                    v16 = rdx<8> - rsi<8>;
                                    do
                                    {
                                        v16 = v16 % 2;
                                        tmp_19 = v16;
                                    }
                                    while (((long long)(tmp_19 & 1)) == 0);
                                }
                            }
                            v17 = rdx<8> << (v15 & 63);
                            v19 = v17;
                            v9->field_0 = v19;
                            v18 = ((long long)((int)v0));
                            v22->field_4 = ((int)(((long long)((int)v0)) != 0));
                            break;
                        }
                        else
                        {
                            __assert_fail(); /* do not return */
                        }
                    }
                }
                else
                {
                    v18 = ((int)v22->field_0);
                    v22->field_0 = ((int)v0);
                    tmp_23 = v22->field_8;
                    v22->field_8 = v2;
                    v17 = ((int)((int)*((int *)(((char *)&v0) + 4))));
                    v2 = tmp_23;
                    v9 = ((int)v22->field_4);
                    v0 = v18;
                    v22->field_4 = v17;
                    v1 = v9;
                    break;
                }
            }
        }
        if (v18 != 0)
        {
            gmp_default_free();
        }
        if (v3 != 0)
        {
            gmp_default_free();
            mpz_mul_2exp();
            return v6 ^ *(v24 + 0x28);
        }
        mpz_mul_2exp();
        return v6 ^ *(v24 + 0x28);
    }
    else
    {
        mpz_set();
        tmp_33 = ((long long)(((long long)v22->field_4) >> 31));
        v22->field_4 = v22->field_4 ^ ((int)(((long long)v22->field_4) >> 31));
        v22->field_4 = v22->field_4 - ((int)tmp_33);
        return v6 ^ *(v24 + 0x28);
    }
}
