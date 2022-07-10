typedef struct struct_1 {
    unsigned int field_0;
} struct_1;

extern unsigned int exit_failure;
extern unsigned int g_407083;
extern unsigned int g_4070ac;
extern unsigned int g_4070c0;
extern unsigned int g_4070d6;
extern unsigned int g_4070ee;
extern unsigned int g_4074c0;
extern unsigned int g_4074e8;
extern unsigned int longopts;
extern struct_0 optarg;
extern unsigned int optind;
extern char *stderr;

int main()
{
    unsigned long v0;  // [bp-0x38]
    unsigned long long v11;  // rcx
    unsigned long long|char * v12;  // rdx
    unsigned long|unsigned long long v13;  // rbx
    unsigned long long v14;  // rbp
    unsigned long|unsigned long long v15;  // rsi
    unsigned long|unsigned long long v16;  // rdi
    struct_1 *v17;  // r12
    struct_1 *|unsigned int v18;  // r12
    unsigned long long v19;  // r12
    char [2]|unsigned long long v2;  // rax
    unsigned long|unsigned long long v20;  // r13
    unsigned int v21;  // r13d
    char v22;  // r13b
    struct_1 *v23;  // r13
    unsigned long long v4;  // rax
    unsigned long long v5;  // rax
    unsigned long long v7;  // rax
    unsigned long long v8;  // rax

    v18 = ((int)v16);
    v14 = v15;
    v13 = 1;
    set_program_name();
    setlocale();
    bindtextdomain(&g_407083, &g_4074c0);
    textdomain(&g_407083);
    exit_failure = 125;
    atexit();
    if (((int)v16) > 1)
    {
        v20 = 0;
        while (true)
        {
            v11 = v13 * 8;
            v2 = *(v14 + v13 * 8);
            if (...)
            {
                v20 = v2 + 1;
                v13 = ((long long)(((int)v13) + 1));
            }
            if (...)
            {
                *(v14 + v11 + 8) = *(v14);
                optind = 0;
                v2 = getopt_long(((int)(v16 - (v13 - 1))), ((int)(v14 + v11 - 8)), &g_4070ac, &longopts, 0x0);
                v13 = v13 + ((long long)optind) - 1;
                if (v2 != -1)
                {
                    if (v2 < 0)
                    {
                        if (v2 == -131)
                        {
                            version_etc();
                            exit(0x0); /* do not return */
                        }
                        else if (v2 == -130)
                        {
                            usage(); /* do not return */
                        }
                        else
                        {
                            usage(); /* do not return */
                        }
                    }
                    if (v2 == 110)
                    {
                        v20 = optarg;
                    }
                    else
                    {
                        usage(); /* do not return */
                    }
                }
            }
            if (...)
            {
                v7 = xstrtol();
                if (v7 <= 1)
                {
                    v2 = v0;
                    v20 = -39;
                    if (v0 >= 18446744069414584281)
                    {
                        v20 = (v2 <= 39? v2 : 39);
                    }
                    error(0x0, 0x0, dcgettext(0x0, &g_4074e8, 0x5));
                    usage(); /* do not return */
                }
                v19 = (long long)quote();
                error(0x7d, 0x0, dcgettext(0x0, &g_4070c0, 0x5));
            }
        }
        if (...)
        {
            v23 = __errno_location();
        }
        else if (...)
        {
            v17->field_0 = 0;
            v17 = __errno_location();
            v4 = getpriority(0x0, 0x0);
        }
    }
    if (((int)v16) <= 1 || ((int)v16) != ((int)v13))
    {
        v23 = __errno_location();
    }
    if (((int)v16) != ((int)v13))
    {
        v20 = 10;
        v17->field_0 = 0;
        v17 = __errno_location();
        v4 = getpriority(0x0, 0x0);
        if (((int)v4) == -1)
        {
            if (v18->field_0 != 0)
            {
                error(0x7d, v18->field_0, dcgettext(0x0, &g_4070d6, 0x5));
            }
        }
        if (v18->field_0 == 0 || ((int)v4) != -1)
        {
            v8 = setpriority(0x0, 0x0, ((int)(v4 + v20)));
            if (v8 != 0)
            {
                v12 = dcgettext(0x0, &g_4070ee, 0x5);
                if (v18->field_0 != 13)
                {
                    v16 = 125;
                }
                if (v18->field_0 == 13 || ((int)v15) == 1)
                {
                    v16 = 0;
                }
                v20 = 125;
                error(v16, v15, v12);
                if (((long long)(*(stderr) & 32)) == 0)
                {
                    v21 = 0;
                    v13 = v15 + v13 * 8;
                    v16 = *(v15);
                    v15 = v13;
                    execvp(v16, v15);
                    v22 = ((char)(v18->field_0 == 2));
                    quote();
                    v20 = ((long long)reg_120<4>) + 126;
                    error(0x0, v18->field_0, "%s");
                    v5 = v20;
                    return v5;
                }
                v5 = v20;
                return v5;
            }
            v21 = 0;
            v13 = v15 + v13 * 8;
            v16 = *(v15);
            v15 = v13;
            execvp(v16, v15);
            v22 = ((char)(v18->field_0 == 2));
            quote();
            v20 = ((long long)reg_120<4>) + 126;
            error(0x0, v18->field_0, "%s");
            v5 = v20;
            return v5;
        }
    }
    if (((int)v16) <= 1 && ((int)v16) == ((int)v13))
    {
        v23->field_0 = 0;
        v12 = getpriority(0x0, 0x0);
        if (!(((int)v12) == -1))
        {
            v20 = 0;
            __printf_chk(0x1, "%d\n", v12);
            v5 = v20;
            return v5;
        }
        else if (v23->field_0 != 0)
        {
            error(0x7d, v23->field_0, dcgettext(0x0, &g_4070d6, 0x5));
        }
        else
        {
            v20 = 0;
            __printf_chk(0x1, "%d\n", v12);
            v5 = v20;
            return v5;
        }
    }
}
