typedef struct struct_1 {
    char padding_0[8];
    unsigned long long field_8;
} struct_1;

typedef struct struct_0 {
    unsigned int field_0;
} struct_0;

extern unsigned int g_4208e0;
extern unsigned int is_basic_table[4];
extern unsigned long long rpl_re_syntax_options;

int docolon()
{
    unsigned long long v0;  // [bp-0x1e8]
    unsigned long long v1;  // [bp-0x1e0]
    unsigned long long v10;  // [bp-0x184]
    char v11;  // [bp-0x17c]
    char * v12;  // [bp-0x178]
    unsigned long|unsigned long long v13;  // [bp-0x170]
    char v14;  // [bp-0x168]
    unsigned int v15;  // [bp-0x164]
    unsigned int|unsigned long long v19;  // rax
    unsigned long long v2;  // [bp-0x1d8]
    unsigned long long v23;  // rax
    char *|struct_1 * v27;  // rbx
    unsigned long long v28;  // rbp
    char *v29;  // rbp
    unsigned long long v3;  // [bp-0x1c8]
    unsigned long long v30;  // rbp
    struct_1 * v31;  // rsi
    char *v32;  // rdi
    unsigned long long v33;  // rdi
    char *v34;  // rdi
    char *v35;  // r12
    unsigned long long v36;  // r12
    struct_0 *v37;  // r12
    struct_0 *v38;  // r12
    char *v39;  // r14
    unsigned long long v4;  // [bp-0x1c0]
    unsigned long v40;  // r14
    unsigned long long v41;  // r15
    unsigned long|unsigned long long v5;  // [bp-0x1a8]
    unsigned long long v6;  // [bp-0x1a0]
    unsigned long v7;  // [bp-0x198]
    char v8;  // [bp-0x190]
    char v9;  // [bp-0x188]

    v27 = v33;
    tostring();
    tostring();
    v28 = v31->field_8;
    v0 = 0;
    v1 = 0;
    v32 = v28;
    v5 = &stack_base-328;
    v2 = 0;
    v3 = 0;
    v4 = 0;
    v6 = 0;
    rpl_re_syntax_options = 710;
    strlen(v32);
    if (rpl_re_compile_pattern() == 0)
    {
        v29 = v27->field_8;
        v8 &= 127;
        v34 = v29;
        strlen(v34);
        v30 = (long long)rpl_re_match();
        if (!(((char)[D] amd64g_calculate_condition(0x8<64>, 0x14<64>, Load(addr=(Load(addr=stack_base-472, size=8, endness=Iend_LE) + 0x8<64>), size=8, endness=Iend_LE), 0x0<64>, cc_ndep<8>))))
        {
            v41 = v7;
            if (v7 != 0)
            {
                *(v27->field_8 + *(0x8)) = 0;
                v36 = (long long)str_value();
            }
            else
            {
                v19 = __ctype_get_mb_cur_max();
                if (v19 != 1)
                {
                    v39 = v27->field_8;
                    v9 = 0;
                    v10 = 0;
                    v12 = v39;
                    v11 = 0;
                    while (true)
                    {
                        if (v9 == 0)
                        {
                            v27 = v12;
                            if (...)
                            {
                                v13 = 1;
                                v19 = ((int)*(v27));
                                v14 = 1;
                                v15 = v19;
                            }
                            else
                            {
                                v19 = mbsinit(((int)&v10));
                                if (v19 != 0)
                                {
                                    v9 = 1;
                                }
                                else
                                {
                                    __assert_fail(); /* do not return */
                                }
                            }
                        }
                        if (...)
                        {
                            __ctype_get_mb_cur_max();
                            strnlen1();
                            v13 = (long long)rpl_mbrtowc();
                        }
                        if (...)
                        {
                            if (v13 == 18446744069414584319)
                            {
                                v13 = 1;
                                v27 = v12;
                                v14 = 0;
                            }
                            else if (v13 != 18446744069414584318)
                            {
                                if (v13 == 0)
                                {
                                    if (*(v12) != 0)
                                    {
                                        __assert_fail(); /* do not return */
                                    }
                                    else if (v15 != 0)
                                    {
                                        mbuiter_multi_next.part.0(); /* do not return */
                                    }
                                }
                                if ((*(v12) == 0 || v13 != 0) && (v15 == 0 || v13 != 0))
                                {
                                    v14 = 1;
                                    v19 = mbsinit(((int)&v10));
                                    if (v19 != 0)
                                    {
                                        v9 = 0;
                                    }
                                }
                            }
                            if (v13 == 18446744069414584318)
                            {
                                v27 = v12;
                                v14 = 0;
                                v13 = strlen(v12);
                            }
                            if (v13 == 0)
                            {
                                v13 = 1;
                            }
                        }
                        if (...)
                        {
                            v27 = v12;
                        }
                        if (...)
                        {
                            v27 += v13;
                            v11 = 0;
                            v41 += 1;
                            v12 = v27;
                        }
                        if (...)
                        {
                            break;
                        }
                    }
                }
                v38->field_0 = 0;
                v38 = (long long)xmalloc();
                mpz_init_set_ui();
            }
        }
        else if (!(v30 == 18446744069414584319))
        {
            v35 = dcgettext(0x0, &g_4208e0, 0x5);
            if (v40 == 18446744069414584318)
            {
                v31 = ((long long)*(__errno_location()));
                error(0x3, v31, v35);
            }
            else
            {
                error(0x3, v31, v35);
            }
        }
        else if (v7 == 0)
        {
            v37->field_0 = 0;
            v37 = (long long)xmalloc();
            mpz_init_set_ui();
            if (v0 == 0)
            {
                v5 = 0;
                rpl_regfree();
                v23 = v36;
                return v23;
            }
            rpl_free();
            rpl_free();
            v5 = 0;
            rpl_regfree();
            v23 = v36;
            return v23;
        }
        else
        {
            v36 = (long long)str_value();
        }
        if (!(((char)[D] amd64g_calculate_condition(0x8<64>, 0x14<64>, Load(addr=(Load(addr=stack_base-472, size=8, endness=Iend_LE) + 0x8<64>), size=8, endness=Iend_LE), 0x0<64>, cc_ndep<8>))) || v30 == 18446744069414584319 && v7 != 0)
        {
            if (v0 == 0)
            {
                v5 = 0;
                rpl_regfree();
                v23 = v36;
                return v23;
            }
            rpl_free();
            rpl_free();
            v5 = 0;
            rpl_regfree();
            v23 = v36;
            return v23;
        }
    }
    error(0x2, 0x0, "%s");
}
