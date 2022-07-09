typedef struct struct_2 {
    unsigned long long field_0;
} struct_2;

typedef struct struct_1 {
    unsigned int field_0;
} struct_1;

typedef struct struct_4 {
    unsigned long long field_0;
    char field_8;
    char padding_9[7];
    unsigned long long field_10;
} struct_4;

typedef struct struct_5 {
    unsigned long long field_0;
    unsigned int field_8;
    char field_c;
    char padding_d[3];
    unsigned long long field_10;
    unsigned long long field_18;
} struct_5;

extern unsigned long long control_info;
extern unsigned int current_col;
extern unsigned int g_40d194;
extern unsigned int g_40d2d5;
extern unsigned int g_40d2db;
extern unsigned int g_40f6a8;
extern unsigned int g_40f6d0;
extern unsigned int g_40f6f8;
extern unsigned int g_40f748;
extern unsigned int g_40f780;
extern unsigned int g_40f7a8;
extern struct_1 g_414148;
extern struct_1 g_414184;
extern struct_1 g_414188;
extern struct_3 g_41418c;
extern unsigned long long g_414191;
extern unsigned long long g_9;
extern unsigned int longopts;
extern struct_1 max_col;
extern struct_1 mode.7424;
extern unsigned long long mode_info;
extern char new_mode.7463;
extern struct_2 optarg;
extern unsigned int opterr;
extern unsigned int optind;
extern unsigned long long stdout[7];
extern struct_1 tcsetattr_options;

