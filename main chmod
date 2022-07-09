typedef struct struct_1 {
    unsigned long long field_0;
} struct_1;

typedef struct struct_0 {
    unsigned int field_0;
} struct_0;

typedef struct struct_2 {
    char padding_0[32];
    unsigned long long field_20;
    char padding_28[16];
    unsigned long long field_38;
    unsigned int field_40;
    char padding_44[20];
    unsigned long long field_58;
    char padding_60[8];
    unsigned short field_68;
    char padding_6a[6];
    unsigned long long field_70;
    unsigned long long field_78;
    char padding_80[8];
    unsigned int field_88;
} struct_2;

extern struct_1 change;
extern char diagnose_surprises;
extern char force_silent;
extern char g_4029c9;
extern char g_402a05;
extern char g_402ab1;
extern unsigned int g_40b084;
extern unsigned int g_40b0da;
extern unsigned int g_40b0f3;
extern unsigned int g_40b104;
extern unsigned int g_40b13e;
extern unsigned int g_40b159;
extern unsigned int g_40b190;
extern unsigned int g_40b658;
extern unsigned int g_40b680;
extern unsigned int g_40b6f8;
extern unsigned int g_40b718;
extern unsigned int g_40b740;
extern unsigned int g_40b800;
extern unsigned int g_40b830;
extern unsigned int g_40b870;
extern unsigned int g_40b8e0;
extern unsigned int g_40b920;
extern unsigned int g_40b948;
extern unsigned int g_40b970;
extern struct_0 g_40b9a4;
extern char g_40c51b;
extern unsigned int long_options;
extern struct_1 optarg;
extern struct_0 optind;
extern char recurse;
extern unsigned long long root_dev_ino[2];
extern struct_0 umask_value;
extern unsigned int verbosity;

