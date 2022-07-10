typedef struct struct_0 {
    char padding_0[4];
    unsigned int field_4;
    unsigned long long field_8;
} struct_0;

typedef struct struct_1 {
    char padding_0[4];
    unsigned int field_4;
    struct struct_2 *field_8;
} struct_1;

typedef struct struct_2 {
    unsigned long long field_0;
} struct_2;

int mpz_export()
{
    BOT tmp_22;  // tmp #22
    unsigned long v0;  // [bp-0x48]
    unsigned int v1;  // [bp-0x3c]
    unsigned long long v10;  // rsi
    unsigned long long v11;  // rsi
    unsigned long long v12;  // rdi
    unsigned long|unsigned long long v13;  // r8
    unsigned long long v14;  // r9
    unsigned long long v15;  // r11
    unsigned long v16;  // r12
    unsigned long long|unsigned int v17;  // r12
    struct_1 *v18;  // r13
    unsigned long v19;  // r14
    struct_0 *v2;  // [bp+0x8]
    unsigned long long|unsigned int v20;  // r15d
    unsigned long|unsigned long long v3;  // rax
    unsigned long|unsigned long long v5;  // rax
    unsigned long long v6;  // rcx
    unsigned long|char *|unsigned long long v7;  // rdx
    unsigned long long v8;  // rbx
    struct_2 *v9;  // rbp

    v18 = v2;
    if (v14 == 0)
    {
        v20 = ((int)v7);
        if (!((((int)(v7 + 1)) & -3) == 0))
        {
            __assert_fail(); /* do not return */
        }
        else if (((int)(v13 + 1)) <= 2)
        {
            v17 = ((int)v2->field_4);
            v15 = v12;
            v9 = v10;
            v8 = v6;
            if (v6 == 0)
            {
                if (v2->field_4 != 0)
                {
                    __assert_fail(); /* do not return */
                }
            }
            if (v2->field_4 != 0)
            {
                v17 = ((long long)((v2->field_4 ^ ((int)(v16 >> 31))) - ((int)(v16 >> 31))));
                v3 = *(v18->field_8 + v17 * 8 + 8);
                if (*(v18->field_8 + (v17 << 3) + 8) != 0)
                {
                    do
                    {
                        v7 = v14;
                        v14 += 1;
                        v3 = v3 % 0x100;
                    }
                    while (!(((char)[D] amd64g_calculate_condition(0x4<64>, 0x24<64>, DivMod(rax<8>, 0x100<8>), DivMod(rax<8>, 0x80<8>), cc_ndep<8>))));
                    v0 = v8 + v17 * 8 - 8 + v7;
                    v19 = ((long long)((0 CONCAT v8 + v17 * 8 - 8 + v7) % v8));
                    if (v12 == 0)
                    {
                        v1 = ((int)v13);
                        v15 = (long long)gmp_default_alloc();
                    }
                    v11 = v15;
                    v13 = ((long long)(v13 == 0? -1 : ((int)r8<8>)));
                    v5 = ((v1 == 0? -1 : v1) != v20? v8 << 1 : 0);
                    if (v20 == 1)
                    {
                        v5 = 0 - v5;
                        v11 = v8 * (v19 - 1) + v15;
                    }
                    v10 = (((int)v13) == 1? v11 + v8 - 1 : v11);
                    if (v0 >= v8)
                    {
                        v14 = 0;
                        v13 = v8 * v13;
                        v6 = 0;
                        v20 = v5 - v13;
                        v5 = 0;
                        do
                        {
                            v13 = 0;
                            v7 = v10;
                            do
                            {
                                if (v14 != 0)
                                {
                                    v14 -= 1;
                                }
                                else
                                {
                                    v14 = 7;
                                    if (v17 > v6)
                                    {
                                        v5 = *(v18->field_8 + v6 * 8);
                                        v6 += 1;
                                    }
                                }
                                v13 += 1;
                                *(v7) = v5;
                                v5 = v5 % 0x100;
                                v7 += 0 - tmp_22;
                            }
                            while (v8 != v13);
                            v10 += v20;
                        }
                        while (v19 > 1);
                        v8 = (v8 <= v0? v19 : 1);
                        if (!(v6 == v17))
                        {
                            __assert_fail(); /* do not return */
                        }
                        else if (v19 != v8)
                        {
                            __assert_fail(); /* do not return */
                        }
                    }
                    else
                    {
                        __assert_fail(); /* do not return */
                    }
                }
                else
                {
                    __assert_fail(); /* do not return */
                }
            }
            else
            {
                v8 = 0;
            }
            if (...)
            {
                if (v9 != 0)
                {
                    v9->field_0 = v8;
                    return v15;
                }
                return v15;
            }
        }
        else
        {
            __assert_fail(); /* do not return */
        }
    }
    gmp_die(); /* do not return */
}
