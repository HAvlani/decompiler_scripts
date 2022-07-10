typedef struct struct_1 {
    unsigned long long field_0;
} struct_1;

typedef struct struct_4 {
    unsigned long long field_0;
    unsigned long long field_8;
    char field_10;
    char padding_11[3];
    unsigned int field_14;
} struct_4;

typedef struct struct_3 {
    char padding_0[20];
    unsigned int field_14;
} struct_3;

typedef struct struct_2 {
    unsigned long long field_0;
    unsigned long long field_8;
    char padding_10[4];
    unsigned int field_14;
} struct_2;

extern char g_413fc2;
extern char g_413fd4;
extern char g_413fe9;
extern char g_414043;
extern <missing-type> g_4140e1;
extern <missing-type> g_4142d6;
extern char g_4142ef;
extern char g_41431d;
extern char g_41435c;
extern <missing-type> g_41438c;
extern <missing-type> g_41439d;
extern <missing-type> g_4143b3;
extern <missing-type> g_4143cc;
extern <missing-type> g_414415;
extern <missing-type> g_41443c;
extern <missing-type> g_41452f;
extern <missing-type> g_414543;
extern <missing-type> g_414555;
extern <missing-type> g_41456a;
extern <missing-type> g_4145be;
extern <missing-type> g_41460c;
extern <missing-type> g_414647;
extern <missing-type> g_41465b;
extern <missing-type> g_414674;
extern <missing-type> g_414690;
extern <missing-type> g_4146e8;
extern <missing-type> g_414709;
extern <missing-type> g_41475b;
extern <missing-type> g_41478d;
extern <missing-type> g_4147ac;
extern <missing-type> g_4147b1;
extern unsigned int is_basic_table[4];

