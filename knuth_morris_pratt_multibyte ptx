typedef struct struct_0 {
    unsigned long long field_0;
} struct_0;

typedef struct struct_2 {
    unsigned long long field_0;
    unsigned long long field_8;
    char field_10;
    char padding_11[3];
    unsigned int field_14;
} struct_2;

typedef struct struct_4 {
    char padding_0[20];
    unsigned int field_14;
} struct_4;

typedef struct struct_3 {
    unsigned long long field_0;
    unsigned long long field_8;
    char padding_10[4];
    unsigned int field_14;
} struct_3;

extern char g_41a942;
extern char g_41a954;
extern char g_41a969;
extern char g_41a9c3;
extern char g_41aa61;
extern <missing-type> g_41ac56;
extern char g_41ac6f;
extern char g_41ac9d;
extern char g_41acdc;
extern <missing-type> g_41ad0c;
extern <missing-type> g_41ad1d;
extern <missing-type> g_41ad33;
extern <missing-type> g_41ad4c;
extern <missing-type> g_41ad95;
extern <missing-type> g_41adbc;
extern <missing-type> g_41aeaf;
extern <missing-type> g_41aec3;
extern <missing-type> g_41aed5;
extern <missing-type> g_41aeea;
extern <missing-type> g_41af3e;
extern <missing-type> g_41af8c;
extern <missing-type> g_41afc7;
extern <missing-type> g_41afdb;
extern <missing-type> g_41aff4;
extern <missing-type> g_41b010;
extern <missing-type> g_41b068;
extern <missing-type> g_41b089;
extern <missing-type> g_41b0db;
extern <missing-type> g_41b10d;
extern <missing-type> g_41b12c;
extern <missing-type> g_41b131;
extern unsigned int is_basic_table[4];

