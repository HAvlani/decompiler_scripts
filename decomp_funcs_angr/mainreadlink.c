typedef struct struct_0 {
    unsigned int field_0;
} struct_0;

extern unsigned int g_408087;
extern unsigned int g_4080c0;
extern unsigned int g_4080c9;
extern unsigned int g_4086a8;
extern unsigned int g_4086d0;
extern struct_0 g_408700;
extern unsigned int longopts;
extern char no_newline;
extern struct_0 optind;
extern unsigned long long stdout[7];
extern char verbose;

int main()
{
    BOT tmp_16;  // tmp #16
    unsigned long v0;  // [bp-0x48]
    char v1;  // [bp-0x3d]
    struct_0 *|unsigned long long|unsigned int v10;  // eax
    unsigned long long v12;  // rax
    unsigned long|unsigned int v13;  // edx
    unsigned long|unsigned int v14;  // rbx
    char * v15;  // rbp
    unsigned int v16;  // esi
    unsigned long v17;  // rdi
    unsigned long long v18;  // r14
    unsigned long long v19;  // r14
    unsigned int v2;  // [bp-0x3c]
    char *v7;  // rax
    unsigned long long v8;  // rax

    v14 = 2;
    /* goto 4204363; */
    v14 = 1;
    /* goto 4204363; */
    v19 = 1;
    /* goto 4204363; */
    verbose = 1;
    /* goto 4204363; */
    verbose = 0;
    /* goto 4204363; */
    no_newline = 1;
    /* goto 4204363; */
    v14 = 0;
    /* goto 4204363; */
    v19 = 0;
    v14 = -1;
    set_program_name();
    setlocale();
    bindtextdomain(&g_408087, &g_4086a8);
    textdomain(&g_408087);
    atexit();
    v10 = getopt_long(((int)v17), v16, &g_4080c0, &longopts, 0x0);
    if (!(v10 != -1))
    {
        v13 = ((int)optind);
        if (optind < ((int)v17))
        {
            if (((int)(v17 - ((long long)optind))) != 1)
            {
                if (no_newline != 0)
                {
                    error(0x0, 0x0, dcgettext(0x0, &g_4086d0, 0x5));
                    v13 = ((long long)optind);
                }
                no_newline = 0;
                if (((int)v17) <= v13)
                {
                    v18 = 0;
                    v12 = v18;
                    return v12;
                }
            }
            if (((int)(v17 - ((long long)optind))) == 1 || ((int)v17) > v13)
            {
                tmp_16 = ((long long)v19);
                v18 = 0;
                v2 = 0 - ((int)((tmp_16 & 255) < 1)) & 10;
                v1 = ((char)(0 - ((int)((tmp_16 & 255) < 1)) & 10));
                do
                {
                    if (v14 != -1)
                    {
                        v15 = (long long)canonicalize_filename_mode();
                    }
                    else
                    {
                        v15 = (long long)areadlink_with_size();
                    }
                    if (v15 != 0)
                    {
                        fputs_unlocked(v15, stdout);
                        if (no_newline == 0)
                        {
                            v7 = *(stdout + 40);
                            if (*(stdout + 48) > *(stdout + 40))
                            {
                                *(stdout + 40) = *(stdout + 40) + 1;
                                *(v7) = v1;
                            }
                            else
                            {
                                __overflow();
                            }
                        }
                        rpl_free();
                    }
                    else
                    {
                        v18 = 1;
                        if (verbose != 0)
                        {
                            v0 = (long long)quotearg_n_style_colon();
                            error(0x0, *(__errno_location()), "%s");
                        }
                    }
                    v10 = ((int)(optind + 1));
                    optind = optind + 1;
                }
                while (v10 < ((int)v17));
                v12 = v18;
                return v12;
            }
        }
        error(0x0, 0x0, dcgettext(0x0, &g_4080c9, 0x5));
        usage(); /* do not return */
    }
    else if (!(v10 <= 122))
    {
        usage(); /* do not return */
    }
    else if (v10 > 100)
    {
        v10 = ((long long)v10) - 101;
        if (((int)v10) <= 21)
        {
            v8 = ((long long)*(g_408700 + v10 * 4)) + &g_408700;
            /* goto v8; */
        }
        else
        {
            usage(); /* do not return */
        }
    }
    else if (v10 == -131)
    {
        version_etc();
        exit(0x0); /* do not return */
    }
    else if (v10 == -130)
    {
        usage(); /* do not return */
    }
    else
    {
        usage(); /* do not return */
    }
}
