typedef struct struct_2 {
    char padding_0[8];
    unsigned long long field_8;
} struct_2;

typedef struct struct_3 {
    unsigned long long field_0;
    unsigned long long field_8;
    struct struct_4 *field_10;
} struct_3;

typedef struct struct_0 {
    unsigned int field_0;
} struct_0;

typedef struct struct_5 {
    unsigned long long field_0;
    char padding_8[11];
    char field_13;
    char field_14;
} struct_5;

extern unsigned int g_4070a0;
extern unsigned int g_4070d9;
extern unsigned int g_4070e9;
extern unsigned int g_407107;
extern unsigned int g_407119;
extern unsigned int g_40711a;
extern unsigned int g_40711c;
extern unsigned int g_407135;
extern unsigned int g_40714b;
extern unsigned int g_407460;
extern unsigned int g_407488;
extern unsigned int g_4074a8;
extern unsigned int longopts;
extern struct_0 optind;

int main()
{
    unsigned long long v0;  // [bp-0x240]
    unsigned long long v1[2];  // [bp-0x238]
    char v10;  // [bp-0xd8]
    unsigned long v11;  // [bp-0xd0]
    char *|unsigned long long v13;  // rax
    struct_5 *|unsigned long long v14;  // rax
    unsigned long long v2;  // [bp-0x230]
    unsigned long long v26;  // rax
    unsigned long long v29;  // rax
    char v3;  // [bp-0x221]
    unsigned long long v31;  // rcx
    unsigned long long v32;  // rcx
    unsigned long long v33;  // rdx
    unsigned int|unsigned long v34;  // rbx
    struct_3 *|struct_2 * v35;  // rbp
    unsigned int|struct_0 *|unsigned long v36;  // rsi
    struct_0 *|char *|unsigned int v37;  // rdi
    unsigned long long v38;  // r12
    unsigned long long v39;  // r12
    unsigned long long v4;  // [bp-0x220]
    unsigned long long v40;  // r12
    unsigned long long v41;  // r12
    unsigned long long v42;  // r13
    unsigned long long v43;  // r13
    unsigned long long v44;  // r13
    unsigned int v45;  // r13d
    unsigned long long v46;  // r13
    struct_0 *v48;  // r15
    char v49;  // cc_dep2
    unsigned long v5;  // [bp-0x218]
    unsigned long v50;  // d
    unsigned long v6;  // [bp-0x210]
    char v7;  // [bp-0x1f8]
    unsigned long v8;  // [bp-0x1f0]
    char v9;  // [bp-0x168]

    v40 = ((char)(getenv("POSIXLY_CORRECT") != 0));
    set_program_name();
    setlocale();
    bindtextdomain(&g_4070a0, &g_407460);
    textdomain(&g_4070a0);
    atexit();
    while (true)
    {
        v13 = getopt_long(v37, v36, &g_4070d9, &longopts, 0x0);
        if (((int)v13) == -1)
        {
            if (optind < v37)
            {
                error(0x0, 0x0, dcgettext(0x0, &g_4070e9, 0x5));
            }
            if (((long long)v40) != 0)
            {
                v13 = logical_getcwd();
                if (v13 != 0)
                {
                    puts(v13);
                    return 0;
                }
            }
            if (((long long)v40) == 0 || v13 == 0)
            {
                v35 = (long long)xgetcwd();
                if (v35 != 0)
                {
                    puts(v35);
                    rpl_free();
                    return 0;
                }
                v35->field_8 = 0x2000;
                v35 = (long long)xmalloc();
                v29 = xmalloc();
                v33 = v35->field_8;
                v35->field_0 = v29;
                v35->field_10 = v29 + v33 - 1;
                *(v29 + v33 + 1) = 0;
                v1 = (long long)get_root_dev_ino();
                if (v1 != 0)
                {
                    v4 = &stack_base-504;
                    v26 = __xstat(0x1, &g_40711a, ((int)&stack_base-504));
                    if (v26 >= 0)
                    {
                        v0 = &v9;
                        v5 = &v10;
                        break;
                    }
                    else
                    {
                        v46 = (long long)quotearg_style();
                        error(0x1, *(__errno_location()), dcgettext(0x0, &g_407107, 0x5));
                    }
                }
                else
                {
                    v43 = (long long)quotearg_style();
                    error(0x1, *(__errno_location()), dcgettext(0x0, &g_407488, 0x5));
                }
            }
        }
        else if (((int)v13) == 76)
        {
            v40 = 1;
        }
        else if (((char)(v13 <= 76)))
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
        else
        {
            if (((int)v13) == 80)
            {
                v40 = 0;
            }
            else
            {
                usage(); /* do not return */
            }
        }
    }
    while (true)
    {
        v2 = 1 + 1;
        v40 = opendir();
        if (v40 != 0)
        {
            v45 = dirfd(((int)v40));
            if (v45 >= 0)
            {
                v14 = fchdir(v45);
                if (v14 >= 0)
                {
                    v34 = ((long long)(__fxstat(0x1, v45, ((int)&v9)) >> 31));
                }
                else
                {
                    nth_parent();
                    v42 = (long long)quote();
                    error(0x1, *(__errno_location()), dcgettext(0x0, &g_407135, 0x5));
                }
            }
            else
            {
                v14 = chdir(&g_407119);
                if (v14 >= 0)
                {
                    v34 = ((long long)(__xstat(0x1, &g_40711a, ((int)&v9)) >> 31));
                }
                else
                {
                    nth_parent();
                    v42 = (long long)quote();
                    error(0x1, *(__errno_location()), dcgettext(0x0, &g_407135, 0x5));
                }
            }
            if (v45 < 0 && v14 >= 0 || v14 >= 0 && v45 >= 0)
            {
                v48 = __errno_location();
                if (((long long)v34) == 0)
                {
                    v3 = ((char)(v9 != v7));
                    while (true)
                    {
                        v48->field_0 = 0;
                        while (true)
                        {
                            v14 = readdir();
                            if (v14 != 0)
                            {
                                v36 = v14 + 19;
                                if (v14->field_13 == 46)
                                {
                                    v33 = ((long long)v14 + ((long long)(v14->field_14 == 46))->field_14);
                                }
                                v14 = v14->field_0;
                                if (v3 == 0 && v14 != 0)
                                {
                                    /* goto 4205223; */
                                }
                                if (v14 == 0 || v3 != 0)
                                {
                                    v6 = v36;
                                    v14 = __lxstat(0x1, v36, ((int)&v10));
                                    v36 = v6;
                                }
                                v37 = v36;
                                v32 = 18446744069414584319;
                                while (v32 != 0)
                                {
                                    v32 -= 1;
                                    v49 = ((char)*(v37));
                                    v37 += v50;
                                    break;
                                }
                                file_name_prepend();
                                v26 = closedir();
                                if (v26 == 0)
                                {
                                    v37 = v4;
                                    v36 = v0;
                                    for (v31 = 36; v31 != 0; v36 += v50 * 4)
                                    {
                                        v31 -= 1;
                                        v37->field_0 = v36->field_0;
                                        v37 += v50 * 4;
                                    }
                                    1 = v2;
                                    break;
                                }
                                else
                                {
                                    nth_parent();
                                    v39 = (long long)quote();
                                    error(0x1, v48->field_0, dcgettext(0x0, &g_40714b, 0x5));
                                }
                            }
                            else
                            {
                                v34 = ((int)v48->field_0);
                                if (v48->field_0 == 0)
                                {
                                    v26 = closedir();
                                    if (v26 != 0)
                                    {
                                        nth_parent();
                                        v39 = (long long)quote();
                                        error(0x1, v48->field_0, dcgettext(0x0, &g_40714b, 0x5));
                                    }
                                    else
                                    {
                                        nth_parent();
                                        v41 = (long long)quote();
                                        error(0x1, 0x0, dcgettext(0x0, &g_4074a8, 0x5));
                                    }
                                }
                                else
                                {
                                    closedir();
                                    v48->field_0 = v34;
                                    nth_parent();
                                    v39 = (long long)quote();
                                    error(0x1, v48->field_0, dcgettext(0x0, &g_40714b, 0x5));
                                }
                            }
                        }
                        if (...)
                        {
                            v48->field_0 = 0;
                        }
                    }
                }
                else
                {
                    nth_parent();
                    v38 = (long long)quote();
                    error(0x1, v48->field_0, dcgettext(0x0, &g_407107, 0x5));
                }
            }
        }
        else
        {
            nth_parent();
            v44 = (long long)quote();
            error(0x1, *(__errno_location()), dcgettext(0x0, &g_40711c, 0x5));
        }
        if (v7 == v1[1])
        {
            v37 = v35->field_10;
            if (v35->field_10->field_0 != 0)
            {
                puts(v37);
                rpl_free();
                rpl_free();
                return 0;
            }
            file_name_prepend();
            v37 = v35->field_10;
            puts(v37);
            rpl_free();
            rpl_free();
            break;
        }
    }
    return 0;
}
