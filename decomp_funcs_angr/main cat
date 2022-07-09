typedef struct struct_0 {
    unsigned int field_0;
} struct_0;

typedef struct struct_2 {
    char field_0;
    char field_1;
    char field_2;
    char field_3;
} struct_2;

typedef struct struct_3 {
    char field_0;
} struct_3;

extern unsigned int g_407004;
extern unsigned int g_40708e;
extern unsigned int g_4070dd;
extern unsigned int g_4070e8;
extern unsigned int g_4070fa;
extern unsigned int g_407118;
extern unsigned int g_407130;
extern unsigned int g_407630;
extern struct_0 g_407658;
extern char *infile;
extern unsigned int input_desc;
extern struct_1 line_num_print;
extern unsigned int long_options.7293;
extern struct_0 newlines2;
extern struct_0 optind;
extern char pending_cr;

int main()
{
    BOT tmp_20;  // tmp #20
    BOT tmp_30;  // tmp #30
    BOT tmp_3;  // tmp #3
    BOT tmp_15;  // tmp #15
    BOT tmp_17;  // tmp #17
    BOT tmp_14;  // tmp #14
    unsigned long long v0;  // [bp-0x178]
    struct_3 *|struct_0 * v1;  // [bp-0x160]
    char *[2] v10;  // [bp-0x130]
    void *v11;  // [bp-0x128]
    unsigned long v12;  // [bp-0x120]
    char v13;  // [bp-0x117]
    char v14;  // [bp-0x116]
    char v15;  // [bp-0x115]
    unsigned int v16;  // [bp-0x114]
    unsigned long v17;  // [bp-0x110]
    unsigned long v18;  // [bp-0x108]
    unsigned int v19;  // [bp-0x100]
    unsigned long long v2;  // [bp-0x158]
    char v20;  // [bp-0xfc]
    char v21;  // [bp-0xfb]
    char v22;  // [bp-0xfa]
    char v23;  // [bp-0xf9]
    unsigned long long v24;  // [bp-0xf8]
    unsigned long v25;  // [bp-0xf0]
    unsigned int v26;  // [bp-0xdc]
    char v27;  // [bp-0xd8]
    unsigned long v28;  // [bp-0xd0]
    unsigned int v29;  // [bp-0xc0]
    unsigned long v3;  // [bp-0x150]
    unsigned long v30;  // [bp-0xa8]
    unsigned long v31;  // [bp-0xa0]
    char v33;  // [bp+0x30]
    char v34;  // [bp+0x31]
    char v35;  // [bp+0x32]
    char v36;  // [bp+0x59]
    char v37;  // [bp+0x5a]
    char v38;  // [bp+0x5b]
    unsigned long long|void * v39;  // rax
    unsigned long v4;  // [bp-0x148]
    unsigned long long|unsigned int|char v40;  // rax
    unsigned long long v48;  // rax
    char v5;  // [bp-0x140]
    struct_0 *|unsigned long long v50;  // rax
    unsigned long v51;  // rcx
    unsigned long long|unsigned long|void *|unsigned short|char v52;  // rdx
    unsigned long|void *|unsigned long long|char v53;  // rbx
    unsigned long long|struct_0 *|unsigned int v54;  // rbp
    unsigned long|unsigned long long v55;  // rsi
    unsigned long|unsigned long long|char [2]|unsigned int v56;  // rdi
    unsigned long long|void * v57;  // r12
    char *|unsigned long long v58;  // r13
    unsigned long long v59;  // r13
    char v6;  // [bp-0x13f]
    unsigned long v60;  // r14
    struct_2 *|unsigned long long v61;  // r15
    char v7;  // [bp-0x13e]
    char v8;  // [bp-0x13d]
    char *v9[2];  // [bp-0x138]

    v35 = 1;
    /* goto 4204458; */
    v34 = 1;
    /* goto 4204458; */
    v37 = 1;
    /* goto 4204458; */
    v33 = 1;
    /* goto 4204458; */
    v38 = 1;
    v33 = 1;
    /* goto 4204458; */
    v35 = 1;
    v34 = 1;
    v36 = 1;
    /* goto 4204458; */
    v35 = 1;
    v34 = 1;
    /* goto 4204458; */
    v9 = v55;
    set_program_name();
    setlocale();
    bindtextdomain(&g_40708e, &g_407630);
    textdomain(&g_40708e);
    atexit();
    v7 = 0;
    v6 = 0;
    v13 = 0;
    v14 = 0;
    v15 = 0;
    v5 = 0;
    v50 = getopt_long(v56, ((int)v55), &g_4070dd, &long_options.7293, 0x0);
    if (!(v50 != -1))
    {
        v17 = &v27;
        v40 = __fxstat(0x1, 0x1, ((int)&v27));
        if (v40 >= 0)
        {
            infile = "-";
            v60 = (!(*(&stack_base-160) - 0x20000 <= 0x1ffffffffffe0000)? 0x20000 : *(&stack_base-160));
            v24 = v27;
            v25 = v28;
            v19 = v29 & 0xf000;
            v21 = v5 | v13;
            v22 = 1;
            v23 = 0;
            v18 = getpagesize();
            v10 = ((long long)optind);
            if (v56 <= ((int)v10))
            {
                v56 = "-";
                v16 = 1931804717 - 45;
            }
            while (true)
            {
                v10 += 1;
                if (v56 > ((int)v10))
                {
                    v56 = v9[v10];
                    tmp_20 = ((long long)v9[v10][0]);
                    infile = v9[v10];
                    v16 = ((int)tmp_20) - 45;
                    if (((int)tmp_20) == 45)
                    {
                        v40 = ((int)v56[1]);
                        v16 = ((int)v56[1]);
                        if (v40 == 0)
                        {
                            input_desc = 0;
                            v54 = 0;
                            v23 = 1;
                            /* goto 4205158; */
                        }
                    }
                    if (v40 != 0 || ((int)tmp_20) != 45)
                    {
                        input_desc = open(v56, 0x0, v52);
                        v54 = input_desc;
                    }
                    if (input_desc >= 0 || v40 == 0 && ((int)tmp_20) == 45)
                    {
                        v40 = __fxstat(0x1, v54, ((int)&v27));
                        if (v40 >= 0)
                        {
                            v4 = (v31 - 0x20000 <= 0x1ffffffffffe0000? v31 : 0x20000);
                            fdadvise();
                            if (v27 == v24 && v28 == v25 && v19 == 0x8000)
                            {
                                v40 = lseek(input_desc, 0x0, 0x1);
                                if (v40 < v30)
                                {
                                    v57 = (long long)quotearg_n_style_colon();
                                    error(0x0, 0x0, dcgettext(0x0, &g_4070fa, 0x5));
                                    v22 = 0;
                                }
                            }
                            if (v27 != v24 || v28 != v25 || v40 >= v30 || v19 != 0x8000)
                            {
                                if (v21 == 0)
                                {
                                    v53 = v6 | v7 | v14;
                                    if (((long long)(v6 | v7 | v14)) == 0)
                                    {
                                        if (v19 == 0x8000)
                                        {
                                            v54 = 0;
                                            if ((((short)v29) & 0xf000) == 0x8000)
                                            {
                                                while (true)
                                                {
                                                    v40 = copy_file_range(input_desc, 0x0, 0x1, 0x0, 0xc0000000, 0x0);
                                                    if (v40 == 18446744069414584319)
                                                    {
                                                        v54 = __errno_location();
                                                        v40 = 1;
                                                        if (((int)v51) <= 38)
                                                        {
                                                            v40 = ((long long)!(274949472770 >> (cl<1> & 63)));
                                                        }
                                                        quotearg_n_style_colon();
                                                        error(0x0, v54->field_0, "%s");
                                                        v40 = -1;
                                                    }
                                                    else if (v40 != 0)
                                                    {
                                                        v54 = 1;
                                                    }
                                                    if (v40 == 0)
                                                    {
                                                        v40 = 1;
                                                    }
                                                    if (v40 == 18446744069414584319 || v40 == 0 && ((long long)v54) != 0)
                                                    {
                                                        v40 = ((char)[D] amd64g_calculate_condition(0xf<64>, 0x13<64>, Conv(64->64, rax<8>), 0x0<64>, cc_ndep<8>));
                                                        v22 &= ((char)[D] amd64g_calculate_condition(0xf<64>, 0x13<64>, Conv(64->64, rax<8>), 0x0<64>, cc_ndep<8>));
                                                        break;
                                                    }
                                                }
                                                if ((v40 == 0 || ((long long)(((int)v51) == 95)) == 0) && (v40 == 0 || v40 == 18446744069414584319) && (v40 == 0 || ((long long)v40) != 0) && (((long long)(((int)v51) == 95)) == 0 || ((long long)v54) != 0) && (v40 == 18446744069414584319 || ((long long)v54) != 0) && (((long long)v40) != 0 || ((long long)v54) != 0))
                                                {
                                                    rpl_free();
                                                }
                                                else if (v40 == 0 || v40 == 18446744069414584319)
                                                {
                                                    v58 = (long long)xalignalloc();
                                                }
                                            }
                                        }
                                        v58 = (long long)xalignalloc();
                                        while (true)
                                        {
                                            v54 = (long long)safe_read();
                                            if (v54 == 18446744069414584319)
                                            {
                                                v57 = (long long)quotearg_n_style_colon();
                                                error(0x0, *(__errno_location()), "%s");
                                            }
                                            else if (v54 != 0)
                                            {
                                                v40 = full_write();
                                                error(0x1, *(__errno_location()), dcgettext(0x0, &g_407004, 0x5));
                                            }
                                            else
                                            {
                                                v53 = 1;
                                                break;
                                            }
                                        }
                                        v22 &= v53;
                                        /* goto 4205055; */
                                    }
                                }
                                if (((long long)(v6 | v7 | v14)) != 0 || v21 != 0)
                                {
                                    v59 = (long long)xalignalloc();
                                    if (((char)[D] amd64g_calculate_condition(0x0<64>, 0x4<64>, Add((Load(addr=stack_base-328, size=8, endness=Iend_LE) << 0x2<8>), (((Not ((Load(addr=stack_base-160, size=8, endness=Iend_LE) - 0x20000<64>) <= 0x1ffffffffffe0000<64>))) ? (0x20000<64>) : (Load(addr=stack_base-160, size=8, endness=Iend_LE)))), 0x13<64>, cc_ndep<8>)) || [D] amd64g_calculate_condition(0x0<64>, 0x4<64>, Add((Load(addr=stack_base-328, size=8, endness=Iend_LE) << 0x2<8>), (((Not ((Load(addr=stack_base-160, size=8, endness=Iend_LE) - 0x20000<64>) <= 0x1ffffffffffe0000<64>))) ? (0x20000<64>) : (Load(addr=stack_base-160, size=8, endness=Iend_LE)))), 0x13<64>, cc_ndep<8>) != 0)
                                    {
                                        break;
                                    }
                                    v53 = v59 + 1;
                                    v39 = xalignalloc();
                                    v11 = v53;
                                    v54 = ((long long)newlines2);
                                    v57 = v39;
                                    v8 = 1;
                                    v12 = v39 + v60;
                                    tmp_30 = ((long long)v15);
                                    v61 = v39;
                                    v1 = v59;
                                    v2 = v59;
                                    v58 = v53;
                                    v20 = ((char)(((int)tmp_30) ^ 1));
                                    while (true)
                                    {
                                        if (v12 <= v61)
                                        {
                                            v53 = v57;
                                            while (true)
                                            {
                                                v39 = full_write();
                                                if (v39 == (!(*(&stack_base-160) - 0x20000 <= 0x1ffffffffffe0000)? 0x20000 : *(&stack_base-160)))
                                                {
                                                    v53 += v60;
                                                    v52 = v61 - v53;
                                                    v3 = v52;
                                                    memmove(v53, v53, v52);
                                                    v61 = v53 + v3;
                                                    break;
                                                }
                                                else
                                                {
                                                    error(0x1, *(__errno_location()), dcgettext(0x0, &g_407004, 0x5));
                                                }
                                            }
                                        }
                                        if (v1 < v58)
                                        {
                                            v26 = 0;
                                            if (v8 != 0)
                                            {
                                                v39 = ioctl(input_desc, 0x541b, ((int)&v26));
                                                if (v39 < 0)
                                                {
                                                    v39 = __errno_location();
                                                    v52 = ((char)(v1->field_0 == 95));
                                                    if (v1->field_0 <= 38)
                                                    {
                                                        v52 = ((long long)(reg_32<4> | ((int)(0x4002480000 >> (((char)v1->field_0) & 63))) & 1));
                                                    }
                                                    if (((long long)dl<1>) != 0)
                                                    {
                                                        v8 = 0;
                                                    }
                                                    else
                                                    {
                                                        v1 = v39;
                                                        v61 = (long long)quotearg_style();
                                                        error(0x0, v1->field_0, dcgettext(0x0, &g_407118, 0x5));
                                                        newlines2 = ((unsigned int)v54);
                                                        v22 = 0;
                                                        /* goto 4205047; */
                                                    }
                                                }
                                            }
                                            if (v8 == 0 || v26 == 0 && ((long long)dl<1>) != 0 || v26 == 0 && v39 >= 0)
                                            {
                                                v53 = r15<8> - v53;
                                                if (((char)[D] amd64g_calculate_condition(0x0<64>, 0x4<64>, Add((Load(addr=stack_base-328, size=8, endness=Iend_LE) << 0x2<8>), (((Not ((Load(addr=stack_base-160, size=8, endness=Iend_LE) - 0x20000<64>) <= 0x1ffffffffffe0000<64>))) ? (0x20000<64>) : (Load(addr=stack_base-160, size=8, endness=Iend_LE)))), 0x13<64>, cc_ndep<8>)))
                                                {
                                                }
                                                else
                                                {
                                                    v39 = full_write();
                                                    if (v53 == v39)
                                                    {
                                                        v61 = v53;
                                                    }
                                                    else
                                                    {
                                                        write_pending.part.0(); /* do not return */
                                                    }
                                                }
                                            }
                                        }
                                        else
                                        {
                                            v54 = ((long long)((unsigned int)v54)) + 1;
                                            v52 = v58 + 1;
                                            if (((int)v54) > 0)
                                            {
                                                if (((int)v54) != 1)
                                                {
                                                    v54 = 2;
                                                }
                                                if (v5 != 0 && v20 != 0 && (v14 == 0 || ((int)v54) == 1))
                                                {
                                                    v3 = v52;
                                                    next_line_num();
                                                    v61 = stpcpy(((int)r15<8>), ((int)line_num_print));
                                                }
                                            }
                                            if (((int)v54) <= 0 || v14 == 0 || ((int)v54) == 1)
                                            {
                                                if (v13 != 0)
                                                {
                                                    if (pending_cr != 0)
                                                    {
                                                        pending_cr = 0;
                                                        v61 = r15<8> + 2;
                                                        v61->field_2 = 19806;
                                                    }
                                                    v61->field_0 = 36;
                                                    v61 += 1;
                                                }
                                                v61->field_0 = 10;
                                                v61 += 1;
                                                /* goto 4205562; */
                                            }
                                        }
                                        if (v1 < v58 && !(((char)[D] amd64g_calculate_condition(0x0<64>, 0x4<64>, Add((Load(addr=stack_base-328, size=8, endness=Iend_LE) << 0x2<8>), (((Not ((Load(addr=stack_base-160, size=8, endness=Iend_LE) - 0x20000<64>) <= 0x1ffffffffffe0000<64>))) ? (0x20000<64>) : (Load(addr=stack_base-160, size=8, endness=Iend_LE)))), 0x13<64>, cc_ndep<8>))) && (v26 == 0 || v8 == 0) && (v8 == 0 || ((long long)dl<1>) != 0 || v39 >= 0) && v53 == v39 || ((char)[D] amd64g_calculate_condition(0x0<64>, 0x4<64>, Add((Load(addr=stack_base-328, size=8, endness=Iend_LE) << 0x2<8>), (((Not ((Load(addr=stack_base-160, size=8, endness=Iend_LE) - 0x20000<64>) <= 0x1ffffffffffe0000<64>))) ? (0x20000<64>) : (Load(addr=stack_base-160, size=8, endness=Iend_LE)))), 0x13<64>, cc_ndep<8>)) && v1 < v58 && (v26 == 0 || v8 == 0) && (v8 == 0 || ((long long)dl<1>) != 0 || v39 >= 0) || v1 < v58 && v8 != 0 && (((long long)dl<1>) != 0 || v39 >= 0) && v26 != 0)
                                        {
                                            v39 = safe_read();
                                            v58 = v2;
                                            if (v39 == 18446744069414584319)
                                            {
                                                v61 -= v53;
                                                v53 = (long long)quotearg_n_style_colon();
                                                error(0x0, *(__errno_location()), "%s");
                                                if (!(((char)[D] amd64g_calculate_condition(0x0<64>, 0x4<64>, Add((Load(addr=stack_base-328, size=8, endness=Iend_LE) << 0x2<8>), (((Not ((Load(addr=stack_base-160, size=8, endness=Iend_LE) - 0x20000<64>) <= 0x1ffffffffffe0000<64>))) ? (0x20000<64>) : (Load(addr=stack_base-160, size=8, endness=Iend_LE)))), 0x13<64>, cc_ndep<8>))))
                                                {
                                                    v39 = full_write();
                                                    if (v61 != v39)
                                                    {
                                                        write_pending.part.0(); /* do not return */
                                                    }
                                                }
                                            }
                                            else if (v39 != 0)
                                            {
                                                v39 += v2;
                                                v52 = v11;
                                                v1 = v39;
                                                v1->field_0 = 10;
                                                /* goto 4205562; */
                                            }
                                            else if (!(((char)[D] amd64g_calculate_condition(0x0<64>, 0x4<64>, Add((Load(addr=stack_base-328, size=8, endness=Iend_LE) << 0x2<8>), (((Not ((Load(addr=stack_base-160, size=8, endness=Iend_LE) - 0x20000<64>) <= 0x1ffffffffffe0000<64>))) ? (0x20000<64>) : (Load(addr=stack_base-160, size=8, endness=Iend_LE)))), 0x13<64>, cc_ndep<8>))))
                                            {
                                                v39 = full_write();
                                                if (v53 != v39)
                                                {
                                                    write_pending.part.0(); /* do not return */
                                                }
                                            }
                                            if (v39 == 0)
                                            {
                                                v53 = v61 - v53;
                                            }
                                        }
                                        if (...)
                                        {
                                            newlines2 = v54;
                                            v22 = 0;
                                            /* goto 4205047; */
                                        }
                                        if (...)
                                        {
                                            v53 = ((long long)*(r13<8>));
                                            v58 = rdx<8>;
                                            tmp_3 = v53;
                                            if (pending_cr != 0)
                                            {
                                                pending_cr = 0;
                                                v61 = r15<8> + 1;
                                                v61->field_1 = 13;
                                            }
                                            if (v5 != 0 && reg_56<4> >= 0)
                                            {
                                                next_line_num();
                                                stpcpy(((int)v61), ((int)line_num_print));
                                            }
                                            if (v6 == 0)
                                            {
                                                v56 = ((long long)pending_cr);
                                                v55 = 0;
                                                while (true)
                                                {
                                                    if (v53 == 9 && v7 != 0)
                                                    {
                                                        v39 = ((long long)*(v58));
                                                        v61 = r15<8> + 2;
                                                        *(v61 + 2) = 18782;
                                                        /* goto 4205683; */
                                                    }
                                                    if (v7 == 0 || v53 != 9)
                                                    {
                                                        if (v53 == 10)
                                                        {
                                                            break;
                                                        }
                                                        v39 = ((long long)*(v58));
                                                        if (v53 == 13)
                                                        {
                                                            v52 = ((char)(v39 == 10)) & v13;
                                                            if (((long long)(((char)(v39 == 10)) & v13)) != 0)
                                                            {
                                                                if (v58 != v1)
                                                                {
                                                                    v52 = 19806;
                                                                    v61 = r15<8> + 2;
                                                                    v39 = 10;
                                                                    *(v61 + 2) = 19806;
                                                                    /* goto 4205683; */
                                                                }
                                                                else
                                                                {
                                                                    v55 = rdx<8>;
                                                                    v56 = rdx<8>;
                                                                    v39 = 10;
                                                                    /* goto 4205683; */
                                                                }
                                                            }
                                                        }
                                                        if (((long long)(((char)(v39 == 10)) & v13)) == 0 || v53 != 13)
                                                        {
                                                            *(r15<8> + None) = v53;
                                                        }
                                                    }
                                                    v58 += 1;
                                                    v53 = v39;
                                                }
                                                if (((long long)v55) != 0)
                                                {
                                                    pending_cr = v56;
                                                }
                                            }
                                            else
                                            {
                                                while (true)
                                                {
                                                    if (((long long)v53) <= 31)
                                                    {
                                                        if (v53 == 9 && ((long long)(((int)v7) ^ 1)) != 0)
                                                        {
                                                            v61->field_0 = 9;
                                                            /* goto 4205764; */
                                                        }
                                                        if (((long long)(((int)v7) ^ 1)) == 0 || v53 != 9)
                                                        {
                                                            if (v53 == 10)
                                                            {
                                                                break;
                                                            }
                                                            v53 = ((long long)(((int)v53) + 64));
                                                            v61->field_0 = 94;
                                                            tmp_15 = v53;
                                                            v61->field_1 = tmp_15;
                                                        }
                                                    }
                                                    else if (((long long)v53) <= 126)
                                                    {
                                                        v61->field_0 = v53;
                                                    }
                                                    else if (v53 != 127)
                                                    {
                                                        v61->field_0 = 11597;
                                                        if (((long long)v53) <= 159)
                                                        {
                                                            v53 = ((long long)(((int)v53) - 64));
                                                            v61->field_2 = 94;
                                                            tmp_17 = v53;
                                                            v61->field_3 = tmp_17;
                                                        }
                                                        else if (v53 != 255)
                                                        {
                                                            v53 = ((long long)(((int)v53) - 128));
                                                            tmp_14 = v53;
                                                            v61->field_2 = tmp_14;
                                                        }
                                                        else
                                                        {
                                                            v61->field_2 = 16222;
                                                            /* goto 4205764; */
                                                        }
                                                    }
                                                    else
                                                    {
                                                        v61->field_0 = 16222;
                                                        /* goto 4205764; */
                                                    }
                                                    v53 = ((long long)*(v58));
                                                    v58 += 1;
                                                }
                                            }
                                            v54 = -1;
                                        }
                                        if (...)
                                        {
                                            newlines2 = v54;
                                        }
                                        if (...)
                                        {
                                            rpl_free();
                                        }
                                    }
                                }
                                rpl_free();
                            }
                        }
                        else
                        {
                            v57 = (long long)quotearg_n_style_colon();
                            error(0x0, *(__errno_location()), "%s");
                            v22 = 0;
                        }
                        v40 = close(input_desc);
                    }
                    v57 = (long long)quotearg_n_style_colon();
                    error(0x0, *(__errno_location()), "%s");
                    v22 = 0;
                }
                else
                {
                    if (pending_cr != 0)
                    {
                        v40 = full_write();
                        if (v40 != 1)
                        {
                            error(0x1, *(__errno_location()), dcgettext(0x0, &g_407004, 0x5));
                        }
                    }
                    if (pending_cr == 0 || v40 == 1)
                    {
                        if (v23 == 0)
                        {
                            return ((long long)(0 ^ 1));
                        }
                        v40 = close(0x0);
                        if (v40 >= 0)
                        {
                            return ((long long)(0 ^ 1));
                        }
                        else
                        {
                            error(0x1, *(__errno_location()), dcgettext(0x0, &g_407130, 0x5));
                        }
                    }
                }
            }
            if (...)
            {
                xalloc_die(); /* do not return */
            }
            else if (...)
            {
                xalloc_die(); /* do not return */
            }
            else if (...)
            {
                xalloc_die(); /* do not return */
            }
            else if (...)
            {
                xalloc_die(); /* do not return */
            }
            xalloc_die(); /* do not return */
            xalloc_die(); /* do not return */
            xalloc_die(); /* do not return */
            xalloc_die(); /* do not return */
        }
        error(0x1, *(__errno_location()), dcgettext(0x0, &g_4070e8, 0x5));
    }
    else if (!(v50 <= 118))
    {
        usage(); /* do not return */
    }
    else if (v50 > 64)
    {
        v50 = ((long long)v50) - 65;
        if (((int)v50) <= 53)
        {
            v48 = ((long long)*(g_407658 + v50 * 4)) + &g_407658;
            /* goto v48; */
        }
        else
        {
            usage(); /* do not return */
        }
    }
    else if (v50 == -131)
    {
        v0 = 0;
        version_etc();
        exit(0x0); /* do not return */
    }
    else if (v50 == -130)
    {
        usage(); /* do not return */
    }
    else
    {
        usage(); /* do not return */
    }
}
