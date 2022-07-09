typedef struct struct_0 {
    unsigned long long field_0;
} struct_0;

typedef struct struct_1 {
    unsigned int field_0;
} struct_1;

extern unsigned int g_40c084;
extern unsigned int g_40c0ca;
extern unsigned int g_40c0d3;
extern unsigned int g_40c0e3;
extern unsigned int g_40c0fc;
extern unsigned int g_40c938;
extern unsigned int g_40c960;
extern unsigned int g_40c990;
extern struct_1 g_40c9b0;
extern unsigned int long_options;
extern struct_0 optarg;
extern struct_1 optind;
extern struct_0 reference_file;

int main()
{
    BOT tmp_17;  // tmp #17
    BOT tmp_25;  // tmp #25
    unsigned long|unsigned long long v0;  // [bp-0x138]
    unsigned long v1;  // [bp-0x130]
    char v10;  // [bp+0x17]
    unsigned int v11;  // [bp+0x28]
    char v12;  // [bp+0x2c]
    char v13;  // [bp+0x39]
    struct_0 *|unsigned long long|struct_1 * v15;  // rax
    unsigned long long v17;  // rax
    unsigned long long v18;  // rax
    char v2;  // [bp-0x119]
    char *v23;  // rbx
    struct_0 *v24;  // rsi
    unsigned int v25;  // edi
    unsigned long long v26;  // r12
    unsigned long long v27;  // r12
    unsigned long long v28;  // r13
    unsigned long long v29;  // r13
    unsigned long v3;  // [bp-0x110]
    unsigned long long v30;  // r13
    unsigned long|unsigned int v31;  // r14d
    char v4;  // [bp-0x104]
    unsigned long v5;  // [bp-0x100]
    char v6;  // [bp-0xf8]
    unsigned long v7;  // [bp-0xe8]
    char v8;  // [bp-0xd8]

    v31 = 2;
    /* goto 4205015; */
    v10 = 1;
    /* goto 4205015; */
    v10 = 0;
    /* goto 4205015; */
    v30 = 1;
    /* goto 4205015; */
    v11 = 0;
    /* goto 4205015; */
    v13 = 1;
    /* goto 4205015; */
    v11 = 1;
    /* goto 4205015; */
    v12 = 1;
    /* goto 4205015; */
    reference_file = optarg;
    /* goto 4205015; */
    v30 = 0;
    /* goto 4205015; */
    v31 = 17;
    /* goto 4205015; */
    v31 = 16;
    v30 = -1;
    set_program_name();
    setlocale();
    bindtextdomain(&g_40c084, &g_40c938);
    textdomain(&g_40c084);
    atexit();
    chopt_init();
    v2 = 0;
    v15 = getopt_long(v25, ((int)v24), &g_40c0ca, &long_options, 0x0);
    if (!(v15 != -1))
    {
        if (v4 == 0)
        {
        }
        else
        {
            if (v31 == 16)
            {
                if (((int)v30) != 1)
                {
                    v30 = 0;
                }
                else
                {
                    error(0x1, 0x0, dcgettext(0x0, &g_40c960, 0x5));
                }
            }
        }
        if (v4 == 0 || ((int)v30) != 1 || v31 != 16)
        {
            tmp_17 = v30;
            v15 = ((long long)optind);
            v30 = reference_file;
            v6 = ((char)(((int)tmp_17) != 0));
            if (reference_file != 0)
            {
                if (v25 - optind > 0)
                {
                    v15 = __xstat(0x1, ((int)reference_file), ((int)&v8));
                    if (v15 == 0)
                    {
                        v7 = (long long)gid_to_name();
                    }
                    else
                    {
                        v29 = (long long)quotearg_style();
                        error(0x1, *(__errno_location()), dcgettext(0x0, &g_40c990, 0x5));
                    }
                }
            }
            else
            {
                if (v25 - optind > 1)
                {
                    v23 = *(v24 + v15 * 8);
                    optind = ((int)v15) + 1;
                    if (*(v23) != 0)
                    {
                        v30 = (long long)xstrdup();
                    }
                    v7 = v30;
                    if (*(v23) != 0)
                    {
                        v15 = getgrnam(((int)*(v24 + ((long long)optind) * 8)));
                        if (v15 != 0)
                        {
                        }
                        else
                        {
                            v15 = xstrtoumax();
                            if (v15 == 0)
                            {
                                if (v3 > -1)
                                {
                                    v27 = (long long)quote();
                                    error(0x1, 0x0, dcgettext(0x0, &g_40c0fc, 0x5));
                                }
                            }
                            else
                            {
                                v27 = (long long)quote();
                                error(0x1, 0x0, dcgettext(0x0, &g_40c0fc, 0x5));
                            }
                        }
                        if ((v3 <= -1 || v15 != 0) && (v15 == 0 || v15 != 0))
                        {
                            endgrent();
                        }
                    }
                }
            }
            if (reference_file == 0 && v25 - optind <= 1 || v25 - optind <= 0 && reference_file != 0)
            {
                if (((int)optind) >= v25)
                {
                    error(0x0, 0x0, dcgettext(0x0, &g_40c0d3, 0x5));
                    usage(); /* do not return */
                }
                v26 = (long long)quote();
                error(0x0, 0x0, dcgettext(0x0, &g_40c0e3, 0x5));
                usage(); /* do not return */
            }
            if ((v15 == 0 || reference_file == 0) && (reference_file == 0 || v25 - optind > 0) && (reference_file != 0 || v25 - optind > 1) && (*(v23) == 0 || v3 <= -1 || v15 != 0 || reference_file != 0) && (*(v23) == 0 || v15 == 0 || v15 != 0 || reference_file != 0))
            {
                if (v4 != 0)
                {
                    if (v2 == 0)
                    {
                        v1 = ((long long)optind);
                        v0 = &stack_base-264;
                        v17 = ((long long)(chown_files() ^ 1));
                        return ((long long)tmp_25);
                    }
                    v5 = (long long)get_root_dev_ino();
                    if (v5 != 0)
                    {
                        v1 = ((long long)optind);
                        v0 = &stack_base-264;
                        v17 = ((long long)(chown_files() ^ 1));
                        return ((long long)tmp_25);
                    }
                    else
                    {
                        v28 = (long long)quotearg_style();
                        error(0x1, *(__errno_location()), dcgettext(0x0, &g_40c990, 0x5));
                    }
                }
                else
                {
                    v1 = ((long long)optind);
                    v0 = &stack_base-264;
                    v17 = ((long long)(chown_files() ^ 1));
                    return ((long long)tmp_25);
                }
            }
        }
    }
    else if (!(v15 <= 131))
    {
        usage(); /* do not return */
    }
    else if (v15 > 71)
    {
        v15 = ((long long)v15) - 72;
        if (((int)v15) <= 59)
        {
            v18 = ((long long)*(g_40c9b0 + v15 * 4)) + &g_40c9b0;
            /* goto v18; */
        }
        else
        {
            usage(); /* do not return */
        }
    }
    else if (v15 == -131)
    {
        v0 = 0;
        version_etc();
        exit(0x0); /* do not return */
    }
    else if (v15 == -130)
    {
        usage(); /* do not return */
    }
    else
    {
        usage(); /* do not return */
    }
}
