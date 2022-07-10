typedef struct struct_2 {
    unsigned int field_0;
} struct_2;

typedef struct struct_4 {
    unsigned long long field_0;
} struct_4;

typedef struct struct_5 {
    char field_0;
} struct_5;

extern unsigned int bsd_reversed;
extern char digest_delim;
extern unsigned long long digest_hex_bytes;
extern unsigned int g_40909b;
extern unsigned int g_4090ed;
extern unsigned int g_4090f5;
extern unsigned int g_409104;
extern unsigned int g_40913e;
extern unsigned int g_409830;
extern unsigned int g_409a98;
extern unsigned int g_409af8;
extern unsigned int g_409b28;
extern unsigned int g_409b58;
extern unsigned int g_409b88;
extern unsigned int g_409bb8;
extern unsigned int g_409be8;
extern struct_2 g_409c20;
extern char have_read_stdin;
extern char ignore_missing;
extern unsigned int long_options;
extern unsigned long long min_digest_line_length;
extern struct_2 optind;
extern char quiet;
extern char status_only;
extern struct_4 stdin;
extern unsigned long long stdout[7];
extern char strict;
extern char warn;

int main()
{
    BOT tmp_6;  // tmp #6
    BOT tmp_2;  // tmp #2
    unsigned long v0;  // [bp-0x108]
    unsigned long long v1;  // [bp-0x100]
    unsigned long|unsigned long long v10;  // [bp-0xc0]
    unsigned long|unsigned long long v11;  // [bp-0xb8]
    unsigned long|unsigned long long v12;  // [bp-0xb0]
    char *|unsigned long long v13;  // [bp-0xa8]
    char v14;  // [bp-0xa0]
    char v15;  // [bp-0x9f]
    unsigned long long|char v16;  // [bp-0x9e]
    char v17;  // [bp-0x9d]
    unsigned int v18;  // [bp-0x9c]
    char v19;  // [bp-0x89]
    struct_4 * v2;  // [bp-0xf8]
    unsigned long long v20;  // [bp-0x88]
    unsigned long long v21;  // [bp-0x80]
    char v22;  // [bp-0x78]
    char v24;  // [bp+0x60]
    char *|struct_2 *|unsigned long long|unsigned int v25;  // rax
    unsigned long|unsigned long long v3;  // [bp-0xf0]
    unsigned long long|unsigned int v31;  // rax
    char *v32;  // rax
    char *v35;  // rax
    unsigned long long v37;  // rax
    unsigned long|char *|unsigned long long v39;  // rcx
    unsigned long long v4;  // [bp-0xe1]
    unsigned long|char *|unsigned long long v40;  // rdx
    unsigned int v41;  // edx
    unsigned int v42;  // ebx
    unsigned long long v43;  // rbx
    unsigned long long|char [2]|unsigned int v44;  // rbp
    unsigned long|char *|unsigned int v45;  // rsi
    unsigned long long|struct_5 * v46;  // rdi
    unsigned long long v47;  // r8
    unsigned long long v48;  // r9
    char *|struct_2 * v49;  // r10
    unsigned int v5;  // [bp-0xe0]
    unsigned long long|struct_5 * v50;  // r12
    unsigned long long v51;  // r12
    unsigned long|unsigned long long|unsigned int v52;  // r13
    unsigned long long v53;  // r14
    char *|unsigned long long v54;  // r15
    unsigned long long|unsigned int v55;  // cc_dep1
    unsigned long long|unsigned int|char v6;  // [bp-0xdc]
    unsigned long|char *|unsigned long long|char [3] v7;  // [bp-0xd8]
    struct_4 * v8;  // [bp-0xd0]
    unsigned long v9;  // [bp-0xc8]

    v53 = 1;
    /* goto 4204555; */
    strict = 1;
    /* goto 4204555; */
    ignore_missing = 1;
    /* goto 4204555; */
    digest_delim = 0;
    /* goto 4204555; */
    status_only = 0;
    warn = 0;
    quiet = 1;
    /* goto 4204555; */
    status_only = 1;
    warn = 0;
    quiet = 0;
    /* goto 4204555; */
    status_only = 0;
    warn = 1;
    quiet = 0;
    /* goto 4204555; */
    v24 = 1;
    v52 = 1;
    /* goto 4204555; */
    v53 = 0;
    v52 = -1;
    v44 = v46;
    set_program_name();
    setlocale();
    bindtextdomain(&g_40909b, &g_409830);
    textdomain(&g_40909b);
    atexit();
    setvbuf(stdout, NULL, 0x1, 0x0);
    v14 = 0;
    v25 = getopt_long(((int)v46), ((int)((unsigned int)v45)), &g_4090ed, &long_options, 0x0);
    if (!(v25 != -1))
    {
        min_digest_line_length = 34;
        digest_hex_bytes = 32;
        if (((long long)(((char)(v52 == 0)) & v14)) == 0)
        {
            if (digest_delim != 10)
            {
                if (((long long)v53) == 0)
                {
                }
                else
                {
                    error(0x0, 0x0, dcgettext(0x0, ((unsigned int)v45), v41));
                    usage(); /* do not return */
                }
            }
            if (((long long)v53) != 0)
            {
                if (v14 != 0)
                {
                    error(0x0, 0x0, dcgettext(0x0, ((unsigned int)v45), v41));
                    usage(); /* do not return */
                }
                else
                {
                    if (v52 >= 0)
                    {
                        error(0x0, 0x0, dcgettext(0x0, ((unsigned int)v45), v41));
                        usage(); /* do not return */
                    }
                }
            }
            if (status_only == 0 && ignore_missing == 0)
            {
                if (((long long)v53) == 0)
                {
                    if (warn != 0)
                    {
                        error(0x0, 0x0, dcgettext(0x0, ((unsigned int)v45), v41));
                        usage(); /* do not return */
                    }
                    if (quiet == 1 && warn == 0)
                    {
                        error(0x0, 0x0, dcgettext(0x0, ((unsigned int)v45), v41));
                        usage(); /* do not return */
                    }
                }
            }
            if (((long long)v53) == 0)
            {
                if (ignore_missing != 0)
                {
                    error(0x0, 0x0, dcgettext(0x0, ((unsigned int)v45), v41));
                    usage(); /* do not return */
                }
                if (ignore_missing == 0 && status_only != 0)
                {
                    error(0x0, 0x0, dcgettext(0x0, ((unsigned int)v45), v41));
                    usage(); /* do not return */
                }
                if (warn == 0 && (v52 < 0 || ((long long)v53) == 0) && (((long long)v53) == 0 || v14 == 0) && (((long long)v53) == 0 || digest_delim == 10) && (status_only == 0 || ((long long)v53) != 0) && (ignore_missing == 0 || ((long long)v53) != 0) && (quiet != 1 || ((long long)v53) != 0) && strict != 0)
                {
                    error(0x0, 0x0, dcgettext(0x0, ((unsigned int)v45), v41));
                    usage(); /* do not return */
                }
            }
            if (...)
            {
                v8 = ((unsigned int)v45) + v44 * 8;
                if (optind == ((int)v44))
                {
                    v8->field_0 = "-";
                    v8 += 8;
                }
                v2 = ((unsigned int)v45) + ((long long)optind) * 8;
                if (v8 > v2)
                {
                    v55 = v52;
                    v15 = 1;
                    v4 = v53;
                    v18 = (v55 == 1? 42 : 32);
                    v17 = ((char)(v55 == 1? 42 : 32));
                    do
                    {
                        v54 = v2->field_0;
                        if (v4 != 0)
                        {
                            v5 = strcmp(v2->field_0, "-");
                            if (v5 == 0)
                            {
                                have_read_stdin = 1;
                                v50 = stdin;
                                v54 = dcgettext(0x0, &g_4090f5, 0x5);
                            }
                            else
                            {
                                v50 = (long long)fopen_safer();
                                if (v50 == 0)
                                {
                                    v50 = (long long)quotearg_n_style_colon();
                                    error(0x0, *(__errno_location()), "%s");
                                    v25 = 0;
                                    /* goto 4206353; */
                                }
                            }
                            if (v5 == 0 || v50 != 0)
                            {
                                v16 = 0;
                                v43 = 1;
                                v20 = 0;
                                v21 = 0;
                                v6 = 0;
                                v11 = 0;
                                v10 = 0;
                                v3 = 0;
                                v9 = v54;
                                while (true)
                                {
                                    v25 = __getdelim(&v20, &v21, 0xa, v50);
                                    if (!(((char)[D] amd64g_calculate_condition(0x4<64>, 0x24<64>, Shr(Load(addr=0x40e0f8<64>, size=8, endness=Iend_LE), 0x1<8>), Load(addr=0x40e0f8<64>, size=8, endness=Iend_LE), cc_ndep<8>))) && *(v20) != 35)
                                    {
                                        v39 = ((long long)(*(0 + v25 - ((long long)(*(0 + v25 + 1) == 10)) - ((long long)[D] amd64g_calculate_condition(0xf<64>, 0x14<64>, Sub(rax<8>, Conv(1->64, (Load(addr=((0x0<64> + rax<8>) - 0x1<64>), size=1, endness=Iend_LE) == 0xa<8>))), 0x0<64>, cc_ndep<8>))) == 13));
                                        v55 = v25 - ((long long)(*(0 + v25 + 1) == 10));
                                        v25 = ...;
                                        v54 = v25;
                                        if (v55 != v39)
                                        {
                                            *(v54) = 0;
                                            v25 = 0;
                                            v40 = ((long long)*(v20));
                                            if (*(NULL) == 32 || *(v20) == 9)
                                            {
                                                do
                                                {
                                                    v25 += 1;
                                                    v40 = ((long long)*(v25));
                                                }
                                                while (v40 == 9);
                                            }
                                            v47 = 0;
                                            if (dl<1> == 92)
                                            {
                                                v47 = ((long long)v4);
                                            }
                                            v39 = 0 + rax<8>;
                                            if (v7[2] == 53 && v7[1] == 68 && *(0 + rax<8>) == 77)
                                            {
                                                v40 = ((long long)*(0 + rax<8> + 3));
                                                if (*(0 + rax<8> + 3) == 32)
                                                {
                                                    v40 = ((long long)*(0 + rax<8> + 4));
                                                }
                                                if (v40 == 40)
                                                {
                                                    v39 = v7 + 1;
                                                    v25 = v54 - v39;
                                                    if (v54 != v39)
                                                    {
                                                        v44 = 0 + v39;
                                                        v25 -= 1;
                                                        v54 = v25;
                                                        if (v54 == 1)
                                                        {
                                                        }
                                                        else
                                                        {
                                                            while (true)
                                                            {
                                                                v49 = v44 + v54;
                                                                v54 -= 1;
                                                            }
                                                        }
                                                    }
                                                }
                                            }
                                            if (v54 - rax<8> >= ((long long)(v7[0] == 92)) + min_digest_line_length && (v7[2] != 53 || v7[1] != 68 || *(0 + rax<8>) != 77))
                                            {
                                                v45 = 0 + rax<8> + digest_hex_bytes;
                                                v40 = rax<8> + digest_hex_bytes;
                                                v25 = ((long long)*(0 + rax<8> + digest_hex_bytes));
                                                tmp_6 = v25;
                                            }
                                        }
                                    }
                                    if (...)
                                    {
                                        *(v45) = 0;
                                        v13 = v40;
                                        v12 = r8b<1>;
                                        v7 = v39;
                                        v25 = hex_digits();
                                    }
                                    if (...)
                                    {
                                        v49 = 0 + v7 + 1;
                                        v54 = 0;
                                    }
                                    if (...)
                                    {
                                        bsd_reversed = 1;
                                        /* goto 4205903; */
                                    }
                                    if (...)
                                    {
                                        bsd_reversed = 0;
                                        /* goto 4205903; */
                                    }
                                    if (...)
                                    {
                                        v25 = filename_unescape();
                                        if (v25 == 0)
                                        {
                                            /* goto 4205623; */
                                        }
                                    }
                                    if (...)
                                    {
                                        v44 = 0 + v25;
                                        if (((long long)v12) != 0)
                                        {
                                            v7 = v7;
                                            v25 = ((char)((long long)filename_unescape() != 0));
                                        }
                                    }
                                    if (...)
                                    {
                                        *(r10<8> + None) = 0;
                                        v40 = ((long long)*(v44 + v54 + 1));
                                        v25 = v54 + 1;
                                        do
                                        {
                                            v25 += 1;
                                            v40 = ((long long)*(v44 + v25));
                                        }
                                        while (dl<1> == 9);
                                        if (v40 == 61)
                                        {
                                            v40 = v44 + v25 + 1;
                                            do
                                            {
                                                v25 = ((long long)*(v40));
                                                v39 = v40;
                                                v40 += 1;
                                                tmp_2 = v25;
                                            }
                                            while (v25 == 9);
                                            v7 = v39;
                                            v25 = hex_digits();
                                        }
                                    }
                                    if (...)
                                    {
                                        /* goto 4205623; */
                                    }
                                    if (...)
                                    {
                                        /* goto 4205944; */
                                    }
                                    if (...)
                                    {
                                        v3 += 1;
                                        if (warn != 0)
                                        {
                                            v54 = (long long)quotearg_n_style_colon();
                                            error(0x0, 0x0, dcgettext(0x0, &g_409a98, 0x5));
                                        }
                                    }
                                    if (...)
                                    {
                                        v6 = 0;
                                        if (status_only == 0)
                                        {
                                            v7 = v39;
                                            v25 = ((int)(strchr(v44, 0xa) != 0));
                                            v6 = v25;
                                        }
                                        v7 = v39;
                                        v47 = (long long)digest_file.isra.0();
                                        if (((long long)v12) == 0)
                                        {
                                            v10 += 1;
                                            if (status_only == 0)
                                            {
                                                if (v6 != 0)
                                                {
                                                    v25 = *(stdout + 40);
                                                    if (*(stdout + 40) < *(stdout + 48))
                                                    {
                                                        *(stdout + 40) = *(stdout + 40) + 1;
                                                        *(v25) = 92;
                                                    }
                                                    else
                                                    {
                                                        __overflow(((int)stdout));
                                                    }
                                                }
                                                print_filename();
                                                v45 = "FAILED open or read";
                                            }
                                        }
                                        else if (v19 == 0 || ignore_missing == 0)
                                        {
                                            v7 = v7;
                                            v48 = digest_hex_bytes >> 1;
                                            if (!(((char)[D] amd64g_calculate_condition(0x4<64>, 0x24<64>, Shr(Load(addr=0x40e0f8<64>, size=8, endness=Iend_LE), 0x1<8>), Load(addr=0x40e0f8<64>, size=8, endness=Iend_LE), cc_ndep<8>))))
                                            {
                                                v13 = digest_hex_bytes >> 1;
                                                v12 = v47;
                                                v49 = *(__ctype_tolower_loc());
                                                while (true)
                                                {
                                                    v25 = ((int)*(&stack_base-88 + rdx<8>));
                                                    if (...)
                                                    {
                                                        v40 = rdx<8> + 1;
                                                        v40 = v13;
                                                        break;
                                                    }
                                                    if (...)
                                                    {
                                                        v11 += 1;
                                                    }
                                                }
                                                if (...)
                                                {
                                                    v6 = v4;
                                                }
                                                else if (...)
                                                {
                                                    v12 = rdx<8>;
                                                    v7 = r9<8>;
                                                    print_filename();
                                                }
                                                else if (...)
                                                {
                                                    v25 = *(stdout + 40);
                                                }
                                                else if (...)
                                                {
                                                    v16 = status_only;
                                                }
                                            }
                                            else
                                            {
                                                v40 = 0;
                                            }
                                            if (((char)[D] amd64g_calculate_condition(0x4<64>, 0x24<64>, Shr(Load(addr=0x40e0f8<64>, size=8, endness=Iend_LE), 0x1<8>), Load(addr=0x40e0f8<64>, size=8, endness=Iend_LE), cc_ndep<8>)) || ((long long)(v50->field_0 & 48)) != 0)
                                            {
                                                v16 = status_only;
                                                if (((long long)status_only) == 0)
                                                {
                                                    v16 = quiet;
                                                    if (((long long)quiet) == 0)
                                                    {
                                                        if (v6 != 0)
                                                        {
                                                            v16 = v12;
                                                        }
                                                        else
                                                        {
                                                            v6 = v12;
                                                            print_filename();
                                                            v16 = v6;
                                                        }
                                                    }
                                                }
                                                if (!(((char)[D] amd64g_calculate_condition(0x4<64>, 0x24<64>, Shr(Load(addr=0x40e0f8<64>, size=8, endness=Iend_LE), 0x1<8>), Load(addr=0x40e0f8<64>, size=8, endness=Iend_LE), cc_ndep<8>))) || ((long long)status_only) == 0 && ((long long)quiet) == 0 && v6 != 0)
                                                {
                                                    v25 = *(stdout + 40);
                                                    if (*(stdout + 40) < *(stdout + 48))
                                                    {
                                                        *(stdout + 40) = *(stdout + 40) + 1;
                                                        *(v25) = 92;
                                                    }
                                                    else
                                                    {
                                                        v12 = v40;
                                                        v7 = digest_hex_bytes >> 1;
                                                        __overflow(((int)stdout));
                                                        v48 = v7;
                                                    }
                                                    v12 = rdx<8>;
                                                    v7 = r9<8>;
                                                    print_filename();
                                                    if (v7 != v12)
                                                    {
                                                        v45 = "FAILED";
                                                    }
                                                }
                                            }
                                        }
                                        if (...)
                                        {
                                            v45 = "OK";
                                        }
                                        if (...)
                                        {
                                            __printf_chk(0x1, ": %s\n", dcgettext(0x0, v45, 0x5));
                                        }
                                        v6 = v4;
                                    }
                                    if (...)
                                    {
                                        rpl_free();
                                        v46 = v50;
                                        v42 = ((int)(v50->field_0 & 32));
                                        v44 = 0;
                                        if (v5 == 0)
                                        {
                                            clearerr_unlocked(v46);
                                        }
                                        else
                                        {
                                            v31 = rpl_fclose();
                                            if (v31 != 0)
                                            {
                                                if (v42 != 0)
                                                {
                                                    v50 = (long long)quotearg_n_style_colon();
                                                    /* goto 4206974; */
                                                }
                                                else
                                                {
                                                    v44 = ((long long)*(__errno_location()));
                                                }
                                            }
                                        }
                                        if (v42 == 0 || v5 == 0 || v31 == 0)
                                        {
                                            if (((unsigned int)v44) < 0)
                                            {
                                                if (v6 != 0)
                                                {
                                                    if (status_only == 0)
                                                    {
                                                        if (v3 != 0)
                                                        {
                                                            error(0x0, 0x0, dcngettext(0x0, &g_409b28, &g_409af8, ((int)v3), 0x5));
                                                        }
                                                        if (v10 != 0)
                                                        {
                                                            error(0x0, 0x0, dcngettext(0x0, &g_409b88, &g_409b58, ((int)v10), 0x5));
                                                        }
                                                        if (v11 != 0)
                                                        {
                                                            error(0x0, 0x0, dcngettext(0x0, &g_409be8, &g_409bb8, ((int)v11), 0x5));
                                                        }
                                                        if (v16 == 0 && ignore_missing != 0)
                                                        {
                                                            v50 = (long long)quotearg_n_style_colon();
                                                        }
                                                    }
                                                    if (v16 == 0 && (ignore_missing == 0 || status_only != 0))
                                                    {
                                                        v31 = 0;
                                                        /* goto 4206350; */
                                                    }
                                                    if ((v10 | v11) == 0 && v16 != 0)
                                                    {
                                                        v31 = ((long long)(((int)strict) ^ 1 | v40));
                                                        /* goto 4206350; */
                                                    }
                                                }
                                                else
                                                {
                                                    v50 = (long long)quotearg_n_style_colon();
                                                }
                                                if (v6 == 0 || v16 == 0 && status_only == 0 && ignore_missing != 0)
                                                {
                                                    error(0x0, 0x0, dcgettext(0x0, ((unsigned int)v45), 0x5));
                                                }
                                                if ((v10 | v11) != 0 || v16 != 0)
                                                {
                                                    v31 = 0;
                                                }
                                                v25 = ((long long)(((unsigned int)v31) & 1));
                                                break;
                                            }
                                            else
                                            {
                                                v50 = (long long)quotearg_n_style_colon();
                                            }
                                        }
                                        if ((((unsigned int)v44) == 0 || v42 != 0) && (((unsigned int)v44) == 0 || v5 != 0) && (((unsigned int)v44) == 0 || v31 != 0) && (v42 != 0 || ((unsigned int)v44) >= 0) && (v5 != 0 || ((unsigned int)v44) >= 0) && (v31 != 0 || ((unsigned int)v44) >= 0))
                                        {
                                            v44 = 0;
                                            v40 = dcgettext(0x0, &g_40913e, 0x5);
                                        }
                                        if (((unsigned int)v44) >= 0 || v42 != 0 && v5 != 0 && v31 != 0)
                                        {
                                            error(0x0, ((unsigned int)v44), v40);
                                            v25 = 0;
                                            break;
                                        }
                                    }
                                    if (...)
                                    {
                                        v43 += 1;
                                        v51 = (long long)quotearg_n_style_colon();
                                        error(0x1, 0x0, dcgettext(0x0, &g_409104, 0x5));
                                    }
                                }
                            }
                            v15 &= al<1>;
                        }
                        else
                        {
                            v25 = digest_file.isra.0();
                            if (((long long)v25) == 0)
                            {
                                v15 = 0;
                            }
                            else
                            {
                                if (digest_delim == 10)
                                {
                                    v25 = strchr(v2->field_0, 0x5c);
                                    if (v25 == 0)
                                    {
                                        v25 = strchr(v2->field_0, 0xa);
                                        if (v25 == 0)
                                        {
                                            v25 = strchr(v2->field_0, 0xd);
                                        }
                                    }
                                    if (v25 != 0 || v25 != 0 || v25 != 0)
                                    {
                                        v25 = *(stdout + 40);
                                        if (*(stdout + 40) < *(stdout + 48))
                                        {
                                            *(stdout + 40) = *(stdout + 40) + 1;
                                            *(v25) = 92;
                                        }
                                        else
                                        {
                                            __overflow(((int)stdout));
                                        }
                                    }
                                }
                                if (v14 == 0)
                                {
                                    v35 = *(stdout + 40);
                                    if (*(stdout + 40) < *(stdout + 48))
                                    {
                                        *(stdout + 40) = *(stdout + 40) + 1;
                                        *(v35) = 32;
                                    }
                                    else
                                    {
                                        __overflow(((int)stdout));
                                    }
                                    v32 = *(stdout + 40);
                                    if (*(stdout + 40) < *(stdout + 48))
                                    {
                                        *(stdout + 40) = *(stdout + 40) + 1;
                                        *(v32) = v17;
                                    }
                                    else
                                    {
                                        __overflow(((int)stdout));
                                    }
                                    print_filename();
                                }
                                else
                                {
                                    fwrite_unlocked("MD5", 0x1, 0x3, stdout);
                                    fwrite_unlocked(" (", 0x1, 0x2, stdout);
                                    print_filename();
                                    fwrite_unlocked(") = ", 0x1, 0x4, stdout);
                                    if (((char)[D] amd64g_calculate_condition(0x4<64>, 0x24<64>, Shr(Load(addr=0x40e0f8<64>, size=8, endness=Iend_LE), 0x1<8>), Load(addr=0x40e0f8<64>, size=8, endness=Iend_LE), cc_ndep<8>)))
                                    {
                                        /* goto 4207345; */
                                    }
                                }
                                if (!(((char)[D] amd64g_calculate_condition(0x4<64>, 0x24<64>, Shr(Load(addr=0x40e0f8<64>, size=8, endness=Iend_LE), 0x1<8>), Load(addr=0x40e0f8<64>, size=8, endness=Iend_LE), cc_ndep<8>))))
                                {
                                    v52 = 0;
                                    while (true)
                                    {
                                        v40 = ((long long)v22);
                                        v52 += 1;
                                        __printf_chk(0x1, "%02x", v40);
                                        if (v52 >= digest_hex_bytes >> 1)
                                        {
                                            break;
                                        }
                                    }
                                }
                                v25 = *(stdout + 40);
                                if (*(stdout + 40) < *(stdout + 48))
                                {
                                    *(stdout + 40) = *(stdout + 40) + 1;
                                    *(v25) = digest_delim;
                                }
                                else
                                {
                                    __overflow(((int)stdout));
                                }
                            }
                        }
                        v2 += 8;
                    }
                    while (v8 > v2);
                }
                else
                {
                    v15 = 1;
                }
                if (have_read_stdin == 0)
                {
                    return ((long long)(((int)v15) ^ 1));
                }
                v55 = rpl_fclose();
                if (!(((char)(v55 + 1 == 0))))
                {
                    return ((long long)(((int)v15) ^ 1));
                }
                else
                {
                    error(0x1, *(__errno_location()), dcgettext(0x0, &g_4090f5, 0x5));
                }
            }
        }
        else
        {
            error(0x0, 0x0, dcgettext(0x0, ((unsigned int)v45), v41));
            usage(); /* do not return */
        }
    }
    else if (!(v25 <= 132))
    {
        usage(); /* do not return */
    }
    else if (v25 > 97)
    {
        v25 = ((long long)v25) - 98;
        if (((int)v25) <= 34)
        {
            v37 = ((long long)*(g_409c20 + v25 * 4)) + &g_409c20;
            /* goto v37; */
        }
        else
        {
            usage(); /* do not return */
        }
    }
    else if (v25 == -131)
    {
        v1 = 0;
        v0 = "David Madore";
        version_etc();
        exit(0x0); /* do not return */
    }
    else if (v25 == -130)
    {
        usage(); /* do not return */
    }
    else
    {
        usage(); /* do not return */
    }
}