int knuth_morris_pratt_multibyte()
{
    BOT tmp_19;  // tmp #19
    BOT tmp_33;  // tmp #33
    unsigned long v0;  // [bp-0x1138]
    unsigned long v1;  // [bp-0x138]
    unsigned long|unsigned long long v10;  // [bp-0xf0]
    char v11;  // [bp-0xe8]
    unsigned int v12;  // [bp-0xe4]
    char v13;  // [bp-0xc8]
    unsigned long long v14;  // [bp-0xc4]
    char v15;  // [bp-0xbc]
    unsigned long|char * v16;  // [bp-0xb8]
    unsigned long|unsigned long long v17;  // [bp-0xb0]
    char v18;  // [bp-0xa8]
    unsigned int v19;  // [bp-0xa4]
    char *v2;  // [bp-0x128]
    char v20;  // [bp-0x88]
    unsigned long long v21;  // [bp-0x84]
    char v22;  // [bp-0x7c]
    unsigned long|char * v23;  // [bp-0x78]
    unsigned long|unsigned long long v24;  // [bp-0x70]
    char v25;  // [bp-0x68]
    unsigned int v26;  // [bp-0x64]
    unsigned long v27;  // [bp-0x28]
    unsigned long v28;  // [bp-0x20]
    unsigned long v29;  // [bp-0x18]
    struct_0 *v3;  // [bp-0x120]
    unsigned long v30;  // [bp-0x10]
    unsigned long v31;  // [bp-0x8]
    struct_2 *|unsigned int|struct_3 *|struct_4 *|unsigned long long|char * v33;  // rax
    unsigned long long v34;  // rax
    unsigned long|unsigned long long v36;  // rax
    unsigned long long v37;  // rax
    unsigned long long v39;  // rcx
    unsigned long long v4;  // [bp-0x118]
    char|unsigned long|unsigned long long|char * v40;  // rdx
    unsigned long long v41;  // rbx
    void * v42;  // rsi
    void * v43;  // rdi
    unsigned int v44;  // r8d
    unsigned long long v45;  // r12
    unsigned long long|char * v46;  // r13
    unsigned long long|struct_2 * v47;  // r14
    struct_2 * v48;  // r14
    unsigned long long v49;  // r15
    unsigned long|unsigned long long|char * v5;  // [bp-0x110]
    unsigned long long v50;  // cc_dep1
    char v6;  // [bp-0x108]
    unsigned long long v7;  // [bp-0x104]
    char v8;  // [bp-0xfc]
    unsigned long|char * v9;  // [bp-0xf8]

    v2 = v43;
    v3 = v40;
    rsp<8> = &stack_base-304;
    v34 = mbslen();
    v41 = v34;
    v4 = v34;
    v36 = ((long long)(56 * v34));
    v40 = ((char)[D] amd64g_calculate_condition(0x0<64>, 0x30<64>, 0x38<64>, rbx<8>, cc_ndep<8>));
    if (!(((char)[D] amd64g_calculate_condition(0x8<64>, 0x14<64>, rax<8>, 0x0<64>, cc_ndep<8>))))
    {
        v40 = ((long long)v40);
        if (v40 == 0)
        {
            if (v4 * 7 << 3 <= 4000)
            {
                if (&stack_base-296 != &stack_base-296 - ((v4 * 7 << 3) + 54 & 0xfffffffefffff000))
                {
                    do
                    {
                        rsp<8> = rsp<8> - 0x1000;
                        v1 = v0;
                    }
                    while (rsp<8> != &stack_base-296 - ((v4 * 7 << 3) + 54 & 0xfffffffefffff000));
                }
                v36 = ((long long)(((int)(v4 * 56 + 54 & 0xfffffffefffffff0)) & 4095));
                rsp<8> = rsp<8> - v36;
                if (v36 != 0)
                {
                    v31 = v31;
                }
                v45 = (rsp<8> + 15 & 0xfffffffefffffff0) + 31 & 0xfffffffeffffffe0;
                if (((rsp<8> + 15 & 0xfffffffefffffff0) + 31 & 0xfffffffeffffffe0) == 0)
                {
                    v37 = 0;
                    return v37;
                }
            }
            rsp<8> = &stack_base-304;
            v45 = (long long)mmalloca();
            if (v45 == 0)
            {
                v37 = 0;
                return v37;
            }
            if (v4 * 7 << 3 <= 4000 && ((rsp<8> + 15 & 0xfffffffefffffff0) + 31 & 0xfffffffeffffffe0) != 0 || v45 != 0 && v4 * 7 << 3 > 4000)
            {
                v33 = v4;
                v47 = v45;
                v9 = v42;
                v6 = 0;
                v8 = 0;
                v7 = 0;
                v41 = v33 * 48 + v45;
                while (true)
                {
                    if (v6 == 0)
                    {
                        v40 = v9;
                        if (...)
                        {
                            v10 = 1;
                            v33 = ((int)*(v40));
                            v11 = 1;
                            v12 = v33;
                            v44 = ((int)v12);
                            v8 = 1;
                        }
                        else
                        {
                            rsp<8> = rsp<8> - 8;
                            v31 = &g_41ac6f;
                            v33 = mbsinit(((int)&v7));
                            if (v33 != 0)
                            {
                                v6 = 1;
                            }
                            else
                            {
                                rsp<8> = rsp<8> - 8;
                                *(rsp<8> + None) = &g_41b10d;
                                __assert_fail(); /* do not return */
                            }
                        }
                    }
                    if (...)
                    {
                        rsp<8> = rsp<8> - 8;
                        v31 = &g_41a942;
                        __ctype_get_mb_cur_max();
                        rsp<8> = rsp<8> - 8;
                        v30 = &g_41a954;
                        strnlen1();
                        rsp<8> = rsp<8> - 8;
                        v29 = &g_41a969;
                        v10 = (long long)rpl_mbrtowc();
                    }
                    if (...)
                    {
                        if (v10 == 18446744069414584319)
                        {
                            v10 = 1;
                            v39 = 0;
                            v11 = 0;
                            v8 = 1;
                        }
                        else if (v10 != 18446744069414584318)
                        {
                            if (v10 == 0)
                            {
                                if (*(v33) != 0)
                                {
                                    rsp<8> = rsp<8> - 8;
                                    *(rsp<8> + None) = &g_41b12c;
                                    __assert_fail(); /* do not return */
                                }
                                else if (v12 != 0)
                                {
                                    rsp<8> = rsp<8> - 8;
                                    *(rsp<8> + None) = &g_41b131;
                                    mbuiter_multi_next.part.0(); /* do not return */
                                }
                            }
                            if ((*(v33) == 0 || v10 != 0) && (v12 == 0 || v10 != 0))
                            {
                                v11 = 1;
                                rsp<8> = rsp<8> - 8;
                                v28 = &g_41a9c3;
                                v33 = mbsinit(((int)&v7));
                                if (v33 != 0)
                                {
                                    v6 = 0;
                                }
                                v44 = ((int)v12);
                                v8 = 1;
                            }
                        }
                        if (v10 == 18446744069414584318)
                        {
                            rsp<8> = rsp<8> - 8;
                            v28 = &g_41acdc;
                            v11 = 0;
                            v10 = strlen(v9);
                            v8 = 1;
                        }
                        if (v10 == 0)
                        {
                            v33 = v9;
                            v10 = 1;
                        }
                    }
                    if (...)
                    {
                        v39 = 1;
                    }
                    if (...)
                    {
                        v49 = 0;
                        v50 = v4;
                        v48 = v45 + 48;
                        *(v41 + 8) = 1;
                        v5 = 2;
                        if (v50 <= 2)
                        {
                            break;
                        }
                        do
                        {
                            v46 = ((long long)v48->field_10);
                            while (true)
                            {
                                v33 = v49 * 48 + v45;
                                if (((long long)v46) != 0 && v33->field_10 != 0)
                                {
                                    v33 = ((int)v33->field_14);
                                }
                                if (((long long)v46) == 0 || v33->field_10 == 0)
                                {
                                    v40 = v48->field_8;
                                    if (v48->field_8 == v33->field_8)
                                    {
                                        v42 = v33->field_0;
                                        v43 = v48->field_0;
                                        rsp<8> = rsp<8> - 8;
                                        v1 = &g_41aa61;
                                        v33 = memcmp(v43, v42, v40);
                                    }
                                }
                                if (!(((long long)v46) == 0 && v33 != 0 || ((long long)v46) == 0 && v48->field_8 != v33->field_8 || v33->field_10 == 0 && v33 != 0 || v33->field_10 == 0 && v48->field_8 != v33->field_8 || ((long long)v46) != 0 && v48->field_14 != v33->field_14 && v33->field_10 != 0))
                                {
                                    v49 += 1;
                                    *(v41 + v5 * 8) = v5 - v49;
                                    break;
                                }
                                else if (v49 != 0)
                                {
                                    v49 -= *(v41 + v49 * 8);
                                }
                                else
                                {
                                    *(v41 + v5 * 8) = v5;
                                    break;
                                }
                            }
                            v5 += 1;
                            v48 += 48;
                        }
                        while (v4 != v5);
                    }
                    if (...)
                    {
                        if (v9 != &stack_base-224)
                        {
                            v47->field_0 = v9;
                        }
                        else
                        {
                            v5 = v39;
                            rsp<8> = rsp<8> - 8;
                            v27 = &g_41ac9d;
                            v47->field_0 = memcpy(v47 + 24, v9, v10);
                        }
                        v47->field_8 = v10;
                        v47->field_10 = v39;
                        if (((long long)v39) != 0)
                        {
                            v47->field_14 = v12;
                        }
                        v46 = v9 + v10;
                        v8 = 0;
                        v47 += 48;
                        v9 = v46;
                    }
                }
                tmp_19 = v3;
                v20 = 0;
                v47 = 0;
                v13 = 0;
                *(tmp_19) = 0;
                tmp_33 = v2;
                v14 = 0;
                v15 = 0;
                v21 = 0;
                v22 = 0;
                v16 = tmp_33;
                v23 = tmp_33;
                v33 = 0;
                while (true)
                {
                    v33 = v47 * 48 + v45;
                    v40 = v33->field_8;
                    if (v33->field_8 == v24)
                    {
                        v43 = v33->field_0;
                        rsp<8> = rsp<8> - 8;
                        *(rsp<8> + None) = &g_41adbc;
                        v33 = memcmp(v43, v23, v40);
                    }
                    if (v15 == 0)
                    {
                        if (v47 == 0 || v33->field_8 == v24)
                        {
                            if (v47 == 0 || v33 != 0)
                            {
                                if (v13 == 0)
                                {
                                    v40 = v16;
                                    if (...)
                                    {
                                        v17 = 1;
                                        v33 = ((int)*(v40));
                                        v18 = 1;
                                        v19 = v33;
                                        v15 = 1;
                                    }
                                    else
                                    {
                                        rsp<8> = rsp<8> - 8;
                                        *(rsp<8> + None) = &g_41afc7;
                                        v33 = mbsinit(((int)&v14));
                                        if (v33 != 0)
                                        {
                                            v13 = 1;
                                            /* goto 4304854; */
                                            rsp<8> = rsp<8> - 8;
                                            *(rsp<8> + None) = &g_41b10d;
                                            __assert_fail(); /* do not return */
                                        }
                                    }
                                }
                                if (...)
                                {
                                    rsp<8> = rsp<8> - 8;
                                    *(rsp<8> + None) = &g_41afdb;
                                    __ctype_get_mb_cur_max();
                                    v5 = v16;
                                    rsp<8> = rsp<8> - 8;
                                    *(rsp<8> + None) = &g_41aff4;
                                    strnlen1();
                                    rsp<8> = rsp<8> - 8;
                                    *(rsp<8> + None) = &g_41b010;
                                    v17 = (long long)rpl_mbrtowc();
                                    if (v17 == 18446744069414584319)
                                    {
                                        v17 = 1;
                                        v18 = 0;
                                        /* goto 4303763; */
                                    }
                                    else if (v17 != 18446744069414584318)
                                    {
                                        if (v17 == 0)
                                        {
                                            if (*(v33) != 0)
                                            {
                                                rsp<8> = rsp<8> - 8;
                                                *(rsp<8> + None) = &g_41b12c;
                                                __assert_fail(); /* do not return */
                                            }
                                            else if (v19 != 0)
                                            {
                                                rsp<8> = rsp<8> - 8;
                                                *(rsp<8> + None) = &g_41b131;
                                                mbuiter_multi_next.part.0(); /* do not return */
                                            }
                                        }
                                    }
                                    if (v17 == 18446744069414584318)
                                    {
                                        rsp<8> = rsp<8> - 8;
                                        *(rsp<8> + None) = &g_41b0db;
                                        v18 = 0;
                                        v17 = strlen(v16);
                                        /* goto 4303763; */
                                    }
                                    if (v17 == 0)
                                    {
                                        v33 = v16;
                                        v17 = 1;
                                    }
                                }
                            }
                        }
                    }
                    if (...)
                    {
                        v18 = 1;
                        rsp<8> = rsp<8> - 8;
                        *(rsp<8> + None) = &g_41b068;
                        v33 = mbsinit(((int)&v14));
                        if (v33 != 0)
                        {
                            v13 = 0;
                        }
                        v15 = 1;
                    }
                    if (...)
                    {
                        v16 += v17;
                        v23 += v24;
                        v15 = 0;
                        v22 = 0;
                    }
                    if (...)
                    {
                        v40 = v23;
                        if (...)
                        {
                            v24 = 1;
                            v33 = ((int)*(v40));
                            v25 = 1;
                            v26 = v33;
                            v22 = 1;
                        }
                        else
                        {
                            rsp<8> = rsp<8> - 8;
                            *(rsp<8> + None) = &g_41ad0c;
                            v33 = mbsinit(((int)&v21));
                            if (v33 != 0)
                            {
                                v20 = 1;
                                /* goto 4304152; */
                                rsp<8> = rsp<8> - 8;
                                *(rsp<8> + None) = &g_41b10d;
                                __assert_fail(); /* do not return */
                            }
                        }
                    }
                    if (...)
                    {
                        rsp<8> = rsp<8> - 8;
                        *(rsp<8> + None) = &g_41ad1d;
                        __ctype_get_mb_cur_max();
                        v5 = v23;
                        rsp<8> = rsp<8> - 8;
                        *(rsp<8> + None) = &g_41ad33;
                        strnlen1();
                        rsp<8> = rsp<8> - 8;
                        *(rsp<8> + None) = &g_41ad4c;
                        v24 = (long long)rpl_mbrtowc();
                        if (v24 == 0)
                        {
                            v33 = v23;
                            v24 = 1;
                        }
                        if (v24 == 18446744069414584319)
                        {
                            v24 = 1;
                            v25 = 0;
                            v22 = 1;
                            /* goto 4303610; */
                        }
                        else if (v24 != 18446744069414584318)
                        {
                            if (v24 == 0)
                            {
                                if (*(v33) != 0)
                                {
                                    rsp<8> = rsp<8> - 8;
                                    *(rsp<8> + None) = &g_41b12c;
                                    __assert_fail(); /* do not return */
                                }
                                else if (v26 != 0)
                                {
                                    rsp<8> = rsp<8> - 8;
                                    *(rsp<8> + None) = &g_41b131;
                                    mbuiter_multi_next.part.0(); /* do not return */
                                }
                            }
                        }
                        if (v24 == 18446744069414584318)
                        {
                            rsp<8> = rsp<8> - 8;
                            *(rsp<8> + None) = &g_41b089;
                            v25 = 0;
                            v24 = strlen(v23);
                            v22 = 1;
                            /* goto 4303610; */
                        }
                    }
                    if (...)
                    {
                        v25 = 1;
                        rsp<8> = rsp<8> - 8;
                        *(rsp<8> + None) = &g_41ad95;
                        v33 = mbsinit(((int)&v21));
                        if (v33 != 0)
                        {
                            v20 = 0;
                        }
                        v22 = 1;
                    }
                    if (...)
                    {
                        if (v26 != 0)
                        {
                            v33 = v47 * 48 + v45;
                        }
                        else
                        {
                            rsp<8> = rsp<8> - 8;
                            *(rsp<8> + None) = &g_41ac56;
                            freea();
                            v37 = 1;
                            return v37;
                        }
                    }
                    if (...)
                    {
                        v33 = v24;
                        v22 = 0;
                        v47 += 1;
                        v23 += v33;
                        if (v4 == v47)
                        {
                            v3->field_0 = v16;
                            rsp<8> = rsp<8> - 8;
                            *(rsp<8> + None) = &g_41ac56;
                            freea();
                            v37 = 1;
                            break;
                        }
                    }
                    if (...)
                    {
                        v49 = *(v41 + v47 * 8);
                        v5 = v47 - *(v41 + v47 * 8);
                        v33 = ((long long)v22);
                        while (true)
                        {
                            if (v13 == 0)
                            {
                                v40 = v16;
                                if (...)
                                {
                                    v17 = 1;
                                    v33 = ((int)*(v40));
                                    v18 = 1;
                                    v19 = v33;
                                    v15 = 1;
                                }
                                else
                                {
                                    rsp<8> = rsp<8> - 8;
                                    *(rsp<8> + None) = &g_41aeaf;
                                    v33 = mbsinit(((int)&v14));
                                    if (v33 != 0)
                                    {
                                        v13 = 1;
                                        /* goto 4304574; */
                                        rsp<8> = rsp<8> - 8;
                                        *(rsp<8> + None) = &g_41b10d;
                                        __assert_fail(); /* do not return */
                                    }
                                }
                            }
                            if (...)
                            {
                                rsp<8> = rsp<8> - 8;
                                *(rsp<8> + None) = &g_41aec3;
                                __ctype_get_mb_cur_max();
                                rsp<8> = rsp<8> - 8;
                                *(rsp<8> + None) = &g_41aed5;
                                strnlen1();
                                rsp<8> = rsp<8> - 8;
                                *(rsp<8> + None) = &g_41aeea;
                                v17 = (long long)rpl_mbrtowc();
                            }
                            if (...)
                            {
                                if (v17 == 18446744069414584319)
                                {
                                    v17 = 1;
                                    v18 = 0;
                                    /* goto 4304381; */
                                }
                                else if (v17 != 18446744069414584318)
                                {
                                    if (v17 == 0)
                                    {
                                        if (*(v33) != 0)
                                        {
                                            rsp<8> = rsp<8> - 8;
                                            *(rsp<8> + None) = &g_41b12c;
                                            __assert_fail(); /* do not return */
                                        }
                                        else if (v19 != 0)
                                        {
                                            rsp<8> = rsp<8> - 8;
                                            *(rsp<8> + None) = &g_41b131;
                                            mbuiter_multi_next.part.0(); /* do not return */
                                        }
                                    }
                                    if ((v19 == 0 || v17 != 0) && (*(v33) == 0 || v17 != 0))
                                    {
                                        v18 = 1;
                                        rsp<8> = rsp<8> - 8;
                                        *(rsp<8> + None) = &g_41af3e;
                                        v33 = mbsinit(((int)&v14));
                                        if (v33 != 0)
                                        {
                                            v13 = 0;
                                        }
                                        v15 = 1;
                                    }
                                }
                                if (v17 == 18446744069414584318)
                                {
                                    rsp<8> = rsp<8> - 8;
                                    *(rsp<8> + None) = &g_41af8c;
                                    v18 = 0;
                                    v17 = strlen(v16);
                                    /* goto 4304381; */
                                }
                                if (v17 == 0)
                                {
                                    v33 = v16;
                                    v17 = 1;
                                }
                            }
                            if (...)
                            {
                                v33 = v17;
                                v15 = 0;
                                v16 += v33;
                                v49 -= 1;
                            }
                        }
                        if (True)
                        {
                            v33 = ((long long)v22);
                            v47 = v5;
                        }
                        v33 = ((long long)v22);
                        v47 = v5;
                    }
                }
                return v37;
            }
        }
        v37 = 0;
        return v37;
    }
    v37 = 0;
    return v37;
}
