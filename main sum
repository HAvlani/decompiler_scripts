typedef struct struct_1 {
    unsigned long long field_0;
} struct_1;

typedef struct struct_0 {
    unsigned int field_0;
} struct_0;

extern unsigned int g_408091;
extern unsigned int g_4080dc;
extern unsigned int g_4080e1;
extern unsigned int g_408360;
extern char have_read_stdin;
extern unsigned int long_options;
extern struct_0 optind;
extern struct_1 stdin;
extern struct_1 stdout;
extern unsigned int sum_algorithm;
extern unsigned long long sumfns;

int main()
{
    unsigned long|unsigned long long v0;  // [bp-0x88]
    unsigned long v1;  // [bp-0x80]
    struct_0 *|unsigned long long v14;  // rax
    unsigned long long v15;  // rax
    unsigned long long v19;  // rcx
    struct_1 * v2;  // [bp-0x78]
    unsigned long long v20;  // rdx
    unsigned long long v21;  // rbx
    struct_1 * v22;  // rbp
    unsigned long|unsigned long long v23;  // rsi
    unsigned long long v24;  // rdi
    unsigned long long v25;  // r8
    unsigned long long v26;  // r9
    char v27;  // r9b
    unsigned long|unsigned long long|unsigned int v29;  // r14
    unsigned long long v3;  // [bp-0x70]
    unsigned long|unsigned long long v4;  // [bp-0x68]
    char v5;  // [bp-0x59]
    unsigned long v6;  // [bp-0x50]
    char v7;  // [bp-0x44]
    unsigned long long v9;  // rax

    v21 = v24;
    set_program_name();
    setlocale();
    bindtextdomain(&g_408091, &g_408360);
    textdomain(&g_408091);
    atexit();
    setvbuf(stdout, NULL, 0x1, 0x0);
    while (true)
    {
        v9 = getopt_long(((int)v24), ((int)v23), &g_4080dc, &long_options, 0x0);
        if (((int)v9) == -1)
        {
            v2 = v23 + v21 * 8;
            if (optind == ((int)v21))
            {
                v2->field_0 = "-";
                v2 += 8;
            }
            v22 = v23 + ((long long)optind) * 8;
            if (v2 > v23 + (((long long)optind) << 3))
            {
                v5 = 1;
                v3 = &stack_base-80;
                do
                {
                    (long long)quotearg_n_style_colon() = v22->field_0;
                    v9 = strcmp(v22->field_0, "-");
                    if (v9 == 0)
                    {
                        have_read_stdin = 1;
                        fadvise();
                        v20 = v3;
                        v23 = &v7;
                        v24 = stdin;
                        v19 = &sumfns;
                        v29 = *(4242384 + ((long long)*(0x40c0ec)) * 8)();
                        if (((int)v29) != 0)
                        {
                            v29 = ((long long)*(__errno_location()));
                        }
                        v14 = clearerr_unlocked(((int)stdin));
                    }
                    else
                    {
                        v24 = (long long)fopen_safer();
                        if (v4 != 0)
                        {
                            v4 = v24;
                            fadvise();
                            v24 = v4;
                            v23 = &v7;
                            v19 = &sumfns;
                            v20 = v3;
                            v15 = *(4242384 + ((long long)*(0x40c0ec)) * 8)();
                            if (v15 == 0)
                            {
                                v14 = rpl_fclose();
                            }
                            else
                            {
                                v4 = v4;
                                v29 = ((long long)*(__errno_location()));
                                v14 = rpl_fclose();
                            }
                            if ((v15 == 0 || ((int)v29) == 0) && (v15 == 0 || ((int)v14) != 0) && (v15 != 0 || ((int)v14) != 0))
                            {
                                v14 = __errno_location();
                                v29 = ((int)v14->field_0);
                            }
                        }
                        else
                        {
                            (long long)quotearg_n_style_colon() = (long long)quotearg_n_style_colon();
                            error(0x0, *(__errno_location()), "%s");
                            v5 = 0;
                            /* goto 4205031; */
                        }
                    }
                    if (v9 == 0 || v4 != 0)
                    {
                        if ((v15 == 0 || reg_128<4> == 0) && (reg_128<4> == 0 || ((int)v14) == 0) && (reg_128<4> == 0 || v9 != 0) && (v15 == 0 || ((int)v29) == 0 || ((int)v14) == 0 || v9 == 0))
                        {
                            v1 = rax<8>;
                            v26 = 0;
                            v20 = &v7;
                            v0 = v6;
                            v24 = (long long)quotearg_n_style_colon();
                            v27 = ((char)(optind != ((int)v21)));
                            v25 = 10;
                            v19 = 0;
                            v23 = 0;
                            *(4242368 + ((long long)*(0x40c0ec)) * 8)();
                            /* goto 4205031; */
                        }
                        if ((v15 != 0 || reg_128<4> != 0) && (((int)v29) != 0 || reg_128<4> != 0) && (reg_128<4> != 0 || ((int)v14) != 0) && (reg_128<4> != 0 || v9 != 0) && (v9 == 0 || v15 != 0 || ((int)v14) != 0))
                        {
                            quotearg_n_style_colon();
                            error(0x0, v29, "%s");
                            v5 = 0;
                        }
                    }
                    v22 += 8;
                }
                while (v2 > v22);
            }
            else
            {
                v5 = 1;
            }
            if (have_read_stdin == 0)
            {
                return ((long long)(((int)v5) ^ 1));
            }
            else if (!(((char)(rpl_fclose() + 1 == 0))))
            {
                break;
            }
            else
            {
                error(0x1, *(__errno_location()), dcgettext(0x0, &g_4080e1, 0x5));
            }
        }
        else if (((int)v9) == 114)
        {
            sum_algorithm = 0;
        }
        else if (((char)(v9 <= 114)))
        {
            if (((int)v9) == -131)
            {
                v0 = 0;
                version_etc();
                exit(0x0); /* do not return */
            }
            else if (((int)v9) == -130)
            {
                usage(); /* do not return */
            }
            else
            {
                usage(); /* do not return */
            }
        }
        else
        {
            if (((int)v9) == 115)
            {
                sum_algorithm = 1;
            }
            else
            {
                usage(); /* do not return */
            }
        }
    }
    return ((long long)(((int)v5) ^ 1));
}
