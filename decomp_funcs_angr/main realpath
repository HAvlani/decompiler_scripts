typedef struct struct_0 {
    unsigned int field_0;
} struct_0;

extern struct_1 can_relative_base;
extern unsigned long long can_relative_to;
extern unsigned int g_409096;
extern unsigned int g_4090bf;
extern unsigned int g_4090d5;
extern unsigned int g_409590;
extern struct_0 g_4095b8;
extern char logical;
extern unsigned int longopts;
extern struct_1 optarg;
extern struct_0 optind;
extern unsigned long long stdout[7];
extern char use_nuls;
extern char verbose;

int main()
{
    BOT tmp_27;  // tmp #27
    struct_0 *|unsigned long long|unsigned int v1;  // rax
    char *v11;  // rax
    unsigned long long|unsigned int v12;  // ebx
    unsigned long long v13;  // rbx
    unsigned int v14;  // esi
    unsigned int v15;  // edi
    unsigned long long v16;  // r12
    unsigned long long v17;  // r12
    unsigned long v18;  // r13
    char *|unsigned long long v19;  // r15
    unsigned long long v3;  // rax

    v19 = optarg;
    /* goto 4204368; */
    use_nuls = 1;
    /* goto 4204368; */
    verbose = 0;
    /* goto 4204368; */
    logical = 0;
    /* goto 4204368; */
    /* goto 4204368; */
    /* goto 4204368; */
    logical = 0;
    /* goto 4204368; */
    logical = 1;
    /* goto 4204368; */
    v19 = 0;
    set_program_name();
    setlocale();
    bindtextdomain(&g_409096, &g_409590);
    textdomain(&g_409096);
    atexit();
    v1 = getopt_long(v15, v14, &g_4090bf, &longopts, 0x0);
    if (v1 != -1)
    {
        if (!(v1 <= 129))
        {
            usage(); /* do not return */
        }
        else if (v1 > 75)
        {
            v1 = ((long long)v1) - 76;
            if (((int)v1) <= 53)
            {
                v3 = ((long long)*(g_4095b8 + v1 * 4)) + &g_4095b8;
                /* goto v3; */
            }
            else
            {
                usage(); /* do not return */
            }
        }
        else if (v1 == -131)
        {
            version_etc();
            exit(0x0); /* do not return */
        }
        else if (v1 == -130)
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
        if (optind < v15)
        {
            if (False)
            {
                if (v19 == 0)
                {
                    v19 = 0;
                }
            }
            if (v19 != 0)
            {
                can_relative_to = (long long)realpath_canon();
                if (!(can_relative_to != 0))
                {
                    v16 = (long long)quotearg_n_style_colon();
                    error(0x1, *(__errno_location()), "%s");
                }
                else if ((((char)((int)v18)) & 3) == 0)
                {
                    v1 = isdir();
                    if (((long long)v1) == 0)
                    {
                        quotearg_n_style_colon();
                        error(0x1, 0x14, "%s");
                    }
                }
            }
            if (v19 == 0 || can_relative_to != 0 && ((long long)v1) != 0 || can_relative_to != 0 && (((char)((int)v18)) & 3) != 0)
            {
                if (v19 != 0)
                {
                }
                else
                {
                    can_relative_base = can_relative_to;
                    /* goto 4204783; */
                }
                if (False)
                {
                    v19 = (long long)realpath_canon();
                    v17 = (long long)quotearg_n_style_colon();
                    error(0x1, *(__errno_location()), "%s");
                    v1 = isdir();
                    quotearg_n_style_colon();
                    error(0x1, 0x14, "%s");
                    v1 = path_prefix();
                    if (((long long)v1) != 0)
                    {
                        can_relative_base = v19;
                    }
                    else
                    {
                        rpl_free();
                        v1 = can_relative_to;
                        can_relative_to = 0;
                        can_relative_base = v1;
                    }
                }
                v12 = 1;
                if (optind >= v15)
                {
                    v13 = ((long long)(v12 ^ 1));
                    tmp_27 = v13;
                    return ((long long)tmp_27);
                }
                do
                {
                    v19 = (long long)realpath_canon();
                    if (v19 != 0)
                    {
                        if (can_relative_to != 0)
                        {
                            if (can_relative_base != 0)
                            {
                                v1 = path_prefix();
                            }
                            if (can_relative_base == 0 || ((long long)v1) != 0)
                            {
                                v1 = relpath();
                            }
                        }
                        if (can_relative_to == 0 || ((long long)v1) == 0 || ((long long)v1) == 0 && can_relative_base != 0)
                        {
                            fputs_unlocked(v19, stdout);
                        }
                        v11 = *(stdout + 40);
                        if (*(stdout + 40) < *(stdout + 48))
                        {
                            *(stdout + 40) = *(stdout + 40) + 1;
                            *(v11) = ((char)(0 - ((int)(((long long)use_nuls) < 1)) & 10));
                        }
                        else
                        {
                            __overflow();
                        }
                        rpl_free();
                    }
                    else
                    {
                        v12 = ((long long)verbose);
                        if (((long long)verbose) != 0)
                        {
                            v12 = 0;
                            v19 = (long long)quotearg_n_style_colon();
                            error(0x0, *(__errno_location()), "%s");
                        }
                    }
                    v1 = ((int)(optind + 1));
                    optind = optind + 1;
                }
                while (v1 < v15);
                v13 = ((long long)(v12 ^ 1));
                tmp_27 = v13;
                return ((long long)tmp_27);
            }
        }
        error(0x0, 0x0, dcgettext(0x0, &g_4090d5, 0x5));
        usage(); /* do not return */
    }
}
