typedef struct struct_2 {
    unsigned int field_0;
} struct_2;

typedef struct struct_3 {
    unsigned long long field_0;
} struct_3;

typedef struct struct_5 {
    char field_0;
} struct_5;

extern unsigned int bsd_reversed;
extern char digest_delim;
extern unsigned long long digest_hex_bytes;
extern unsigned int g_40c099;
extern unsigned int g_40c0eb;
extern unsigned int g_40c0f3;
extern unsigned int g_40c102;
extern unsigned int g_40c13c;
extern unsigned int g_40c830;
extern unsigned int g_40ca98;
extern unsigned int g_40caf8;
extern unsigned int g_40cb28;
extern unsigned int g_40cb58;
extern unsigned int g_40cb88;
extern unsigned int g_40cbb8;
extern unsigned int g_40cbe8;
extern struct_2 g_40cc20;
extern char have_read_stdin;
extern char ignore_missing;
extern unsigned int long_options;
extern unsigned long long min_digest_line_length;
extern struct_2 optind;
extern char quiet;
extern char status_only;
extern struct_3 stdin;
extern unsigned long long stdout[7];
extern char strict;
extern char warn;

int main()
{
    BOT tmp_6;  // tmp #6
    BOT tmp_2;  // tmp #2
    unsigned long v0;  // [bp-0x168]
    unsigned long long v1;  // [bp-0x160]
    unsigned long|unsigned long long v10;  // [bp-0x120]
    unsigned long|unsigned long long v11;  // [bp-0x118]
    unsigned long|unsigned long long v12;  // [bp-0x110]
    unsigned long|unsigned long long v13;  // [bp-0x108]
    char v14;  // [bp-0x100]
    char v15;  // [bp-0xff]
    char|unsigned long long v16;  // [bp-0xfe]
    char v17;  // [bp-0xfd]
    unsigned int v18;  // [bp-0xfc]
    char v19;  // [bp-0xe9]
    char v2;  // [bp-0x151]
    unsigned long long v20;  // [bp-0xe8]
    unsigned long long v21;  // [bp-0xe0]
    char v22;  // [bp-0xd8]
    char v24;  // [bp+0xf]
    char v25;  // [bp+0x60]
    unsigned int|char *|struct_2 *|unsigned long long v26;  // eax
    unsigned int|unsigned long long v27;  // rax
    struct_3 * v3;  // [bp-0x150]
    char *v31;  // rax
    char *v37;  // rax
    unsigned long long v38;  // rax
    unsigned long v4;  // [bp-0x148]
    unsigned long long v40;  // rcx
    unsigned long long v41;  // rcx
    char *|unsigned long|unsigned long long v42;  // rdx
    unsigned int v43;  // edx
    unsigned long long v44;  // rbx
    unsigned int v45;  // ebx
    char [2]|unsigned int|unsigned long|unsigned long long v46;  // rbp
    unsigned int|char *|unsigned long|unsigned long long v47;  // rsi
    struct_5 *|char *|struct_2 *|unsigned long long v48;  // rdi
    char *|unsigned long long v49;  // r8
    unsigned long|unsigned long long v5;  // [bp-0x140]
    unsigned long long v51;  // r10
    struct_5 *|unsigned long long v52;  // r12
    unsigned long long v53;  // r12
    unsigned int|unsigned long|unsigned long long v54;  // r13
    char *|unsigned long long v55;  // r15
    unsigned int|char|unsigned long long v56;  // cc_dep1
    unsigned long long v57;  // cc_dep2
    unsigned long v58;  // d
    unsigned int v6;  // [bp-0x138]
    unsigned int|char|unsigned long long v7;  // [bp-0x134]
    char *|unsigned long|unsigned long long v8;  // [bp-0x130]
    struct_3 * v9;  // [bp-0x128]

    v24 = 1;
    /* goto 4204557; */
    strict = 1;
    /* goto 4204557; */
    ignore_missing = 1;
    /* goto 4204557; */
    digest_delim = 0;
    /* goto 4204557; */
    status_only = 0;
    warn = 0;
    quiet = 1;
    /* goto 4204557; */
    status_only = 1;
    warn = 0;
    quiet = 0;
    /* goto 4204557; */
    status_only = 0;
    warn = 1;
    quiet = 0;
    /* goto 4204557; */
    v25 = 1;
    v54 = 1;
    /* goto 4204557; */
    v54 = -1;
    v46 = v48;
    set_program_name();
    setlocale();
    bindtextdomain(&g_40c099, &g_40c830);
    textdomain(&g_40c099);
    atexit();
    setvbuf(stdout, NULL, 0x1, 0x0);
    v14 = 0;
    v2 = 0;
    v26 = getopt_long(((int)v48), ((int)((unsigned int)v47)), &g_40c0eb, &long_options, 0x0);
    if (!(v26 != -1))
    {
        min_digest_line_length = 130;
        digest_hex_bytes = 128;
        if (((long long)(((char)(v54 == 0)) & v14)) == 0)
        {
            if (digest_delim != 10)
            {
                if (v2 == 0)
                {
                }
                else
                {
                    error(0x0, 0x0, dcgettext(0x0, ((unsigned int)v47), v43));
                    usage(); /* do not return */
                }
            }
            if (v2 != 0)
            {
                if (v14 != 0)
                {
                    error(0x0, 0x0, dcgettext(0x0, ((unsigned int)v47), v43));
                    usage(); /* do not return */
                }
                else
                {
                    if (v54 >= 0)
                    {
                        error(0x0, 0x0, dcgettext(0x0, ((unsigned int)v47), v43));
                        usage(); /* do not return */
                    }
                }
            }
            if (ignore_missing == 0)
            {
                if (status_only == 0)
                {
                    if (v2 == 0)
                    {
                        if (warn != 0)
                        {
                            error(0x0, 0x0, dcgettext(0x0, ((unsigned int)v47), v43));
                            usage(); /* do not return */
                        }
                        if (quiet == 1 && warn == 0)
                        {
                            error(0x0, 0x0, dcgettext(0x0, ((unsigned int)v47), v43));
                            usage(); /* do not return */
                        }
                    }
                }
                if (v2 == 0 && status_only != 0)
                {
                    error(0x0, 0x0, dcgettext(0x0, ((unsigned int)v47), v43));
                    usage(); /* do not return */
                }
            }
            if (v2 == 0)
            {
                if (ignore_missing != 0)
                {
                    error(0x0, 0x0, dcgettext(0x0, ((unsigned int)v47), v43));
                    usage(); /* do not return */
                }
                if (...)
                {
                    error(0x0, 0x0, dcgettext(0x0, ((unsigned int)v47), v43));
                    usage(); /* do not return */
                }
            }
            if (...)
            {
                v9 = ((unsigned int)v47) + v46 * 8;
                if (optind == ((int)v46))
                {
                    v9->field_0 = "-";
                    v9 += 8;
                }
                v3 = ((unsigned int)v47) + ((long long)optind) * 8;
                if (v9 > v3)
                {
                    v56 = v54;
                    v15 = 1;
                    v18 = (v56 == 1? 42 : 32);
                    v17 = ((char)(v56 == 1? 42 : 32));
                    do
                    {
                        v56 = ((char)v2);
                        v4 = v3->field_0;
                        if (v56 != 0)
                        {
                            v6 = strcmp(v3->field_0, "-");
                            if (v6 == 0)
                            {
                                have_read_stdin = 1;
                                v52 = stdin;
                                v4 = dcgettext(0x0, &g_40c0f3, 0x5);
                            }
                            else
                            {
                                v52 = (long long)fopen_safer();
                                if (v52 == 0)
                                {
                                    v52 = (long long)quotearg_n_style_colon();
                                    error(0x0, *(__errno_location()), "%s");
                                    v26 = 0;
                                    /* goto 4206364; */
                                }
                            }
                            if (v6 == 0 || v52 != 0)
                            {
                                v16 = 0;
                                v44 = 1;
                                v20 = 0;
                                v21 = 0;
                                v7 = 0;
                                v11 = 0;
                                v10 = 0;
                                v5 = 0;
                                while (true)
                                {
                                    v55 = __getdelim(&v20, &v21, 0xa, v52);
                                    if (!(((char)[D] amd64g_calculate_condition(0x4<64>, 0x24<64>, Shr(Load(addr=0x4110f8<64>, size=8, endness=Iend_LE), 0x1<8>), Load(addr=0x4110f8<64>, size=8, endness=Iend_LE), cc_ndep<8>))) && *(v20) != 35)
                                    {
                                        v42 = ((long long)(*(0 + v55 - ((long long)(*(0 + v55 + 1) == 10)) - ((long long)[D] amd64g_calculate_condition(0xf<64>, 0x14<64>, Sub(r15<8>, Conv(1->64, (Load(addr=((0x0<64> + r15<8>) - 0x1<64>), size=1, endness=Iend_LE) == 0xa<8>))), 0x0<64>, cc_ndep<8>))) == 13));
                                        v56 = v55 - ((long long)(*(0 + v55 + 1) == 10));
                                        v55 = ...;
                                        if (v56 != v42)
                                        {
                                            *(v55) = 0;
                                            v26 = 0;
                                            v41 = ((long long)*(v20));
                                            if (*(NULL) == 32 || *(v20) == 9)
                                            {
                                                do
                                                {
                                                    v26 += 1;
                                                    v41 = ((long long)*(v26));
                                                }
                                                while (v41 == 9);
                                            }
                                            v42 = 0;
                                            if (v41 == 92)
                                            {
                                                v42 = ((long long)v2);
                                            }
                                            v49 = 0 + rax<8>;
                                            v40 = 6;
                                            v48 = "SHA512";
                                            v47 = 0 + rax<8>;
                                            while (v40 != 0)
                                            {
                                                v40 -= 1;
                                                v56 = ((long long)*(v47));
                                                v57 = ((long long)*(v48));
                                                v48 += v58;
                                                v47 += v58;
                                                break;
                                            }
                                            v56 = ((long long)(((char)(v56 > v57)) - 0 - ((char)(v56 < v57))));
                                            if (((char)v56) == 0)
                                            {
                                                v40 = ((long long)*(0 + v26 + 6));
                                                if (*(0 + v26 + 6) == 32)
                                                {
                                                    v40 = ((long long)*(0 + v26 + 7));
                                                }
                                                if (v40 == 40)
                                                {
                                                    v47 += 1;
                                                    v55 -= v47;
                                                    if (v55 != v47)
                                                    {
                                                        v46 = 0 + v47;
                                                        v55 -= 1;
                                                        if (v55 == 1)
                                                        {
                                                        }
                                                        else
                                                        {
                                                            while (true)
                                                            {
                                                                v51 = v46 + v55;
                                                                v55 -= 1;
                                                            }
                                                        }
                                                    }
                                                }
                                            }
                                            else if (v55 - v26 >= ((long long)(*(v8) == 92)) + min_digest_line_length)
                                            {
                                                v47 = 0 + v26 + digest_hex_bytes;
                                                v40 = v26 + digest_hex_bytes;
                                                v26 = ((long long)*(0 + v26 + digest_hex_bytes));
                                                tmp_6 = v26;
                                            }
                                        }
                                    }
                                    if (...)
                                    {
                                        *(v47) = 0;
                                        v13 = v40;
                                        v12 = v42;
                                        v8 = v49;
                                        v26 = hex_digits();
                                    }
                                    if (...)
                                    {
                                        v51 = v46;
                                        v55 = 0;
                                    }
                                    if (...)
                                    {
                                        bsd_reversed = 1;
                                        /* goto 4205918; */
                                    }
                                    if (...)
                                    {
                                        bsd_reversed = 0;
                                        /* goto 4205918; */
                                    }
                                    if (...)
                                    {
                                        v26 = filename_unescape();
                                        if (v26 == 0)
                                        {
                                            /* goto 4205639; */
                                        }
                                    }
                                    if (...)
                                    {
                                        v46 = 0 + v26;
                                        if (((long long)v12) != 0)
                                        {
                                            v8 = v8;
                                            v26 = ((char)((long long)filename_unescape() != 0));
                                        }
                                    }
                                    if (...)
                                    {
                                        *(v51) = 0;
                                        v42 = ((long long)*(v46 + v55 + 1));
                                        v26 = v55 + 1;
                                        do
                                        {
                                            v26 += 1;
                                            v42 = ((long long)*(v46 + v26));
                                        }
                                        while (v42 == 9);
                                        if (v42 == 61)
                                        {
                                            v42 = v46 + v26 + 1;
                                            do
                                            {
                                                v26 = ((long long)*(v42));
                                                v49 = v42;
                                                v42 += 1;
                                                tmp_2 = v26;
                                            }
                                            while (v26 == 9);
                                            v8 = v49;
                                            v26 = hex_digits();
                                        }
                                    }
                                    if (...)
                                    {
                                        /* goto 4205639; */
                                    }
                                    if (...)
                                    {
                                        /* goto 4205960; */
                                    }
                                    if (...)
                                    {
                                        v5 += 1;
                                        if (warn != 0)
                                        {
                                            v55 = (long long)quotearg_n_style_colon();
                                            error(0x0, 0x0, dcgettext(0x0, &g_40ca98, 0x5));
                                        }
                                    }
                                    if (...)
                                    {
                                        v7 = 0;
                                        if (status_only == 0)
                                        {
                                            v8 = v49;
                                            v26 = ((int)(strchr(v46, 0xa) != 0));
                                            v7 = v26;
                                        }
                                        v8 = v49;
                                        if (((long long)v12) == 0)
                                        {
                                            v10 += 1;
                                            if (status_only == 0)
                                            {
                                                if (v7 != 0)
                                                {
                                                    v26 = *(stdout + 40);
                                                    if (*(stdout + 40) < *(stdout + 48))
                                                    {
                                                        *(stdout + 40) = *(stdout + 40) + 1;
                                                        *(v26) = 92;
                                                    }
                                                    else
                                                    {
                                                        __overflow(((int)stdout));
                                                    }
                                                }
                                                print_filename();
                                                v47 = "FAILED open or read";
                                            }
                                        }
                                        else if (v19 == 0 || ignore_missing == 0)
                                        {
                                            v8 = v8;
                                            v51 = digest_hex_bytes >> 1;
                                            if (!(((char)[D] amd64g_calculate_condition(0x4<64>, 0x24<64>, Shr(Load(addr=0x4110f8<64>, size=8, endness=Iend_LE), 0x1<8>), Load(addr=0x4110f8<64>, size=8, endness=Iend_LE), cc_ndep<8>))))
                                            {
                                                v13 = digest_hex_bytes >> 1;
                                                v12 = (long long)digest_file.isra.0();
                                                v48 = *(__ctype_tolower_loc());
                                                while (true)
                                                {
                                                    v26 = ((int)*(&stack_base-136 + rdx<8>));
                                                    if (...)
                                                    {
                                                        v42 = rdx<8> + 1;
                                                        v42 = v13;
                                                        break;
                                                    }
                                                    if (...)
                                                    {
                                                        v11 += 1;
                                                    }
                                                }
                                                if (...)
                                                {
                                                    v7 = v2;
                                                }
                                                else if (...)
                                                {
                                                    v26 = *(stdout + 40);
                                                }
                                                else if (...)
                                                {
                                                    v12 = v42;
                                                    v8 = v51;
                                                    print_filename();
                                                }
                                                else if (...)
                                                {
                                                    v16 = status_only;
                                                }
                                            }
                                            else
                                            {
                                                v42 = 0;
                                            }
                                            if (((char)[D] amd64g_calculate_condition(0x4<64>, 0x24<64>, Shr(Load(addr=0x4110f8<64>, size=8, endness=Iend_LE), 0x1<8>), Load(addr=0x4110f8<64>, size=8, endness=Iend_LE), cc_ndep<8>)) || ((long long)(v52->field_0 & 48)) != 0)
                                            {
                                                v16 = status_only;
                                                if (((long long)status_only) == 0)
                                                {
                                                    v16 = quiet;
                                                    if (((long long)quiet) == 0)
                                                    {
                                                        if (v7 != 0)
                                                        {
                                                            v16 = v12;
                                                        }
                                                        else
                                                        {
                                                            v7 = v12;
                                                            print_filename();
                                                            v16 = v7;
                                                        }
                                                    }
                                                }
                                                if (!(((char)[D] amd64g_calculate_condition(0x4<64>, 0x24<64>, Shr(Load(addr=0x4110f8<64>, size=8, endness=Iend_LE), 0x1<8>), Load(addr=0x4110f8<64>, size=8, endness=Iend_LE), cc_ndep<8>))) || ((long long)quiet) == 0 && ((long long)status_only) == 0 && v7 != 0)
                                                {
                                                    v26 = *(stdout + 40);
                                                    if (*(stdout + 40) < *(stdout + 48))
                                                    {
                                                        *(stdout + 40) = *(stdout + 40) + 1;
                                                        *(v26) = 92;
                                                    }
                                                    else
                                                    {
                                                        v12 = v42;
                                                        v8 = digest_hex_bytes >> 1;
                                                        __overflow(((int)stdout));
                                                        v51 = v8;
                                                    }
                                                    v12 = v42;
                                                    v8 = v51;
                                                    print_filename();
                                                    if (v8 != v12)
                                                    {
                                                        v47 = "FAILED";
                                                    }
                                                }
                                            }
                                        }
                                        if (...)
                                        {
                                            v47 = "OK";
                                        }
                                        if (...)
                                        {
                                            __printf_chk(0x1, ": %s\n", dcgettext(0x0, v47, 0x5));
                                        }
                                        v7 = v2;
                                    }
                                    if (...)
                                    {
                                        v44 += 1;
                                        v53 = (long long)quotearg_n_style_colon();
                                        error(0x1, 0x0, dcgettext(0x0, &g_40c102, 0x5));
                                    }
                                    if (...)
                                    {
                                        rpl_free();
                                        v48 = v52;
                                        v45 = ((int)(v52->field_0 & 32));
                                        v46 = 0;
                                        if (v6 == 0)
                                        {
                                            clearerr_unlocked(v48);
                                        }
                                        else
                                        {
                                            v27 = rpl_fclose();
                                            if (v27 != 0)
                                            {
                                                if (v45 != 0)
                                                {
                                                    v52 = (long long)quotearg_n_style_colon();
                                                    /* goto 4206997; */
                                                }
                                                else
                                                {
                                                    v46 = ((long long)*(__errno_location()));
                                                }
                                            }
                                        }
                                        if (v6 == 0 || v45 == 0 || v27 == 0)
                                        {
                                            if (v46 < 0)
                                            {
                                                if (v7 != 0)
                                                {
                                                    if (status_only == 0)
                                                    {
                                                        if (v5 != 0)
                                                        {
                                                            error(0x0, 0x0, dcngettext(0x0, &g_40cb28, &g_40caf8, ((int)v5), 0x5));
                                                        }
                                                        if (v10 != 0)
                                                        {
                                                            error(0x0, 0x0, dcngettext(0x0, &g_40cb88, &g_40cb58, ((int)v10), 0x5));
                                                        }
                                                        if (v11 != 0)
                                                        {
                                                            error(0x0, 0x0, dcngettext(0x0, &g_40cbe8, &g_40cbb8, ((int)v11), 0x5));
                                                        }
                                                        if (v16 == 0 && ignore_missing != 0)
                                                        {
                                                            v52 = (long long)quotearg_n_style_colon();
                                                        }
                                                    }
                                                    if (v16 == 0 && (ignore_missing == 0 || status_only != 0))
                                                    {
                                                        v27 = 0;
                                                        /* goto 4206361; */
                                                    }
                                                    if ((v10 | v11) == 0 && v16 != 0)
                                                    {
                                                        v27 = ((long long)(((int)strict) ^ 1 | v42));
                                                        /* goto 4206361; */
                                                    }
                                                }
                                                else
                                                {
                                                    v52 = (long long)quotearg_n_style_colon();
                                                }
                                                if (v7 == 0 || v16 == 0 && status_only == 0 && ignore_missing != 0)
                                                {
                                                    error(0x0, 0x0, dcgettext(0x0, ((unsigned int)v47), 0x5));
                                                }
                                                if ((v10 | v11) != 0 || v16 != 0)
                                                {
                                                    v27 = 0;
                                                }
                                                v26 = ((long long)(((unsigned int)v27) & 1));
                                                break;
                                            }
                                            else
                                            {
                                                v52 = (long long)quotearg_n_style_colon();
                                            }
                                        }
                                        if ((v46 == 0 || v6 != 0) && (v46 == 0 || v45 != 0) && (v46 == 0 || v27 != 0) && (v6 != 0 || v46 >= 0) && (v45 != 0 || v46 >= 0) && (v27 != 0 || v46 >= 0))
                                        {
                                            v46 = 0;
                                            v42 = dcgettext(0x0, &g_40c13c, 0x5);
                                        }
                                        if (v46 >= 0 || v6 != 0 && v45 != 0 && v27 != 0)
                                        {
                                            error(0x0, v46, v42);
                                            v26 = 0;
                                            break;
                                        }
                                    }
                                }
                            }
                            v15 &= al<1>;
                        }
                        else
                        {
                            v26 = digest_file.isra.0();
                            if (((long long)v26) == 0)
                            {
                                v15 = 0;
                            }
                            else
                            {
                                if (digest_delim == 10)
                                {
                                    v26 = strchr(v3->field_0, 0x5c);
                                    if (v26 == 0)
                                    {
                                        v26 = strchr(v3->field_0, 0xa);
                                        if (v26 == 0)
                                        {
                                            v26 = strchr(v3->field_0, 0xd);
                                        }
                                    }
                                    if (v26 != 0 || v26 != 0 || v26 != 0)
                                    {
                                        v26 = *(stdout + 40);
                                        if (*(stdout + 40) < *(stdout + 48))
                                        {
                                            *(stdout + 40) = *(stdout + 40) + 1;
                                            *(v26) = 92;
                                        }
                                        else
                                        {
                                            __overflow(((int)stdout));
                                        }
                                    }
                                }
                                if (v14 == 0)
                                {
                                    v31 = *(stdout + 40);
                                    if (*(stdout + 40) < *(stdout + 48))
                                    {
                                        *(stdout + 40) = *(stdout + 40) + 1;
                                        *(v31) = 32;
                                    }
                                    else
                                    {
                                        __overflow(((int)stdout));
                                    }
                                    v37 = *(stdout + 40);
                                    if (*(stdout + 40) < *(stdout + 48))
                                    {
                                        *(stdout + 40) = *(stdout + 40) + 1;
                                        *(v37) = v17;
                                    }
                                    else
                                    {
                                        __overflow(((int)stdout));
                                    }
                                    print_filename();
                                }
                                else
                                {
                                    fwrite_unlocked("SHA512", 0x1, 0x6, stdout);
                                    fwrite_unlocked(" (", 0x1, 0x2, stdout);
                                    print_filename();
                                    fwrite_unlocked(") = ", 0x1, 0x4, stdout);
                                    if (((char)[D] amd64g_calculate_condition(0x4<64>, 0x24<64>, Shr(Load(addr=0x4110f8<64>, size=8, endness=Iend_LE), 0x1<8>), Load(addr=0x4110f8<64>, size=8, endness=Iend_LE), cc_ndep<8>)))
                                    {
                                        /* goto 4207363; */
                                    }
                                }
                                if (!(((char)[D] amd64g_calculate_condition(0x4<64>, 0x24<64>, Shr(Load(addr=0x4110f8<64>, size=8, endness=Iend_LE), 0x1<8>), Load(addr=0x4110f8<64>, size=8, endness=Iend_LE), cc_ndep<8>))))
                                {
                                    v54 = 0;
                                    while (true)
                                    {
                                        v42 = ((long long)v22);
                                        v54 += 1;
                                        __printf_chk(0x1, "%02x", v42);
                                        if (v54 >= digest_hex_bytes >> 1)
                                        {
                                            break;
                                        }
                                    }
                                }
                                v26 = *(stdout + 40);
                                if (*(stdout + 40) < *(stdout + 48))
                                {
                                    *(stdout + 40) = *(stdout + 40) + 1;
                                    *(v26) = digest_delim;
                                }
                                else
                                {
                                    __overflow(((int)stdout));
                                }
                            }
                        }
                        v3 += 8;
                    }
                    while (v9 > v3);
                }
                else
                {
                    v15 = 1;
                }
                if (have_read_stdin == 0)
                {
                    return ((long long)(((int)v15) ^ 1));
                }
                v56 = rpl_fclose();
                if (!(((char)(v56 + 1 == 0))))
                {
                    return ((long long)(((int)v15) ^ 1));
                }
                else
                {
                    error(0x1, *(__errno_location()), dcgettext(0x0, &g_40c0f3, 0x5));
                }
            }
        }
        else
        {
            error(0x0, 0x0, dcgettext(0x0, ((unsigned int)v47), v43));
            usage(); /* do not return */
        }
    }
    else if (!(v26 <= 132))
    {
        usage(); /* do not return */
    }
    else if (v26 > 97)
    {
        v26 = ((long long)v26) - 98;
        if (((int)v26) <= 34)
        {
            v38 = ((long long)*(g_40cc20 + v26 * 4)) + &g_40cc20;
            /* goto v38; */
        }
        else
        {
            usage(); /* do not return */
        }
    }
    else if (v26 == -131)
    {
        v1 = 0;
        v0 = "David Madore";
        version_etc();
        exit(0x0); /* do not return */
    }
    else if (v26 == -130)
    {
        usage(); /* do not return */
    }
    else
    {
        usage(); /* do not return */
    }
}
