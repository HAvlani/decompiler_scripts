extern char convert_entire_line;
extern struct_1 exit_status;
extern unsigned int g_407085;
extern unsigned int g_4070be;
extern unsigned int g_4070d5;
extern unsigned int g_4073a8;
extern unsigned int longopts;
extern struct_0 optarg;
extern struct_1 optind;
extern unsigned int shortopts;
extern unsigned long long stdout[7];

int main()
{
    char v0;  // [bp-0x51]
    unsigned long|unsigned long long v1;  // [bp-0x50]
    unsigned long long v13;  // rbx
    unsigned long long v14;  // rbx
    unsigned long long [3] v15;  // rbp
    unsigned int v16;  // esi
    unsigned int v17;  // edi
    unsigned long long v18;  // r8
    unsigned long long v19;  // r12
    char v2;  // [bp-0x42]
    char v3;  // [bp-0x41]
    char *|unsigned long long v5;  // rax
    unsigned long long v7;  // rax

    set_program_name();
    setlocale();
    bindtextdomain(&g_407085, &g_4073a8);
    textdomain(&g_407085);
    atexit();
    convert_entire_line = 1;
    while (true)
    {
        v7 = getopt_long(v17, v16, &shortopts, &longopts, 0x0);
        if (((int)v2) == -1)
        {
            finalize_tab_stops();
            set_file_list();
            v15 = (long long)next_file();
            if (v15 != 0)
            {
                while (true)
                {
                    v1 = 0;
                    v19 = 0;
                    while (true)
                    {
                        v5 = v15[1];
                        if (v15[1] < v15[2])
                        {
                            v15[1] = v5 + 1;
                            v14 = ((long long)*(v5));
                        }
                        else
                        {
                            v14 = __uflow(((int)v15));
                            if (((int)v14) < 0)
                            {
                                v15 = (long long)next_file();
                                if (v15 == 0 && ((long long)1) != 0)
                                {
                                    cleanup_file_list_stdin();
                                    return ((long long)exit_status);
                                }
                            }
                        }
                        if (((long long)1) != 0 && (v15[1] < v15[2] || ((int)v14) >= 0))
                        {
                            if (((int)v14) == 9)
                            {
                                v13 = (long long)get_next_tab_column();
                                if (v0 != 0)
                                {
                                    if (v19 == 18446744069414584319)
                                    {
                                        error(0x1, 0x0, dcgettext(0x0, &g_4070be, 0x5));
                                    }
                                }
                                else
                                {
                                    if (v19 > v13)
                                    {
                                        error(0x1, 0x0, dcgettext(0x0, &g_4070be, 0x5));
                                    }
                                    else
                                    {
                                        while (true)
                                        {
                                            v19 += 1;
                                            if (v13 <= v19)
                                            {
                                                break;
                                            }
                                            v5 = *(stdout + 40);
                                            if (*(stdout + 40) < *(stdout + 48))
                                            {
                                                *(stdout + 40) = *(stdout + 40) + 1;
                                                *(v5) = 32;
                                            }
                                            else
                                            {
                                                v5 = __overflow();
                                                error(0x1, *(__errno_location()), dcgettext(0x0, &g_4070d5, 0x5));
                                            }
                                        }
                                    }
                                }
                                if ((v0 == 0 || v19 != 18446744069414584319) && (v19 <= v13 || v0 != 0))
                                {
                                    v14 = 32;
                                }
                            }
                            if (((int)v14) == 8)
                            {
                                v1 -= ((long long)(v1 != 0));
                            }
                        }
                        if (False)
                        {
                            error(0x1, 0x0, dcgettext(0x0, &g_4070be, 0x5));
                        }
                        if (((long long)1) != 0 && (((int)v14) == 8 || ((int)v14) == 9) && (v15[1] < v15[2] || ((int)v14) >= 0) && (v0 == 0 || ((int)v14) != 9 || v19 != 18446744069414584319) && (v19 <= v13 || ((int)v14) != 9 || v0 != 0) && ((long long)convert_entire_line) == 0 || ((long long)1) != 0 && (((int)v14) < 0 || ((int)v14) != 8) && (((int)v14) < 0 || ((int)v14) != 9) && (((int)v14) != 8 || v15[1] >= v15[2]) && (((int)v14) != 9 || v15[1] >= v15[2]) && (v15[1] < v15[2] || v15 == 0 || ((int)v14) >= 0) && ((long long)convert_entire_line) == 0)
                        {
                            v18 = __ctype_b_loc();
                        }
                        if (...)
                        {
                            cleanup_file_list_stdin();
                            return ((long long)exit_status);
                        }
                        if (...)
                        {
                            v5 = *(stdout + 40);
                            if (*(stdout + 40) < *(stdout + 48))
                            {
                                *(stdout + 40) = *(stdout + 40) + 1;
                                *(v5) = bl<1>;
                            }
                            else
                            {
                                v5 = __overflow();
                                if (v5 < 0)
                                {
                                    error(0x1, *(__errno_location()), dcgettext(0x0, &g_4070d5, 0x5));
                                }
                            }
                        }
                    }
                }
            }
            else
            {
                cleanup_file_list_stdin();
                break;
            }
        }
        else if (v2 <= 57)
        {
            if (v2 <= 47)
            {
                if (((int)v2) == -131)
                {
                    version_etc();
                    exit(0x0); /* do not return */
                }
                else if (((int)v2) == -130)
                {
                    usage(); /* do not return */
                }
                else
                {
                    usage(); /* do not return */
                }
            }
            if (optarg != 0)
            {
                parse_tab_stops();
            }
            else
            {
                v2 = v7;
                v3 = 0;
                parse_tab_stops();
            }
        }
        else
        {
            if (v2 == 105)
            {
                convert_entire_line = 0;
            }
            else if (v2 == 116)
            {
                parse_tab_stops();
            }
            else
            {
                usage(); /* do not return */
            }
        }
    }
    return ((long long)exit_status);
}
