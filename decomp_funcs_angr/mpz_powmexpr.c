typedef struct struct_0 {
    char padding_0[4];
    unsigned int field_4;
    unsigned long long field_8;
} struct_0;

typedef struct struct_3 {
    unsigned int field_0;
    unsigned int field_4;
    unsigned long long field_8;
} struct_3;

typedef struct struct_2 {
    char padding_0[4];
    unsigned int field_4;
} struct_2;

typedef struct struct_1 {
    unsigned long long field_0;
} struct_1;

extern char dummy_limb.5449;

int mpz_powm()
{
    unsigned long v0;  // [bp-0xd0]
    unsigned long v1;  // [bp-0xc8]
    unsigned long|unsigned long long|unsigned int v10;  // [bp-0x68]
    unsigned int v11;  // [bp-0x64]
    unsigned long v12;  // [bp-0x60]
    unsigned long long v13;  // [bp-0x58]
    unsigned int v14;  // [bp-0x54]
    unsigned long v15;  // [bp-0x50]
    unsigned long v16;  // [bp-0x40]
    unsigned long long v18;  // rax
    unsigned long long|unsigned int v19;  // rax
    unsigned long v2;  // [bp-0xc0]
    unsigned long long|unsigned int v23;  // rax
    struct_0 *|unsigned int v24;  // ecx
    unsigned long|struct_0 *|unsigned int v25;  // rdx
    unsigned long|unsigned long long|unsigned int v26;  // ebx
    struct_3 *v27;  // rsi
    struct_2 *v28;  // rsi
    unsigned long|unsigned long long v29;  // rdi
    struct_1 *|unsigned long v3;  // [bp-0xb8]
    unsigned long v30;  // r12
    unsigned long|unsigned int v31;  // r12
    unsigned long long v32;  // r13
    struct_1 *v33;  // fs
    struct_0 *v4;  // [bp-0xb0]
    unsigned long long v5;  // [bp-0xa8]
    struct_3 *v6;  // [bp-0xa0]
    unsigned int v7;  // [bp-0x94]
    unsigned long v8;  // [bp-0x90]
    unsigned int v9;  // [bp-0x88]

    v31 = ((int)v24->field_4);
    v26 = ((int)v25->field_4);
    v6 = v29;
    v4 = v25;
    if (!(v31 != 0))
    {
        gmp_die(); /* do not return */
    }
    else if (v25->field_4 != 0)
    {
        v32 = v24->field_8;
        v2 = &stack_base-136;
        v1 = v32;
        v31 = ((long long)((v31 ^ ((int)(v30 >> 31))) - ((int)(v30 >> 31))));
        v0 = v31;
        v8 = v31;
        mpn_div_qr_invert();
        v23 = ((int)v9);
        v7 = v9;
        if (v23 == 0)
        {
            v5 = 0;
        }
        else
        {
            v9 = 0;
            v5 = (long long)gmp_default_alloc();
            v23 = mpn_lshift();
            if (v23 == 0)
            {
                v1 = v5;
            }
            else
            {
                __assert_fail(); /* do not return */
            }
        }
        if (v23 == 0 || v23 == 0)
        {
            v13 = 0;
            v15 = &dummy_limb.5449;
            if (((int)v4->field_4) >= 0)
            {
                mpz_set();
                v14 = (((int)*((int *)(((char *)&v13) + 4))) ^ ((int)(((long long)((int)*((int *)(((char *)&v13) + 4)))) >> 31))) - ((int)(((long long)((int)*((int *)(((char *)&v13) + 4)))) >> 31));
                v25 = ((long long)((0 ^ ((int)(0 >> 31))) - ((int)(0 >> 31))));
                if (!(v0 > ((long long)((0 ^ ((int)(0 >> 31))) - ((int)(0 >> 31))))))
                {
                    mpn_div_qr_preinv();
                    if (((int)v28->field_4) < 0)
                    {
                        v25 = v0;
                    }
                }
                else if (((int)v28->field_4) >= 0)
                {
                    if (((long long)((0 ^ ((int)(0 >> 31))) - ((int)(0 >> 31)))) == 0)
                    {
                        /* goto 4239415; */
                    }
                }
                if (((int)v28->field_4) < 0 || v0 <= ((long long)((0 ^ ((int)(0 >> 31))) - ((int)(0 >> 31)))))
                {
                    if (((int)v28->field_4) < 0 || v0 > ((long long)((0 ^ ((int)(0 >> 31))) - ((int)(0 >> 31)))))
                    {
                        if (((int)v31) > ((int)v13))
                        {
                            v3 = v25;
                            v29 = (long long)mpz_realloc();
                        }
                        v18 = mpn_sub();
                        if (v18 != 0)
                        {
                            __assert_fail(); /* do not return */
                        }
                    }
                    if ((v18 == 0 || v0 <= ((long long)((0 ^ ((int)(0 >> 31))) - ((int)(0 >> 31))))) && (v18 == 0 || ((int)v28->field_4) >= 0))
                    {
                        v25 = v0;
                    }
                }
                if (v18 == 0 || v0 <= ((long long)((0 ^ ((int)(0 >> 31))) - ((int)(0 >> 31)))) && ((int)v28->field_4) >= 0 || ((int)v28->field_4) >= 0 && v0 > ((long long)((0 ^ ((int)(0 >> 31))) - ((int)(0 >> 31)))))
                {
                    if (((int)v28->field_4) < 0 || v0 <= ((long long)((0 ^ ((int)(0 >> 31))) - ((int)(0 >> 31)))) || ((long long)((0 ^ ((int)(0 >> 31))) - ((int)(0 >> 31)))) != 0)
                    {
                        while (true)
                        {
                            if (*(&dummy_limb.5449 + (v25 << 3) + 8) == 0)
                            {
                                v25 -= 1;
                            }
                            else
                            {
                                v14 = ((int)v25);
                                break;
                            }
                        }
                        if (*(&dummy_limb.5449 + (v25 << 3) + 8) == 0)
                        {
                            v14 = 0;
                        }
                        else if (*(&dummy_limb.5449 + (v25 << 3) + 8) != 0)
                        {
                            v12 = &dummy_limb.5449;
                            v10 = 0;
                            mpz_set_ui.part.0();
                            v3 = ((long long)((v26 ^ ((int)(v26 >> 31))) - ((int)(v26 >> 31)))) * 8 - 8;
                        }
                    }
                    v14 = 0;
                }
            }
            else
            {
                v18 = mpz_invert();
                if (v18 == 0)
                {
                    gmp_die(); /* do not return */
                }
            }
            if (v18 == 0 && ((int)v4->field_4) >= 0 || ((int)v4->field_4) < 0 && v18 != 0 || v0 <= ((long long)((0 ^ ((int)(0 >> 31))) - ((int)(0 >> 31)))) && ((int)v4->field_4) >= 0 && ((int)v28->field_4) >= 0 || ((int)v28->field_4) >= 0 && ((int)v4->field_4) >= 0 && v0 > ((long long)((0 ^ ((int)(0 >> 31))) - ((int)(0 >> 31)))))
            {
                v12 = &dummy_limb.5449;
                v10 = 0;
                mpz_set_ui.part.0();
                v3 = ((long long)((v26 ^ ((int)(v26 >> 31))) - ((int)(v26 >> 31)))) * 8 - 8;
                do
                {
                    v26 = 0x8000000000000000;
                    while (true)
                    {
                        mpz_mul();
                        if ((*(v4->field_8 + v3) & v26) != 0)
                        {
                            mpz_mul();
                        }
                        if (((int)v31) >= ((int)*((int *)(((char *)&v10) + 4))))
                        {
                            v26 = 0x8000000000000000 >> 1;
                            if (False)
                            {
                                break;
                            }
                        }
                        else
                        {
                            mpn_div_qr_preinv();
                            v19 = v0;
                            while (*(&dummy_limb.5449 + (v19 << 3) + 8) == 0)
                            {
                                v19 -= 1;
                                v19 = 0;
                                break;
                            }
                            v11 = v19;
                            v26 = 0x8000000000000000 >> 1;
                            break;
                        }
                    }
                    v3 -= 8;
                }
                while (v3 != 18446744069414584312);
                if (((int)v31) <= ((int)*((int *)(((char *)&v10) + 4))))
                {
                    v9 = v7;
                    mpn_div_qr_preinv();
                    v25 = v8;
                    while (true)
                    {
                        if (*(&dummy_limb.5449 + (v25 << 3) + 8) == 0)
                        {
                            v25 -= 1;
                            v19 = 0;
                            break;
                        }
                        else
                        {
                            ((unsigned int)v19) = v25;
                            break;
                        }
                    }
                    v11 = ((unsigned int)v19);
                }
                if (v5 != 0)
                {
                    gmp_default_free();
                }
                v27 = v6;
                v24 = ((int)((int)*((int *)(((char *)&v10) + 4))));
                v19 = ((int)v6->field_0);
                v29 = v6->field_8;
                v6->field_0 = ((int)v10);
                v10 = v19;
                v27->field_8 = &dummy_limb.5449;
                v25 = ((int)v27->field_4);
                v12 = v29;
                v27->field_4 = v24;
                v11 = v25;
                if (v10 != 0)
                {
                    gmp_default_free();
                }
                if (((int)v13) == 0)
                {
                    return v16 ^ *(v33 + 0x28);
                }
                gmp_default_free();
                return v16 ^ *(v33 + 0x28);
            }
        }
    }
    else
    {
        mpz_set_ui.part.0();
        return v16 ^ *(v33 + 0x28);
    }
}
