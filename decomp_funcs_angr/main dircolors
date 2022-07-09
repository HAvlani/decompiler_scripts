typedef struct struct_1 {
    unsigned long long field_0;
} struct_1;

extern unsigned int g_4070e4;
extern unsigned int g_407153;
extern unsigned int g_407164;
extern unsigned int g_4076a8;
extern unsigned int g_407778;
extern unsigned int g_4077b8;
extern struct_1 g_40d130;
extern struct_1 g_40d138;
extern struct_1 g_40d140;
extern char g_40d170;
extern unsigned int long_options;
extern struct_0 optind;
extern char print_ls_colors;
extern struct_1 stdout;

int main()
{
    BOT tmp_22;  // tmp #22
    unsigned long long v10;  // rbx
    unsigned long long|char * v11;  // rbp
    unsigned long|struct_1 * v12;  // rsi
    char *|unsigned int v13;  // rdi
    unsigned long long|char *|unsigned int v14;  // r12d
    char|unsigned long|unsigned int v15;  // r13
    char v16;  // cc_dep2
    unsigned long v17;  // d
    unsigned long long v2;  // rax
    unsigned long long v6;  // rax
    unsigned long long v7;  // rcx
    unsigned long long v8;  // rdx
    unsigned long long|unsigned int v9;  // rbx

    v15 = 2;
    v11 = 0;
    set_program_name();
    setlocale();
    bindtextdomain(&g_4070e4, &g_4076a8);
    textdomain(&g_4070e4);
    atexit();
    while (true)
    {
        v2 = getopt_long(v13, ((int)v12), &g_407153, &long_options, 0x0);
        if (((int)v2) == -1)
        {
            v14 = ((int)(v13 - optind));
            if (((long long)v11) == 0 && ((long long)print_ls_colors) == 0)
            {
                if (!(v13 - optind <= 1))
                {
                    v14 = (long long)quote();
                    error(0x0, 0x0, dcgettext(0x0, &g_407164, 0x5));
                    usage(); /* do not return */
                }
                else if (((int)v15) == 2)
                {
                    v13 = getenv("SHELL");
                    if (!(v13 != 0))
                    {
                        error(0x1, 0x0, dcgettext(0x0, &g_407778, 0x5));
                    }
                    else if (*(v13) != 0)
                    {
                        v11 = (long long)last_component();
                        v2 = strcmp(v11, "csh");
                        if (v2 != 0)
                        {
                            v15 = 0;
                            v15 = ((char)(strcmp(v11, "tcsh") == 0));
                            /* goto 4204574; */
                        }
                        else
                        {
                            v15 = 1;
                            /* goto 4204574; */
                        }
                    }
                    else
                    {
                        error(0x1, 0x0, dcgettext(0x0, &g_407778, 0x5));
                    }
                }
            }
            if (((int)v15) != 2 && (((long long)v11) != 0 || ((long long)print_ls_colors) != 0))
            {
                v12 = "the options to output non shell syntax,\nand to select a shell syntax are mutually exclusive";
                error(0x0, 0x0, dcgettext(0x0, v12, 0x5));
                usage(); /* do not return */
            }
            if (((long long)v11) == 0)
            {
                if (((int)v15) == 2 && v13 - optind > 1 && ((long long)print_ls_colors) != 0)
                {
                    v14 = (long long)quote();
                    error(0x0, 0x0, dcgettext(0x0, &g_407164, 0x5));
                    usage(); /* do not return */
                }
                if (v13 - optind <= 1 && (((int)v15) == 2 || ((long long)print_ls_colors) == 0) && (*(v13) != 0 || ((int)v15) != 2 || ((long long)print_ls_colors) != 0) && (v13 != 0 || ((int)v15) != 2 || ((long long)print_ls_colors) != 0))
                {
                    _obstack_begin();
                    if (v14 != 0)
                    {
                        v2 = strcmp(*(v12 + ((long long)optind) * 8), "-");
                        if (v2 != 0)
                        {
                            v2 = freopen_safer();
                            if (v2 == 0)
                            {
                                v9 = 0;
                                v14 = (long long)quotearg_n_style_colon();
                                error(0x0, *(__errno_location()), "%s");
                                v10 = ((long long)(((unsigned int)v9) ^ 1));
                                tmp_22 = v10;
                                return ((long long)tmp_22);
                            }
                        }
                        if (v2 == 0 || v2 != 0)
                        {
                            v9 = (long long)dc_parse_stream();
                            v2 = rpl_fclose();
                            if (v2 != 0)
                            {
                                v9 = 0;
                                v14 = (long long)quotearg_n_style_colon();
                                error(0x0, *(__errno_location()), "%s");
                                v10 = ((long long)(((unsigned int)v9) ^ 1));
                                tmp_22 = v10;
                                return ((long long)tmp_22);
                            }
                        }
                    }
                    v9 = (long long)dc_parse_stream();
                    if (v14 == 0 || v2 == 0 && v2 == 0 || v2 == 0 && v2 != 0)
                    {
                        if (((long long)v9) != 0)
                        {
                            v6 = g_40d138;
                            if (g_40d138 == g_40d130)
                            {
                                g_40d170 = g_40d170 | 2;
                            }
                            v8 = g_40d140;
                            g_40d138 = (!((rax<8> + *(0x40d150) & !(*(0x40d150))) - *(0x40d128) <= g_40d140 - *(0x40d128))? v8 : rax<8> + *(0x40d150) & !(*(0x40d150)));
                            g_40d130 = (!((rax<8> + *(0x40d150) & !(*(0x40d150))) - *(0x40d128) <= g_40d140 - *(0x40d128))? v8 : rax<8> + *(0x40d150) & !(*(0x40d150)));
                            v14 = (v15 != 0? "'\n" : "';\nexport LS_COLORS\n");
                            v13 = (v15 == 0? "LS_COLORS='" : "setenv LS_COLORS '");
                            if (print_ls_colors == 0)
                            {
                                fputs_unlocked(v13, stdout);
                            }
                            fwrite_unlocked(g_40d130, 0x1, g_40d138 - g_40d130, stdout);
                            if (print_ls_colors == 0)
                            {
                                fputs_unlocked(v14, stdout);
                                v10 = ((long long)(((unsigned int)v9) ^ 1));
                                tmp_22 = v10;
                                return ((long long)tmp_22);
                            }
                            v9 = 1;
                            v10 = ((long long)(((unsigned int)v9) ^ 1));
                            tmp_22 = v10;
                            return ((long long)tmp_22);
                        }
                        v10 = ((long long)(((unsigned int)v9) ^ 1));
                        tmp_22 = v10;
                        return ((long long)tmp_22);
                    }
                }
            }
            if (((int)v15) == 2 && ((long long)v11) != 0)
            {
                v12 = "options --print-database and --print-ls-colors are mutually exclusive";
                if (!(((long long)print_ls_colors) == 0))
                {
                    error(0x0, 0x0, dcgettext(0x0, v12, 0x5));
                    usage(); /* do not return */
                }
                else if (v13 - optind <= 0)
                {
                    for (v11 = "# Configuration file for dircolors, a utility to help you set the"; v11 - "# Configuration file for dircolors, a utility to help you set the" <= 4807; v11 = "# Configuration file for dircolors, a utility to help you set the" + !(rcx<8>))
                    {
                        puts(v11);
                        v13 = v11;
                        v7 = 18446744069414584319;
                        while (v7 != 0)
                        {
                            v7 -= 1;
                            v16 = ((char)*(v13));
                            v13 += v17;
                            break;
                        }
                    }
                    v9 = 1;
                    v10 = ((long long)(((unsigned int)v9) ^ 1));
                    tmp_22 = v10;
                    return ((long long)tmp_22);
                }
                else
                {
                    v14 = (long long)quote();
                    error(0x0, 0x0, dcgettext(0x0, &g_407164, 0x5));
                    dcgettext(0x0, &g_4077b8, 0x5);
                    __fprintf_chk();
                    usage(); /* do not return */
                }
            }
        }
        else if (((int)v2) == 99)
        {
            v15 = 1;
        }
        else if (((char)(v2 <= 99)))
        {
            if (((int)v2) == -130)
            {
                usage(); /* do not return */
            }
            else if (((int)v2) == 98)
            {
                v15 = 0;
            }
            else if (((int)v2) != -131)
            {
                usage(); /* do not return */
            }
            else
            {
                version_etc();
                exit(0x0); /* do not return */
            }
        }
        else
        {
            if (((int)v2) == 112)
            {
                v11 = 1;
            }
            else if (((int)v2) != 128)
            {
                usage(); /* do not return */
            }
            else
            {
                print_ls_colors = 1;
            }
        }
    }
}
