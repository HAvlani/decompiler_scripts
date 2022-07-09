typedef struct struct_1 {
    unsigned int field_0;
} struct_1;

typedef struct struct_2 {
    unsigned int field_0;
    char padding_4[28];
    unsigned int field_20;
    char padding_24[20];
    unsigned long long field_38;
} struct_2;

extern char debug;
extern unsigned int g_4090da;
extern unsigned int g_40912e;
extern unsigned int g_409134;
extern unsigned int g_409147;
extern unsigned int g_409162;
extern unsigned int g_40917a;
extern unsigned int g_409180;
extern struct_1 g_409310;
extern unsigned int g_4098e0;
extern unsigned int g_409908;
extern unsigned int g_409940;
extern unsigned int g_409988;
extern char have_read_stdin;
extern unsigned int longopts;
extern unsigned long long max_line_length;
extern unsigned int number_width;
extern struct_1 optind;
extern struct_0 page_size;
extern <missing-type> posixly_correct;
extern char print_bytes;
extern char print_chars;
extern char print_linelength;
extern char print_lines;
extern char print_words;
extern struct_0 stdin;
extern char stdin_only.8531;
extern struct_0 stdout;
extern unsigned long long total_bytes;
extern unsigned long long total_chars;
extern unsigned long long total_lines;
extern unsigned long long total_words;

