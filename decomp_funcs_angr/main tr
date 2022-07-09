typedef struct struct_1 {
    char padding_0[8];
    unsigned long long field_8;
} struct_1;

typedef struct struct_0 {
    unsigned long long field_0;
} struct_0;

typedef struct struct_5 {
    unsigned short field_0;
} struct_5;

typedef struct struct_8 {
    unsigned int field_0;
    char padding_4[4];
    unsigned long long field_8;
    char field_10;
    char field_11;
} struct_8;

typedef struct struct_6 {
    unsigned int field_0;
    char padding_4[4];
    unsigned long long field_8;
    char field_10;
    char padding_11[7];
    unsigned long long field_18;
} struct_6;

typedef struct struct_7 {
    unsigned int field_0;
    char padding_4[4];
    unsigned long long field_8;
} struct_7;

extern char complement;
extern char delete;
extern unsigned int g_409082;
extern unsigned int g_40910b;
extern unsigned int g_409143;
extern unsigned int g_40914b;
extern unsigned int g_40915b;
extern unsigned int g_409174;
extern unsigned int g_4091b9;
extern unsigned int g_40a188;
extern unsigned int g_40a1f8;
extern unsigned int g_40a230;
extern unsigned int g_40a268;
extern unsigned int g_40a2a8;
extern unsigned int g_40a308;
extern unsigned int g_40a370;
extern unsigned int g_40a3a8;
extern unsigned int g_40a418;
extern unsigned int g_40a488;
extern unsigned long long in_delete_set;
extern void io_buf;
extern unsigned int long_options;
extern struct_3 optind;
extern char squeeze_repeats;
extern struct_0 stdout;
extern char translating;
extern char truncate_set1;
extern unsigned long long xlate;

