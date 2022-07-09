typedef struct struct_0 {
    unsigned long long field_0;
} struct_0;

extern unsigned int g_407085;
extern unsigned int g_4070be;
extern unsigned int g_4070c2;
extern unsigned int g_4070d2;
extern unsigned int g_407430;
extern unsigned int g_407458;
extern unsigned int g_4074a8;
extern unsigned int longopts;
extern struct_0 optarg;
extern struct_1 optind;

int main()
{
    struct_0 *v10;  // rsi
    unsigned int v11;  // edi
    unsigned long long v12;  // r12
    unsigned int v13;  // r13d
    unsigned long long v14;  // r14
    unsigned long long v15;  // r14
    unsigned long long v16;  // r14
    unsigned long long v17;  // r15
    unsigned long long v2;  // rax
    unsigned long long v3;  // rax
    struct_0 * v5;  // rax
    unsigned long long v7;  // rax
    char *v9;  // rdx

    v12 = 0;
    set_program_name();
    setlocale();
    bindtextdomain(&g_407085, &g_407430);
    textdomain(&g_407085);
    atexit();
    while (true)
    {
        v2 = getopt_long(v11, ((int)v10), &g_4070be, &longopts, 0x0);
        if (((int)v2) != -1)
        {
            if (((int)v2) == 90)
            {
                error(0x0, 0x0, dcgettext(0x0, &g_407458, 0x5));
            }
            else if (((char)(v2 <= 90)))
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
            else
            {
                if (((int)v2) == 109)
                {
                    v12 = optarg;
                }
                else
                {
                    usage(); /* do not return */
                }
            }
        }
        else
        {
            if (optind != v11)
            {
                if (v12 != 0)
                {
                    v15 = (long long)mode_compile();
                    if (v15 != 0)
                    {
                        umask((int)umask(0x0));
                        ((unsigned int)v13) = (long long)mode_adjust();
                        rpl_free();
                        if ((((int)((unsigned int)v13)) & -0x200) != 0)
                        {
                            error(0x1, 0x0, dcgettext(0x0, &g_4074a8, 0x5));
                        }
                    }
                    else
                    {
                        error(0x1, 0x0, dcgettext(0x0, &g_4070d2, 0x5));
                    }
                }
                else
                {
                    v13 = 438;
                }
                if (v12 == 0 || (((int)((unsigned int)v13)) & -0x200) == 0 && v15 != 0)
                {
                    v5 = ((long long)optind);
                    v14 = 0;
                    if (v11 <= optind)
                    {
                        v7 = v14;
                        return v7;
                    }
                    do
                    {
                        v3 = mkfifo(((int)*(v10 + v5 * 8)), v13);
                        if (v3 != 0)
                        {
                            v17 = (long long)quotearg_style();
                        }
                        else if (v12 != 0)
                        {
                            v3 = lchmod();
                            if (v3 != 0)
                            {
                                v17 = (long long)quotearg_style();
                            }
                        }
                        if (v3 != 0 || v12 != 0 && v3 != 0)
                        {
                            v16 = dcgettext(0x0, v10, 0x5);
                            v14 = 1;
                            error(0x0, *(__errno_location()), v9);
                        }
                        v5 = ((long long)(optind + 1));
                        optind = optind + 1;
                    }
                    while (((int)v5) < v11);
                    v7 = v14;
                    return v7;
                }
            }
            error(0x0, 0x0, dcgettext(0x0, &g_4070c2, 0x5));
            usage(); /* do not return */
        }
    }
}
