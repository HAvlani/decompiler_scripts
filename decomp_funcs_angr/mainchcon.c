typedef struct struct_0 {
    unsigned long long field_0;
} struct_0;

typedef struct struct_1 {
    unsigned int field_0;
} struct_1;

typedef struct struct_2 {
    char padding_0[104];
    unsigned short field_68;
} struct_2;

extern char affect_symlink_referent;
extern char g_402c69;
extern char g_402c7f;
extern char g_402c94;
extern char g_402ca6;
extern char g_402cc7;
extern char g_402ce3;
extern char g_402cf9;
extern char g_402d0d;
extern char g_402d62;
extern char g_402d7c;
extern char g_402d92;
extern char g_402da3;
extern char g_402db9;
extern char g_402dc7;
extern char g_402dd7;
extern char g_402ddf;
extern char g_402df6;
extern char g_402e0c;
extern char g_402f6f;
extern char g_403106;
extern char g_403120;
extern char g_403136;
extern char g_403147;
extern char g_40315d;
extern char g_40316b;
extern char g_4031c7;
extern char g_4031de;
extern char g_4031f4;
extern char g_403208;
extern char g_403228;
extern char g_40323f;
extern char g_403255;
extern char g_403269;
extern unsigned int g_40b084;
extern unsigned int g_40b0c8;
extern unsigned int g_40b0d7;
extern unsigned int g_40b0e9;
extern unsigned int g_40b0f9;
extern unsigned int g_40b112;
extern unsigned int g_40b14c;
extern unsigned int g_40b9e0;
extern unsigned int g_40ba08;
extern unsigned int g_40ba38;
extern unsigned int g_40ba60;
extern unsigned int g_40ba80;
extern unsigned int g_40bab0;
extern unsigned int g_40baf0;
extern unsigned int g_40bb28;
extern unsigned int g_40bbe8;
extern unsigned int g_40bc10;
extern unsigned int g_40bc48;
extern unsigned int g_40bc70;
extern struct_1 g_40bc98;
extern unsigned int long_options;
extern struct_1 optind;
extern char recurse;
extern unsigned long long root_dev_ino[2];
extern unsigned long long specified_context;
extern char verbose;