int main()
{
    BOT tmp_16;  // tmp #16
    BOT tmp_34;  // tmp #34
    BOT tmp_26;  // tmp #26
    BOT tmp_37;  // tmp #37
    BOT tmp_0;  // tmp #0
    BOT tmp_14;  // tmp #14
    BOT tmp_13;  // tmp #13
    char|unsigned long v0;  // [bp-0x220]
    char|unsigned long long v1;  // [bp-0x218]
    unsigned int v10;  // [bp-0x1cc]
    struct_1 *|unsigned long long v11;  // [bp-0x1c8]
    unsigned long v12;  // [bp-0x1c4]
    unsigned long|unsigned long long|struct_1 * v13;  // [bp-0x1c0]
    unsigned long long v14;  // [bp-0x1bc]
    unsigned long long v15;  // [bp-0x1b8]
    unsigned long long v16;  // [bp-0x1b4]
    unsigned long|unsigned long long v17;  // [bp-0x1b0]
    unsigned long v18;  // [bp-0x1a8]
    char v19;  // [bp-0x197]
    unsigned long long v2;  // [bp-0x210]
    char|struct_1 * v20;  // [bp-0x188]
    struct_1 *v21;  // [bp-0x180]
    char|unsigned long long v22;  // [bp-0x148]
    struct_6 *|unsigned long|unsigned long long|struct_0 * v24;  // rax
    unsigned long long v25;  // rax
    unsigned long|unsigned long long v26;  // rax
    unsigned long long v27;  // rax
    struct_1 *v28;  // rax
    unsigned long v3;  // [bp-0x208]
    unsigned long long v35;  // rax
    struct_1 *v37;  // rax
    unsigned int|unsigned long long v39;  // eax
    unsigned long long v4;  // [bp-0x200]
    struct_8 *v41;  // rax
    unsigned long long v44;  // rcx
    struct_5 *|struct_7 * v45;  // rdx
    unsigned int v46;  // edx
    unsigned int|unsigned long|unsigned long long v47;  // rbx
    unsigned long long v48;  // rbx
    unsigned int|unsigned long long [4]|unsigned long long v49;  // rbp
    unsigned long long v5;  // [bp-0x1f8]
    unsigned int|unsigned long|unsigned long long v50;  // rsi
    unsigned int|unsigned long long|struct_0 * v51;  // rdi
    unsigned long long v52;  // rdi
    unsigned long long v53;  // r8
    unsigned long long v54;  // r9
    unsigned long long v55;  // r12
    unsigned int|unsigned long long v56;  // r13d
    unsigned long long v57;  // r14
    unsigned int|unsigned long|unsigned long long v58;  // r15
    unsigned int|unsigned long long v59;  // cc_dep1
    struct_8 *v6;  // [bp-0x1f0]
    unsigned int v60;  // cc_dep1
    unsigned long v61;  // d
    unsigned int v7;  // [bp-0x1e4]
    unsigned long long v8;  // [bp-0x1e0]
    unsigned int v9;  // [bp-0x1d0]

    v49 = v51;
    set_program_name();
    setlocale();
    bindtextdomain(&g_40910b, &g_40a188);
    textdomain(&g_40910b);
    atexit();
    while (true)
    {
        v39 = getopt_long(v51, v50, &g_409143, &long_options, 0x0);
        if (((int)v39) != -1)
        {
            if (((int)v39) != 99)
            {
                if (!(((char)(v39 <= 99))))
                {
                    if (((int)v39) == 115)
                    {
                        squeeze_repeats = 1;
                    }
                    else if (((int)v39) == 116)
                    {
                        truncate_set1 = 1;
                    }
                    else if (((int)v39) == 100)
                    {
                        delete = 1;
                    }
                    else
                    {
                        usage(); /* do not return */
                    }
                }
                else
                {
                    if (((int)v39) == 65)
                    {
                        setlocale();
                        setlocale();
                    }
                    else if (!(((char)(v39 <= 65))))
                    {
                        if (((int)v39) != 67)
                        {
                            usage(); /* do not return */
                        }
                    }
                    else
                    {
                        if (((int)v39) == -131)
                        {
                            version_etc();
                            exit(0x0); /* do not return */
                        }
                        else if (((int)v39) == -130)
                        {
                            usage(); /* do not return */
                        }
                        else
                        {
                            usage(); /* do not return */
                        }
                    }
                }
            }
            if (((int)v39) == 99 || ((int)v39) == 67 && ((char)(v39 <= 99)) && ((int)v39) != 65 && !(((char)(v39 <= 65))))
            {
                complement = 1;
            }
        }
        else
        {
            v58 = ((long long)(v49 - optind));
            if (v49 - optind != 2)
            {
                translating = 0;
                if (delete == squeeze_repeats)
                {
                    v50 = 2;
                    v39 = 2;
                }
            }
            else
            {
                if (((long long)delete) == 0)
                {
                    translating = 1;
                    v39 = 2;
                }
                else
                {
                    translating = 0;
                }
                if (((long long)delete) == 0 && ((long long)squeeze_repeats) == 0 || ((long long)delete) != 0 && ((long long)squeeze_repeats) != 0)
                {
                    v37 = xmalloc();
                    v13 = v37;
                    v11 = v37;
                    v37->field_8 = 0;
                    v25 = parse_str();
                    if (((long long)v25) == 0)
                    {
                        v35 = 1;
                        return v35;
                    }
                }
            }
            if (v49 - optind != 2 || ((long long)squeeze_repeats) == 0 && ((long long)delete) != 0)
            {
                if (v49 - optind == 2 || delete != squeeze_repeats)
                {
                    v50 = 1;
                    v39 = ((int)(0 - ((int)(((long long)squeeze_repeats) < ((long long)delete))) + 2));
                }
                if (((int)(v51 - optind)) < v50)
                {
                    if (((int)(v51 - optind)) == 0)
                    {
                        error(0x0, 0x0, dcgettext(0x0, &g_40914b, 0x5));
                        usage(); /* do not return */
                    }
                    v55 = (long long)quote();
                    error(0x0, 0x0, dcgettext(0x0, &g_40915b, 0x5));
                    v50 = (squeeze_repeats == 0? "Two strings must be given when translating." : "Two strings must be given when both deleting and squeezing repeats.");
                    dcgettext(0x0, v50, 0x5);
                    __fprintf_chk();
                    usage(); /* do not return */
                }
            }
            if ((((long long)delete) == 0 || ((int)(v51 - optind)) >= v50) && (v49 - optind == 2 || ((int)(v51 - optind)) >= v50) && (((long long)delete) == 0 || ((long long)squeeze_repeats) == 0 || v49 - optind != 2) && (((long long)delete) != 0 || v49 - optind != 2 || ((long long)squeeze_repeats) != 0))
            {
                if (((int)(v51 - optind)) <= v39)
                {
                    v27 = xmalloc();
                    v13 = v27;
                    v11 = v27;
                    *(v27 + 8) = 0;
                    v25 = parse_str();
                    if (((long long)v25) != 0)
                    {
                        v49 = 0;
                    }
                    else
                    {
                        v35 = 1;
                        return v35;
                    }
                }
                else
                {
                    v55 = (long long)quote();
                    error(0x0, 0x0, dcgettext(0x0, &g_409174, 0x5));
                    v50 = "Only one string may be given when deleting without squeezing repeats.";
                    if (((int)(v51 - optind)) == 2)
                    {
                        dcgettext(0x0, v50, 0x5);
                        __fprintf_chk();
                        usage(); /* do not return */
                    }
                    usage(); /* do not return */
                }
            }
            if (...)
            {
                v49 = &v20;
                v28 = xmalloc();
                v21 = v28;
                v20 = v28;
                v28->field_8 = 0;
                v25 = parse_str();
                if (((long long)v25) == 0)
                {
                    v35 = 1;
                    return v35;
                }
            }
            if (...)
            {
                get_spec_stats();
                if (complement == 0)
                {
                    break;
                }
                v51 = &v22;
                v44 = 32;
                for (v15 = 18446744069414584318; v44 != 0; v51 += v61 * 8)
                {
                    v44 -= 1;
                    v22 = 0;
                }
                v48 = 0x100;
                while (true)
                {
                    v24 = get_next();
                    if (((int)v24) == -1)
                    {
                        break;
                    }
                    tmp_16 = ((long long)*(&stack_base-552 + ((long long)v24) + 224));
                    *(&stack_base-552 + ((long long)v24) + 224) = 1;
                    v48 = ((long long)(((int)v48) - (((int)tmp_16) ^ 1)));
                }
                v17 = ((long long)v48);
                break;
            }
        }
    }
    v47 = v18;
    if (v18 == 0)
    {
        if (v49 != 0)
        {
            v56 = v17;
            get_spec_stats();
            v24 = *(v49 + 24);
            if (v17 >= *(v49 + 24))
            {
                if (*(v49 + 32) == 1)
                {
                    *(*(v49 + 40) + 24) = v56 - v24;
                    *(v49 + 24) = v56;
                    if (translating == 0)
                    {
                        error(0x1, 0x0, dcgettext(0x0, &g_40a488, 0x5));
                    }
                }
            }
            if (v17 < *(v49 + 24) || *(v49 + 32) != 1)
            {
                v24 = *(v49 + 32);
                if (!(*(v49 + 32) <= 1))
                {
                    error(0x1, 0x0, dcgettext(0x0, &g_40a230, 0x5));
                }
                else if (translating == 0)
                {
                    if (v24 != 0)
                    {
                        error(0x1, 0x0, dcgettext(0x0, &g_40a488, 0x5));
                    }
                }
            }
            if (translating != 0 && (*(v49 + 32) <= 1 || *(v49 + 32) == 1) && (*(v49 + 32) <= 1 || v17 >= *(v49 + 24)))
            {
                if (!(*(v49 + 48) == 0))
                {
                    error(0x1, 0x0, dcgettext(0x0, &g_40a268, 0x5));
                }
                else if (*(v49 + 50) == 0)
                {
                    v4 = v17;
                    v3 = *(v49 + 24);
                    if (complement == 0)
                    {
                        v57 = ((long long)*(v49 + 49));
                        if (((long long)*(v49 + 49)) != 0)
                        {
                            v24 = __ctype_b_loc();
                            v50 = 0;
                            v53 = 0;
                            v45 = v24->field_0;
                            v54 = v24->field_0 + 0x200;
                            do
                            {
                                v53 = v53 - 18446744069414584319 - ((long long)(((long long)(v45->field_0 & 0x100)) < 1));
                                v50 = v50 - 18446744069414584319 - ((long long)(((long long)(v45->field_0 & 0x200)) < 1));
                                v45 += 2;
                            }
                            while (v45 != v54);
                            tmp_16 = v13;
                            v0 = v57;
                            v56 = ((long long)v0);
                            *(v49 + 16) = 18446744069414584318;
                            v5 = tmp_16;
                            tmp_34 = *(v49 + 8);
                            v7 = ((int)v58);
                            v58 = v49;
                            v6 = tmp_34;
                            v15 = 18446744069414584318;
                            v1 = v50 - 1;
                            v8 = v47;
                            v2 = v53;
                            while (true)
                            {
                                v47 = get_next();
                                v24 = get_next();
                                if (((long long)v56) != 0)
                                {
                                    if (((int)v10) != 2)
                                    {
                                        if (v0 == 0)
                                        {
                                            error(0x1, 0x0, dcgettext(0x0, &g_40a308, 0x5));
                                        }
                                        else if (v9 == 2)
                                        {
                                            error(0x1, 0x0, dcgettext(0x0, &g_40a308, 0x5));
                                        }
                                    }
                                }
                                else
                                {
                                    if (((int)v10) == 2)
                                    {
                                        /* goto 4206586; */
                                    }
                                }
                                if (((int)v10) != 2 && (((long long)v56) == 0 || v9 != 2) && (((long long)v56) == 0 || v0 != 0))
                                {
                                    v60 = ((int)v9);
                                    v52 = v1;
                                    tmp_26 = *(*((long long *)(((char *)&v11) + 8)) + 8);
                                    v15 = 18446744069414584319;
                                    v13 = tmp_26;
                                    tmp_37 = *(*((long long *)(((char *)&v13) + -4)) + 8);
                                    v14 = 18446744069414584319;
                                    v12 = tmp_37;
                                    if (v60 == 1)
                                    {
                                        v52 = v2 - 1;
                                    }
                                    tmp_0 = v17 - v52;
                                    v59 = v10;
                                    v51 = v1;
                                    v17 = tmp_0;
                                    if (v59 == 1)
                                    {
                                        v51 = v2 - 1;
                                    }
                                    v44 = *((long long *)(((char *)&v15) + 4)) - rdi<8>;
                                    v16 = *((long long *)(((char *)&v15) + 4)) - rdi<8>;
                                }
                                if (((long long)v56) == 0 || ((int)v10) == 2 || v9 != 2 && v0 != 0)
                                {
                                    v0 = ((char)(v15 == 18446744069414584319));
                                    v56 = ((char)(*((long long *)(((char *)&v13) + 4)) == 18446744069414584319));
                                    v59 = v47;
                                    if (!(((char)(v47 + 1 == 0))))
                                    {
                                        v59 = v24;
                                    }
                                    v49 = v58;
                                    v47 = v8;
                                    v58 = ((int)v7);
                                    if (v4 < *((long long *)(((char *)&v15) + 8)))
                                    {
                                        __assert_fail(); /* do not return */
                                    }
                                    else if (v3 >= v49[3])
                                    {
                                        v13 = v5;
                                        v49[1] = v6;
                                        v4 = *((long long *)(((char *)&v15) + 8));
                                        v3 = v49[3];
                                        break;
                                    }
                                    else
                                    {
                                        __assert_fail(); /* do not return */
                                    }
                                }
                            }
                        }
                    }
                }
                else
                {
                    error(0x1, 0x0, dcgettext(0x0, &g_40a2a8, 0x5));
                }
            }
        }
        if (...)
        {
            if (v3 != 0)
            {
                v41 = *(v49 + 8);
                v46 = ((int)*(*(v49 + 8)));
                v59 = ((long long)*(*(v49 + 8)));
                if (!(*(*(v49 + 8)) != 1))
                {
                    v56 = ((long long)v41->field_11);
                    /* goto 4205114; */
                }
                else if (!(((char)[D] amd64g_calculate_condition(0x6<64>, 0x7<64>, cc_dep1<8>, 0x1<64>, cc_ndep<8>))))
                {
                    if (!(v46 != 2))
                    {
                        error(0x1, 0x0, dcgettext(0x0, &g_40a3a8, 0x5));
                    }
                }
            }
            else
            {
                error(0x1, 0x0, dcgettext(0x0, &g_40a370, 0x5));
            }
        }
        if (...)
        {
            v56 = ((long long)v41->field_10);
        }
        if (...)
        {
            v24 = xmalloc();
            v45 = *(v49 + 8);
            v24->field_8 = 0;
            v24->field_0 = 4;
            v24->field_10 = v56;
            v24->field_18 = v4 - v3;
            if (v45 != 0)
            {
                v45->field_8 = v24;
                *(v49 + 8) = v24;
                *(v49 + 24) = v17;
            }
            else
            {
                append_repeated_char.part.0(); /* do not return */
            }
        }
        if (...)
        {
            if (v19 != 0)
            {
                if (*(v49 + 24) == v17)
                {
                    *(v49 + 16) = 18446744069414584318;
                    v56 = get_next();
                    if (v56 == -1)
                    {
                        error(0x1, 0x0, dcgettext(0x0, &g_40a418, 0x5));
                    }
                    else
                    {
                        while (true)
                        {
                            v24 = get_next();
                            error(0x1, 0x0, dcgettext(0x0, &g_40a418, 0x5));
                        }
                    }
                }
                else
                {
                    error(0x1, 0x0, dcgettext(0x0, &g_40a418, 0x5));
                }
            }
        }
        if (...)
        {
            fadvise();
            v1 = squeeze_repeats;
            if (v58 == 1)
            {
                if (((long long)squeeze_repeats) != 0)
                {
                    set_initialize();
                    squeeze_filter.constprop.0();
                }
            }
            if (((long long)squeeze_repeats) == 0 || v58 != 1)
            {
                if (delete != 0)
                {
                    if (!(v58 != 1))
                    {
                        set_initialize();
                        while (true)
                        {
                            v47 = (long long)read_and_delete();
                            if (v47 != 0)
                            {
                                v26 = fwrite_unlocked(&io_buf, 0x1, v47, stdout);
                                error(0x1, *(__errno_location()), dcgettext(0x0, &g_409082, 0x5));
                            }
                            else
                            {
                                break;
                            }
                        }
                    }
                    else if (v58 == 2 && v1 != 0)
                    {
                        set_initialize();
                        set_initialize();
                        squeeze_filter.constprop.0();
                        /* goto 4205347; */
                    }
                }
                if (delete == 0 || v1 == 0 && v58 != 1 || v58 != 2 && v58 != 1)
                {
                    if (translating != 0)
                    {
                        v26 = 0;
                        if (complement == 0)
                        {
                            do
                            {
                                *(v26 + 4251872) = v26;
                                v26 += 1;
                            }
                            while (v26 != 0x100);
                            *(v49 + 16) = 18446744069414584318;
                            v15 = 18446744069414584318;
                            v0 = &stack_base-460;
                            while (true)
                            {
                                v47 = (long long)get_next();
                                v26 = get_next();
                                if (v9 == 0 && v10 == 1)
                                {
                                    v47 = 0;
                                    v56 = *(__ctype_b_loc());
                                    do
                                    {
                                        if (((long long)(*(v56 + (v47 << 1) + 1) & 2)) != 0)
                                        {
                                            v26 = ((long long)*(*(__ctype_toupper_loc()) + v47 * 4));
                                            tmp_14 = v26;
                                            *(v47 + 4251872) = tmp_14;
                                        }
                                        v47 += 1;
                                    }
                                    while (v47 != 0x100);
                                    /* goto 4205724; */
                                }
                                if (v9 == 1 && v10 == 0)
                                {
                                    v47 = 0;
                                    v56 = *(__ctype_b_loc());
                                    do
                                    {
                                        if (((long long)(*(v56 + (v47 << 1) + 1) & 1)) != 0)
                                        {
                                            v26 = ((long long)*(*(__ctype_tolower_loc()) + v47 * 4));
                                            tmp_14 = v26;
                                            *(v47 + 4251872) = tmp_14;
                                        }
                                        v47 += 1;
                                    }
                                    while (v47 != 0x100);
                                }
                                if (((int)v47) == -1 && (v9 == 1 || v9 != 0 || v10 != 1) && (v9 == 0 || v9 != 1 || v10 != 0) && (v9 != 0 || v10 != 0 || v10 != 1))
                                {
                                    break;
                                }
                                if (((int)v47) != -1 && (v9 == 1 || v9 != 0 || v10 != 1) && (v9 == 0 || v9 != 1 || v10 != 0) && (v9 != 0 || v10 != 0 || v10 != 1))
                                {
                                    if (((int)v26) != -1)
                                    {
                                        *(v47 + 4251872) = v26;
                                    }
                                    else
                                    {
                                        if (((char)(((int)v47) + 1 == 0)) || truncate_set1 != 0)
                                        {
                                            break;
                                        }
                                        __assert_fail(); /* do not return */
                                    }
                                }
                                if (v9 == 1 && v10 == 0 || v9 == 0 && v10 == 1 || ((int)v47) != -1 && ((int)v26) != -1 && v10 != 2)
                                {
                                    tmp_13 = *(v13 + 8);
                                    v15 = 18446744069414584319;
                                    v13 = tmp_13;
                                    v26 = *(*(v49 + 8) + 8);
                                    *(v49 + 16) = 18446744069414584319;
                                    *(v49 + 8) = v26;
                                }
                            }
                        }
                        else
                        {
                            set_initialize();
                            *(v49 + 16) = 18446744069414584318;
                            v26 = 0;
                            do
                            {
                                *(v26 + 4251872) = v26;
                                v26 += 1;
                            }
                            while (v26 != 0x100);
                            while (true)
                            {
                                if (*(in_delete_set + rbx<8>) == 0)
                                {
                                    v26 = get_next();
                                    if (((int)v26) != -1)
                                    {
                                        *(xlate + rbx<8>) = v26;
                                    }
                                    else
                                    {
                                        if (truncate_set1 != 0)
                                        {
                                            break;
                                        }
                                        __assert_fail(); /* do not return */
                                    }
                                }
                                if (((int)v26) != -1 || *(in_delete_set + rbx<8>) != 0)
                                {
                                    v47 = rbx<8> + 1;
                                    if (v47 == 0x100)
                                    {
                                        break;
                                    }
                                }
                            }
                        }
                        if (v1 != 0)
                        {
                            set_initialize();
                            squeeze_filter.constprop.0();
                        }
                        else
                        {
                            while (true)
                            {
                                v47 = (long long)read_and_xlate();
                                if (v47 != 0)
                                {
                                    v26 = fwrite_unlocked(&io_buf, 0x1, v47, stdout);
                                    error(0x1, *(__errno_location()), dcgettext(0x0, &g_409082, 0x5));
                                }
                                else
                                {
                                    break;
                                }
                            }
                        }
                    }
                }
            }
            v35 = close(0x0);
            if (((int)v35) == 0)
            {
                return v35;
            }
            error(0x1, *(__errno_location()), dcgettext(0x0, &g_4091b9, 0x5));
        }
    }
    else
    {
        error(0x1, 0x0, dcgettext(0x0, &g_40a1f8, 0x5));
    }
}
