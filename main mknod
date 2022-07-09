extern unsigned int g_407084;
extern unsigned int g_4070bd;
extern unsigned int g_4070c1;
extern unsigned int g_4070ce;
extern unsigned int g_4070de;
extern unsigned int g_40710a;
extern unsigned int g_407127;
extern unsigned int g_407138;
extern unsigned int g_4076c8;
extern unsigned int g_4076f0;
extern unsigned int g_407740;
extern unsigned int g_4077e0;
extern unsigned int g_407800;
extern unsigned int longopts;
extern struct_1 optarg;
extern struct_0 optind;

int main()
{
    BOT tmp_6;  // tmp #6
    unsigned long v0;  // [bp-0x50]
    unsigned long v1;  // [bp-0x48]
    char **|unsigned long v11;  // rsi
    unsigned int v12;  // edi
    unsigned long long v13;  // r12
    unsigned long long v14;  // r12
    unsigned int|unsigned long long v15;  // r12d
    unsigned long long v16;  // r12
    unsigned long long v17;  // r12
    unsigned long long v18;  // r13
    unsigned long long v19;  // r13
    unsigned long long v20;  // r14
    unsigned long long v3;  // rax
    unsigned long long v6;  // rax
    unsigned long long v7;  // rax
    unsigned long long v9;  // rax

    v18 = 0;
    set_program_name();
    setlocale();
    bindtextdomain(&g_407084, &g_4076c8);
    textdomain(&g_407084);
    atexit();
    while (true)
    {
        v3 = getopt_long(v12, ((int)v11), &g_4070bd, &longopts, 0x0);
        if (((int)v3) == -1)
        {
            if (v18 != 0)
            {
                v20 = (long long)mode_compile();
                if (v20 != 0)
                {
                    umask((int)umask(0x0));
                    v15 = mode_adjust();
                    rpl_free();
                    if ((v15 & -0x200) != 0)
                    {
                        error(0x1, 0x0, dcgettext(0x0, &g_407740, 0x5));
                    }
                }
                else
                {
                    error(0x1, 0x0, dcgettext(0x0, &g_4070c1, 0x5));
                }
            }
            if (v18 == 0 || (v15 & -0x200) == 0 && v20 != 0)
            {
                if (optind < v12)
                {
                    if (((int)(((long long)optind) + 1)) < v12 && *(v11 + (((long long)optind) << 3)[1]) == 112)
                    {
                        if (!(((long long)(v12 - optind)) > 1))
                        {
                            v15 = (long long)quote();
                            error(0x0, 0x0, dcgettext(0x0, v11, 0x5));
                            usage(); /* do not return */
                        }
                    }
                    if (((int)(((long long)optind) + 1)) >= v12 || *(v11 + (((long long)optind) << 3)[1]) != 112)
                    {
                        if (!(((long long)(v12 - optind)) > 3))
                        {
                            v15 = (long long)quote();
                            error(0x0, 0x0, dcgettext(0x0, &g_407138, 0x5));
                            if (v12 - optind != 2)
                            {
                                usage(); /* do not return */
                            }
                            v11 = "Special files require major and minor device numbers.";
                            dcgettext(0x0, v11, 0x5);
                            __fprintf_chk();
                            usage(); /* do not return */
                        }
                        else if (((long long)(v12 - optind)) != 4)
                        {
                            v15 = (long long)quote();
                            error(0x0, 0x0, dcgettext(0x0, v11, 0x5));
                            usage(); /* do not return */
                        }
                    }
                }
                else if (((long long)(v12 - optind)) <= 1)
                {
                    error(0x0, 0x0, dcgettext(0x0, &g_4070ce, 0x5));
                    usage(); /* do not return */
                }
                if (optind < v12 || ((long long)(v12 - optind)) == 2 && ((long long)(v12 - optind)) > 1)
                {
                    if (...)
                    {
                        if (*(v11[((long long)optind) + 1]) != 112)
                        {
                            if (...)
                            {
                                v9 = xstrtoumax();
                                if (v9 == 0)
                                {
                                    v7 = xstrtoumax();
                                    if (v7 != 0)
                                    {
                                        v13 = (long long)quote();
                                        error(0x1, 0x0, dcgettext(0x0, &g_407800, 0x5));
                                    }
                                    else if ((((long long)v1) | v1 << 12 & 0xffffff00000 | ((long long)(((int)(v0 << 8)) & 0xfff00)) | v0 << 32 & 0xffffefff00000000) != 18446744069414584319)
                                    {
                                        v6 = rpl_mknod();
                                        if (v6 != 0)
                                        {
                                            v17 = (long long)quotearg_n_style_colon();
                                            error(0x1, *(__errno_location()), "%s");
                                        }
                                    }
                                    else
                                    {
                                        error(0x1, 0x0, dcgettext(0x0, &g_4070de, 0x5));
                                    }
                                }
                                else
                                {
                                    v16 = (long long)quote();
                                    error(0x1, 0x0, dcgettext(0x0, &g_4077e0, 0x5));
                                }
                            }
                            if (...)
                            {
                                v15 = (long long)quote();
                                error(0x0, 0x0, dcgettext(0x0, v11, 0x5));
                                usage(); /* do not return */
                            }
                        }
                        v6 = mkfifo();
                        if (v6 != 0)
                        {
                            v14 = (long long)quotearg_n_style_colon();
                            error(0x1, *(__errno_location()), "%s");
                        }
                        if (False)
                        {
                            v16 = (long long)quote();
                            error(0x1, 0x0, dcgettext(0x0, &g_4077e0, 0x5));
                            v13 = (long long)quote();
                            error(0x1, 0x0, dcgettext(0x0, &g_407800, 0x5));
                        }
                        if (...)
                        {
                            if (v18 != 0)
                            {
                                v6 = lchmod();
                                if (v6 == 0)
                                {
                                    break;
                                }
                                else
                                {
                                    v19 = (long long)quotearg_style();
                                    error(0x1, *(__errno_location()), dcgettext(0x0, &g_40710a, 0x5));
                                }
                            }
                            else
                            {
                                return 0;
                            }
                        }
                    }
                }
                if (((long long)(v12 - optind)) != 2 && ((long long)(v12 - optind)) > 1 && (((int)(((long long)optind) + 1)) < v12 || optind >= v12) && (*(v11 + (((long long)optind) << 3)[1]) == 112 || optind >= v12))
                {
                    v15 = (long long)quote();
                    error(0x0, 0x0, dcgettext(0x0, &g_407127, 0x5));
                    v11 = "Fifos do not have major and minor device numbers.";
                    if (((int)(v12 - optind)) != 4)
                    {
                        usage(); /* do not return */
                    }
                    dcgettext(0x0, v11, 0x5);
                    __fprintf_chk();
                    usage(); /* do not return */
                }
            }
        }
        else if (((int)v3) == 90)
        {
            error(0x0, 0x0, dcgettext(0x0, &g_4076f0, 0x5));
        }
        else if (((char)(v3 <= 90)))
        {
            if (((int)v3) == -131)
            {
                version_etc();
                exit(0x0); /* do not return */
            }
            else if (((int)v3) == -130)
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
            if (((int)v3) == 109)
            {
                v18 = optarg;
            }
            else
            {
                usage(); /* do not return */
            }
        }
    }
    return 0;
}
