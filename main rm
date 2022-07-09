typedef struct struct_0 {
    unsigned int field_0;
} struct_0;

extern unsigned int g_40c081;
extern unsigned int g_40c10b;
extern unsigned int g_40c113;
extern unsigned int g_40c142;
extern unsigned int g_40c15d;
extern unsigned int g_40c9f8;
extern unsigned int g_40ca88;
extern unsigned int g_40cab0;
extern unsigned int g_40cad0;
extern unsigned int g_40caf8;
extern struct_0 g_40cb20;
extern unsigned int long_opts;
extern struct_0 optind;

int main()
{
    unsigned long v0;  // [bp-0x118]
    unsigned long v1;  // [bp-0x110]
    unsigned short v10;  // [bp-0xde]
    char v11;  // [bp-0xd8]
    char v12;  // [bp+0x8]
    unsigned int v13;  // [bp+0xc]
    char v14;  // [bp+0x10]
    char v15;  // [bp+0x11]
    char v16;  // [bp+0x12]
    char v17;  // [bp+0x21]
    char v18;  // [bp+0x22]
    char v19[2];  // [bp+0x100010]
    unsigned long long v2;  // [bp-0x108]
    unsigned long long v20;  // rax
    struct_0 *|unsigned long long v23;  // rax
    unsigned long long v27;  // rax
    unsigned long long v28;  // rax
    char v3;  // [bp-0xf8]
    unsigned long long v30;  // rbx
    unsigned long long v31;  // rbp
    unsigned long long v32;  // rsi
    unsigned long v33;  // rdi
    unsigned long long v34;  // r12
    unsigned long long v35;  // r13
    unsigned long long v36;  // r13
    char v37[2];  // r14
    unsigned int v4;  // [bp-0xf4]
    unsigned short v5;  // [bp-0xf0]
    char v6;  // [bp-0xee]
    unsigned long|unsigned long long v7;  // [bp-0xe8]
    char v8;  // [bp-0xe0]
    char v9;  // [bp-0xdf]

    v18 = 1;
    /* goto 4204976; */
    v16 = 1;
    /* goto 4204976; */
    v15 = 1;
    /* goto 4204976; */
    v17 = 1;
    /* goto 4204976; */
    v14 = 1;
    /* goto 4204976; */
    v13 = 5;
    v36 = 0;
    v12 = 1;
    /* goto 4204976; */
    v31 = v32;
    set_program_name();
    setlocale();
    bindtextdomain(&g_40c081, &g_40c9f8);
    textdomain(&g_40c081);
    atexit();
    v3 = 0;
    v4 = 4;
    v5 = 0;
    v6 = 0;
    v7 = 0;
    v8 = 0;
    v9 = ((char)(isatty(0x0, 0x0) != 0));
    v36 = 0;
    v10 = 0;
    v23 = getopt_long(((int)v33), ((int)v32), &g_40c10b, &long_opts, 0x0);
    if (v23 != -1)
    {
        if (v23 <= 132)
        {
            if (v23 > 72)
            {
                v23 = ((long long)v23) - 73;
                if (((int)v23) <= 59)
                {
                    v27 = ((long long)*(g_40cb20 + v23 * 4)) + &g_40cb20;
                    /* goto v27; */
                }
            }
            else
            {
                if (v23 == -131)
                {
                    v2 = 0;
                    v1 = "Jim Meyering";
                    v0 = "Richard M. Stallman";
                    version_etc();
                    exit(0x0); /* do not return */
                }
                if (v23 == -130)
                {
                    usage(); /* do not return */
                }
            }
        }
        if (v23 > 132 || v23 > 72 && ((int)v23) > 59 || v23 <= 72 && v23 != -131 && v23 != -130)
        {
            for (v30 = 1; ((int)v33) > ((int)v30); v30 += 1)
            {
                v37 = v19;
                if (v19[0] == 45 && v37[1] != 0)
                {
                    v23 = __lxstat(0x1, ((int)v37), ((int)&v11));
                    if (v23 == 0)
                    {
                        v34 = (long long)quotearg_style();
                        v30 = (long long)quotearg_n_style();
                        dcgettext(0x0, &g_40ca88, 0x5);
                        __fprintf_chk();
                    }
                }
            }
            usage(); /* do not return */
        }
    }
    else if (!(optind >= ((int)v33)))
    {
        if (((char)*((char *)(((char *)&v5) + 1))) != 0)
        {
            if (((long long)1) != 0)
            {
                v7 = (long long)get_root_dev_ino();
                if (v7 == 0)
                {
                    v35 = (long long)quotearg_style();
                    error(0x1, *(__errno_location()), dcgettext(0x0, &g_40cab0, 0x5));
                }
            }
        }
        if (((long long)1) == 0 || ((char)*((char *)(((char *)&v5) + 1))) == 0 || v7 != 0)
        {
            if (((long long)v36) != 0)
            {
                if (((char)*((char *)(((char *)&v5) + 1))) == 0)
                {
                    if (((long long)(v33 - ((long long)optind))) > 3)
                    {
                        ((int)v28) - 2 = dcngettext(0x0, &g_40c15d, &g_40c142, ((int)(v33 - ((long long)optind))), 0x5);
                    }
                }
                else
                {
                    ((int)v28) - 2 = dcngettext(0x0, &g_40caf8, &g_40cad0, ((int)(v33 - ((long long)optind))), 0x5);
                }
                if (((char)*((char *)(((char *)&v5) + 1))) != 0 || ((long long)(v33 - ((long long)optind))) > 3)
                {
                    __fprintf_chk();
                    v23 = yesno();
                    if (((long long)v23) == 0)
                    {
                        v20 = 0;
                        return v20;
                    }
                }
            }
            if (((long long)v36) == 0 || ((long long)v23) != 0 || ((char)*((char *)(((char *)&v5) + 1))) == 0 && ((long long)(v33 - ((long long)optind))) <= 3)
            {
                v28 = rm();
                v20 = ((long long)(((int)v28) == 4));
                if (((int)v28) - 2 <= 2)
                {
                    return v20;
                }
                __assert_fail(); /* do not return */
            }
        }
    }
    else if (v3 != 0)
    {
        v20 = 0;
        return v20;
    }
    else
    {
        error(0x0, 0x0, dcgettext(0x0, &g_40c113, 0x5));
        usage(); /* do not return */
    }
}
