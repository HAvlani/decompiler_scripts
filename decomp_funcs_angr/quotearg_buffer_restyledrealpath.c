typedef struct struct_5 {
    unsigned int field_0;
} struct_5;

extern char g_4097c9;
extern unsigned int g_4097cb;
extern struct_5 g_409a48;

int quotearg_buffer_restyled()
{
    BOT tmp_51;  // tmp #51
    BOT tmp_63;  // tmp #63
    BOT tmp_73;  // tmp #73
    BOT tmp_3;  // tmp #3
    BOT tmp_17;  // tmp #17
    BOT tmp_6;  // tmp #6
    BOT tmp_26;  // tmp #26
    BOT tmp_29;  // tmp #29
    BOT tmp_9;  // tmp #9
    struct_5 *|unsigned long long v0;  // [bp-0x108]
    unsigned long long v1;  // [bp-0x100]
    unsigned long|unsigned long long v10;  // [bp-0xa8]
    unsigned long|unsigned int v11;  // [bp-0xa0]
    unsigned long long v12;  // [bp-0x98]
    unsigned long long v13;  // [bp-0x90]
    char v14;  // [bp-0x85]
    unsigned int v15;  // [bp-0x84]
    unsigned long v16;  // [bp-0x80]
    unsigned long long v17;  // [bp-0x78]
    unsigned long|unsigned long long v18;  // [bp-0x70]
    unsigned int v19;  // [bp-0x68]
    unsigned long long v2;  // [bp-0xf8]
    char v20;  // [bp-0x64]
    unsigned long long v21;  // [bp-0x63]
    char v22;  // [bp-0x62]
    unsigned long long v23;  // [bp-0x61]
    unsigned long long v24;  // [bp-0x60]
    char v25;  // [bp-0x4c]
    unsigned long long v26;  // [bp-0x48]
    unsigned long v27;  // [bp+0x8]
    unsigned long long v28;  // [bp+0x10]
    unsigned long v29;  // [bp+0x18]
    unsigned long|unsigned long long|unsigned int|char v3;  // [bp-0xe0]
    unsigned long long|unsigned long|unsigned int|unsigned short|char v30;  // al
    unsigned long long v31;  // rax
    unsigned long long v32;  // rcx
    char *|unsigned long long|unsigned long|unsigned int|struct_5 *|char v33;  // rdx
    unsigned long long v34;  // rdx
    unsigned long long v35;  // rbx
    unsigned long long|char [2] v36;  // rbp
    char *|unsigned long long|unsigned int v37;  // rsi
    unsigned long long v38;  // rdi
    unsigned long|unsigned long long|unsigned int v39;  // r8
    unsigned long|unsigned long long|unsigned int|char v4;  // [bp-0xd8]
    unsigned long|unsigned long long v40;  // r9
    unsigned long|unsigned long long|unsigned int v41;  // r10d
    unsigned long long v42;  // r11
    unsigned long long v43;  // r12
    unsigned long long|char v44;  // r13
    unsigned long long v45;  // r14
    unsigned long long v46;  // r15
    unsigned long long v47;  // cc_dep1
    unsigned long long v5;  // [bp-0xd0]
    unsigned long long v6;  // [bp-0xc8]
    struct_5 *v7;  // [bp-0xc0]
    unsigned long|unsigned long long|char v8;  // [bp-0xb8]
    unsigned long|unsigned long long|unsigned int v9;  // [bp-0xb0]

    v46 = v38;
    v45 = v37;
    tmp_51 = v27;
    v5 = v33;
    v4 = v32;
    v7 = tmp_51;
    tmp_63 = v28;
    v3 = v39;
    v18 = tmp_63;
    tmp_73 = v29;
    v15 = ((int)v40);
    v17 = tmp_73;
    v30 = __ctype_get_mb_cur_max();
    v41 = ((long long)((int)v3));
    v16 = v30;
    v14 = ((char)(((int)(((int)v40) & 2)) != 0));
    switch (((int)v41))
    {
    case 0:
        v3 = 1;
        v20 = 0;
        v13 = 0;
        v14 = 0;
        v4 = 0;
        v6 = 0;
        v12 = 0;
        /* goto 4216080; */
    case 1:
        v3 = 1;
        v20 = 0;
        v13 = 0;
        v14 = 1;
        v4 = 0;
        /* goto 4216783; */
    case 2:
        if ((((char)((int)v40)) & 2) == 0)
        {
            v4 = 0;
            if (v37 == 0)
            {
                v13 = 0;
                v44 = 0;
                v3 = 1;
                v20 = 0;
                /* goto 4216953; */
            }
            else
            {
                v13 = v37;
                v33 = 0;
                v30 = 0;
                v3 = 1;
                /* goto 4218390; */
            }
        }
        else
        {
            v3 = 1;
            v20 = 0;
            v13 = 0;
            v14 = 1;
            v4 = 0;
            v6 = 1;
            v12 = &g_4097c9;
            /* goto 4216080; */
        }
    case 3:
        v3 = 1;
        v20 = 0;
        v13 = 0;
        v14 = 1;
        v4 = 1;
        v41 = 2;
        v6 = 1;
        v12 = &g_4097c9;
        /* goto 4216080; */
    case 4:
        if ((((char)((int)v40)) & 2) == 0)
        {
            v4 = 1;
        }
    case 5:
        if ((((char)((int)v40)) & 2) == 0)
        {
            if (v37 != 0)
            {
                *(v38) = 34;
                v3 = 1;
                v20 = 0;
                v13 = 0;
            }
            else
            {
                v13 = 0;
                v3 = 1;
                v20 = 0;
            }
            v14 = 0;
            v4 = 1;
            v6 = 1;
            v12 = "\"";
            /* goto 4216080; */
        }
        else
        {
            v3 = 1;
            v20 = 0;
            v13 = 0;
            v14 = 1;
            v4 = 1;
            v6 = 1;
            v12 = "\"";
            /* goto 4216080; */
        }
    case 6:
        v3 = 1;
        v20 = 0;
        v41 = 5;
        v13 = 0;
        v14 = 1;
        v4 = 1;
        v6 = 1;
        v12 = "\"";
        /* goto 4216080; */
    case 7:
        v3 = 1;
        v20 = 0;
        v13 = 0;
        v14 = 0;
        v4 = 1;
        v6 = 0;
        v12 = 0;
        /* goto 4216080; */
    case 8: case 9: case 10:
        if (((int)((int)v3)) != 10)
        {
            v4 = ((int)((int)v3));
            v3 = v42;
            v18 = dcgettext(0x0, &g_4097cb, 0x5);
            if (v18 == "`")
            {
                v4 = v3;
                v3 = ((int)((int)v4));
                v18 = (long long)gettext_quote.part.0();
            }
            v4 = ((int)v4);
            v3 = v42;
            v17 = dcgettext(0x0, &g_4097c9, 0x5);
            if (v17 == 4233161)
            {
                v4 = v3;
                v3 = v41;
                v17 = (long long)gettext_quote.part.0();
            }
        }
        v43 = 0;
        if ((((char)((int)v40)) & 2) == 0)
        {
            v30 = ((long long)*(v18));
            if (((long long)*(v18)) != 0)
            {
                do
                {
                    if (v37 > v43)
                    {
                        *(v38 + v43) = v30;
                    }
                    v43 += 1;
                    v30 = ((long long)*(v18 + v43));
                }
                while (((char)v30) != 0);
            }
        }
        v35 = v17;
        v9 = ((int)v3);
        v8 = v42;
        v38 = v35;
        v30 = strlen(v38);
        v12 = v17;
        v42 = v8;
        v6 = v30;
        v41 = ((long long)v9);
        v3 = 1;
        v20 = 0;
        v13 = 0;
        v4 = 1;
        /* goto 4216080; */
    }
    v42 = v4;
    while (true)
    {
        v35 = 0;
        v39 = r13<8>;
        while (true)
        {
            v44 = ((char)(r11<8> != v35));
            if (r11<8> == 18446744069414584319)
            {
                v30 = v5;
                v44 = ((char)(*(v5 + v35) != 0));
            }
            if (((long long)r13b<1>) != 0)
            {
                v36 = v5 + v35;
                v40 = v30;
                if (((long long)(((char)(reg_96<4> != 2)) & v4)) != 0)
                {
                    if (v6 != 0)
                    {
                        v33 = v35 + v6;
                        if (r11<8> == 18446744069414584319 && v6 > 1)
                        {
                            v11 = reg_96<4>;
                            v10 = v39;
                            v9 = v40;
                            v8 = v33;
                            v42 = strlen(v5);
                        }
                        if (v8 <= r11<8>)
                        {
                            v33 = v6;
                            v37 = v12;
                            v11 = reg_96<4>;
                            v10 = r11<8>;
                            v9 = v39;
                            v8 = v40;
                            v30 = memcmp(v36, v37, v33);
                            v40 = ((long long)v8);
                            v39 = ((long long)v9);
                            v42 = v10;
                            v41 = ((long long)v11);
                            if (v30 == 0)
                            {
                                if (v14 == 0)
                                {
                                    v36 = ((long long)v36[0]);
                                    tmp_3 = v36;
                                    switch (((long long)tmp_3))
                                    {
                                    case 0:
                                        v33 = ((char)(reg_96<4> == 2));
                                        if (((long long)(((char)(((int)0) ^ 1)) & ((char)(reg_96<4> == 2)))) != 0)
                                        {
                                            if (v45 > r12<8>)
                                            {
                                                *(v46 + r12<8>) = 39;
                                            }
                                            if (v45 > r12<8> + 1)
                                            {
                                                *(v46 + r12<8> + 1) = 36;
                                            }
                                            if (v45 > r12<8> + 2)
                                            {
                                                *(v46 + r12<8> + 2) = 39;
                                            }
                                            v32 = r12<8> + 3;
                                        }
                                        else
                                        {
                                            v32 = r12<8>;
                                            /* goto 4219323; */
                                            v43 = v32 + 1;
                                            if (1 < r11<8>)
                                            {
                                                tmp_17 = ((long long)*(v5 + 0 + 1));
                                                v8 = *(v5 + 0 + 1);
                                                if ((((long long)(((int)tmp_17) - 48)) & 255) <= 9)
                                                {
                                                    if (v45 > v43)
                                                    {
                                                        *(v46 + v43) = 48;
                                                    }
                                                    if (v45 > v32 + 2)
                                                    {
                                                        *(v46 + v32 + 2) = 48;
                                                    }
                                                }
                                            }
                                        }
                                        if ((v45 > r12<8> || ((long long)(((char)(((int)0) ^ 1)) & ((char)(reg_96<4> == 2)))) != 0) && (((long long)(((char)(((int)0) ^ 1)) & ((char)(reg_96<4> == 2)))) == 0 || v45 > r12<8> + 3))
                                        {
                                            *(v46 + rcx<8>) = 92;
                                            /* goto 4219331; */
                                        }
                                    case 10:
                                        /* goto 4217712; */
                                    case 11:
                                        /* goto 4217855; */
                                    case 13:
                                        /* goto 4217659; */
                                    case 33: case 34: case 36: case 38: case 40: case 41: case 42: case 59: case 60: case 61: case 62: case 91: case 94: case 96: case 124:
                                        /* goto 4216565; */
                                    case 123: case 125:
                                        /* goto 4217251; */
                                    }
                                    if (((long long)tmp_3) <= 126)
                                    {
                                        v33 = ((long long)v36);
                                    }
                                }
                                else
                                {
                                    v2 = v17;
                                    v1 = v18;
                                    v0 = 0;
                                    v43 = (long long)quotearg_buffer_restyled();
                                    v31 = v43;
                                    return v31;
                                }
                            }
                        }
                    }
                    if (v6 == 0 || v8 > r11<8> || v30 != 0)
                    {
                        v36 = ((long long)v36[0]);
                        tmp_3 = v36;
                        switch (((long long)tmp_3))
                        {
                        case 0:
                            if (v14 == 0)
                            {
                                /* goto 4217740; */
                            }
                            else
                            {
                                v4 = ((char)(v41 == 2));
                            }
                        case 7:
                            break;
                        case 8:
                            break;
                        case 9:
                            /* goto 4217840; */
                        case 12:
                            break;
                        case 32:
                            if (v7 == 0)
                            {
                                v30 = ((long long)((v30 ^ 1) & reg_80<4>));
                                if (((long long)al<1>) != 0)
                                {
                                    if (r14<8> > r12<8>)
                                    {
                                        *(v46 + r12<8>) = 39;
                                    }
                                    if (r14<8> > r12<8> + 1)
                                    {
                                        *(v46 + r12<8> + 1) = 39;
                                    }
                                }
                            }
                            if (...)
                            {
                                v4 &= v30;
                                if (((long long)(((char)(((int)v39) ^ 1)) & dl<1>)) != 0)
                                {
                                    if (r14<8> > r12<8>)
                                    {
                                        *(v46 + r12<8>) = 39;
                                    }
                                    if (r14<8> > r12<8> + 1)
                                    {
                                        *(v46 + r12<8> + 1) = 36;
                                    }
                                    if (r14<8> > r12<8> + 2)
                                    {
                                        *(v46 + r12<8> + 2) = 39;
                                    }
                                }
                                if (v45 > r12<8>)
                                {
                                    *(v46 + r12<8>) = 92;
                                }
                            }
                        case 33: case 34: case 36: case 38: case 40: case 41: case 42: case 59: case 60: case 61: case 62: case 91: case 94: case 96: case 124:
                            /* goto 4216563; */
                        case 123: case 125:
                            /* goto 4217251; */
                        default:
                            v40 = 0;
                        }
                        if (((long long)tmp_3) <= 126)
                        {
                            v33 = ((long long)v36);
                        }
                    }
                }
                else
                {
                    v36 = ((long long)v36[0]);
                    tmp_3 = v36;
                    switch (((long long)tmp_3))
                    {
                    case 0:
                        if (v4 == 0)
                        {
                            v35 += 1;
                            v30 = 0;
                        }
                    case 7:
                        break;
                    case 8:
                        break;
                    case 10:
                        if (((long long)(((char)(reg_96<4> == 2)) & v14)) != 0)
                        {
                            /* goto 4217319; */
                        }
                    case 11:
                        break;
                        if (v4 != 0)
                        {
                            /* goto 4217696; */
                        }
                    case 12:
                        break;
                    case 32:
                        v30 = ((char)(reg_96<4> == 2));
                    case 33: case 34: case 36: case 38: case 40: case 41: case 42: case 59: case 60: case 61: case 62: case 91: case 94: case 96: case 124:
                        v30 = ((char)(reg_96<4> == 2));
                    case 35: case 126:
                        v30 = ((char)(reg_96<4> == 2));
                    case 39:
                        if (reg_96<4> != 2)
                        {
                            v20 = r13b<1>;
                            v30 = 0;
                        }
                        else
                        {
                            if (v45 != 0)
                            {
                                v33 = 0;
                            }
                            if (v45 == 0 || v13 != 0)
                            {
                                if (v45 > r12<8>)
                                {
                                    *(v46 + r12<8>) = 39;
                                }
                                if (v45 > r12<8> + 1)
                                {
                                    *(v46 + r12<8> + 1) = 92;
                                }
                                if (v45 > r12<8> + 2)
                                {
                                    v33 = v45;
                                    *(v46 + r12<8> + 2) = 39;
                                    v45 = v13;
                                }
                                else
                                {
                                    v33 = v45;
                                    v45 = v13;
                                }
                            }
                            v13 = r14<8>;
                            v20 = r13b<1>;
                            v45 = rdx<8>;
                        }
                    case 63:
                        if (reg_96<4> != 2)
                        {
                            /* goto 4217504; */
                            v36 = ((long long)*(v5 + 2));
                            v33 = v36 - 33;
                        }
                    case 92:
                        if (reg_96<4> == 2)
                        {
                            v30 = 0;
                        }
                    case 123: case 125:
                        v33 = ((char)(r11<8> != 1));
                        if (r11<8> == 18446744069414584319)
                        {
                            v33 = ((char)(*(v5 + 1) != 0));
                        }
                        v30 = ((char)(reg_96<4> == 2));
                    }
                    if (((long long)tmp_3) <= 126)
                    {
                        v33 = ((long long)v36);
                        v30 = ((long long)*(g_409a48 + v33 * 4)) + &g_409a48;
                    }
                }
            }
            else
            {
                v33 = ((char)(v41 == 2));
                if (((long long)(v33 & v14)) == 0 || v43 != 0)
                {
                    v47 = ((long long)(v33 & ((char)(((int)v14) ^ 1))));
                    v33 &= ((char)(((int)v14) ^ 1));
                    if (((char)v47) == 0)
                    {
                        v33 = ((long long)(((int)v14) ^ 1));
                    }
                    else if (v20 != 0)
                    {
                        if (v3 == 0)
                        {
                            v30 = ((char)(v45 == 0)) & ((char)(v13 != 0));
                            if (((long long)(((char)(v45 == 0)) & ((char)(v13 != 0)))) != 0)
                            {
                                v33 = v13;
                                break;
                            }
                            else
                            {
                                v33 = ((long long)v20);
                            }
                        }
                        else
                        {
                            v2 = v17;
                            v1 = v18;
                            v0 = v7;
                            v43 = (long long)quotearg_buffer_restyled();
                            v31 = v43;
                            return v31;
                        }
                    }
                    if (v20 == 0 || ((char)v47) == 0 || v3 == 0 && ((long long)(((char)(v45 == 0)) & ((char)(v13 != 0)))) == 0)
                    {
                        v30 = v12;
                        if (v12 != 0 && ((long long)((char)v33)) != 0)
                        {
                            v33 = ((long long)*(v30));
                            if (((long long)*(v30)) != 0)
                            {
                                v30 -= v43;
                                do
                                {
                                    if (v45 > r12<8>)
                                    {
                                        *(v46 + r12<8>) = v33;
                                    }
                                    v43 = r12<8> + 1;
                                    v33 = ((long long)*(v30 + v43));
                                }
                                while (((char)v33) != 0);
                            }
                        }
                        if (v45 <= v43)
                        {
                            v31 = v43;
                            return v31;
                        }
                        *(v46 + v43) = 0;
                        v31 = v43;
                        return v31;
                    }
                }
            }
            if (v16 == 1)
            {
                v11 = reg_96<4>;
                v10 = r11<8>;
                v9 = r8b<1>;
                v8 = r9b<1>;
                v30 = ((long long)*(*(__ctype_b_loc()) + ((long long)bpl<1>) * 2));
                tmp_6 = v30;
                v30 = tmp_6 & 0x4000;
                v33 = ((char)(((long long)(tmp_6 & 0x4000)) == 0)) & v4;
                if (((long long)dl<1>) == 0)
                {
                    /* goto 4216736; */
                }
                else
                {
                    v33 = ((long long)v4);
                    v44 = 0;
                    /* goto 4218898; */
                }
            }
            else
            {
                v26 = 0;
                v9 = &stack_base-72;
                if (r11<8> == 18446744069414584319)
                {
                    v11 = reg_96<4>;
                    v10 = r8b<1>;
                    v8 = r9b<1>;
                    v42 = strlen(v5);
                }
                v8 = r13b<1>;
                v11 = &stack_base-76;
                v21 = r8b<1>;
                v23 = r9b<1>;
                v19 = reg_96<4>;
                v24 = r12<8>;
                v10 = v35;
                v35 = r11<8>;
                v22 = bpl<1>;
                v36 = 0;
                while (true)
                {
                    v44 = v10 + v36;
                    v30 = rpl_mbrtowc();
                    v33 = v30;
                    if (v30 != 18446744069414584318 && v30 != 18446744069414584319 && v30 != 0)
                    {
                        if (v19 == 2 && v30 != 1 && v14 != 0)
                        {
                            v37 = v5 + v30 + 1;
                            v39 = v5 + v9 + v30;
                            while (true)
                            {
                                v30 = ((long long)*(v37));
                                v32 = v30 - 91;
                                if ((v30 - 91 & 255) <= 33 && (8589934635 & 1 << ((long long)(v32 & 63))) != 0)
                                {
                                    break;
                                }
                                if ((8589934635 & 1 << ((long long)(v32 & 63))) == 0 || (v30 - 91 & 255) > 33)
                                {
                                    v37 += 1;
                                }
                            }
                            if ((8589934635 & 1 << ((long long)(v32 & 63))) == 0 || (v30 - 91 & 255) > 33)
                            {
                                v9 = v33;
                                v36 += v9;
                                v8 = ((char)(iswprint(v25) == 0? 0 : ((int)*(&stack_base-184))));
                                v30 = mbsinit(((int)&stack_base-72));
                            }
                            else if ((v30 - 91 & 255) <= 33 && (8589934635 & 1 << ((long long)(v32 & 63))) != 0)
                            {
                                break;
                            }
                        }
                        v9 = v33;
                        v36 += v9;
                        v8 = ((char)(iswprint(v25) == 0? 0 : ((int)*(&stack_base-184))));
                        v30 = mbsinit(((int)&stack_base-72));
                    }
                    if (v30 == 18446744069414584319)
                    {
                        v33 = ((long long)v4);
                        v35 = v10;
                        v36 = ((long long)v22);
                        v44 = 0;
                        v41 = ((long long)v19);
                    }
                    if (v30 == 18446744069414584318)
                    {
                        v42 = v35;
                        v35 = v10;
                        v30 = v44;
                        v34 = v36;
                        v36 = ((long long)v22);
                        v41 = ((long long)v19);
                        if (v44 >= v42)
                        {
                        }
                        else
                        {
                            while (*(v5 + v30) != 0)
                            {
                                v34 += 1;
                                v30 = 0 + v34;
                                if (v42 <= v34)
                                {
                                    break;
                                }
                            }
                        }
                        v33 = ((long long)v4);
                        v44 = 0;
                    }
                    if (v30 == 0 || v30 != 18446744069414584318 && ((int)v30) != 0 && v30 != 18446744069414584319)
                    {
                        v44 = ((long long)v8);
                        v36 = ((long long)v22);
                        v35 = v10;
                        v41 = ((int)v19);
                        v33 = ((int)(((int)v8) ^ 1));
                        v33 = ((char)(((int)v8) ^ 1)) & v4;
                    }
                }
                if (v30 == 18446744069414584318 || v30 == 18446744069414584319 || v30 == 0 || ((int)v30) != 0)
                {
                    v8 = r13b<1>;
                    v37 = 0;
                }
            }
            if (((long long)dl<1>) != 0)
            {
                v8 = r13b<1>;
                v37 = 0;
                while (true)
                {
                    if (((long long)v33) != 0)
                    {
                        v30 = ((char)(v41 == 2));
                        if (((long long)v14) == 0)
                        {
                            v30 = v4 & ((char)(reg_80<4> ^ 1));
                            if (((long long)(v4 & ((char)(reg_80<4> ^ 1)))) != 0)
                            {
                                if (v45 > r12<8>)
                                {
                                    *(v46 + r12<8>) = 39;
                                }
                                if (v45 > r12<8> + 1)
                                {
                                    *(v46 + r12<8> + 1) = 36;
                                }
                                if (v45 > r12<8> + 2)
                                {
                                    *(v46 + r12<8> + 2) = 39;
                                }
                                v43 = r12<8> + 3;
                                v39 = rax<8>;
                            }
                            if (v45 > r12<8>)
                            {
                                *(v46 + r12<8>) = 92;
                            }
                            if (v45 > r12<8> + 1)
                            {
                                v30 = rbp<8>;
                                v30 = ((char)rbp<8>) % 64;
                                tmp_26 = rax<8>;
                                *(v46 + r12<8> + 1) = ((char)(((int)tmp_26) + 48));
                            }
                            if (v45 > r12<8> + 2)
                            {
                                v30 = rbp<8>;
                                v30 = ((char)rbp<8>) % 8;
                                tmp_29 = rax<8>;
                                *(v46 + r12<8> + 2) = ((char)((((int)tmp_29) & 7) + 48));
                            }
                            v35 = rbx<8> + 1;
                            v43 = r12<8> + 3;
                            v36 = ((long long)((((int)rbp<8>) & 7) + 48));
                            if (v35 < tmp_9)
                            {
                                v37 = v33;
                            }
                            else
                            {
                                break;
                            }
                        }
                        else
                        {
                            v4 = v30;
                            break;
                        }
                    }
                    else
                    {
                        v30 = ((long long)((v37 ^ 1) & reg_80<4>));
                        if (((long long)v40) != 0)
                        {
                            if (v45 > r12<8>)
                            {
                                *(v46 + r12<8>) = 92;
                            }
                            v43 = r12<8> + 1;
                        }
                        v35 = rbx<8> + 1;
                        if (v35 >= tmp_9)
                        {
                            break;
                        }
                        else if (((long long)v30) != 0)
                        {
                            if (v45 > r12<8>)
                            {
                                *(v46 + r12<8>) = 39;
                            }
                            if (v45 > r12<8> + 1)
                            {
                                *(v46 + r12<8> + 1) = 39;
                            }
                            v43 = r12<8> + 2;
                        }
                    }
                    if ((((long long)v14) == 0 || ((long long)v33) == 0) && (v35 < tmp_9 || ((long long)v33) == 0) && (v35 < tmp_9 || ((long long)v33) != 0))
                    {
                        if (v45 > r12<8>)
                        {
                            *(v46 + r12<8>) = v36;
                        }
                        v36 = ((long long)*(v5 + rbx<8>));
                    }
                }
            }
            if (v14 != 0)
            {
                v2 = v17;
                v1 = v18;
                v0 = 0;
                v43 = (long long)quotearg_buffer_restyled();
                v31 = v43;
                return v31;
            }
            if (v45 > r12<8>)
            {
                *(v46 + r12<8>) = 63;
            }
            if (v45 > r12<8> + 1)
            {
                *(v46 + r12<8> + 1) = 34;
            }
            if (v45 > r12<8> + 2)
            {
                *(v46 + r12<8> + 2) = 34;
            }
            if (v45 > r12<8> + 3)
            {
                *(v46 + r12<8> + 3) = 63;
            }
            v33 = 0;
            if (...)
            {
                v2 = v17;
                v1 = v18;
                v0 = 0;
                v43 = (long long)quotearg_buffer_restyled();
                v31 = v43;
                return v31;
            }
            if (...)
            {
                if (r12<8> < r14<8>)
                {
                    *(v46 + r12<8>) = v36;
                }
                v43 = r12<8> + 1;
                v30 = 0;
                v3 = ((char)(((long long)v44) == 0? 0 : ((int)*(&stack_base-224))));
            }
        }
        *(v46) = 39;
        v20 = v30;
        v13 = v33;
        v14 = 0;
        v6 = 1;
        v12 = &g_4097c9;
    }
}