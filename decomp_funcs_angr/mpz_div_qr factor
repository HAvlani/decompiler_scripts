typedef struct struct_2 {
    char padding_0[4];
    unsigned int field_4;
} struct_2;

typedef struct struct_1 {
    char padding_0[4];
    unsigned int field_4;
    unsigned long long field_8;
} struct_1;

typedef struct struct_0 {
    unsigned int field_0;
    unsigned int field_4;
    unsigned long long field_8;
} struct_0;

typedef struct struct_3 {
    unsigned long long field_0;
} struct_3;

extern char dummy_limb.5449;

int mpz_div_qr()
{
    BOT tmp_105;  // tmp #105
    BOT tmp_13;  // tmp #13
    BOT tmp_36;  // tmp #36
    unsigned long v0;  // [bp-0xe0]
    unsigned int v1;  // [bp-0xd8]
    unsigned long long v10;  // [bp-0x98]
    unsigned long v11;  // [bp-0x90]
    unsigned int v12;  // [bp-0x88]
    unsigned int v13;  // [bp-0x68]
    unsigned int v14;  // [bp-0x64]
    unsigned long|unsigned long long v15;  // [bp-0x60]
    unsigned long long|unsigned int v16;  // [bp-0x58]
    unsigned int v17;  // [bp-0x54]
    unsigned long v18;  // [bp-0x50]
    unsigned int v2;  // [bp-0xd4]
    unsigned long long|struct_3 *|unsigned int v20;  // rax
    unsigned long long v23;  // rax
    unsigned long long v25;  // rax
    struct_1 *|unsigned long long|unsigned int v26;  // rcx
    unsigned long long|unsigned int|struct_2 * v27;  // rdx
    unsigned long long v28;  // rbx
    struct_0 *v29;  // rbp
    unsigned long|unsigned long long v3;  // [bp-0xd0]
    unsigned long long|struct_0 * v30;  // rsi
    unsigned long long v31;  // rsi
    unsigned long long|struct_0 * v32;  // rdi
    unsigned long long v33;  // r8
    unsigned long long|unsigned int v34;  // r8d
    unsigned long long v35;  // r10
    unsigned long long v36;  // r10
    unsigned long long v37;  // r10
    unsigned long long v38;  // r11
    struct_0 *v39;  // r12
    unsigned long|unsigned long long v4;  // [bp-0xc8]
    unsigned long long v41;  // r14
    unsigned long long v5;  // [bp-0xc0]
    unsigned long long v6;  // [bp-0xb8]
    unsigned long|unsigned long long v7;  // [bp-0xb0]
    unsigned long v8;  // [bp-0xa8]
    unsigned long v9;  // [bp-0xa0]

    v35 = ((long long)v27->field_4);
    v1 = v34;
    v20 = ((long long)v26->field_4);
    if (v26->field_4 != 0)
    {
        v29 = v32;
        v39 = v30;
        if (((long long)v27->field_4) != 0)
        {
            v2 = ((int)v4) ^ ((int)v26->field_4);
            v41 = ((long long)((((int)(v4 >> 31)) ^ ((int)v4)) - ((int)(v4 >> 31))));
            v26 = v20 >> 31;
            tmp_105 = ((long long)(((int)(v20 >> 31)) ^ ((int)v20)));
            v20 = ((long long)(((int)v4) ^ ((int)v20)));
            v34 = ((long long)(tmp_105 - v26));
            v0 = v20;
            v28 = ((long long)(tmp_105 - v26));
            if (((long long)((((int)(v4 >> 31)) ^ ((int)v4)) - ((int)(v4 >> 31)))) < v3)
            {
                if (v1 == 1)
                {
                    if (!(((char)[D] amd64g_calculate_condition(0x8<64>, 0x14<64>, Load(addr=stack_base-224, size=8, endness=Iend_LE), 0x0<64>, cc_ndep<8>))))
                    {
                        if (v30 != 0)
                        {
                            mpz_sub();
                        }
                        if (v32 != 0)
                        {
                            mpz_set_ui.part.0();
                            return ((long long)((((int)(v4 >> 31)) ^ ((int)v4)) - ((int)(v4 >> 31))));
                        }
                        return ((long long)((((int)(v4 >> 31)) ^ ((int)v4)) - ((int)(v4 >> 31))));
                    }
                }
                if (((char)[D] amd64g_calculate_condition(0x8<64>, 0x14<64>, Load(addr=stack_base-224, size=8, endness=Iend_LE), 0x0<64>, cc_ndep<8>)) || v1 != 1)
                {
                    if (v1 == 0)
                    {
                        if (((char)(v0 - 0 >> 63)))
                        {
                            if (v30 != 0)
                            {
                                mpz_add();
                            }
                            if (v32 == 0)
                            {
                                return ((long long)((((int)(v4 >> 31)) ^ ((int)v4)) - ((int)(v4 >> 31))));
                            }
                            v34 = ((int)v29->field_0);
                            v29->field_4 = -1;
                            if (v34 > 0)
                            {
                                v20 = v29->field_8;
                                v20->field_0 = 1;
                                return ((long long)((((int)(v4 >> 31)) ^ ((int)v4)) - ((int)(v4 >> 31))));
                            }
                            else
                            {
                                v20 = mpz_realloc();
                                v20->field_0 = 1;
                                return ((long long)((((int)(v4 >> 31)) ^ ((int)v4)) - ((int)(v4 >> 31))));
                            }
                        }
                    }
                    if (!(((char)(v0 - 0 >> 63))) || v1 != 0)
                    {
                        if (v30 != 0)
                        {
                            mpz_set();
                        }
                        if (v32 != 0)
                        {
                            v32->field_4 = 0;
                            return ((long long)((((int)(v4 >> 31)) ^ ((int)v4)) - ((int)(v4 >> 31))));
                        }
                        return ((long long)((((int)(v4 >> 31)) ^ ((int)v4)) - ((int)(v4 >> 31))));
                    }
                }
            }
            v3 = v34;
            v18 = &dummy_limb.5449;
            v4 = v35;
            v9 = &stack_base-88;
            v16 = 0;
            mpz_set();
            v33 = v3;
            v3 = 0;
            v36 = v4;
            v23 = v41 - v33 + 1;
            v8 = v41 - v33 + 1;
            if (v32 != 0)
            {
                v5 = v3;
                v14 = 0;
                v13 = ((int)((v23 * 64 - [D] amd64g_calculate_condition(0x5<64>, 0x20<64>, Shl(rax<8>, 0x6<8>), Shl(rax<8>, 0x5<8>), cc_ndep<8>) >> 6) + 1));
                v23 = gmp_default_alloc();
                v33 = v5;
                v36 = v4;
                v3 = v23;
                v15 = v23;
            }
            v31 = v26->field_8;
            v7 = v36;
            v6 = v33;
            v5 = v31;
            v4 = &stack_base-136;
            mpn_div_qr_invert();
            v34 = v6;
            v30 = v5;
            v37 = v7;
            if (v6 > 2)
            {
                if (v12 != 0)
                {
                    v11 = &stack_base-136;
                    v10 = v37;
                    v7 = v30;
                    v4 = v34;
                    v6 = v4 * 8;
                    v4 = (long long)gmp_default_alloc();
                    v5 = v34;
                    v25 = mpn_lshift();
                    v38 = v4;
                    if (v25 == 0)
                    {
                        v5 = v10;
                        v4 = v38;
                        mpn_div_qr_preinv();
                        v35 = v5;
                        if (v4 != 0)
                        {
                            v4 = v5;
                            gmp_default_free();
                            v35 = v4;
                        }
                    }
                    else
                    {
                        __assert_fail(); /* do not return */
                    }
                }
            }
            if (v6 <= 2 || v12 == 0)
            {
                v4 = v7;
                mpn_div_qr_preinv();
                v35 = v4;
            }
            if (v6 <= 2 || v12 == 0 || v25 == 0)
            {
                if (v3 != 0)
                {
                    v14 = (((char)(((long long)v2) >> 31 & 1 ^ 1))? ((int)(v8 - ((long long)(*(v3 + (v8 << 3) + 8) == 0)))) : ((int)(*(v3 + (v8 << 3) + 8) == 0)) - ((int)v8));
                }
                while (true)
                {
                    if (*(&dummy_limb.5449 + (v28 << 3) + 8) == 0)
                    {
                        v28 -= 1;
                        v27 = 0;
                        break;
                    }
                    else
                    {
                        v27 = 1;
                        break;
                    }
                }
                v17 = (((char)[D] amd64g_calculate_condition(0x9<64>, 0x14<64>, r10<8>, 0x0<64>, cc_ndep<8>))? ((int)v28) : 0 - ((int)v28));
                if (v1 == 0)
                {
                    if (((char)(v0 - 0 >> 63)))
                    {
                        if (v28 != 0)
                        {
                            if (v32 != 0)
                            {
                                mpz_sub_ui();
                            }
                            if (v39 != 0)
                            {
                                mpz_add();
                            }
                        }
                    }
                }
                if (!(((char)(v0 - 0 >> 63))) || v1 != 0)
                {
                    if (((long long)(((char)(!(*(&stack_base-224)) >> 63)) & ((char)(v1 == 1)))) != 0)
                    {
                        if (((long long)v27) != 0)
                        {
                            if (v32 != 0)
                            {
                                mpz_add_ui();
                            }
                            else if (v39 == 0)
                            {
                                /* goto 4237417; */
                            }
                            if (v39 != 0)
                            {
                                mpz_sub();
                            }
                        }
                    }
                }
                if (v39 != 0)
                {
                    tmp_13 = v39->field_8;
                    v20 = ((long long)v39->field_0);
                    v39->field_0 = 0;
                    v18 = tmp_13;
                    v26 = ((int)v39->field_4);
                    v39->field_8 = &dummy_limb.5449;
                    v27 = ((int)v17);
                    v16 = ((int)v20);
                    v17 = v26;
                    v39->field_4 = v27;
                }
                if (v32 != 0)
                {
                    v20 = ((int)v29->field_0);
                    v32 = v29->field_8;
                    v26 = ((int)v29->field_4);
                    v29->field_0 = v13;
                    tmp_36 = v15;
                    v13 = v20;
                    v29->field_8 = tmp_36;
                    v27 = ((int)v14);
                    v15 = v32;
                    v14 = v26;
                    v29->field_4 = v27;
                    if (v13 != 0)
                    {
                        gmp_default_free();
                    }
                }
                else if (((char)(v0 - 0 >> 63)) || ((long long)v27) != 0)
                {
                    if (((char)(v0 - 0 >> 63)) || ((long long)(((char)(!(*(&stack_base-224)) >> 63)) & ((char)(v1 == 1)))) != 0)
                    {
                        if (v1 == 0 || ((long long)v27) != 0)
                        {
                            if (v1 == 0 || ((long long)(((char)(!(*(&stack_base-224)) >> 63)) & ((char)(v1 == 1)))) != 0)
                            {
                                if (v28 != 0 || !(((char)(v0 - 0 >> 63))) || v1 != 0)
                                {
                                    if (v39 != 0)
                                    {
                                        /* goto 4237015; */
                                    }
                                    else
                                    {
                                        v20 = ((int)((int)v16));
                                    }
                                }
                            }
                        }
                    }
                }
                if (v32 != 0 || v39 != 0)
                {
                    v20 = ((long long)((int)v16));
                }
                if (v20 == 0)
                {
                    return ((long long)((((int)(v4 >> 31)) ^ ((int)v4)) - ((int)(v4 >> 31))));
                }
                else
                {
                    gmp_default_free();
                    return ((long long)((((int)(v4 >> 31)) ^ ((int)v4)) - ((int)(v4 >> 31))));
                }
            }
        }
        if (v32 != 0)
        {
            v32->field_4 = 0;
        }
        if (v30 == 0)
        {
            return ((long long)((((int)(v4 >> 31)) ^ ((int)v4)) - ((int)(v4 >> 31))));
        }
        else
        {
            v30->field_4 = 0;
            return ((long long)((((int)(v4 >> 31)) ^ ((int)v4)) - ((int)(v4 >> 31))));
        }
    }
    gmp_die(); /* do not return */
}
