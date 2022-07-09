typedef struct struct_1 {
    unsigned int field_0;
    unsigned int field_4;
    unsigned long long field_8;
} struct_1;

typedef struct struct_2 {
    unsigned long long field_0;
} struct_2;

int mpz_set_str()
{
    BOT tmp_6;  // tmp #6
    struct_1 *v0;  // [bp-0x68]
    unsigned long|struct_2 * v1;  // [bp-0x60]
    unsigned int v10;  // ecx
    unsigned long long v11;  // rdx
    unsigned long long v12;  // rbx
    unsigned long long v13;  // rbp
    unsigned long long v14;  // rsi
    unsigned long|unsigned long long v15;  // rdi
    struct_2 *|unsigned long long v16;  // r8
    unsigned long long v17;  // r12
    unsigned long long v18;  // r12
    unsigned long long v19;  // r13
    unsigned int v2;  // [bp-0x58]
    unsigned long long v20;  // r14
    char [3]|unsigned long long v21;  // r15
    char * v22;  // r15
    unsigned long v3;  // [bp-0x50]
    unsigned long long v5;  // rax
    unsigned long long v6;  // rax
    unsigned long long v7;  // rax
    unsigned long long v9;  // rax

    v22 = v14;
    v12 = v11;
    v0 = v15;
    if (((int)(v11 - 2)) > 60)
    {
        if (((int)v11) != 0)
        {
            __assert_fail(); /* do not return */
        }
    }
    if (((int)(v11 - 2)) <= 60 || ((int)v11) == 0)
    {
        v16 = __ctype_b_loc();
        while (true)
        {
            v6 = ((long long)*(v22));
            v19 = ((long long)*(v22));
            if (((long long)(*(((unsigned int)v10) + (((long long)*(v22)) << 1) + 1) & 32)) == 0)
            {
                break;
            }
            v22 += 1;
        }
        v21 = v22 + ((long long)(v6 == 45));
        v5 = ((long long)v21[0]);
        if (!(((int)v11) != 0))
        {
            v12 = 10;
            if (v5 == 48)
            {
                v5 = ((long long)(((int)v21[1]) & -33));
                if (((char)(((int)v21[1]) & -33)) == 88)
                {
                    v5 = ((long long)v21[2]);
                    v12 = 16;
                    v21 += 2;
                }
                else
                {
                    if (v5 == 66)
                    {
                        v5 = ((long long)v21[2]);
                        v12 = 2;
                        v21 += 2;
                    }
                    else
                    {
                        v12 = 8;
                        /* goto 4255705; */
                    }
                }
            }
            if (v5 == 66 || ((char)(((int)v21[1]) & -33)) == 88 || v5 != 48)
            {
                if (((long long)v5) == 0)
                {
                    v0->field_4 = 0;
                    v9 = -1;
                    return v9;
                }
            }
            if ((v5 == 48 || ((long long)v5) != 0) && (v5 != 66 || ((long long)v5) != 0) && (((long long)v5) != 0 || ((char)(((int)v21[1]) & -33)) != 88))
            {
                v1 = v1;
                v13 = strlen(v21);
                v20 = (long long)gmp_default_alloc();
            }
        }
        else if (((long long)v5) != 0)
        {
            v1 = v16;
            v13 = strlen(v21);
            v20 = (long long)gmp_default_alloc();
        }
        else
        {
            v0->field_4 = 0;
            v9 = -1;
            return v9;
        }
        if (((int)v11) == 0 && ((long long)v5) != 0 || ((int)v11) != 0 && ((long long)v5) != 0 || v5 == 48 && ((int)v11) == 0 && v5 != 66 && ((char)(((int)v21[1]) & -33)) != 88)
        {
            v7 = ((long long)v21[0]);
            v17 = 0;
            if (((long long)v21[0]) == 0)
            {
            }
            else
            {
                while (true)
                {
                    if (((long long)(*(v16->field_0 + (((long long)v7) << 1) + 1) & 32)) == 0)
                    {
                        if ((v7 - 48 & 255) <= 9)
                        {
                            v7 = ((long long)(((int)v7) - 48));
                        }
                        else if ((v7 - 97 & 255) <= 25)
                        {
                            v7 = ((long long)(((int)v7) + (37 <= ((int)v11)? 36 : 10) - 97));
                        }
                        else
                        {
                            v7 = ((long long)(((int)v7) - 55));
                        }
                        *(v20 + v17) = al<1>;
                        v17 += 1;
                    }
                    v7 = ((long long)*(r15<8> + 1));
                    v21 = r15<8> + 1;
                    tmp_6 = v7;
                    v21 = (long long)mpn_base_power_of_two_p();
                    v15 = ((long long)v0->field_0);
                    if (((int)v21) != 0)
                    {
                        v12 = v17 * v21 + 63 >> 6;
                        if (v17 * v21 + 63 >> 6 <= ((long long)v0->field_0))
                        {
                        }
                        else
                        {
                            v15 = (long long)mpz_realloc();
                        }
                        v17 = (long long)mpn_set_str_bits();
                    }
                    else
                    {
                        v21 = v12;
                        v16 = v17 - 1;
                        if ([D] amd64g_calculate_condition(0xe<64>, 0x14<64>, r12<8>, 0x0<64>, cc_ndep<8>) == 0)
                        {
                            v14 = v21;
                            v10 = 1;
                            do
                            {
                                v14 *= v14;
                                ((unsigned int)v10) = ((long long)((unsigned int)v10)) + 1;
                            }
                            while (!(((char)[D] amd64g_calculate_condition(0xe<64>, 0x14<64>, r12<8>, 0x0<64>, cc_ndep<8>))));
                            v12 = ((long long)((0 CONCAT ((unsigned int)v10) + v16) % ((unsigned int)v10)));
                        }
                        else
                        {
                            v12 = v17;
                            v10 = 1;
                        }
                        v2 = ((unsigned int)v10);
                        v3 = v14;
                        if (v12 <= v15)
                        {
                            v15 = v0->field_8;
                        }
                        else
                        {
                            v15 = (long long)mpz_realloc();
                        }
                        v1 = v15;
                        v18 = (long long)mpn_set_str_other.isra.0();
                        if (!(((char)[D] amd64g_calculate_condition(0xe<64>, 0x14<64>, r12<8>, 0x0<64>, cc_ndep<8>))))
                        {
                            v17 = v18 - ((long long)(*(v1 + (v18 << 3) + 8) == 0));
                        }
                        else
                        {
                            __assert_fail(); /* do not return */
                        }
                    }
                    if (!(((char)[D] amd64g_calculate_condition(0xe<64>, 0x14<64>, r12<8>, 0x0<64>, cc_ndep<8>))) || ((int)v21) != 0)
                    {
                        if (v17 <= v12)
                        {
                            gmp_default_free();
                            v0->field_4 = (v19 == 45? 0 - ((int)v17) : ((int)v17));
                            v9 = 0;
                            return v9;
                        }
                        __assert_fail(); /* do not return */
                    }
                }
            }
            gmp_default_free();
            v0->field_4 = 0;
            v9 = -1;
            return v9;
        }
    }
}