int main()
{
    unsigned long long v0;  // [bp-0x68]
    struct_1 *|unsigned int v1;  // [bp-0x58]
    unsigned long v10;  // [bp-0x8]
    unsigned long v11;  // [bp+0x0]
    unsigned long v12;  // [bp+0x8]
    unsigned long v13;  // [bp+0x10]
    unsigned long|unsigned long long v14;  // [bp+0x100028]
    unsigned int v15;  // [bp+0x100048]
    unsigned long v16;  // [bp+0x100060]
    unsigned long v17;  // [bp+0x100078]
    unsigned long v18;  // [bp+0x100080]
    unsigned long long|struct_2 * v19;  // rax
    unsigned long long v2;  // [bp-0x50]
    struct_1 *|unsigned long long v20;  // rax
    unsigned long long v24;  // rax
    unsigned long long v28;  // rax
    unsigned long long v30;  // rdx
    struct_1 *v31;  // rbx
    unsigned long long v32;  // rbx
    unsigned long|struct_0 * v33;  // rsi
    unsigned int v34;  // edi
    char *v36;  // r9
    unsigned long|unsigned long long v37;  // r9
    unsigned long long v38;  // r12
    unsigned long long v39;  // r12
    unsigned long v4;  // [bp-0x38]
    unsigned long long v40;  // r12
    unsigned long long v41;  // r13
    unsigned long long v42;  // r13
    unsigned long|unsigned long long|unsigned int v43;  // r15
    unsigned long long v44;  // r15
    unsigned long v5;  // [bp-0x30]
    unsigned long v6;  // [bp-0x28]
    unsigned long v7;  // [bp-0x20]
    unsigned long v8;  // [bp-0x18]
    unsigned long v9;  // [bp-0x10]

    v43 = ((long long)recurse);
    v13 = v37;
    rsp<8> = rsp<8> - 8;
    v11 = &g_402cc7;
    v19 = cycle_warning_required();
    rsp<8> = rsp<8> - 8;
    v11 = &g_402ca6;
    v43 = (long long)quotearg_style();
    /* goto 4205688; */
    set_program_name();
    setlocale();
    bindtextdomain(&g_40b084, &g_40b9e0);
    textdomain(&g_40b084);
    atexit();
    v1 = -1;
    v2 = 0;
    /* goto 4204895; */
    rsp<8> = rsp<8> - 8;
    v11 = &g_402df6;
    quotearg_n_style_colon();
    v33 = ((long long)v15);
    rsp<8> = rsp<8> - 8;
    v10 = &g_402e0c;
    error(0x0, v33, "%s");
    if (v16 == 0)
    {
        if (v14 == 0)
        {
            v14 = 1;
            rsp<8> = rsp<8> - 8;
            v11 = &g_402f6f;
            rpl_fts_set();
        }
    }
    if (((long long)recurse) != 0)
    {
        if (root_dev_ino != 0)
        {
            if (v18 == *(root_dev_ino))
            {
                if (v17 == *(root_dev_ino + 8))
                {
                    v13 = v36;
                    rsp<8> = rsp<8> - 8;
                    v11 = &g_402d62;
                    v24 = strcmp(v36, "/");
                    v37 = v12;
                    if (v24 == 0)
                    {
                        rsp<8> = rsp<8> - 8;
                        v10 = &g_402d7c;
                        v44 = (long long)quotearg_style();
                        rsp<8> = rsp<8> - 8;
                        v9 = &g_402d92;
                        rsp<8> = rsp<8> - 8;
                        v8 = &g_402da3;
                        error(0x0, 0x0, dcgettext(0x0, &g_40ba80, 0x5));
                    }
                    else
                    {
                        v12 = v37;
                        rsp<8> = rsp<8> - 8;
                        v10 = &g_403228;
                        v38 = (long long)quotearg_n_style();
                        rsp<8> = rsp<8> - 8;
                        v9 = &g_40323f;
                        v44 = (long long)quotearg_n_style();
                        rsp<8> = rsp<8> - 8;
                        v8 = &g_403255;
                        rsp<8> = rsp<8> - 8;
                        v7 = &g_403269;
                        error(0x0, 0x0, dcgettext(0x0, &g_40bab0, 0x5));
                    }
                    v43 = 0;
                    rsp<8> = rsp<8> - 8;
                    v7 = &g_402db9;
                    rsp<8> = rsp<8> - 8;
                    v6 = &g_402dc7;
                    error(0x0, 0x0, dcgettext(0x0, &g_40baf0, 0x5));
                    rsp<8> = rsp<8> - 8;
                    v5 = &g_402dd7;
                    rpl_fts_set();
                    rsp<8> = rsp<8> - 8;
                    v4 = &g_402ddf;
                    rpl_fts_read();
                }
            }
        }
        if (v20 == -1)
        {
            if (((int)16) != 16)
            {
                if (v1 != 0)
                {
                    affect_symlink_referent = 1;
                }
                else
                {
                    error(0x1, 0x0, dcgettext(0x0, &g_40b0d7, 0x5));
                }
            }
            else
            {
                if (v1 != 1)
                {
                    affect_symlink_referent = 0;
                }
                else
                {
                    error(0x1, 0x0, dcgettext(0x0, &g_40ba08, 0x5));
                }
            }
        }
    }
    if (((long long)v19) != 0)
    {
        rsp<8> = rsp<8> - 8;
        v10 = &g_402ce3;
        v43 = (long long)quotearg_n_style_colon();
        rsp<8> = rsp<8> - 8;
        v9 = &g_402cf9;
        v43 = 0;
        rsp<8> = rsp<8> - 8;
        v8 = &g_402d0d;
        error(0x0, 0x0, dcgettext(0x0, &g_40bb28, 0x5));
    }
    v20 = getopt_long(v34, ((int)v33), &g_40b0c8, &long_options, 0x0);
    if (v14 != 0 || v16 != 0)
    {
        rsp<8> = rsp<8> - 8;
        v11 = &g_402c69;
        v43 = (long long)quotearg_style();
        /* goto 4205688; */
    }
    if (!(v20 != -1))
    {
        if (((long long)recurse) == 0)
        {
            affect_symlink_referent = ((char)(v1 != 0));
        }
        if (((int)16) == 16 || ((long long)recurse) == 0 || v1 != 0)
        {
            if (((long long)recurse) == 0 || ((int)16) != 16 || v1 != 1)
            {
                if (v2 == 0)
                {
                    if (((long long)0) == 0)
                    {
                        if (v34 - optind > 1)
                        {
                            v30 = *(v33 + ((long long)optind) * 8);
                            optind = ((int)(((long long)optind) + 1));
                            specified_context = v30;
                        }
                    }
                    if (((long long)0) != 0 && v34 - optind > 0)
                    {
                        specified_context = 0;
                    }
                }
                if (v2 != 0 && v34 - optind > 0)
                {
                    v31->field_0 = 95;
                    v40 = (long long)quotearg_style();
                    error(0x1, *(__errno_location()), dcgettext(0x0, &g_40ba38, 0x5));
                }
            }
        }
    }
    else if (!(v20 <= 131))
    {
        usage(); /* do not return */
    }
    else if (v20 > 71)
    {
        v20 = ((long long)v20) - 72;
        if (((int)v20) <= 59)
        {
            v28 = ((long long)*(g_40bc98 + v20 * 4)) + &g_40bc98;
            /* goto v28; */
        }
        else
        {
            usage(); /* do not return */
        }
    }
    else
    {
        if (v20 == -131)
        {
            v0 = 0;
            version_etc();
            exit(0x0); /* do not return */
        }
        else if (v20 != -130)
        {
            usage(); /* do not return */
        }
        if (v20 == -130)
        {
            usage(); /* do not return */
        }
    }
    rsp<8> = rsp<8> - 8;
    v10 = &g_402c7f;
    v33 = ((long long)v15);
    rsp<8> = rsp<8> - 8;
    v9 = &g_402c94;
    error(0x0, v33, dcgettext(0x0, v33, 0x5));
    if (v20 == -1 && v34 - optind <= 1 && ((long long)0) == 0 && v2 == 0 && (((int)16) == 16 || ((long long)recurse) == 0 || v1 != 0) && (((long long)recurse) == 0 || ((int)16) != 16 || v1 != 1) || v20 == -1 && v34 - optind <= 0 && (((long long)0) != 0 || v2 != 0) && (((int)16) == 16 || ((long long)recurse) == 0 || v1 != 0) && (((long long)recurse) == 0 || ((int)16) != 16 || v1 != 1))
    {
        if (((int)optind) >= v34)
        {
            error(0x0, 0x0, dcgettext(0x0, &g_40b0e9, 0x5));
            usage(); /* do not return */
        }
        v39 = (long long)quote();
        error(0x0, 0x0, dcgettext(0x0, &g_40b0f9, 0x5));
        usage(); /* do not return */
    }
    if (v20 == -1 && ((long long)0) == 0 && v2 == 0 && v34 - optind > 1 && (((int)16) == 16 || ((long long)recurse) == 0 || v1 != 0) && (((long long)recurse) == 0 || ((int)16) != 16 || v1 != 1) || v20 == -1 && v2 == 0 && ((long long)0) != 0 && v34 - optind > 0 && (((int)16) == 16 || ((long long)recurse) == 0 || v1 != 0) && (((long long)recurse) == 0 || ((int)16) != 16 || v1 != 1))
    {
        v1 = __errno_location();
        if (((long long)(0 & ((int)recurse))) == 0)
        {
            root_dev_ino = 0;
        }
        else
        {
            root_dev_ino = (long long)get_root_dev_ino();
            if (root_dev_ino == 0)
            {
                v42 = (long long)quotearg_style();
                error(0x1, v1->field_0, dcgettext(0x0, &g_40ba60, 0x5));
            }
        }
    }
    if (...)
    {
        v32 = 1;
        v41 = (long long)xfts_open();
        v19 = rpl_fts_read();
    }
}
