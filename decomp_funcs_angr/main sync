typedef struct struct_1 {
    unsigned long long field_0;
} struct_1;

extern unsigned int g_4060a1;
extern unsigned int g_4060e9;
extern unsigned int g_4060ec;
extern unsigned int g_40610e;
extern unsigned int g_4063a0;
extern unsigned int g_4063c8;
extern unsigned int g_4063f8;
extern unsigned int long_options;
extern struct_0 optind;

int main()
{
    BOT tmp_28;  // tmp #28
    unsigned long long v0;  // [bp-0x58]
    unsigned long v1;  // [bp-0x48]
    unsigned long long|struct_1 * v10;  // rax
    unsigned short v11;  // dx
    struct_1 *v12;  // rbx
    unsigned long|unsigned long long v13;  // rsi
    unsigned int v14;  // edi
    unsigned long|unsigned int v15;  // r12d
    unsigned long long v16;  // r12
    char *|unsigned long long v17;  // r13
    unsigned long|unsigned int v18;  // r14d
    unsigned long|unsigned long long|unsigned int v19;  // r15
    unsigned int v2;  // [bp-0x3c]
    unsigned long long v20;  // r15
    unsigned long long v4;  // rax
    unsigned long long v6;  // rax

    v17 = 0;
    v15 = 0;
    v12 = v13;
    set_program_name();
    setlocale();
    bindtextdomain(&g_4060a1, &g_4063a0);
    textdomain(&g_4060a1);
    atexit();
    while (true)
    {
        v6 = getopt_long(v14, ((int)v13), &g_4060e9, &long_options, 0x0);
        if (((int)v6) == -1)
        {
            v10 = ((long long)optind);
            if (((long long)v17) != 0 && ((long long)v15) != 0)
            {
                error(0x1, 0x0, dcgettext(0x0, &g_4063c8, 0x5));
            }
            if (((long long)v17) == 0 || ((long long)v15) == 0)
            {
                if (((long long)(v17 & ((char)(v14 <= ((int)optind))))) != 0)
                {
                    error(0x1, 0x0, dcgettext(0x0, &g_4063f8, 0x5));
                }
                else if (((int)optind) < v14)
                {
                    v2 = 2;
                    if (((long long)v15) == 0)
                    {
                        v2 = ((int)v17);
                    }
                    v15 = 1;
                    do
                    {
                        v17 = *(v12 + v10 * 8);
                        v18 = open(*(v12 + v10 * 8), 0x800, v11);
                        if (v18 < 0)
                        {
                            v19 = ((long long)*(__errno_location()));
                            v18 = (long long)open(v17, 0x801, v11);
                            if (((int)v18) < 0)
                            {
                                v17 = (long long)quotearg_style();
                                v13 = v19;
                                v19 = 0;
                                error(0x0, v13, dcgettext(0x0, &g_4060ec, 0x5));
                            }
                        }
                        if (((int)v18) >= 0 || v18 >= 0)
                        {
                            v4 = rpl_fcntl();
                            if (v4 != -1)
                            {
                                v4 = rpl_fcntl();
                                if (v4 >= 0)
                                {
                                    if (v2 == 1)
                                    {
                                        v4 = fdatasync(reg_128<4>);
                                    }
                                    else if (v2 == 2)
                                    {
                                        v4 = syncfs(reg_128<4>);
                                    }
                                    else
                                    {
                                        v4 = fsync(reg_128<4>);
                                        /* goto 4204595; */
                                    }
                                    v19 = 1;
                                    if (reg_16<4> < 0)
                                    {
                                        v1 = (long long)quotearg_style();
                                    }
                                }
                            }
                            if (v4 == -1 || v4 < 0)
                            {
                                v1 = (long long)quotearg_style();
                            }
                            if (v4 == -1 || reg_16<4> < 0 || v4 < 0)
                            {
                                v19 = 0;
                                error(0x0, *(__errno_location()), v11);
                            }
                            v10 = close(reg_128<4>);
                            if (v10 < 0)
                            {
                                v20 = (long long)quotearg_style();
                                v19 = 0;
                                error(0x0, *(__errno_location()), dcgettext(0x0, &g_40610e, 0x5));
                            }
                        }
                        v15 = ((long long)(v15 & reg_136<4>));
                        v10 = ((long long)(optind + 1));
                        optind = optind + 1;
                    }
                    while (((int)v10) < v14);
                }
                else
                {
                    sync();
                    v15 = 1;
                    v16 = ((long long)(v15 ^ 1));
                    tmp_28 = v16;
                    return ((long long)tmp_28);
                }
            }
        }
        else if (((int)v6) == 100)
        {
            v17 = 1;
        }
        else if (((char)(v6 <= 100)))
        {
            if (((int)v6) == -131)
            {
                v0 = 0;
                version_etc();
                exit(0x0); /* do not return */
            }
            else if (((int)v6) == -130)
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
            if (((int)v6) == 102)
            {
                v15 = 1;
            }
            else
            {
                usage(); /* do not return */
            }
        }
    }
    v16 = ((long long)(v15 ^ 1));
    tmp_28 = v16;
    return ((long long)tmp_28);
}