int main()
{
    BOT tmp_14;  // tmp #14
    unsigned long|unsigned long long v0;  // [bp-0x138]
    unsigned long v1;  // [bp-0x130]
    unsigned long v10;  // [bp-0x10]
    unsigned long v11;  // [bp-0x8]
    unsigned long v12;  // [bp+0x0]
    unsigned long v13;  // [bp+0x8]
    unsigned long v14;  // [bp+0x10]
    unsigned long v15;  // [bp+0x18]
    unsigned long v16;  // [bp+0x20]
    unsigned long v17;  // [bp+0x28]
    unsigned long v18;  // [bp+0x38]
    unsigned long|struct_2 *|unsigned long long|unsigned int v19;  // rax
    unsigned long long|unsigned int v2;  // [bp-0x120]
    unsigned long long v21;  // rax
    struct_1 *|struct_0 *|unsigned long long v23;  // rax
    unsigned long v3;  // [bp-0x118]
    unsigned long long v30;  // rax
    char * v33;  // rax
    unsigned long|unsigned long long v37;  // rdx
    unsigned long long v38;  // rdx
    unsigned long long v39;  // rbx
    unsigned long v4;  // [bp-0x110]
    struct_2 * v40;  // rbp
    struct_0 *v41;  // rbp
    struct_1 *|unsigned long|char * v42;  // rsi
    unsigned int v43;  // edi
    void *v44;  // r8
    unsigned long long v45;  // r9
    unsigned long|unsigned long long v46;  // r12
    unsigned long long v47;  // r12
    unsigned long long v48;  // r12
    unsigned long|unsigned int v49;  // r13
    unsigned long v5;  // [bp-0x108]
    unsigned long long v50;  // r13
    unsigned long long v51;  // r13
    unsigned long long|char * v52;  // r14
    unsigned long long|unsigned int v53;  // r15d
    unsigned long long v6;  // [bp-0xf0]
    unsigned int v7;  // [bp-0xd0]
    char v8;  // [bp-0x4e]
    char v9;  // [bp-0x42]

    verbosity = 0;
    /* goto 4204840; */
    force_silent = 1;
    /* goto 4204840; */
    verbosity = 1;
    /* goto 4204840; */
    recurse = 1;
    /* goto 4204840; */
    v39 = 0;
    /* goto 4204840; */
    v14 = optarg;
    /* goto 4204840; */
    v15 = *(v46 + ((long long)optind) * 8 + 8);
    rsp<8> = rsp<8> - 8;
    v12 = &g_4029c9;
    v38 = strlen(*(v46 + ((long long)optind) * 8 + 8));
    v45 = v38 + ((long long)(v52 != 0)) + v52;
    v53 = 0;
    v39 = 0;
    v6 = 0;
    set_program_name();
    setlocale();
    bindtextdomain(&g_40b084, &g_40b658);
    textdomain(&g_40b084);
    atexit();
    diagnose_surprises = 0;
    force_silent = 0;
    recurse = 0;
    v2 = 0;
    /* goto 4204840; */
    if (v18 <= v38 + ((long long)(v52 != 0)) + v52)
    {
        v17 = v38;
        v16 = ((long long)(v52 != 0)) + v52;
        v15 = v44;
        v14 = v45;
        v18 = v45 + 1;
        rsp<8> = rsp<8> - 8;
        v11 = &g_402ab1;
        v53 = (long long)x2realloc();
    }
    *(v53 + v52) = 44;
    v37 = v38 + 1;
    v13 = v45;
    rsp<8> = rsp<8> - 8;
    v10 = &g_402a05;
    memcpy(v53 + ((long long)(v52 != 0)) + v52, v44, v37);
    diagnose_surprises = 1;
    v23 = getopt_long(v43, ((int)v42), &g_40b680, &long_options, 0x0);
    if (!(v23 != -1))
    {
        if (v2 != 0)
        {
            if (v53 == 0)
            {
                if (v43 > optind)
                {
                    change = (long long)mode_create_from_ref();
                    if (change == 0)
                    {
                        v50 = (long long)quotearg_style();
                        error(0x1, *(__errno_location()), dcgettext(0x0, &g_40b6f8, 0x5));
                    }
                }
            }
            else
            {
                v42 = "cannot combine mode and --reference options";
                error(0x0, 0x0, dcgettext(0x0, v42, 0x5));
                usage(); /* do not return */
            }
        }
        else
        {
            v23 = ((long long)optind);
            if (v53 != 0)
            {
                if (v43 <= ((int)optind))
                {
                    v37 = ((long long)optind);
                }
            }
            else
            {
                v37 = v23 + 1;
                v53 = *(v42 + v23 * 8);
                optind = ((int)v23) + 1;
            }
            if (v53 == 0 && ((int)(v23 + 1)) < v43 || v53 != 0 && v43 > ((int)optind))
            {
                change = (long long)mode_compile();
                if (change != 0)
                {
                    umask_value = umask(0x0);
                }
                else
                {
                    v47 = (long long)quote();
                    error(0x0, 0x0, dcgettext(0x0, &g_40b0f3, 0x5));
                    usage(); /* do not return */
                }
            }
            if ((v53 == 0 || v43 <= ((int)optind)) && (v53 != 0 || *(v42 + (((long long)optind) << 3)) != 0) && (v53 != 0 || ((int)(v23 + 1)) >= v43))
            {
                if (*(v42 + (v37 << 3) + 8) == v53)
                {
                    v46 = (long long)quote();
                    error(0x0, 0x0, dcgettext(0x0, &g_40b0da, 0x5));
                    usage(); /* do not return */
                }
            }
        }
        if (...)
        {
            v42 = "missing operand";
            error(0x0, 0x0, dcgettext(0x0, v42, 0x5));
            usage(); /* do not return */
        }
        if (change != 0 && (v53 == 0 || v2 == 0) && (v53 == 0 || v43 > ((int)optind)) && (v2 == 0 || v43 > optind) && (((int)(v23 + 1)) < v43 || v53 != 0 || v2 != 0))
        {
            if (recurse != 0)
            {
                if (((long long)v39) != 0)
                {
                    root_dev_ino = (long long)get_root_dev_ino();
                    if (root_dev_ino == 0)
                    {
                        v51 = (long long)quotearg_style();
                        error(0x1, *(__errno_location()), dcgettext(0x0, &g_40b6f8, 0x5));
                    }
                }
            }
            if (((long long)v39) == 0 || recurse == 0)
            {
                root_dev_ino = 0;
            }
            if (((long long)v39) == 0 || recurse == 0 || root_dev_ino != 0)
            {
                v48 = (long long)xfts_open();
                v19 = rpl_fts_read();
                v40 = v19;
                if (v19 != 0)
                {
                    while (true)
                    {
                        v52 = v19->field_38;
                        if (((long long)v19->field_68) << 48 <= 0xd000000000000)
                        {
                            /* goto ((long long)*(4242180 + ((long long)*(rax<8> + 104)) * 4)) + 4242180; */
                            if (((long long)*(4242180 + ((long long)*(rax<8> + 104)) * 4)) + 4242180 == 4206071)
                            {
                                if (v40->field_58 == 0 && v40->field_20 == 0)
                                {
                                    v40->field_20 = 1;
                                    rpl_fts_set();
                                    /* goto 4205832; */
                                }
                                if (force_silent == 0 && (v40->field_58 != 0 || v40->field_20 != 0))
                                {
                                    v53 = (long long)quotearg_style();
                                }
                            }
                            if (((long long)*(4242180 + ((long long)*(rax<8> + 104)) * 4)) + 4242180 == 4205440)
                            {
                                v19 = cycle_warning_required();
                                if (((long long)v19) != 0)
                                {
                                    v52 = (long long)quotearg_n_style_colon();
                                    error(0x0, 0x0, dcgettext(0x0, &g_40b740, 0x5));
                                    /* goto 4205832; */
                                }
                            }
                            if (((long long)*(4242180 + ((long long)*(rax<8> + 104)) * 4)) + 4242180 == 4206258)
                            {
                                /* goto 4205832; */
                            }
                            if (((long long)*(4242180 + ((long long)*(rax<8> + 104)) * 4)) + 4242180 == 4206215 && force_silent == 0)
                            {
                                v53 = (long long)quotearg_style();
                            }
                            if (((long long)*(4242180 + ((long long)*(rax<8> + 104)) * 4)) + 4242180 == 4205945)
                            {
                                if (force_silent != 0)
                                {
                                    /* goto 4205968; */
                                }
                                else
                                {
                                    v53 = (long long)quotearg_style();
                                    error(0x0, 0x0, dcgettext(0x0, &g_40b718, 0x5));
                                    /* goto 4205968; */
                                }
                            }
                            if (force_silent == 0 && ((long long)*(4242180 + ((long long)*(rax<8> + 104)) * 4)) + 4242180 == 4206160)
                            {
                                quotearg_n_style_colon();
                                error(0x0, v40->field_40, "%s");
                                /* goto 4205968; */
                            }
                            if (...)
                            {
                                error(0x0, v40->field_40, dcgettext(0x0, v42, 0x5));
                            }
                            if (...)
                            {
                                v53 = 0;
                            }
                        }
                        if (...)
                        {
                            v30 = strcmp(v52, &g_40c51b);
                            if (v30 == 0)
                            {
                                v52 = (long long)quotearg_style();
                                error(0x0, 0x0, dcgettext(0x0, &g_40b800, 0x5));
                            }
                            else
                            {
                                v53 = (long long)quotearg_n_style();
                                v52 = (long long)quotearg_n_style();
                                error(0x0, 0x0, dcgettext(0x0, &g_40b830, 0x5));
                            }
                            error(0x0, 0x0, dcgettext(0x0, &g_40b870, 0x5));
                            rpl_fts_set();
                            rpl_fts_read();
                            /* goto 4205832; */
                        }
                        if (...)
                        {
                            v49 = ((long long)v40->field_88);
                            v53 = 2;
                            if ((((short)v40->field_88) & 0xf000) != 0xa000)
                            {
                                v2 = mode_adjust();
                                v19 = rpl_fchmodat();
                                if (v19 != 0)
                                {
                                    if (force_silent == 0)
                                    {
                                        v3 = (long long)quotearg_style();
                                        error(0x0, *(__errno_location()), dcgettext(0x0, &g_40b13e, 0x5));
                                    }
                                    if (verbosity == 0)
                                    {
                                        v53 = 1;
                                    }
                                }
                                else if (verbosity != 2)
                                {
                                    v19 = ((int)v2);
                                    if (((long long)(((char)(v2 >> 8)) & 14)) != 0)
                                    {
                                        v19 = __fxstatat(0x1);
                                        if (v19 == 0)
                                        {
                                            v19 = ((long long)v7);
                                            /* goto 4205610; */
                                        }
                                        else if (force_silent == 0)
                                        {
                                            v3 = (long long)quotearg_style();
                                            error(0x0, *(__errno_location()), dcgettext(0x0, &g_40b159, 0x5));
                                        }
                                    }
                                }
                            }
                        }
                        if (...)
                        {
                            if (verbosity != 2)
                            {
                                v49 = ((int)verbosity);
                                if (verbosity == 0 && reg_136<4> != 0)
                                {
                                    v2 = 0;
                                }
                            }
                            if (verbosity == 0)
                            {
                                v3 = (long long)quotearg_style();
                            }
                        }
                        if (...)
                        {
                            v19 = ((int)(v19 ^ ((int)v49)));
                            if ((((short)v19) & 4095) != 0)
                            {
                                v53 = 4;
                                v3 = (long long)quotearg_style();
                                v5 = ((long long)(((int)v49) & 4095));
                                v4 = ((long long)(v43 & 4095));
                                strmode();
                                v8 = 0;
                                strmode();
                                v9 = 0;
                                v33 = dcgettext(0x0, &g_40b970, 0x5);
                                v42 = v33;
                                /* goto 4205744; */
                            }
                        }
                        if (...)
                        {
                            v53 = 3;
                        }
                        if (...)
                        {
                            v3 = (long long)quotearg_style();
                        }
                        if (...)
                        {
                            if (reg_136<4> == 2)
                            {
                                v42 = "neither symbolic link %s nor referent has been changed\n";
                            }
                            else
                            {
                                v43 = ((int)v2);
                                v5 = ((long long)(reg_120<4> & 4095));
                                v4 = ((long long)(v43 & 4095));
                                strmode();
                                v8 = 0;
                                strmode();
                                v9 = 0;
                                if (reg_136<4> == 1)
                                {
                                    v33 = dcgettext(0x0, &g_40b8e0, 0x5);
                                    v42 = v33;
                                    /* goto 4205744; */
                                }
                                else if (reg_136<4> == 3)
                                {
                                    __printf_chk(0x1, dcgettext(0x0, &g_40b920, 0x5));
                                }
                            }
                        }
                        if (...)
                        {
                            __printf_chk(0x1, dcgettext(0x0, rsi<4>, 0x5));
                        }
                        if (...)
                        {
                            v1 = v33;
                            v0 = &stack_base-87;
                            __printf_chk(0x1, rsi<8>);
                        }
                        if (...)
                        {
                            strmode();
                            strmode();
                            v9 = 0;
                            v8 = 0;
                            v52 = (long long)quotearg_n_style_colon();
                            error(0x0, 0x0, dcgettext(0x0, &g_40b948, 0x5));
                        }
                        if (...)
                        {
                            if (recurse == 0)
                            {
                                rpl_fts_set();
                            }
                        }
                        if (...)
                        {
                            v19 = rpl_fts_read();
                            v40 = v19;
                            if (v19 == 0)
                            {
                                break;
                            }
                        }
                    }
                }
                v41 = __errno_location();
                if (v41->field_0 != 0)
                {
                    if (((long long)force_silent) != 0)
                    {
                    }
                    else
                    {
                        error(0x0, v41->field_0, dcgettext(0x0, &g_40b104, 0x5));
                    }
                }
                if (rpl_fts_close() == 0)
                {
                    return ((long long)tmp_14);
                }
                error(0x0, v41->field_0, dcgettext(0x0, &g_40b190, 0x5));
                return ((long long)tmp_14);
            }
        }
    }
    else if (!(v23 <= 130))
    {
        usage(); /* do not return */
    }
    else if (v23 > 42)
    {
        v23 = ((long long)v23) - 43;
        if (((int)v23) <= 87)
        {
            v21 = ((long long)*(g_40b9a4 + v23 * 4)) + &g_40b9a4;
            /* goto v21; */
        }
        else
        {
            usage(); /* do not return */
        }
    }
    else if (v23 == -131)
    {
        v0 = 0;
        version_etc();
        exit(0x0); /* do not return */
    }
    else if (v23 == -130)
    {
        usage(); /* do not return */
    }
    else
    {
        usage(); /* do not return */
    }
}