int main()
{
    BOT tmp_5;  // tmp #5
    unsigned long v0;  // [bp-0x68]
    unsigned long|struct_1 * v1;  // [bp-0x60]
    char *|unsigned long long v10;  // rax
    unsigned long long v12;  // rax
    unsigned long long v14;  // rax
    unsigned long long v15;  // rax
    unsigned long long v16;  // rax
    unsigned long|unsigned long long v2;  // [bp-0x58]
    unsigned long long v20;  // rax
    unsigned long long v25;  // rax
    char *|unsigned long long v27;  // rax
    unsigned long long v28;  // rax
    char v3;  // [bp-0x4b]
    unsigned long long v30;  // rcx
    unsigned long long|struct_1 * v31;  // rdx
    unsigned long long|struct_5 * v32;  // rbx
    unsigned long long [3] v33;  // rbx
    struct_4 * v34;  // rbx
    char *|unsigned long long|unsigned int v35;  // rbp
    char *|unsigned long long v36;  // rsi
    char *|unsigned long long v37;  // rdi
    unsigned long v38;  // r9
    unsigned long long v39;  // r12
    char v4;  // [bp-0x4a]
    unsigned long long|unsigned int v40;  // r12d
    unsigned long long v41;  // r12
    unsigned long long v42;  // r12
    unsigned long long v43;  // r12
    unsigned long long v44;  // r12
    unsigned long long|unsigned int v45;  // r13
    unsigned long long v46;  // r13
    unsigned long long v47;  // r14
    unsigned long long v48;  // r15
    unsigned long long v49;  // r15
    char v5;  // [bp-0x49]
    unsigned long long v50;  // cc_dep1
    unsigned long long v51;  // cc_dep2
    unsigned long v52;  // d
    char v6;  // [bp-0x42]
    char v7;  // [bp-0x41]
    struct_2 *|unsigned long long v9;  // rax

    v45 = 0;
    v40 = v37;
    v35 = 0;
    v32 = 0;
    set_program_name();
    setlocale();
    bindtextdomain(&g_40d194, &g_40f6a8);
    textdomain(&g_40d194);
    atexit();
    v2 = 0;
    v48 = 1;
    opterr = 0;
    v5 = 1;
    v3 = 0;
    v4 = 0;
    while (true)
    {
        v9 = getopt_long(((int)(v40 - v35)), ((int)(v48 + v32 * 8)), &g_40d2d5, &longopts, 0x0);
        if (((int)v1) != -1)
        {
            if (((int)v1) != 70)
            {
                if (!(((char)(v1 <= 70))))
                {
                    if (((int)v1) == 97)
                    {
                        v4 = 1;
                        v45 = 1;
                        /* goto 4208915; */
                    }
                    if (((int)v1) == 103)
                    {
                        v3 = 1;
                        v45 = 2;
                        /* goto 4208915; */
                    }
                }
                else
                {
                    if (((int)v1) == -131)
                    {
                        version_etc();
                        exit(0x0); /* do not return */
                    }
                    if (((int)v1) == -130)
                    {
                        usage(); /* do not return */
                    }
                }
                if ((((char)(v1 <= 70)) || ((int)v1) != 103) && (((char)(v1 <= 70)) || ((int)v1) != 97) && (!(((char)(v1 <= 70))) || ((int)v1) != -131) && (!(((char)(v1 <= 70))) || ((int)v1) != -130))
                {
                    v35 = 1;
                    v30 = 7;
                    v37 = "-drain";
                    v32 = 1;
                    v36 = *(1 + 1 * 8);
                    while (v30 != 0)
                    {
                        v30 -= 1;
                        v50 = ((long long)*(v36));
                        v51 = ((long long)*(v37));
                        v37 += v52;
                        v36 += v52;
                        break;
                    }
                    v50 = ((long long)(((char)(v50 > v51)) - 0 - ((char)(v50 < v51))));
                    if (((char)v50) != 0)
                    {
                        v5 = ((char)(strcmp(*(1 + (((long long)1) << 3)), "drain") != 0? 0 : ((int)*(&stack_base-73))));
                    }
                    optind = 0;
                    v48 = 1;
                }
            }
            else if (v2 == 0)
            {
                v2 = optarg;
            }
            else
            {
                error(0x1, 0x0, dcgettext(0x0, &g_40f6d0, 0x5));
            }
            if ((v2 == 0 || ((int)v1) != 70) && (((int)v1) == 70 || !(((char)(v1 <= 70)))) && (((int)v1) == 103 || ((int)v1) == 70 || ((int)v1) == 97))
            {
                v36 = ((long long)optind);
                if (optind > ((int)v48))
                {
                    v9 = v48 + (v48 + v32) * 8;
                    do
                    {
                        v9->field_0 = 0;
                        v9 += 8;
                    }
                    while ((((long long)(((long long)optind) - 1 - 1)) + 1 << 3) + 9 != v9);
                }
                else
                {
                    v36 = v48;
                }
                v48 = v36;
            }
        }
        else if (((long long)(v3 & v4)) == 0)
        {
            if (v5 == 0)
            {
                if (v4 != 0)
                {
                    error(0x1, 0x0, dcgettext(0x0, &g_40f748, 0x5));
                }
                else if (v3 != 0)
                {
                    error(0x1, 0x0, dcgettext(0x0, &g_40f748, 0x5));
                }
                else if (v2 != 0)
                {
                    v1 = v9;
                    v0 = &stack_base-66;
                    apply_settings();
                }
                else
                {
                    v2 = dcgettext(0x0, &g_40d2db, 0x5);
                    v1 = v38;
                    v0 = &stack_base-66;
                    apply_settings();
                    v20 = tcgetattr(0x0, &mode.7424);
                    if (v20 != 0)
                    {
                        v43 = (long long)quotearg_n_style_colon();
                        error(0x1, *(__errno_location()), "%s");
                    }
                }
            }
            else
            {
                if (v2 == 0)
                {
                    v2 = dcgettext(0x0, &g_40d2db, 0x5);
                    v20 = tcgetattr(0x0, &mode.7424);
                    if (v20 != 0)
                    {
                        v43 = (long long)quotearg_n_style_colon();
                        error(0x1, *(__errno_location()), "%s");
                    }
                }
            }
            if (v2 != 0 && (v3 == 0 || v5 != 0) && (v4 == 0 || v5 != 0))
            {
                v15 = fd_reopen();
                if (v15 >= 0)
                {
                    v25 = rpl_fcntl();
                    if (v25 != -1)
                    {
                        v25 = rpl_fcntl();
                        if (v25 >= 0)
                        {
                            v20 = tcgetattr(0x0, &mode.7424);
                            if (v20 != 0)
                            {
                                v43 = (long long)quotearg_n_style_colon();
                                error(0x1, *(__errno_location()), "%s");
                            }
                            else if (((long long)(v3 | v5)) == 0)
                            {
                                if (v4 == 0)
                                {
                                    /* goto 4209449; */
                                }
                            }
                        }
                        else
                        {
                            v46 = (long long)quotearg_n_style_colon();
                            error(0x1, *(__errno_location()), dcgettext(0x0, &g_40f780, 0x5));
                        }
                    }
                    else
                    {
                        v46 = (long long)quotearg_n_style_colon();
                        error(0x1, *(__errno_location()), dcgettext(0x0, &g_40f780, 0x5));
                    }
                }
                else
                {
                    v39 = (long long)quotearg_n_style_colon();
                    error(0x1, *(__errno_location()), "%s");
                }
            }
            if (...)
            {
                current_col = 0;
                max_col = screen_columns();
                if (v45 == 1)
                {
                    display_speed();
                    display_window_size();
                    wrapf();
                    v27 = *(stdout + 40);
                    if (*(stdout + 40) < *(stdout + 48))
                    {
                        *(stdout + 40) = *(stdout + 40) + 1;
                        *(v27) = &g_9;
                    }
                    else
                    {
                        __overflow(((int)stdout), &g_9);
                    }
                    v33 = &control_info;
                    current_col = 0;
                    while (true)
                    {
                        v35 = v33[0];
                        v28 = strcmp(v33[0], "min");
                        if (v28 == 0)
                        {
                            break;
                        }
                        v27 = strcmp(v35, "flush");
                        if (v27 != 0)
                        {
                            if (((long long)*(&mode.7424 + v33[2] + 17)) != 0)
                            {
                                v31 = (long long)visible.part.0();
                            }
                            wrapf();
                        }
                        v33 += 24;
                    }
                    wrapf();
                    if (current_col != 0)
                    {
                        v10 = *(stdout + 40);
                        if (*(stdout + 40) < *(stdout + 48))
                        {
                            *(stdout + 40) = *(stdout + 40) + 1;
                            *(v10) = &g_9;
                        }
                        else
                        {
                            __overflow(((int)stdout), &g_9);
                        }
                    }
                    v32 = &mode_info;
                    v35 = 0;
                    for (current_col = 0; v32->field_0 != 0; v32 += 32)
                    {
                        v47 = ((long long)v32->field_c);
                        if (((long long)(v32->field_c & 8)) == 0)
                        {
                            v48 = ((long long)v32->field_8);
                            if (v32->field_8 != ((unsigned int)v35))
                            {
                                v10 = *(stdout + 40);
                                if (*(stdout + 40) < *(stdout + 48))
                                {
                                    *(stdout + 40) = *(stdout + 40) + 1;
                                    *(v10) = &g_9;
                                }
                                else
                                {
                                    __overflow(((int)stdout), &g_9);
                                }
                                current_col = 0;
                                v35 = v48;
                            }
                            v31 = (long long)mode_type_flag();
                            v16 = v32->field_18;
                            if (v32->field_18 == 0)
                            {
                                v16 = v32->field_10;
                            }
                            if (v31 != 0)
                            {
                                v10 = ((long long)(v16 & v31->field_0));
                                if (v10 == v32->field_10)
                                {
                                    wrapf();
                                }
                                else if (((long long)(v47 & 4)) != 0)
                                {
                                    wrapf();
                                }
                            }
                            else
                            {
                                __assert_fail(); /* do not return */
                            }
                        }
                    }
                }
                else if (v45 == 2)
                {
                    v32 = 0;
                    __printf_chk(0x1, "%lx:%lx:%lx:%lx", mode.7424, g_414184, g_414188, g_41418c);
                    while (true)
                    {
                        v31 = ((long long)*(v32 + 4276625));
                        v32 += 1;
                        __printf_chk(0x1, ":%lx", v31);
                        if (v32 == 32)
                        {
                            break;
                        }
                    }
                    v10 = *(stdout + 40);
                    if (*(stdout + 40) < *(stdout + 48))
                    {
                        *(stdout + 40) = *(stdout + 40) + 1;
                        *(v10) = &g_9;
                        return 0;
                    }
                    __overflow(((int)stdout), &g_9);
                    return 0;
                }
                else
                {
                    display_speed();
                    wrapf();
                    v10 = *(stdout + 40);
                    if (*(stdout + 40) < *(stdout + 48))
                    {
                        *(stdout + 40) = *(stdout + 40) + 1;
                        *(v10) = &g_9;
                    }
                    else
                    {
                        __overflow(((int)stdout), &g_9);
                    }
                    current_col = 0;
                    v34 = &control_info;
                    v49 = 1;
                    while (true)
                    {
                        v35 = v34->field_0;
                        v10 = strcmp(v34->field_0, "min");
                        if (v10 == 0)
                        {
                            break;
                        }
                        v40 = ((long long)*(&mode.7424 + v34->field_10 + 17));
                        if (*(&mode.7424 + v34->field_10 + 17) != v34->field_8)
                        {
                            v10 = strcmp(v35, "flush");
                            if (v10 != 0)
                            {
                                if (((long long)v40) != 0)
                                {
                                    v31 = (long long)visible.part.0();
                                }
                                v49 = 0;
                                wrapf();
                            }
                        }
                        v34 += 24;
                    }
                    if (((long long)(g_41418c & 2)) == 0)
                    {
                        wrapf();
                    }
                    else if (((long long)v49) == 0)
                    {
                        v10 = *(stdout + 40);
                        if (*(stdout + 40) < *(stdout + 48))
                        {
                            *(stdout + 40) = *(stdout + 40) + 1;
                            *(v10) = &g_9;
                        }
                        else
                        {
                            __overflow(((int)stdout), &g_9);
                        }
                    }
                    v32 = &mode_info;
                    v40 = 0;
                    v48 = 1;
                    current_col = 0;
                    while (true)
                    {
                        if (v32->field_0 == 0)
                        {
                            current_col = 0;
                            return 0;
                        }
                    }
                    v35 = ((long long)v32->field_c);
                    if (((long long)(v32->field_c & 8)) == 0)
                    {
                        v47 = ((long long)v32->field_8);
                        if (v32->field_8 != v40)
                        {
                            v40 = v47;
                            if (((long long)v48) == 0)
                            {
                                v10 = *(stdout + 40);
                                if (*(stdout + 40) < *(stdout + 48))
                                {
                                    *(stdout + 40) = *(stdout + 40) + 1;
                                    *(v10) = &g_9;
                                }
                                else
                                {
                                    __overflow(((int)stdout), &g_9);
                                }
                                current_col = 0;
                                v48 = 1;
                            }
                        }
                        v31 = (long long)mode_type_flag();
                        v12 = v32->field_18;
                        if (v32->field_18 == 0)
                        {
                            v12 = v32->field_10;
                        }
                        if (v31 != 0)
                        {
                            v10 = ((long long)(v12 & v31->field_0));
                            if (v10 != v32->field_10)
                            {
                                v35 = ((long long)(((int)v35) & 5));
                                tmp_5 = v35;
                                if (tmp_5 == 5)
                                {
                                    v48 = 0;
                                    wrapf();
                                }
                            }
                            else if (((long long)(v35 & 2)) != 0)
                            {
                                v48 = 0;
                                wrapf();
                            }
                        }
                        else
                        {
                            __assert_fail(); /* do not return */
                        }
                    }
                    if (((long long)(v32->field_c & 8)) != 0 || v31 != 0)
                    {
                        v32 += 32;
                    }
                }
            }
            if (...)
            {
                v7 = 0;
                v6 = 0;
                v1 = &mode.7424;
                v0 = &stack_base-66;
                apply_settings();
                if (v6 == 0)
                {
                    return 0;
                }
                v14 = tcsetattr(0x0, tcsetattr_options, &mode.7424);
                if (!(v14 == 0))
                {
                    v42 = (long long)quotearg_n_style_colon();
                    error(0x1, *(__errno_location()), "%s");
                }
                else if (tcgetattr(0x0, &new_mode.7463) == 0)
                {
                    v10 = memcmp(&mode.7424, &new_mode.7463, 0x3c);
                    if (v10 == 0)
                    {
                        return 0;
                    }
                    else
                    {
                        g_414148 = g_414148 & 4025548799;
                        if (v7 == 0)
                        {
                            v10 = memcmp(&mode.7424, &new_mode.7463, 0x3c);
                            if (v10 == 0)
                            {
                                return 0;
                            }
                            else
                            {
                                v41 = (long long)quotearg_n_style_colon();
                                error(0x1, 0x0, dcgettext(0x0, &g_40f7a8, 0x5));
                            }
                        }
                        else
                        {
                            v41 = (long long)quotearg_n_style_colon();
                            error(0x1, 0x0, dcgettext(0x0, &g_40f7a8, 0x5));
                        }
                    }
                }
                else
                {
                    v44 = (long long)quotearg_n_style_colon();
                    error(0x1, *(__errno_location()), "%s");
                }
            }
        }
        else
        {
            error(0x1, 0x0, dcgettext(0x0, &g_40f6f8, 0x5));
        }
    }
    v10 = *(stdout + 40);
    if (*(stdout + 40) < *(stdout + 48))
    {
        *(stdout + 40) = *(stdout + 40) + 1;
        *(v10) = &g_9;
        current_col = 0;
        return 0;
    }
    __overflow(((int)stdout), &g_9);
    current_col = 0;
    return 0;
}
