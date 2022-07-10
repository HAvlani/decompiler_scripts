typedef struct struct_1 {
    unsigned long long field_0;
} struct_1;

typedef struct struct_0 {
    unsigned int field_0;
} struct_0;

typedef struct struct_2 {
    char padding_0[1];
    char field_1;
} struct_2;

extern char g_402b78;
extern char g_402ba7;
extern char g_402bd1;
extern char g_402bf3;
extern char g_402c18;
extern unsigned int g_40b178;
extern unsigned int g_40b1ab;
extern unsigned int g_40b1cd;
extern unsigned int g_40b1f9;
extern unsigned int g_40b203;
extern unsigned int g_40b218;
extern unsigned int g_40b229;
extern unsigned int g_40b23d;
extern unsigned int g_40b256;
extern unsigned int g_40b268;
extern unsigned int g_40b27d;
extern unsigned int g_40bb08;
extern unsigned int g_40bb58;
extern unsigned int g_40bb88;
extern struct_0 g_40bbc0;
extern unsigned int long_opts;
extern struct_1 optarg;
extern struct_0 optind;
extern struct_1 randint_source;
extern struct_0 remove_methods;

int main()
{
    BOT tmp_32;  // tmp #32
    BOT tmp_3;  // tmp #3
    char|struct_0 * v0;  // [bp-0xc0]
    unsigned long v1;  // [bp-0xb8]
    unsigned long v10;  // [bp-0x78]
    struct_1 *v11;  // [bp-0x70]
    uint128_t v12;  // [bp-0x68]
    unsigned long long v13;  // [bp-0x60]
    uint128_t|unsigned long long v14;  // [bp-0x58]
    unsigned long v15;  // [bp-0x18]
    unsigned long|unsigned long long v16;  // [bp-0x10]
    unsigned long|unsigned long long v17;  // [bp-0x8]
    unsigned long v18;  // [bp+0x0]
    unsigned long v2;  // [bp-0xb0]
    unsigned long v20;  // [bp+0x60]
    char|unsigned long v21;  // [bp+0x68]
    unsigned int v22;  // [bp+0x78]
    unsigned int v23;  // [bp+0x80]
    char v24;  // [bp+0x84]
    char v25;  // [bp+0x85]
    char v26;  // [bp+0x86]
    unsigned long long v27;  // rax
    unsigned int v29;  // rax
    char v3;  // [bp-0xa5]
    unsigned long long v32;  // rax
    unsigned long long v33;  // rax
    struct_0 *|unsigned long long v34;  // rax
    unsigned long long v35;  // rax
    unsigned long long v38;  // rax
    struct_0 *|unsigned long long v39;  // rax
    unsigned int v4;  // [bp-0xa4]
    struct_2 *v40;  // rax
    unsigned long long v41;  // rax
    unsigned long|unsigned long long v44;  // rcx
    unsigned long v45;  // rdx
    unsigned int|void *|unsigned long v46;  // ebx
    unsigned long long|struct_1 *|char * v47;  // rbp
    struct_1 *v48;  // rsi
    unsigned int v49;  // edi
    unsigned long v5;  // [bp-0xa0]
    struct_0 * v50;  // r8
    char v51[2];  // r12
    unsigned long long v52;  // r12
    char *[2]|struct_1 * v53;  // r13
    unsigned long long v54;  // r13
    unsigned long long v55;  // r14
    unsigned int v56;  // cc_dep1
    char|unsigned long v6;  // [bp-0x98]
    void *v7;  // [bp-0x90]
    unsigned long long v8;  // [bp-0x88]
    unsigned long v9;  // [bp-0x80]

    v26 = 1;
    /* goto 4205232; */
    v25 = 1;
    /* goto 4205232; */
    v24 = 1;
    /* goto 4205232; */
    v21 = 1;
    /* goto 4205232; */
    rsp<8> = rsp<8> - 8;
    v18 = &g_402ba7;
    dcgettext(0x0, &g_40b1cd, 0x5);
    v16 = 0;
    rsp<8> = rsp<8> - 8 - 8 - 8;
    v15 = &g_402bd1;
    v21 = (long long)xnumtoumax();
    /* goto 4205232; */
    rsp<8> = rsp<8> - 8;
    v18 = &g_402bf3;
    dcgettext(0x0, &g_40b1ab, 0x5);
    rsp<8> = rsp<8> - 8;
    v17 = &g_402c18;
    v20 = (long long)xdectoumax();
    /* goto 4205232; */
    v47 = v48;
    v12 = 0;
    v14 = 0;
    set_program_name();
    setlocale();
    bindtextdomain(&g_40b178, &g_40bb08);
    textdomain(&g_40b178);
    atexit();
    v13 = 3;
    v14 = 18446744069414584319;
    /* goto 4205232; */
    if (optarg != 0)
    {
        v18 = v44;
        v17 = 1;
        rsp<8> = rsp<8> - 8 - 8 - 8;
        v16 = &g_402b78;
        v29 = ((int)*(remove_methods + (long long)__xargmatch_internal() * 4));
        v22 = v29;
    }
    else
    {
        v23 = 3;
    }
    v39 = getopt_long(v49, ((int)v48), &g_40b1f9, &long_opts, 0x0);
    if (v39 != -1)
    {
        if (!(v39 <= 128))
        {
            usage(); /* do not return */
        }
        else if (v39 > 101)
        {
            v39 = ((long long)v39) - 102;
            if (((int)v39) <= 26)
            {
                v35 = ((long long)*(g_40bbc0 + v39 * 4)) + &g_40bbc0;
                /* goto v35; */
            }
            else
            {
                usage(); /* do not return */
            }
        }
        else if (v39 == -131)
        {
            version_etc();
            exit(0x0); /* do not return */
        }
        else if (v39 == -130)
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
        if (v49 != optind)
        {
            randint_source = (long long)randint_all_new();
            if (randint_source != 0)
            {
                atexit();
                if (((int)(v49 - optind)) > 0)
                {
                    v53 = v47 + ((long long)optind) * 8;
                    v3 = 1;
                    v1 = v47 + (((long long)optind) + ((long long)(v49 - optind)) - 1) * 8 + 8;
                    v2 = &stack_base-104;
                    while (true)
                    {
                        quotearg_n_style_colon();
                        v51 = v53[0];
                        v47 = (long long)xstrdup();
                        if (v51[1] == 0 && v53[0][0] == 45)
                        {
                            v32 = rpl_fcntl();
                            if (((int)v32) < 0)
                            {
                                error(0x0, *(__errno_location()), dcgettext(0x0, &g_40b218, 0x5));
                                v38 = 0;
                            }
                            else if (((long long)(v32 & 4)) == 0)
                            {
                                v38 = do_wipefd();
                            }
                            else
                            {
                                error(0x0, 0x0, dcgettext(0x0, &g_40bb58, 0x5));
                                v38 = 0;
                                /* goto 4205898; */
                            }
                            v3 &= v38;
                            /* goto 4205902; */
                        }
                        if (v51[1] != 0 || v53[0][0] != 45)
                        {
                            v46 = open_safer();
                            if (v46 < 0)
                            {
                                v50 = __errno_location();
                                if (v50->field_0 == 13 && ((char)v12) != 0)
                                {
                                    v0 = v50;
                                    v38 = chmod(((int)v51), 0x80);
                                    v50 = v0;
                                    if (v38 == 0)
                                    {
                                        v46 = (long long)open_safer();
                                    }
                                }
                                if (((int)v46) < 0 || ((char)v12) == 0 || v38 != 0 || v50->field_0 != 13)
                                {
                                    v0 = r8<8>;
                                    error(0x0, v0->field_0, dcgettext(0x0, &g_40bb88, 0x5));
                                    v0 = 0;
                                    /* goto 4206050; */
                                }
                            }
                            if (v46 >= 0 || v38 == 0 && v50->field_0 == 13 && ((int)v46) >= 0 && ((char)v12) != 0)
                            {
                                v0 = (char)do_wipefd();
                                v38 = close(reg_40<4>);
                                if (v38 != 0)
                                {
                                    error(0x0, *(__errno_location()), dcgettext(0x0, &g_40b229, 0x5));
                                    v0 = 0;
                                }
                                else if (v0 != 0)
                                {
                                    if (((int)*((int *)(((char *)&v14) + 8))) != 0)
                                    {
                                        v8 = (long long)xstrdup();
                                        v46 = (long long)last_component();
                                        v10 = (long long)dir_name();
                                        quotearg_n_style_colon();
                                        v4 = -1;
                                        v5 = (long long)xstrdup();
                                        if (v56 == 3)
                                        {
                                            v4 = open_safer();
                                        }
                                        if (((char)*((char *)(((char *)&v14) + 12))) != 0)
                                        {
                                            error(0x0, 0x0, dcgettext(0x0, &g_40b23d, 0x5));
                                        }
                                        if (((int)*((int *)(((char *)&v14) + 8))) != 1)
                                        {
                                            v55 = v8;
                                            v9 = v47;
                                            v44 = (long long)base_len() - 1;
                                            v34 = ((long long)v0);
                                            v11 = v53;
                                            v54 = v44;
                                            tmp_32 = v34;
                                            v6 = tmp_32;
                                            v7 = v46 - v55 + v51;
                                            while (true)
                                            {
                                                v45 = v54 + 1;
                                                if (v54 == 18446744069414584319)
                                                {
                                                    break;
                                                }
                                                memset(v46, 0x30, v45);
                                                *(v46 + v54 + 1) = 0;
                                                while (true)
                                                {
                                                    v41 = renameatu();
                                                    if (v41 != 0)
                                                    {
                                                        v34 = __errno_location();
                                                        if (v34->field_0 == 17)
                                                        {
                                                            v47 = v46 + v54;
                                                            while (true)
                                                            {
                                                                v40 = strchr("0123456789abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ_.", ((int)*(v47)));
                                                                if (v40 != 0)
                                                                {
                                                                    v33 = ((long long)v40->field_1);
                                                                    tmp_3 = v33;
                                                                    if (((long long)tmp_3) == 0)
                                                                    {
                                                                        *(v47) = 48;
                                                                        v34 = v47 - 1;
                                                                        v47 = v34;
                                                                    }
                                                                    else
                                                                    {
                                                                        *(v47) = v33;
                                                                        break;
                                                                    }
                                                                }
                                                                else
                                                                {
                                                                    __assert_fail(); /* do not return */
                                                                }
                                                            }
                                                            if (v40 != 0 && ((long long)tmp_3) != 0)
                                                            {
                                                                v41 = renameatu();
                                                            }
                                                            else if (((long long)tmp_3) == 0 && v40 != 0)
                                                            {
                                                                v54 -= 1;
                                                                break;
                                                            }
                                                        }
                                                    }
                                                    else
                                                    {
                                                        if (((int)v4) >= 0)
                                                        {
                                                            v0 = ((char)(dosync() != 0? 0 : ((int)*(&stack_base-192))));
                                                        }
                                                        if (((char)*((char *)(((char *)&v14) + 12))) != 0)
                                                        {
                                                            v6 = (v6 == 0? *(v48 + (((long long)optind) << 3)) : *(&stack_base-128));
                                                            error(0x0, 0x0, dcgettext(0x0, &g_40b256, 0x5));
                                                            v6 = 0;
                                                        }
                                                        memcpy(v7, v46, v54 + 2);
                                                    }
                                                }
                                            }
                                            v53 = v11;
                                        }
                                        v27 = unlink(*(v48 + ((long long)optind) * 8));
                                        if (v27 != 0)
                                        {
                                            error(0x0, *(__errno_location()), dcgettext(0x0, &g_40b268, 0x5));
                                            v0 = 0;
                                        }
                                        else if (((char)*((char *)(((char *)&v14) + 12))) != 0)
                                        {
                                            error(0x0, 0x0, dcgettext(0x0, &g_40b27d, 0x5));
                                        }
                                        if (((int)v4) >= 0)
                                        {
                                            v0 = ((char)(dosync() != 0? 0 : ((int)*(&stack_base-192))));
                                            v27 = close(v49);
                                            if (v27 != 0)
                                            {
                                                error(0x0, *(__errno_location()), dcgettext(0x0, &g_40b229, 0x5));
                                                v0 = 0;
                                            }
                                        }
                                        rpl_free();
                                        rpl_free();
                                        rpl_free();
                                    }
                                }
                            }
                            v3 &= v0;
                        }
                        v53 = r13<8> + 8;
                        rpl_free();
                        if (v1 == v53)
                        {
                            break;
                        }
                    }
                    return ((long long)(((int)v3) ^ 1));
                }
                v3 = 1;
                return ((long long)(((int)v3) ^ 1));
            }
            if (False)
            {
                v52 = (long long)quotearg_n_style_colon();
                error(0x1, *(__errno_location()), "%s");
            }
            v52 = (long long)quotearg_n_style_colon();
            error(0x1, *(__errno_location()), "%s");
        }
        else
        {
            error(0x0, 0x0, dcgettext(0x0, &g_40b203, 0x5));
            usage(); /* do not return */
        }
    }
}