int main()
{
    BOT tmp_10;  // tmp #10
    BOT tmp_11;  // tmp #11
    BOT tmp_0;  // tmp #0
    BOT tmp_16;  // tmp #16
    BOT tmp_2;  // tmp #2
    BOT tmp_19;  // tmp #19
    unsigned long long v0;  // [bp-0x248]
    unsigned long|struct_2 * v1;  // [bp-0x230]
    unsigned long long|struct_1 * v12;  // rax
    unsigned long long v17;  // rax
    unsigned long|unsigned long long|char v2;  // [bp-0x228]
    unsigned long long v24;  // rax
    unsigned long long|unsigned int v25;  // rcx
    unsigned long|unsigned int v26;  // rcx
    unsigned long long|unsigned int|struct_2 * v27;  // rdx
    struct_2 *v28;  // rdx
    unsigned long long v29;  // rbx
    unsigned int|struct_2 * v3;  // [bp-0x220]
    unsigned long long v30;  // rbp
    void * v31;  // rbp
    unsigned long v32;  // rsi
    unsigned long|unsigned int v33;  // edi
    unsigned long long v34;  // r8
    unsigned long long v35;  // r12
    unsigned long long v36;  // r12
    unsigned long long v37;  // r13
    unsigned long long v38;  // r13
    unsigned long long v39;  // r13
    char v4;  // [bp-0x211]
    unsigned long long v40;  // r14
    unsigned long long v41;  // r14
    char *v42;  // r14
    unsigned long long v43;  // r15
    unsigned long|BOT v44;  // xmm0
    BOT v45;  // xmm0
    uint128_t v46;  // xmm1
    unsigned long long v5;  // [bp-0x210]
    unsigned int v6;  // [bp-0x1fc]
    unsigned long v7;  // [bp-0x1f8]
    char *v8;  // [bp-0x1f0]
    char v9;  // [bp-0xd8]

    debug = 1;
    /* goto 4205008; */
    print_words = 1;
    /* goto 4205008; */
    print_chars = 1;
    /* goto 4205008; */
    print_lines = 1;
    /* goto 4205008; */
    print_bytes = 1;
    /* goto 4205008; */
    print_linelength = 1;
    /* goto 4205008; */
    set_program_name();
    setlocale();
    bindtextdomain(&g_4090da, &g_4098e0);
    textdomain(&g_4090da);
    atexit();
    page_size = getpagesize();
    setvbuf(stdout, NULL, 0x1, 0x0);
    print_bytes = 0;
    print_chars = 0;
    print_words = 0;
    print_lines = 0;
    print_linelength = 0;
    max_line_length = 0;
    total_bytes = 0;
    total_chars = 0;
    total_words = 0;
    total_lines = 0;
    posixly_correct = ((char)(getenv("POSIXLY_CORRECT") != 0));
    v12 = getopt_long(((int)v33), ((int)v32), &g_40912e, &longopts, 0x0);
    if (!(v12 != -1))
    {
        if (print_lines == 0)
        {
            if (print_words == 0)
            {
                if (print_chars == 0)
                {
                    if (print_bytes == 0)
                    {
                        if (print_linelength == 0)
                        {
                            print_bytes = 1;
                            print_words = 1;
                            print_lines = 1;
                        }
                    }
                }
            }
        }
        if (False)
        {
            v17 = strcmp(NULL, "-");
            v36 = (long long)quotearg_style();
            error(0x0, 0x0, dcgettext(0x0, &g_409134, 0x5));
            dcgettext(0x0, &g_409908, 0x5);
            __fprintf_chk();
            usage(); /* do not return */
            v31 = stdin;
            v31 = fopen(NULL, "r");
            v12 = __fxstat(0x1, fileno(fopen(NULL, "r")), ((int)&v9));
            v37 = (long long)quotearg_style();
            error(0x1, *(__errno_location()), dcgettext(0x0, &g_409147, 0x5));
            tmp_10 = BinaryOp FPConvert;
            tmp_16 = tmp_10;
            v1 = tmp_16;
            physmem_available();
            v46 = 0x3fe0000000000000 * v45;
            v44 = 0;
            v44 = 0x4164000000000000;
            tmp_2 = v46;
            if (((((char)((long long)(BinaryOp CmpF))) & 69 | ((char)((((long long)(BinaryOp CmpF)) & 69) >> 6))) & 1) == 1)
            {
                physmem_available();
                v44 = xmm0<16> * 0x3fe0000000000000;
            }
            v30 = (long long)argv_iter_init_stream();
            readtokens0_init();
            v4 = (char)readtokens0();
            xalloc_die(); /* do not return */
            v4 = 0;
            v1 = (long long)xnmalloc();
            /* goto 4205415; */
            v12 = rpl_fclose();
            v35 = (long long)quotearg_style();
            error(0x1, 0x0, dcgettext(0x0, &g_409940, 0x5));
            v29 = v7;
            v2 = v8;
            v30 = (long long)argv_iter_init_argv();
            v35 = (long long)quotearg_style();
            error(0x1, 0x0, dcgettext(0x0, &g_409940, 0x5));
            xalloc_die(); /* do not return */
            v1 = (long long)xnmalloc();
            v29 = 0;
            v26 = 1;
            v1->field_0 = 1;
            /* goto 4205433; */
        }
        if (((int)optind) >= ((int)v33))
        {
            v29 = 1;
            v2 = &stdin_only.8531;
        }
        else
        {
            v27 = ((long long)optind);
            v29 = ((long long)(v33 - v27));
            v2 = v32 + v27 * 8;
        }
        v30 = (long long)argv_iter_init_argv();
        if (v30 != 0)
        {
            v4 = 0;
            v1 = (long long)xnmalloc();
            if (v29 == 1)
            {
                v26 = ((long long)(print_lines + print_words + print_chars + print_bytes + print_linelength));
                if (print_lines + print_words + print_chars + print_bytes + print_linelength == 1)
                {
                    v1->field_0 = 1;
                    /* goto 4205433; */
                }
            }
            if (v29 != 1 || print_lines + print_words + print_chars + print_bytes + print_linelength != 1)
            {
                v39 = 0;
                v43 = v1 + 8;
                do
                {
                    v42 = *(v2 + v39 * 8);
                    if (*(v2 + (v39 << 3)) != 0)
                    {
                        v12 = strcmp(v42, "-");
                        if (v12 != 0)
                        {
                            v12 = __xstat(0x1, ((int)v42), ((int)v43));
                            /* goto 4206577; */
                        }
                    }
                    if (*(v2 + (v39 << 3)) == 0 || v12 == 0)
                    {
                        v12 = __fxstat(0x1, 0x0, ((int)v43));
                    }
                    v39 += 1;
                    *(v43 + 8) = reg_16<4>;
                    v43 += 152;
                }
                while (v29 > v39);
                v27 = v1;
                v26 = 1;
                if (v1->field_0 <= 0)
                {
                    v33 = 1;
                    v12 = 0;
                    v25 = 0;
                    do
                    {
                        if (v27->field_0 == 0)
                        {
                            if ((((short)v27->field_20) & 0xf000) != 0x8000)
                            {
                                v33 = 7;
                            }
                            else
                            {
                                v12 += v27->field_38;
                            }
                        }
                        ((unsigned int)v25) = v25 + 1;
                        v27 += 152;
                    }
                    while (v29 != ((unsigned int)v25));
                    for (v25 = 1; rax<8> > 9; v12 = ((long long)((0 CONCAT rax<8>) % 10)))
                    {
                        ((unsigned int)v25) = ((long long)((unsigned int)v25)) + 1;
                    }
                    v26 = ((long long)(((unsigned int)v25) < v33? ((int)v33) : ((int)rcx<8>)));
                }
            }
            number_width = v26;
            v38 = 0;
            v40 = 1;
            while (true)
            {
                v12 = argv_iter();
                v34 = v2;
                if (v2 == 0)
                {
                    break;
                }
                if (False)
                {
                    v2 = v12;
                    v12 = strcmp(v12, "-");
                    v34 = v2;
                    v40 = (long long)quotearg_style();
                    error(0x0, 0x0, dcgettext(0x0, &g_409988, 0x5));
                    v41 = (long long)argv_iter_n_args();
                    v2 = dcgettext(0x0, &g_409180, 0x5);
                    quotearg_n_style_colon();
                    error(0x0, 0x0, "%s:%lu: %s");
                    v40 = 0;
                    v27 = v1;
                    /* goto 4205527; */
                }
                if (*(v2) != 0)
                {
                    v27 = 0;
                    if (v29 != 0)
                    {
                        v27 = v38 * 152;
                    }
                    v28 = rdx<8> + v1;
                    v2 = r8<8>;
                    v3 = v28;
                    v12 = strcmp(r8<8>, "-");
                    v34 = v2;
                    v27 = v3;
                    if (v12 != 0)
                    {
                        v3 = rdx<8>;
                        v2 = r8<8>;
                        v33 = (int)open(r8<8>, 0x0, rdx<2>);
                        if (((int)v3) != -1)
                        {
                            v5 = v2;
                            v3 = v33;
                            v2 = (char)wc();
                            v12 = close(v33);
                            v27 = ((int)v2);
                        }
                        if (((int)v3) == -1 || v12 != 0)
                        {
                            v2 = (long long)quotearg_n_style_colon();
                            error(0x0, *(__errno_location()), "%s");
                            v27 = 0;
                        }
                    }
                    else
                    {
                        have_read_stdin = 1;
                        v27 = (long long)wc();
                    }
                    v40 = ((long long)(((int)v40) & reg_32<4>));
                }
                else
                {
                    dcgettext(0x0, &g_409180, 0x5);
                    error(0x0, 0x0, "%s");
                    v40 = 0;
                }
                if (v29 == 0)
                {
                    v1->field_0 = 1;
                }
                v38 += 1;
            }
            if (v6 != 3)
            {
                if (((int)v6) == 4)
                {
                    v38 = (long long)quotearg_n_style_colon();
                    error(0x0, *(__errno_location()), dcgettext(0x0, &g_409162, 0x5));
                }
                else
                {
                    if (((int)v6) != 2)
                    {
                        __assert_fail(); /* do not return */
                    }
                }
                if (((int)v6) == 2)
                {
                    if (((long long)(((char)(0 == 0)) & v40)) != 0)
                    {
                        v12 = argv_iter_n_args();
                        if (v12 == 0)
                        {
                            have_read_stdin = 1;
                            wc();
                        }
                    }
                }
                if (((int)v6) == 4 || ((int)v6) == 2)
                {
                    if (v4 != 0)
                    {
                        readtokens0_free();
                    }
                    if (argv_iter_n_args() > 1)
                    {
                        dcgettext(0x0, &g_40917a, 0x5);
                        write_counts();
                    }
                    argv_iter_free();
                    rpl_free();
                    if (have_read_stdin == 0)
                    {
                        return ((long long)tmp_19);
                    }
                    if (close(0x0) == 0)
                    {
                        return ((long long)tmp_19);
                    }
                    else
                    {
                        error(0x1, *(__errno_location()), "-");
                    }
                }
            }
            else
            {
                xalloc_die(); /* do not return */
            }
        }
        else
        {
            xalloc_die(); /* do not return */
        }
    }
    else if (!(v12 <= 129))
    {
        usage(); /* do not return */
    }
    else if (v12 > 75)
    {
        v12 = ((long long)v12) - 76;
        if (((int)v12) <= 53)
        {
            v24 = ((long long)*(g_409310 + v12 * 4)) + &g_409310;
            /* goto v24; */
        }
        else
        {
            usage(); /* do not return */
        }
    }
    else if (v12 == -131)
    {
        v0 = 0;
        version_etc();
        exit(0x0); /* do not return */
    }
    else if (v12 == -130)
    {
        usage(); /* do not return */
    }
    else
    {
        usage(); /* do not return */
    }
}
