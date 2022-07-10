typedef struct struct_0 {
    unsigned long long field_0;
} struct_0;

typedef struct struct_1 {
    unsigned int field_0;
} struct_1;

extern struct_1 exit_failure;
extern unsigned int g_407084;
extern unsigned int g_407108;
extern unsigned int g_407122;
extern unsigned int g_40714f;
extern unsigned int g_407548;
extern unsigned int g_407570;
extern unsigned int g_4075a0;
extern struct_1 optind;
extern char *stderr;
extern char usage;

int main()
{
    BOT tmp_8;  // tmp #8
    unsigned long v0;  // [bp-0x88]
    unsigned long v1;  // [bp-0x80]
    unsigned long long v10;  // rax
    unsigned long long v14;  // rax
    unsigned long long|struct_0 * v15;  // rbx
    unsigned long|unsigned int v16;  // rbp
    unsigned long long|struct_0 * v17;  // rsi
    unsigned long|unsigned long long|unsigned int v18;  // edi
    unsigned long long v19;  // r8b
    unsigned long long v2;  // [bp-0x78]
    unsigned long long v20;  // r12
    unsigned long long v21;  // r13
    unsigned long long|unsigned int v22;  // r13
    unsigned long long|unsigned int v23;  // r14
    unsigned long|unsigned long long|unsigned int v24;  // r15d
    unsigned long long v25;  // cc_dep1
    unsigned long long|unsigned int v3;  // [bp-0x60]
    char *|unsigned long long v4;  // [bp-0x58]
    unsigned long|unsigned long long|char v5;  // [bp-0x50]
    unsigned long long|unsigned int v6;  // [bp-0x48]
    struct_1 *v7;  // [bp-0x40]
    unsigned long long|struct_1 * v9;  // rax

    v15 = v17;
    set_program_name();
    setlocale();
    bindtextdomain(&g_407084, &g_407548);
    textdomain(&g_407084);
    v10 = getenv("POSIXLY_CORRECT");
    v20 = ((long long)((0 - ((int)(v10 < 1)) & -2) + 127));
    exit_failure = (0 - ((int)(v10 < 1)) & -2) + 127;
    atexit();
    v2 = 0;
    v1 = "Jim Meyering";
    v0 = &usage;
    parse_gnu_standard_options_only();
    if (optind < v18)
    {
        v22 = isatty(0x0);
        v16 = isatty(0x1);
        if (v16 == 0)
        {
            v9 = __errno_location();
            if (v9->field_0 == 9)
            {
                v23 = 1;
                v3 = 1;
                v24 = isatty(0x2);
                v19 = ((char)(((int)v24) != 0));
                if (v3 != 0)
                {
                    /* goto 4205015; */
                }
            }
        }
        if (v16 != 0 || v9->field_0 != 9)
        {
            v24 = isatty(0x2);
            v19 = ((char)(v24 != 0));
            if (v3 == 0)
            {
                v3 = 0;
                if (v16 == 0)
                {
                    v3 = v22;
                }
            }
            else
            {
                v3 = 0;
                v23 = 0;
            }
        }
        if (v3 != 0)
        {
            v4 = v19;
            v9 = fd_reopen();
            v19 = ((long long)v4);
            if (!(v9 >= 0))
            {
                v5 = v4;
                v4 = dcgettext(0x0, &g_407570, 0x5);
                error(((int)v20), *(__errno_location()), v4);
            }
            else if (!((v24 | v16) != 0))
            {
                v24 = 2;
                error(0x0, 0x0, dcgettext(0x0, &g_407122, 0x5));
            }
        }
        if (v3 == 0 || v16 == 0)
        {
            if ((v16 == 0 || v3 != 0) && (v9->field_0 == 9 || v3 != 0) && (v3 == 0 || (v24 | v16) != 0) && (v3 == 0 || v9 >= 0))
            {
                v25 = ((long long)(v23 & v19));
                v23 &= v19;
                v4 = v23;
                if (((char)v25) != 0)
                {
                    v24 = umask(0xfffffe7f);
                    v23 = open("nohup.out", 0x441, 0x180);
                    /* goto 4204561; */
                }
            }
            if ((v16 == 0 || v16 == 0) && (v9->field_0 == 9 || v16 == 0) && (((char)v25) == 0 || v3 == 0) && (v3 == 0 || (v24 | v16) != 0) && (v3 == 0 || v9 >= 0) && (((char)v25) == 0 || v16 != 0 || v9->field_0 != 9))
            {
                if (((long long)v19) != 0)
                {
                    v23 = 1;
                    v24 = rpl_fcntl();
                }
            }
        }
        if (v3 == 0 || (v24 | v16) != 0 && v9 >= 0)
        {
            if (v16 != 0 && (v16 != 0 || v9->field_0 != 9 || v3 != 0))
            {
                v4 = v19;
                v24 = umask(0xfffffe7f);
                v23 = (long long)fd_reopen();
            }
            if (v16 != 0 && v16 != 0 || v9->field_0 != 9 && v16 != 0 || ((char)v25) != 0 && v3 != 0 || v3 != 0 && v16 != 0 || v16 == 0 && v9->field_0 == 9 && ((char)v25) != 0)
            {
                v17 = "nohup.out";
                if (v23 < 0)
                {
                    v5 = "nohup.out";
                    v7 = __errno_location();
                    v6 = v7->field_0;
                    v18 = getenv("HOME");
                    if (v18 != 0)
                    {
                        v9 = file_name_concat();
                        if (v16 != 0)
                        {
                            v5 = v9;
                            v23 = (long long)fd_reopen();
                        }
                        else
                        {
                            v5 = v5;
                            v23 = (long long)open(v5, 0x441, 0x180);
                        }
                        if (((int)v23) >= 0)
                        {
                            v17 = 0;
                        }
                        else
                        {
                            tmp_8 = v7;
                            v3 = 0;
                            v16 = ((int)*(tmp_8));
                            v21 = (long long)quotearg_style();
                            error(0x0, v7->field_0, dcgettext(0x0, &g_40714f, 0x5));
                            v22 = (long long)quotearg_style();
                            error(0x0, v16, dcgettext(0x0, v17, 0x5));
                            v14 = v20;
                            return v14;
                        }
                    }
                    else
                    {
                        v22 = (long long)quotearg_style();
                        error(0x0, v7->field_0, dcgettext(0x0, &g_40714f, 0x5));
                        v14 = v20;
                        return v14;
                    }
                }
            }
        }
        if (...)
        {
            v5 = 0;
            v6 = v17;
            umask(v24);
            v24 = (long long)quotearg_style();
            error(0x0, 0x0, dcgettext(0x0, ((int)(v3 == 0? "appending output to %s" : "ignoring input and appending output to %s")), 0x5));
            rpl_free();
            if (v4 != 0)
            {
                v24 = (long long)rpl_fcntl();
            }
        }
        if (...)
        {
            v24 = 2;
        }
        if (...)
        {
            error(0x0, 0x0, dcgettext(0x0, ((int)(v3 == 0? "redirecting stderr to stdout" : "ignoring input and redirecting stderr to stdout")), 0x5));
        }
        if (...)
        {
            v9 = dup2(((unsigned int)v23), 0x2);
            if (!(v9 >= 0))
            {
                error(((int)v20), *(__errno_location()), dcgettext(0x0, &g_4075a0, 0x5));
            }
            else if (v3 != 0)
            {
                close(((unsigned int)v23));
            }
        }
        if (...)
        {
            if (((long long)(*(stderr) & 32)) == 0)
            {
                signal(0x1, 0x1);
                v15 += ((long long)optind) * 8;
                v18 = v17->field_0;
                v17 = v15;
                execvp(v18, v17);
                v16 = ((long long)*(__errno_location()));
                v20 = 126;
                v9 = dup2(v24, 0x2);
                if (v9 != 2)
                {
                    v14 = v20;
                    return v14;
                }
                v22 = (long long)quotearg_style();
                error(0x0, v16, dcgettext(0x0, v17, 0x5));
                v14 = v20;
                return v14;
            }
            v14 = v20;
            return v14;
        }
    }
    error(0x0, 0x0, dcgettext(0x0, &g_407108, 0x5));
    usage(); /* do not return */
}
