typedef struct struct_2 {
    unsigned long long field_0;
} struct_2;

typedef struct struct_1 {
    char padding_0[1];
    char field_1;
} struct_1;

typedef struct struct_0 {
    unsigned int field_0;
} struct_0;

extern unsigned int g_409084;
extern unsigned int g_4090cb;
extern unsigned int g_4090ef;
extern unsigned int g_4090f2;
extern unsigned int g_409102;
extern unsigned int g_409450;
extern unsigned int g_409478;
extern char ignore_fail_on_non_empty;
extern unsigned int longopts;
extern struct_0 optind;
extern char remove_empty_parents;
extern char verbose;

int main()
{
    unsigned long|unsigned int v0;  // [bp-0xf0]
    unsigned long v1;  // [bp-0xe8]
    unsigned long long v12;  // rax
    unsigned long long|struct_2 * v13;  // rax
    struct_2 *v15;  // rsi
    unsigned long v16;  // rdi
    unsigned int v17;  // r9d
    struct_0 *|unsigned long long v18;  // r12
    unsigned long long v19;  // r13
    char v2;  // [bp-0xdd]
    unsigned long long|unsigned int v20;  // r14d
    struct_1 *v21;  // r15
    unsigned int v3;  // [bp-0xdc]
    char v4;  // [bp-0xd8]
    unsigned int v5;  // [bp-0xc0]
    unsigned long long|char [2]|struct_1 * v7;  // rax

    set_program_name();
    setlocale();
    bindtextdomain(&g_409084, &g_409450);
    textdomain(&g_409084);
    atexit();
    remove_empty_parents = 0;
    while (true)
    {
        v13 = getopt_long(((int)v16), ((int)v15), &g_4090ef, &longopts, 0x0);
        if (((int)v13) == -1)
        {
            v13 = ((long long)optind);
            if (optind != ((int)v16))
            {
                v2 = 1;
                if (!(((char)(((long long)optind) < v16))))
                {
                    break;
                }
                if (((char)(((long long)optind) < v16)))
                {
                    v1 = &v4;
                    do
                    {
                        v21 = *(v15 + v13 * 8);
                        if (verbose != 0)
                        {
                            v18 = (long long)quotearg_style();
                            dcgettext(0x0, &g_409102, 0x5);
                            prog_fprintf();
                        }
                        v7 = rmdir(((int)v21));
                        if (v7 != 0)
                        {
                            v20 = ((int)v18->field_0);
                            v18 = __errno_location();
                            v7 = ignorable_failure();
                            if (((long long)v7) == 0)
                            {
                                if (v20 == 20)
                                {
                                    v7 = strrchr();
                                    if (v7->field_1 == 0 && v7 != 0)
                                    {
                                        v7 = __xstat(0x1, ((int)v21), ((int)&v4));
                                        if ((((short)v5) & 0xf000) == 0x4000 && v7 == 0 || v18->field_0 != 20 && v7 != 0)
                                        {
                                            v18 = (long long)xstrdup();
                                            strip_trailing_slashes();
                                            v12 = __lxstat(0x1, ((int)v21), ((int)&v4));
                                            if (v12 == 0 && (((short)v5) & 0xf000) == 0xa000)
                                            {
                                                v19 = (long long)quotearg_style();
                                                error(0x0, 0x0, dcgettext(0x0, &g_409478, 0x5));
                                                rpl_free();
                                                v2 = 0;
                                            }
                                            if (v12 != 0 || (((short)v5) & 0xf000) != 0xa000)
                                            {
                                                rpl_free();
                                            }
                                        }
                                    }
                                }
                                if (v7 == 0 || v7->field_1 != 0 || v12 != 0 || (((short)v5) & 0xf000) != 0xa000 || v20 != 20 || v18->field_0 == 20 && v7 != 0 || v7 == 0 && (((short)v5) & 0xf000) != 0x4000)
                                {
                                    v18 = (long long)quotearg_style();
                                    error(0x0, v20, dcgettext(0x0, &g_4090cb, 0x5));
                                    v2 = 0;
                                }
                            }
                        }
                        else if (((long long)remove_empty_parents) != 0)
                        {
                            strip_trailing_slashes();
                            while (true)
                            {
                                v7 = strrchr();
                                if (v7 != 0)
                                {
                                    if (v21 >= v7)
                                    {
                                    }
                                    else
                                    {
                                        while (true)
                                        {
                                            v7 -= 1;
                                            v21->field_1 = 0;
                                        }
                                        if (True)
                                        {
                                            *(rax<8> + 1) = 0;
                                        }
                                        else if (v7[0] == 47 && v21 == v7)
                                        {
                                            v7 = rmdir(((int)v21));
                                        }
                                        else if (v7[0] == 47 && v21 == v7)
                                        {
                                            v19 = (long long)quotearg_style();
                                            dcgettext(0x0, &g_409102, 0x5);
                                            prog_fprintf();
                                        }
                                    }
                                    if (verbose != 0 || v21 >= v7)
                                    {
                                        *(rax<8> + 1) = 0;
                                    }
                                    if (verbose != 0)
                                    {
                                        v19 = (long long)quotearg_style();
                                        dcgettext(0x0, &g_409102, 0x5);
                                        prog_fprintf();
                                    }
                                    v7 = rmdir(((int)v21));
                                    if (v7 != 0)
                                    {
                                        v0 = *(__errno_location());
                                        v20 = (long long)ignorable_failure();
                                        if (((long long)v20) == 0)
                                        {
                                            v17 = ((int)v0);
                                            v3 = v0;
                                            v0 = (v17 != 20? "failed to remove directory %s" : "failed to remove %s");
                                            v18 = (long long)quotearg_style();
                                            error(0x0, v0, dcgettext(0x0, ((int)v0), 0x5));
                                            break;
                                        }
                                    }
                                }
                                if (v7 == 0 || v7 != 0 && ((long long)v20) != 0)
                                {
                                    v20 = ((long long)remove_empty_parents);
                                    break;
                                }
                            }
                            v2 &= v20;
                        }
                        v13 = ((long long)(optind + 1));
                        optind = optind + 1;
                    }
                    while (((int)v13) < ((int)v16));
                }
                else
                {
                    return ((long long)(((int)v2) ^ 1));
                }
            }
            else
            {
                error(0x0, 0x0, dcgettext(0x0, &g_4090f2, 0x5));
                usage(); /* do not return */
            }
        }
        else if (((int)v13) == 112)
        {
            remove_empty_parents = 1;
        }
        else if (!(((char)(v13 <= 112))))
        {
            if (((int)v13) == 118)
            {
                verbose = 1;
            }
            else if (((int)v13) == 128)
            {
                ignore_fail_on_non_empty = 1;
            }
            else
            {
                usage(); /* do not return */
            }
        }
        else
        {
            if (((int)v13) == -131)
            {
                version_etc();
                exit(0x0); /* do not return */
            }
            else if (((int)v13) == -130)
            {
                usage(); /* do not return */
            }
            else
            {
                usage(); /* do not return */
            }
        }
    }
    return ((long long)(((int)v2) ^ 1));
}