int knuth_morris_pratt_multibyte()
{
    BOT tmp_19;  // tmp #19
    BOT tmp_33;  // tmp #33
    unsigned long v0;  // [bp-0x158]
    unsigned long v1;  // [bp-0x150]
    unsigned long long v10;  // [bp-0x104]
    char v11;  // [bp-0xfc]
    char * v12;  // [bp-0xf8]
    unsigned long|unsigned long long v13;  // [bp-0xf0]
    char v14;  // [bp-0xe8]
    unsigned int v15;  // [bp-0xe4]
    char v16;  // [bp-0xc8]
    unsigned long long v17;  // [bp-0xc4]
    char v18;  // [bp-0xbc]
    unsigned long|char * v19;  // [bp-0xb8]
    unsigned long v2;  // [bp-0x148]
    unsigned long|unsigned long long v20;  // [bp-0xb0]
    char v21;  // [bp-0xa8]
    unsigned int v22;  // [bp-0xa4]
    char v23;  // [bp-0x88]
    unsigned long long v24;  // [bp-0x84]
    char v25;  // [bp-0x7c]
    unsigned long|char * v26;  // [bp-0x78]
    unsigned long|unsigned long long v27;  // [bp-0x70]
    char v28;  // [bp-0x68]
    unsigned int v29;  // [bp-0x64]
    unsigned long v3;  // [bp-0x140]
    unsigned long v30;  // [bp-0x8]
    struct_2 *|unsigned int|struct_3 *|struct_4 *|unsigned long long|char * v32;  // rax
    unsigned long long v33;  // rax
    unsigned long long v34;  // rax
    unsigned long|unsigned long long v36;  // rax
    unsigned long long v38;  // rcx
    char|unsigned long|unsigned long long|char * v39;  // rdx
    unsigned long v4;  // [bp-0x138]
    unsigned long long v40;  // rbx
    void * v41;  // rsi
    void * v42;  // rdi
    unsigned int v43;  // r8d
    unsigned long long v44;  // r12
    unsigned long long|char * v45;  // r13
    struct_4 *|unsigned long long v46;  // r14
    struct_4 * v47;  // r14
    unsigned long long v48;  // r15
    unsigned long long v49;  // cc_dep1
    char *v5;  // [bp-0x128]
    struct_1 *v6;  // [bp-0x120]
    unsigned long long v7;  // [bp-0x118]
    unsigned long|unsigned long long|char * v8;  // [bp-0x110]
    char v9;  // [bp-0x108]

    v5 = v42;
    v6 = v39;
    rsp<8> = &stack_base-304;
    v34 = mbslen();
    v40 = v34;
    v7 = v34;
    v36 = ((long long)(56 * v34));
    v39 = ((char)[D] amd64g_calculate_condition(0x0<64>, 0x30<64>, 0x38<64>, rbx<8>, cc_ndep<8>));
    if (!(((char)[D] amd64g_calculate_condition(0x8<64>, 0x14<64>, rax<8>, 0x0<64>, cc_ndep<8>))))
    {
        v39 = ((long long)v39);
        if (v39 == 0)
        {
            if (v7 * 7 << 3 <= 4000)
            {
                if (&stack_base-296 != &stack_base-296 - ((v7 * 7 << 3) + 54 & 0xfffffffefffff000))
                {
                    do
                    {
                        rsp<8> = rsp<8> - 0x1000;
                        v4 = v4;
                    }
                    while (rsp<8> != &stack_base-296 - ((v7 * 7 << 3) + 54 & 0xfffffffefffff000));
                }
                v36 = ((long long)(((int)(v7 * 56 + 54 & 0xfffffffefffffff0)) & 4095));
                rsp<8> = rsp<8> - v36;
                if (v36 != 0)
                {
                    v30 = v30;
                }
                v44 = (rsp<8> + 15 & 0xfffffffefffffff0) + 31 & 0xfffffffeffffffe0;
                if (((rsp<8> + 15 & 0xfffffffefffffff0) + 31 & 0xfffffffeffffffe0) == 0)
                {
                    v33 = 0;
                    return v33;
                }
            }
            rsp<8> = &stack_base-304;
            v44 = (long long)mmalloca();
            if (v44 == 0)
            {
                v33 = 0;
                return v33;
            }
            if (v7 * 7 << 3 <= 4000 && ((rsp<8> + 15 & 0xfffffffefffffff0) + 31 & 0xfffffffeffffffe0) != 0 || v7 * 7 << 3 > 4000 && v44 != 0)
            {
                v32 = v7;
                v46 = v44;
                v12 = v41;
                v9 = 0;
                v11 = 0;
                v10 = 0;
                v40 = v32 * 48 + v44;
                while (true)
                {
                    if (v9 == 0)
                    {
                        v39 = v12;
                        if (...)
                        {
                            v13 = 1;
                            v32 = ((int)*(v39));
                            v14 = 1;
                            v15 = v32;
                            v43 = ((int)v15);
                            v11 = 1;
                        }
                        else
                        {
                            rsp<8> = rsp<8> - 8;
                            v4 = &g_4142ef;
                            v32 = mbsinit(((int)&v10));
                            if (v32 != 0)
                            {
                                v9 = 1;
                            }
                            else
                            {
                                rsp<8> = rsp<8> - 8;
                                *(rsp<8> + None) = &g_41478d;
                                __assert_fail(); /* do not return */
                            }
                        }
                    }
                    if (...)
                    {
                        rsp<8> = rsp<8> - 8;
                        v3 = &g_413fc2;
                        __ctype_get_mb_cur_max();
                        rsp<8> = rsp<8> - 8;
                        v2 = &g_413fd4;
                        strnlen1();
                        rsp<8> = rsp<8> - 8;
                        v1 = &g_413fe9;
                        v13 = (long long)rpl_mbrtowc();
                    }
                    if (...)
                    {
                        if (v13 == 18446744069414584319)
                        {
                            v13 = 1;
                            v38 = 0;
                            v14 = 0;
                            v11 = 1;
                        }
                        else if (v13 != 18446744069414584318)
                        {
                            if (*(v32) == 0 && v13 == 0 && v15 != 0)
                            {
                                rsp<8> = rsp<8> - 8;
                                *(rsp<8> + None) = &g_4147b1;
                                mbuiter_multi_next.part.0(); /* do not return */
                            }
                            if (v13 == 0 && *(v32) != 0)
                            {
                                rsp<8> = rsp<8> - 8;
                                *(rsp<8> + None) = &g_4147ac;
                                __assert_fail(); /* do not return */
                            }
                            if ((v15 == 0 || v13 != 0) && (*(v32) == 0 || v13 != 0))
                            {
                                v14 = 1;
                                rsp<8> = rsp<8> - 8;
                                v0 = &g_414043;
                                v32 = mbsinit(((int)&v10));
                                if (v32 != 0)
                                {
                                    v9 = 0;
                                }
                                v43 = ((int)v15);
                                v11 = 1;
                            }
                        }
                        if (v13 == 18446744069414584318)
                        {
                            rsp<8> = rsp<8> - 8;
                            v0 = &g_41435c;
                            v14 = 0;
                            v13 = strlen(v12);
                            v11 = 1;
                        }
                        if (v13 == 0)
                        {
                            v32 = v12;
                            v13 = 1;
                        }
                    }
                    if (...)
                    {
                        v38 = 1;
                    }
                    if (...)
                    {
                        v48 = 0;
                        v49 = v7;
                        v47 = v44 + 48;
                        *(v40 + 8) = 1;
                        v8 = 2;
                        if (v49 <= 2)
                        {
                            break;
                        }
                        do
                        {
                            v45 = ((long long)v47->field_10);
                            while (true)
                            {
                                v32 = v48 * 48 + v44;
                                if (((long long)v45) != 0 && v32->field_10 != 0)
                                {
                                    v32 = ((int)v32->field_14);
                                }
                                if (((long long)v45) == 0 || v32->field_10 == 0)
                                {
                                    v39 = v47->field_8;
                                    if (v47->field_8 == v32->field_8)
                                    {
                                        v41 = v32->field_0;
                                        v42 = v47->field_0;
                                        rsp<8> = rsp<8> - 8;
                                        *(rsp<8> + None) = &g_4140e1;
                                        v32 = memcmp(v42, v41, v39);
                                    }
                                }
                                if (!(((long long)v45) == 0 && v47->field_8 != v32->field_8 || ((long long)v45) == 0 && v32 != 0 || v32->field_10 == 0 && v47->field_8 != v32->field_8 || v32->field_10 == 0 && v32 != 0 || v47->field_14 != v32->field_14 && ((long long)v45) != 0 && v32->field_10 != 0))
                                {
                                    v48 += 1;
                                    *(v40 + v8 * 8) = v8 - v48;
                                    break;
                                }
                                else if (v48 != 0)
                                {
                                    v48 -= *(v40 + v48 * 8);
                                }
                                else
                                {
                                    *(v40 + v8 * 8) = v8;
                                    break;
                                }
                            }
                            v8 += 1;
                            v47 += 48;
                        }
                        while (v7 != v8);
                    }
                    if (...)
                    {
                        if (v12 != &stack_base-224)
                        {
                            v46->field_0 = v12;
                        }
                        else
                        {
                            v8 = v38;
                            rsp<8> = rsp<8> - 8;
                            v30 = &g_41431d;
                            v46->field_0 = memcpy(v46 + 24, v12, v13);
                        }
                        v46->field_8 = v13;
                        v46->field_10 = v38;
                        if (((long long)v38) != 0)
                        {
                            v46->field_14 = v15;
                        }
                        v45 = v12 + v13;
                        v11 = 0;
                        v46 += 48;
                        v12 = v45;
                    }
                }
                tmp_19 = v6;
                v23 = 0;
                v46 = 0;
                v16 = 0;
                *(tmp_19) = 0;
                tmp_33 = v5;
                v17 = 0;
                v18 = 0;
                v24 = 0;
                v25 = 0;
                v19 = tmp_33;
                v26 = tmp_33;
                v32 = 0;
                while (true)
                {
                    v32 = v46 * 48 + v44;
                    v39 = v32->field_8;
                    if (v32->field_8 == v27)
                    {
                        v42 = v32->field_0;
                        rsp<8> = rsp<8> - 8;
                        *(rsp<8> + None) = &g_41443c;
                        v32 = memcmp(v42, v26, v39);
                    }
                    if (v18 == 0)
                    {
                        if (v46 == 0 || v32->field_8 == v27)
                        {
                            if (v46 == 0 || v32 != 0)
                            {
                                if (v16 == 0)
                                {
                                    v39 = v19;
                                    if (...)
                                    {
                                        v20 = 1;
                                        v32 = ((int)*(v39));
                                        v21 = 1;
                                        v22 = v32;
                                        v18 = 1;
                                    }
                                    else
                                    {
                                        rsp<8> = rsp<8> - 8;
                                        *(rsp<8> + None) = &g_414647;
                                        v32 = mbsinit(((int)&v17));
                                        if (v32 != 0)
                                        {
                                            v16 = 1;
                                            /* goto 4277846; */
                                            rsp<8> = rsp<8> - 8;
                                            *(rsp<8> + None) = &g_41478d;
                                            __assert_fail(); /* do not return */
                                        }
                                    }
                                }
                                if (...)
                                {
                                    rsp<8> = rsp<8> - 8;
                                    *(rsp<8> + None) = &g_41465b;
                                    __ctype_get_mb_cur_max();
                                    v8 = v19;
                                    rsp<8> = rsp<8> - 8;
                                    *(rsp<8> + None) = &g_414674;
                                    strnlen1();
                                    rsp<8> = rsp<8> - 8;
                                    *(rsp<8> + None) = &g_414690;
                                    v20 = (long long)rpl_mbrtowc();
                                    if (v20 == 18446744069414584319)
                                    {
                                        v20 = 1;
                                        v21 = 0;
                                        /* goto 4276755; */
                                    }
                                    else if (v20 != 18446744069414584318)
                                    {
                                        if (v20 == 0)
                                        {
                                            if (*(v32) != 0)
                                            {
                                                rsp<8> = rsp<8> - 8;
                                                *(rsp<8> + None) = &g_4147ac;
                                                __assert_fail(); /* do not return */
                                            }
                                            else if (v22 != 0)
                                            {
                                                rsp<8> = rsp<8> - 8;
                                                *(rsp<8> + None) = &g_4147b1;
                                                mbuiter_multi_next.part.0(); /* do not return */
                                            }
                                        }
                                    }
                                    if (v20 == 18446744069414584318)
                                    {
                                        rsp<8> = rsp<8> - 8;
                                        *(rsp<8> + None) = &g_41475b;
                                        v21 = 0;
                                        v20 = strlen(v19);
                                        /* goto 4276755; */
                                    }
                                    if (v20 == 0)
                                    {
                                        v32 = v19;
                                        v20 = 1;
                                    }
                                }
                            }
                        }
                    }
                    if (...)
                    {
                        v21 = 1;
                        rsp<8> = rsp<8> - 8;
                        *(rsp<8> + None) = &g_4146e8;
                        v32 = mbsinit(((int)&v17));
                        if (v32 != 0)
                        {
                            v16 = 0;
                        }
                        v18 = 1;
                    }
                    if (...)
                    {
                        v19 += v20;
                        v26 += v27;
                        v18 = 0;
                        v25 = 0;
                    }
                    if (...)
                    {
                        v39 = v26;
                        if (...)
                        {
                            v27 = 1;
                            v32 = ((int)*(v39));
                            v28 = 1;
                            v29 = v32;
                            v25 = 1;
                        }
                        else
                        {
                            rsp<8> = rsp<8> - 8;
                            *(rsp<8> + None) = &g_41438c;
                            v32 = mbsinit(((int)&v24));
                            if (v32 != 0)
                            {
                                v23 = 1;
                                /* goto 4277144; */
                                rsp<8> = rsp<8> - 8;
                                *(rsp<8> + None) = &g_41478d;
                                __assert_fail(); /* do not return */
                            }
                        }
                    }
                    if (...)
                    {
                        rsp<8> = rsp<8> - 8;
                        *(rsp<8> + None) = &g_41439d;
                        __ctype_get_mb_cur_max();
                        v8 = v26;
                        rsp<8> = rsp<8> - 8;
                        *(rsp<8> + None) = &g_4143b3;
                        strnlen1();
                        rsp<8> = rsp<8> - 8;
                        *(rsp<8> + None) = &g_4143cc;
                        v27 = (long long)rpl_mbrtowc();
                        if (v27 == 0)
                        {
                            v32 = v26;
                            v27 = 1;
                        }
                        if (v27 == 18446744069414584319)
                        {
                            v27 = 1;
                            v28 = 0;
                            v25 = 1;
                            /* goto 4276602; */
                        }
                        else if (v27 != 18446744069414584318)
                        {
                            if (v27 == 0)
                            {
                                if (*(v32) != 0)
                                {
                                    rsp<8> = rsp<8> - 8;
                                    *(rsp<8> + None) = &g_4147ac;
                                    __assert_fail(); /* do not return */
                                }
                                else if (v29 != 0)
                                {
                                    rsp<8> = rsp<8> - 8;
                                    *(rsp<8> + None) = &g_4147b1;
                                    mbuiter_multi_next.part.0(); /* do not return */
                                }
                            }
                        }
                        if (v27 == 18446744069414584318)
                        {
                            rsp<8> = rsp<8> - 8;
                            *(rsp<8> + None) = &g_414709;
                            v28 = 0;
                            v27 = strlen(v26);
                            v25 = 1;
                            /* goto 4276602; */
                        }
                    }
                    if (...)
                    {
                        v28 = 1;
                        rsp<8> = rsp<8> - 8;
                        *(rsp<8> + None) = &g_414415;
                        v32 = mbsinit(((int)&v24));
                        if (v32 != 0)
                        {
                            v23 = 0;
                        }
                        v25 = 1;
                    }
                    if (...)
                    {
                        if (v29 != 0)
                        {
                            v32 = v46 * 48 + v44;
                        }
                        else
                        {
                            rsp<8> = rsp<8> - 8;
                            *(rsp<8> + None) = &g_4142d6;
                            freea();
                            v33 = 1;
                            return v33;
                        }
                    }
                    if (...)
                    {
                        v32 = v27;
                        v25 = 0;
                        v46 += 1;
                        v26 += v32;
                        if (v7 == v46)
                        {
                            v6->field_0 = v19;
                            rsp<8> = rsp<8> - 8;
                            *(rsp<8> + None) = &g_4142d6;
                            freea();
                            v33 = 1;
                            break;
                        }
                    }
                    if (...)
                    {
                        v48 = *(v40 + v46 * 8);
                        v8 = v46 - *(v40 + v46 * 8);
                        v32 = ((long long)v25);
                        while (true)
                        {
                            if (v16 == 0)
                            {
                                v39 = v19;
                                if (...)
                                {
                                    v20 = 1;
                                    v32 = ((int)*(v39));
                                    v21 = 1;
                                    v22 = v32;
                                    v18 = 1;
                                }
                                else
                                {
                                    rsp<8> = rsp<8> - 8;
                                    *(rsp<8> + None) = &g_41452f;
                                    v32 = mbsinit(((int)&v17));
                                    if (v32 != 0)
                                    {
                                        v16 = 1;
                                        /* goto 4277566; */
                                        rsp<8> = rsp<8> - 8;
                                        *(rsp<8> + None) = &g_41478d;
                                        __assert_fail(); /* do not return */
                                    }
                                }
                            }
                            if (...)
                            {
                                rsp<8> = rsp<8> - 8;
                                *(rsp<8> + None) = &g_414543;
                                __ctype_get_mb_cur_max();
                                rsp<8> = rsp<8> - 8;
                                *(rsp<8> + None) = &g_414555;
                                strnlen1();
                                rsp<8> = rsp<8> - 8;
                                *(rsp<8> + None) = &g_41456a;
                                v20 = (long long)rpl_mbrtowc();
                            }
                            if (...)
                            {
                                if (v20 == 18446744069414584319)
                                {
                                    v20 = 1;
                                    v21 = 0;
                                    /* goto 4277373; */
                                }
                                else if (v20 != 18446744069414584318)
                                {
                                    if (v20 == 0)
                                    {
                                        if (*(v32) != 0)
                                        {
                                            rsp<8> = rsp<8> - 8;
                                            *(rsp<8> + None) = &g_4147ac;
                                            __assert_fail(); /* do not return */
                                        }
                                        else if (v22 != 0)
                                        {
                                            rsp<8> = rsp<8> - 8;
                                            *(rsp<8> + None) = &g_4147b1;
                                            mbuiter_multi_next.part.0(); /* do not return */
                                        }
                                    }
                                    if ((v22 == 0 || v20 != 0) && (*(v32) == 0 || v20 != 0))
                                    {
                                        v21 = 1;
                                        rsp<8> = rsp<8> - 8;
                                        *(rsp<8> + None) = &g_4145be;
                                        v32 = mbsinit(((int)&v17));
                                        if (v32 != 0)
                                        {
                                            v16 = 0;
                                        }
                                        v18 = 1;
                                    }
                                }
                                if (v20 == 18446744069414584318)
                                {
                                    rsp<8> = rsp<8> - 8;
                                    *(rsp<8> + None) = &g_41460c;
                                    v21 = 0;
                                    v20 = strlen(v19);
                                    /* goto 4277373; */
                                }
                                if (v20 == 0)
                                {
                                    v32 = v19;
                                    v20 = 1;
                                }
                            }
                            if (...)
                            {
                                v32 = v20;
                                v18 = 0;
                                v19 += v32;
                                v48 -= 1;
                            }
                        }
                        if (True)
                        {
                            v32 = ((long long)v25);
                            v46 = v8;
                        }
                        v32 = ((long long)v25);
                        v46 = v8;
                    }
                }
                return v33;
            }
        }
        v33 = 0;
        return v33;
    }
    v33 = 0;
    return v33;
}
