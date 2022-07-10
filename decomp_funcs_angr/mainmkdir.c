extern unsigned int g_40a084;
extern unsigned int g_40a0ad;
extern unsigned int g_40a0d2;
extern unsigned int g_40a0d8;
extern unsigned int g_40a0e8;
extern unsigned int g_40a540;
extern unsigned int g_40a568;
extern unsigned int longopts;
extern char make_ancestor;
extern struct_1 optarg;
extern struct_0 optind;

int main()
{
    unsigned long long v0;  // [bp-0x58]
    unsigned int v1;  // [bp-0x50]
    unsigned long|unsigned long long|char v10;  // al
    unsigned int v13;  // esi
    unsigned int v14;  // edi
    unsigned long long v15;  // r12
    unsigned long long v16;  // r12
    unsigned long|unsigned int v17;  // r13
    unsigned int v2;  // [bp-0x4c]
    unsigned long long|unsigned int v3;  // [bp-0x48]
    unsigned long long v4;  // [bp-0x40]
    unsigned long|unsigned long long v5;  // [bp-0x38]
    unsigned long long v7;  // rax

    v16 = 0;
    v0 = 0;
    v3 = 511;
    v4 = 0;
    v5 = 0;
    set_program_name();
    setlocale();
    bindtextdomain(&g_40a084, &g_40a540);
    textdomain(&g_40a084);
    atexit();
    while (true)
    {
        v10 = getopt_long(v14, v13, &g_40a0d2, &longopts, 0x0);
        if (((int)v10) != -1)
        {
            if (((int)v10) == 109)
            {
                v16 = optarg;
            }
            else if (((char)(v10 <= 109)))
            {
                if (((int)v10) == -130)
                {
                    usage(); /* do not return */
                }
                else if (((int)v10) == 90)
                {
                    error(0x0, 0x0, dcgettext(0x0, &g_40a568, 0x5));
                }
                else if (((int)v10) != -131)
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
                if (((int)v10) == 112)
                {
                    v0 = &make_ancestor;
                }
                else if (((int)v10) != 118)
                {
                    usage(); /* do not return */
                }
                else
                {
                    v5 = dcgettext(0x0, &g_40a0ad, 0x5);
                }
            }
        }
        else
        {
            if (optind != v14)
            {
                if (v0 != 0)
                {
                    v10 = umask();
                    v17 = v10;
                    v10 &= 63;
                    v1 = ((int)rax<8>);
                    if (v16 == 0)
                    {
                        v3 = 511;
                        v2 = ((int)v17);
                        umask();
                        v7 = savewd_process_files();
                        return v7;
                    }
                }
                else if (v16 != 0)
                {
                    v10 = umask();
                    v17 = ((int)v10);
                    v10 &= 63;
                    v1 = ((int)rax<8>);
                }
                else
                {
                    v7 = savewd_process_files();
                    return v7;
                }
                if (v16 != 0)
                {
                    if ((long long)mode_compile() != 0)
                    {
                        v3 = mode_adjust();
                        v17 = ((int)(v17 & !(((int)*(&stack_base-72)))));
                        v2 = v17 & !(((int)*(&stack_base-72)));
                        rpl_free();
                        umask();
                        v7 = savewd_process_files();
                    }
                    else
                    {
                        v15 = (long long)quote();
                        error(0x1, 0x0, dcgettext(0x0, &g_40a0e8, 0x5));
                    }
                }
            }
            else
            {
                error(0x0, 0x0, dcgettext(0x0, &g_40a0d8, 0x5));
                usage(); /* do not return */
            }
        }
    }
    return v7;
}
