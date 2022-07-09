typedef struct struct_1 {
    unsigned int field_0;
} struct_1;

extern char do_short_format;
extern unsigned int g_407132;
extern unsigned int g_407188;
extern unsigned int g_4071ad;
extern unsigned int g_4071b8;
extern unsigned int g_4071c4;
extern unsigned int g_4071cf;
extern unsigned int g_4071d4;
extern unsigned int g_4071df;
extern unsigned int g_407638;
extern unsigned int g_407660;
extern struct_1 g_4076a4;
extern char include_fullname;
extern char include_heading;
extern char include_home_and_shell;
extern char include_idle;
extern char include_plan;
extern char include_project;
extern char include_where;
extern unsigned int longopts;
extern struct_1 optind;
extern unsigned long long stdout[7];
extern struct_0 time_format;
extern unsigned int time_format_width;

int main()
{
    unsigned long v0;  // [bp-0x68]
    unsigned long long v1;  // [bp-0x60]
    struct_1 *|unsigned long long v11;  // rax
    unsigned long long|char * v12;  // rax
    unsigned long long v13;  // rax
    unsigned long long v17;  // rbx
    unsigned long long v18;  // rbx
    unsigned long long v19;  // rbp
    unsigned long long v2;  // [bp-0x50]
    unsigned long|char * v20;  // rsi
    unsigned int v21;  // edi
    unsigned long long v22;  // r12
    unsigned long long v23;  // r13
    unsigned long long v24;  // r14
    unsigned long long v3;  // [bp-0x48]

    do_short_format = 1;
    /* goto 4204776; */
    include_plan = 0;
    /* goto 4204776; */
    do_short_format = 0;
    /* goto 4204776; */
    include_project = 0;
    /* goto 4204776; */
    include_heading = 0;
    /* goto 4204776; */
    include_home_and_shell = 0;
    /* goto 4204776; */
    include_fullname = 0;
    include_where = 0;
    include_idle = 0;
    /* goto 4204776; */
    include_fullname = 0;
    include_where = 0;
    /* goto 4204776; */
    set_program_name();
    setlocale();
    bindtextdomain(&g_407132, &g_407638);
    textdomain(&g_407132);
    atexit();
    v11 = getopt_long(v21, ((int)v20), &g_407188, &longopts, 0x0);
    if (v11 != -1)
    {
        if (!(v11 <= 119))
        {
            usage(); /* do not return */
        }
        else if (v11 > 97)
        {
            v11 = ((long long)v11) - 98;
            if (((int)v11) <= 21)
            {
                v13 = ((long long)*(g_4076a4 + v11 * 4)) + &g_4076a4;
                /* goto v13; */
            }
            else
            {
                usage(); /* do not return */
            }
        }
        else if (v11 == -131)
        {
            v1 = 0;
            v0 = "Kaveh Ghazi";
            version_etc();
            exit(0x0); /* do not return */
        }
        else if (v11 == -130)
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
        if (do_short_format != 0)
        {
            v3 = 0;
            if (read_utmp() == 0)
            {
                v23 = v3;
                v24 = v2;
                v12 = hard_locale();
                if (((long long)v12) != 0)
                {
                    time_format_width = 16;
                    time_format = "%Y-%m-%d %H:%M";
                }
                else
                {
                    time_format_width = 12;
                    time_format = "%b %e %H:%M";
                }
                if (include_heading != 0)
                {
                    dcgettext(0x0, &g_4071ad, 0x5);
                    __printf_chk(0x1, "%-8s");
                    if (include_fullname != 0)
                    {
                        dcgettext(0x0, &g_4071b8, 0x5);
                        __printf_chk(0x1, " %-19s");
                    }
                    dcgettext(0x0, &g_4071c4, 0x5);
                    __printf_chk(0x1, " %-9s");
                    if (include_idle != 0)
                    {
                        dcgettext(0x0, &g_4071cf, 0x5);
                        __printf_chk(0x1, " %-6s");
                    }
                    dcgettext(0x0, &g_4071d4, 0x5);
                    __printf_chk(0x1, " %-*s");
                    if (include_where != 0)
                    {
                        __printf_chk(0x1, " %s", dcgettext(0x0, &g_4071df, 0x5));
                    }
                    v12 = *(stdout + 40);
                    if (*(stdout + 40) < *(stdout + 48))
                    {
                        *(stdout + 40) = *(stdout + 40) + 1;
                        *(v12) = 10;
                    }
                    else
                    {
                        __overflow();
                    }
                }
                v19 = v20 + ((long long)optind) * 8;
                while (true)
                {
                    v24 -= 1;
                    if (v24 == 18446744069414584319)
                    {
                        break;
                    }
                    if (*(v23) == 7 && *(v23 + 44) != 0)
                    {
                        if (((int)(v21 - optind)) != 0)
                        {
                            v17 = 0;
                            while (true)
                            {
                                if (((int)(v21 - optind)) > ((int)v17))
                                {
                                    v20 = *(v19 + v17 * 8);
                                    v17 += 1;
                                    v12 = strncmp(0x2c, v20, 0x20);
                                }
                                else
                                {
                                    break;
                                }
                            }
                            if (((int)(v21 - optind)) <= ((int)v17))
                            {
                                v23 += 384;
                            }
                            else if (((int)(v21 - optind)) > ((int)v17))
                            {
                                print_entry();
                            }
                        }
                        print_entry();
                    }
                    v23 += 384;
                }
                exit(0x0); /* do not return */
            }
            v22 = (long long)quotearg_n_style_colon();
            error(0x1, *(__errno_location()), "%s");
        }
        else if (!(((int)(v21 - optind)) != 0))
        {
            error(0x0, 0x0, dcgettext(0x0, &g_407660, 0x5));
            usage(); /* do not return */
        }
        else if (!(((char)[D] amd64g_calculate_condition(0xe<64>, 0x13<64>, Conv(32->64, (rdi<4> - Load(addr=0x40b0b0<64>, size=4, endness=Iend_LE))), 0x0<64>, cc_ndep<8>))))
        {
            v18 = v20 + ((long long)optind) * 8;
            while (true)
            {
                v18 += 8;
                print_long_entry();
                if (v20 + (((long long)optind) + ((long long)(v21 - optind)) - 1 << 3) + 8 == v18)
                {
                    break;
                }
            }
            return 0;
        }
        else
        {
            return 0;
        }
    }
}
