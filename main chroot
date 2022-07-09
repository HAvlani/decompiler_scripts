typedef struct struct_2 {
    unsigned long long field_0;
    char padding_8[12];
    unsigned int field_14;
} struct_2;

typedef struct struct_0 {
    unsigned int field_0;
} struct_0;

extern unsigned int exit_failure;
extern unsigned int g_4080ae;
extern unsigned int g_4080ee;
extern unsigned int g_4080f0;
extern unsigned int g_408109;
extern unsigned int g_408120;
extern unsigned int g_408136;
extern unsigned int g_408460;
extern unsigned int g_408488;
extern unsigned int g_4084c0;
extern unsigned int g_4084e8;
extern unsigned int g_408508;
extern unsigned int g_408530;
extern unsigned int g_408558;
extern unsigned int long_opts;
extern struct_1 optarg;
extern struct_0 optind;

int main()
{
    unsigned long|struct_2 *|unsigned long long v0;  // [bp-0x70]
    unsigned int v1;  // [bp-0x60]
    unsigned long long|char * v15;  // rax
    unsigned long long v18;  // rcx
    unsigned long long [3] v19;  // rbx
    unsigned int v2;  // [bp-0x5c]
    struct_0 *v20;  // rbp
    unsigned long long v21[3];  // rsi
    unsigned int v22;  // edi
    char *v23;  // r8
    unsigned long long v24;  // r12
    unsigned int v25;  // r12d
    unsigned long long v26;  // r12
    unsigned long long v27;  // r12
    char v28;  // r12b
    unsigned long long v29;  // r13
    unsigned long long v3;  // [bp-0x58]
    unsigned long long v30;  // r13
    unsigned long long v31;  // r14
    unsigned long|unsigned long long v4;  // [bp-0x50]
    char|unsigned long long v5;  // [bp-0x48]
    struct_2 *|unsigned long long v7;  // rax
    unsigned long long v9;  // rax

    v31 = 0;
    v30 = 0;
    v24 = 0;
    v19 = v21;
    v1 = -1;
    v2 = -1;
    v3 = 0;
    v4 = 0;
    set_program_name();
    setlocale();
    bindtextdomain(&g_4080ae, &g_408460);
    textdomain(&g_4080ae);
    exit_failure = 125;
    atexit();
    while (true)
    {
        v15 = getopt_long(v22, ((int)v21), &g_4080ee, &long_opts, 0x0);
        if (((int)v15) != -1)
        {
            if (((int)v15) == 0x100)
            {
                v31 = optarg;
            }
            else if (!(((char)(v15 <= 0x100))))
            {
                if (((int)v15) == 257)
                {
                    v30 = optarg;
                    v15 = strlen(optarg);
                    v15 = optarg + v15 - 1;
                    *(v15) = 0;
                }
                else if (((int)v15) == 258)
                {
                    v24 = 1;
                }
                else
                {
                    usage(); /* do not return */
                }
            }
            else
            {
                if (((int)v15) == -131)
                {
                    version_etc();
                    exit(0x0); /* do not return */
                }
                else if (((int)v15) == -130)
                {
                    usage(); /* do not return */
                }
                else
                {
                    usage(); /* do not return */
                }
            }
        }
        else
        {
            if (optind < v22)
            {
                v23 = canonicalize_file_name(((int)v21[((long long)optind)]));
                if (v0 != 0)
                {
                    v0 = v23;
                    v15 = strcmp("/", v23);
                    if (v15 == 0)
                    {
                        rpl_free();
                        v7 = chroot(((int)v21[((long long)optind)]));
                        if (v7 == 0)
                        {
                            v0 = 0;
                        }
                        else
                        {
                            v29 = (long long)quotearg_style();
                            error(0x7d, *(__errno_location()), dcgettext(0x0, &g_4084c0, 0x5));
                        }
                    }
                }
                if (v0 == 0 || v15 != 0)
                {
                    rpl_free();
                    if (((long long)v24) == 0)
                    {
                        if (v30 != 0)
                        {
                            parse_user_spec();
                        }
                        if (v1 != -1)
                        {
                            if (v31 != 0)
                            {
                                if (v2 == -1)
                                {
                                    v0 = getpwuid();
                                }
                                if (v0 == 0 || v2 != -1)
                                {
                                    v0 = 0;
                                }
                            }
                            else
                            {
                                v0 = getpwuid();
                            }
                            if (v0 != 0 && (v2 == -1 || v31 == 0))
                            {
                                if (v2 == -1)
                                {
                                    v2 = v0->field_14;
                                }
                                v0 = v0->field_0;
                            }
                        }
                        else
                        {
                            v0 = 0;
                        }
                        if (v31 != 0)
                        {
                            if (*(v31) != 0)
                            {
                                parse_additional_groups();
                            }
                        }
                        else
                        {
                            if (v2 != -1)
                            {
                                if (!(v0 != 0))
                                {
                                    v0 = 0;
                                }
                                else if (((int)v4) > 0)
                                {
                                    v4 = (long long)xgetgroups();
                                }
                            }
                        }
                        v7 = chroot(((int)v21[((long long)optind)]));
                        if (v7 != 0)
                        {
                            v29 = (long long)quotearg_style();
                            error(0x7d, *(__errno_location()), dcgettext(0x0, &g_4084c0, 0x5));
                        }
                    }
                    else
                    {
                        v27 = (long long)quotearg_style();
                        error(0x0, 0x0, dcgettext(0x0, &g_408488, 0x5));
                        usage(); /* do not return */
                    }
                }
                if (((long long)v24) == 0 && (v15 == 0 || v7 == 0) && (v7 == 0 || v0 != 0) && (v7 == 0 || v0 == 0 || v15 != 0))
                {
                    v7 = chdir(&g_408dfe);
                    if (v7 != 0)
                    {
                        error(0x7d, *(__errno_location()), dcgettext(0x0, &g_4084e8, 0x5));
                    }
                }
                if ((((long long)v24) == 0 || v15 == 0) && (v15 == 0 || v7 == 0) && (((long long)v24) == 0 || v0 != 0) && (v7 == 0 || ((long long)v24) != 0) && (v7 == 0 || v0 != 0) && (v7 == 0 || v0 == 0 || v15 != 0))
                {
                    if (((int)(((long long)optind) + 1)) != v22)
                    {
                        v19 = v21 + ((long long)optind) * 8 + 8;
                    }
                    else
                    {
                        v7 = getenv("SHELL");
                        if (v7 == 0)
                        {
                            v7 = "/bin/sh";
                        }
                        v19[0] = v7;
                        v19[1] = "-i";
                        v19[2] = 0;
                    }
                    if (v30 != 0)
                    {
                        v18 = (long long)parse_user_spec_warn();
                        if (v18 != 0)
                        {
                            error(0 - ((int)(((long long)v5) < 1)) & 125, 0x0, "%s");
                        }
                    }
                    if (v30 == 0 || v18 == 0)
                    {
                        if (v1 != -1)
                        {
                            if (v2 != -1 && v31 != 0)
                            {
                                v5 = 0;
                            }
                            if (v2 == -1 || v31 == 0)
                            {
                                v7 = getpwuid();
                                if (v7 != 0)
                                {
                                    if (v2 == -1)
                                    {
                                        v2 = v7->field_14;
                                    }
                                    v7 = v7->field_0;
                                    v0 = v7;
                                    /* goto 4205676; */
                                }
                            }
                            if (v7 == 0 && v2 == -1)
                            {
                                error(0x7d, *(__errno_location()), dcgettext(0x0, &g_408508, 0x5));
                            }
                            if (v31 == 0 && (v7 != 0 || v2 != -1) && (((int)v2) == -1 || v0 == 0 || ((int)v4) > 0 || v4 != 0))
                            {
                                /* goto 4205265; */
                            }
                        }
                        if (v1 == -1 || v2 == -1 && v7 != 0 || v31 == 0 && v2 != -1)
                        {
                            v5 = 0;
                        }
                        if (v31 != 0)
                        {
                            if (v1 == -1 || v7 != 0 || v2 != -1)
                            {
                                if (*(v31) != 0)
                                {
                                    v7 = parse_additional_groups();
                                    if (v4 == 0)
                                    {
                                        v26 = 125;
                                        v9 = v26;
                                        return v9;
                                    }
                                }
                            }
                        }
                        else
                        {
                            if (v1 == -1 || v7 != 0 || v2 != -1)
                            {
                                if (v0 != 0)
                                {
                                    if (((int)v2) != -1)
                                    {
                                        v7 = xgetgroups();
                                        if (((int)v4) > 0)
                                        {
                                            v4 = ((long long)v7);
                                        }
                                        else if (v4 == 0)
                                        {
                                            error(0x7d, *(__errno_location()), dcgettext(0x0, &g_408530, 0x5));
                                        }
                                    }
                                }
                            }
                        }
                        if (...)
                        {
                            v7 = setgroups(((int)v4), 0x0);
                            if (v7 != 0)
                            {
                                error(0x7d, *(__errno_location()), dcgettext(0x0, &g_408558, 0x5));
                            }
                        }
                        if (...)
                        {
                            rpl_free();
                            rpl_free();
                            v20 = __errno_location();
                            if (((int)v2) != -1)
                            {
                                v7 = setgid(v2);
                                if (v7 != 0)
                                {
                                    error(0x7d, v20->field_0, dcgettext(0x0, &g_408109, 0x5));
                                }
                            }
                            if (v7 == 0 || ((int)v2) == -1)
                            {
                                if (v1 != -1)
                                {
                                    v7 = setuid();
                                    if (v7 == 0)
                                    {
                                        v25 = 0;
                                        execvp(((int)v19[0]), ((int)v19));
                                        v28 = ((char)(v20->field_0 == 2));
                                        v26 = ((long long)reg_112<4>) + 126;
                                        v30 = (long long)quote();
                                        error(0x0, v20->field_0, dcgettext(0x0, &g_408136, 0x5));
                                        break;
                                    }
                                    else
                                    {
                                        error(0x7d, v20->field_0, dcgettext(0x0, &g_408120, 0x5));
                                    }
                                }
                                else
                                {
                                    v25 = 0;
                                    execvp(((int)v19[0]), ((int)v19));
                                    v28 = ((char)(v20->field_0 == 2));
                                    v26 = ((long long)reg_112<4>) + 126;
                                    v30 = (long long)quote();
                                    error(0x0, v20->field_0, dcgettext(0x0, &g_408136, 0x5));
                                    v9 = v26;
                                    return v9;
                                }
                            }
                        }
                    }
                }
            }
            else
            {
                error(0x0, 0x0, dcgettext(0x0, &g_4080f0, 0x5));
                usage(); /* do not return */
            }
        }
    }
    v9 = v26;
    return v9;
}
