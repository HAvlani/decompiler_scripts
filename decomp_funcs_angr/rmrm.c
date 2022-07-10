typedef struct struct_3 {
    char padding_0[9];
    char field_9;
    char field_a;
    char padding_b[5];
    struct struct_4 *field_10;
    char field_18;
} struct_3;

typedef struct struct_7 {
    unsigned long long field_0;
} struct_7;

typedef struct struct_8 {
    char padding_0[8];
    char field_8;
} struct_8;

typedef struct struct_1 {
    char padding_0[24];
    unsigned long long field_18;
} struct_1;

typedef struct struct_2 {
    char padding_0[24];
    unsigned long long field_18;
    char padding_20[12];
    unsigned int field_2c;
} struct_2;

typedef struct struct_0 {
    unsigned int field_0;
} struct_0;

typedef struct struct_9 {
    char padding_0[104];
    unsigned short field_68;
} struct_9;

extern char g_403ce5;
extern char g_403d2c;
extern char g_403da0;
extern char g_403db6;
extern char g_403dc7;
extern char g_403ddd;
extern char g_403de5;
extern char g_403e00;
extern char g_403e16;
extern char g_403e28;
extern char g_403e5b;
extern char g_403e69;
extern unsigned long long g_403e7c;
extern unsigned long long g_403e94;
extern char g_403eb0;
extern char g_403ed5;
extern char g_403ef3;
extern char g_403f3b;
extern char g_403f7a;
extern char g_403f82;
extern char g_403fa1;
extern char g_403fce;
extern char g_403fea;
extern char g_403ff2;
extern char g_404014;
extern char g_40402a;
extern char g_40403c;
extern char g_4040a5;
extern char g_4040c0;
extern char g_4040d6;
extern char g_4040ec;
extern char g_404105;
extern char g_404121;
extern char g_404136;
extern char g_404146;
extern char g_404164;
extern char g_40417a;
extern char g_40418b;
extern char g_40419e;
extern char g_4041ac;
extern char g_40420f;
extern char g_404225;
extern char g_404236;
extern char g_4042f0;
extern char g_404306;
extern char g_40431d;
extern char g_40433b;
extern char g_40434f;
extern char g_404365;
extern char g_40437b;
extern char g_404383;
extern char g_4043a3;
extern char g_404411;
extern char g_404424;
extern char g_40443a;
extern char g_40444e;
extern char g_404472;
extern unsigned int g_40cc5a;
extern unsigned int g_40cc7e;
extern unsigned int g_40cc91;
extern unsigned int g_40ccda;
extern unsigned int g_40cd68;
extern unsigned int g_40cd98;
extern unsigned int g_40cdd8;
extern unsigned int g_40cdf8;
extern unsigned int g_40ceb8;
extern unsigned int g_40cf28;
extern unsigned int g_40cf80;

int rm()
{
    BOT tmp_11;  // tmp #11
    unsigned long v0;  // [bp-0x38]
    unsigned long v1;  // [bp-0x30]
    unsigned long long v10[12];  // [bp+0x100010]
    unsigned long v11;  // [bp+0x100038]
    char v12[2];  // [bp+0x100040]
    unsigned int v13;  // [bp+0x100048]
    unsigned long v14;  // [bp+0x100060]
    unsigned long v15;  // [bp+0x100078]
    unsigned long v16;  // [bp+0x100080]
    unsigned long long [12]|char [2]|unsigned long long v17;  // rax
    unsigned long v2;  // [bp-0x28]
    unsigned long long v23;  // rax
    char [21]|unsigned long long v24;  // rax
    unsigned long long v28;  // rax
    unsigned long v3;  // [bp-0x20]
    unsigned long long [12]|unsigned int v30;  // rdx
    unsigned long v33;  // rsi
    struct_7 *|unsigned long long v34;  // rdi
    struct_2 *|unsigned long long v36;  // r12
    unsigned long long v37;  // r13
    unsigned int v38;  // r13d
    struct_3 *v39;  // r14
    unsigned long|unsigned long long|unsigned int v4;  // [bp-0x18]
    struct_0 *|unsigned long long|unsigned int v40;  // r15
    struct_0 *v41;  // r15
    unsigned long|unsigned long long v5;  // [bp-0x10]
    unsigned long v6;  // [bp-0x8]
    unsigned long v7;  // [bp+0x0]
    unsigned long v8;  // [bp+0x8]

    rsp<8> = rsp<8> - 8;
    v7 = &g_403da0;
    v37 = (long long)quotearg_n_style_colon();
    rsp<8> = rsp<8> - 8;
    v6 = &g_403db6;
    rsp<8> = rsp<8> - 8;
    v5 = &g_403dc7;
    error(0x0, 0x0, dcgettext(0x0, &g_40cdf8, 0x5));
    rsp<8> = rsp<8> - 8;
    v7 = &g_403e00;
    v37 = (long long)quotearg_n_style_colon();
    rsp<8> = rsp<8> - 8;
    v6 = &g_403e16;
    v33 = ((long long)v13);
    rsp<8> = rsp<8> - 8;
    v5 = &g_403e28;
    error(0x0, v33, dcgettext(0x0, &g_40cc91, 0x5));
    /* goto 4210119; */
    if (v39->field_9 == 0)
    {
        if (v39->field_a != 0)
        {
            rsp<8> = rsp<8> - 8;
            v7 = &g_403e5b;
            v40 = openat(v36->field_2c, ((int)v11), 0x30900);
            if (v40 >= 0)
            {
                rsp<8> = rsp<8> - 8;
                v6 = &g_403e69;
                v24 = fdopendir();
                if (v24 != 0)
                {
                    v7 = v24;
                    rsp<8> = rsp<8> - 8;
                    v5 = &g_403e7c;
                    v41->field_0 = 0;
                    v41 = __errno_location();
                    /* goto 4210314; */
                    if (v24[19] == 46 && ((long long)tmp_11) != 0 && v24 != 47 && v24 != 0)
                    {
                        /* goto 4210344; */
                    }
                }
                else
                {
                    rsp<8> = rsp<8> - 8;
                    v5 = &g_4043a3;
                    close(v40);
                }
            }
        }
    }
    if (v34->field_0 != 0)
    {
        v36 = (long long)xfts_open();
    }
    else
    {
        v23 = v37;
        return v23;
    }
    if (((long long)tmp_11) == 0 || v24 == 47 || v39->field_9 == 0 && v24 != 0 && v39->field_a != 0 && v40 >= 0)
    {
        v6 = rdi<8>;
        rsp<8> = rsp<8> - 8;
        v4 = &g_403e94;
        v24 = readdir();
        v34 = v5;
    }
    if (v24 != 0)
    {
        if (((long long)tmp_11) == 0 || v39->field_9 == 0 || v24 == 47)
        {
            if (((long long)tmp_11) == 0 || v24 == 47 || v24 != 0)
            {
                if (((long long)tmp_11) == 0 || v24 == 47 || v39->field_a != 0)
                {
                    if (((long long)tmp_11) == 0 || v24 == 47 || v40 >= 0)
                    {
                        if (v24[19] == 46)
                        {
                            v24 = ((long long)v24 + ((long long)(v24[20] == 46))[20]);
                            tmp_11 = v24;
                        }
                        if ((((long long)tmp_11) != 0 || v24[19] != 46) && (v24 != 47 || v24[19] != 46))
                        {
                            v38 = ((int)v40->field_0);
                            rsp<8> = rsp<8> - 8;
                            v2 = &g_403eb0;
                            closedir();
                            v40->field_0 = v38;
                        }
                    }
                }
            }
        }
    }
    if (v24 == 0 && (((long long)tmp_11) == 0 || v39->field_9 == 0 || v24 == 47) && (((long long)tmp_11) == 0 || v24 == 47 || v24 != 0) && (((long long)tmp_11) == 0 || v24 == 47 || v39->field_a != 0) && (((long long)tmp_11) == 0 || v24 == 47 || v40 >= 0))
    {
        v4 = v40->field_0;
        rsp<8> = rsp<8> - 8;
        v2 = &g_403ed5;
        closedir();
        v30 = ((int)((int)*((int *)(((char *)&v4) + -8))));
        v40->field_0 = ((int)*((int *)(((char *)&v4) + -8)));
    }
    if (v39->field_9 != 0 || v30 == 0 && ((long long)tmp_11) == 0 && v24 == 0 || v30 == 0 && v24 == 47 && v24 == 0 || v30 == 0 && v24 == 0 && v24 != 0 && v39->field_a != 0 && v40 >= 0)
    {
        if (v14 == 0)
        {
            rsp<8> = rsp<8> - 8;
            v7 = &g_403ef3;
            v17 = last_component();
            if (v17[0] == 46)
            {
                v17 = ((long long)v17 + ((long long)(v17[1] == 46))[1]);
                tmp_11 = v17;
            }
        }
    }
    if (...)
    {
        if (v39->field_a != 0)
        {
            v40 = 39;
            /* goto 4210694; */
        }
    }
    if (...)
    {
        v40 = 21;
    }
    if (...)
    {
        rsp<8> = rsp<8> - 8;
        v4 = &g_404014;
        v37 = (long long)quotearg_style();
        rsp<8> = rsp<8> - 8;
        v3 = &g_40402a;
        rsp<8> = rsp<8> - 8;
        v2 = &g_40403c;
        error(0x0, v40, dcgettext(0x0, &g_40cc5a, 0x5));
        v17 = v10;
        if (((char)(v10[11] - 0 >> 63)))
        {
            /* goto 4210119; */
        }
    }
    if (...)
    {
        if (v17[4] == 0)
        {
            v17[4] = 1;
            v17 = v17[1];
        }
        else
        {
            /* goto 4210119; */
        }
    }
    if (...)
    {
        if (v39->field_10 != 0)
        {
            if (v16 == v39->field_10->field_0)
            {
                if (v15 == v39->field_10->field_8)
                {
                    if (v12[0] == 47)
                    {
                        if (v12[1] == 0)
                        {
                            rsp<8> = rsp<8> - 8;
                            v6 = &g_40420f;
                            v37 = (long long)quotearg_style();
                            rsp<8> = rsp<8> - 8;
                            v5 = &g_404225;
                            rsp<8> = rsp<8> - 8;
                            v4 = &g_404236;
                            error(0x0, 0x0, dcgettext(0x0, &g_40cd68, 0x5));
                        }
                    }
                }
            }
        }
    }
    if (...)
    {
        rsp<8> = rsp<8> - 8;
        v6 = &g_4040a5;
        v7 = (long long)quotearg_n_style();
        rsp<8> = rsp<8> - 8;
        v5 = &g_4040c0;
        v40 = (long long)quotearg_n_style();
        rsp<8> = rsp<8> - 8;
        v4 = &g_4040d6;
        v37 = (long long)quotearg_n_style();
        rsp<8> = rsp<8> - 8;
        v3 = &g_4040ec;
        rsp<8> = rsp<8> - 8;
        v2 = &g_404105;
        error(0x0, 0x0, dcgettext(0x0, &g_40cf80, 0x5));
        /* goto 4210119; */
    }
    if (...)
    {
        if (v39->field_18 != 0)
        {
            rsp<8> = rsp<8> - 8;
            v6 = &g_404121;
            rsp<8> = rsp<8> - 8;
            v5 = &g_404136;
            v28 = __lxstat(0x1, (int)file_name_concat(), v30);
            if (v28 == 0)
            {
                rsp<8> = rsp<8> - 8;
                v4 = &g_404146;
                rpl_free();
                if (v36->field_18 != v8)
                {
                    rsp<8> = rsp<8> - 8;
                    v3 = &g_404164;
                    v37 = (long long)quotearg_style();
                    rsp<8> = rsp<8> - 8;
                    v2 = &g_40417a;
                    rsp<8> = rsp<8> - 8;
                    v1 = &g_40418b;
                    error(0x0, 0x0, dcgettext(0x0, &g_40cf28, 0x5));
                    v33 = "and --preserve-root=all is in effect";
                    /* goto 4211095; */
                }
            }
            else
            {
                rsp<8> = rsp<8> - 8;
                v4 = &g_40433b;
                v5 = (long long)quotearg_n_style();
                rsp<8> = rsp<8> - 8;
                v3 = &g_40434f;
                v37 = (long long)quotearg_n_style();
                rsp<8> = rsp<8> - 8;
                v2 = &g_404365;
                rsp<8> = rsp<8> - 8;
                v1 = &g_40437b;
                error(0x0, 0x0, dcgettext(0x0, &g_40cdd8, 0x5));
                rsp<8> = rsp<8> - 8;
                v0 = &g_404383;
                rpl_free();
                /* goto 4210119; */
            }
        }
    }
    if (...)
    {
        rsp<8> = rsp<8> - 8;
        v6 = &g_404411;
        v40 = (long long)quotearg_n_style();
        rsp<8> = rsp<8> - 8;
        v5 = &g_404424;
        v37 = (long long)quotearg_n_style();
        rsp<8> = rsp<8> - 8;
        v4 = &g_40443a;
        rsp<8> = rsp<8> - 8;
        v3 = &g_40444e;
        error(0x0, 0x0, dcgettext(0x0, &g_40cd98, 0x5));
        /* goto 4211254; */
    }
    if (...)
    {
        rsp<8> = rsp<8> - 8;
        v3 = &g_403f3b;
        v40 = (long long)prompt();
        if (((int)v40) == 2)
        {
            if (((int)*((int *)(((char *)&v6) + 4))) == 4)
            {
                rsp<8> = rsp<8> - 8;
                v2 = &g_403fce;
                v40 = (long long)excise();
                if (((int)v40) == 2)
                {
                    rsp<8> = rsp<8> - 8;
                    v1 = &g_403fea;
                    rpl_fts_set();
                    rsp<8> = rsp<8> - 8;
                    v0 = &g_403ff2;
                    rpl_fts_read();
                }
            }
        }
    }
    if (...)
    {
        v33 = "use --no-preserve-root to override this failsafe";
    }
    if (...)
    {
        rsp<8> = rsp<8> - 8;
        v2 = &g_40419e;
        rsp<8> = rsp<8> - 8;
        v1 = &g_4041ac;
        error(0x0, 0x0, dcgettext(0x0, v33, 0x5));
    }
    rsp<8> = rsp<8> - 8;
    v4 = &g_403ddd;
    rpl_fts_set();
    rsp<8> = rsp<8> - 8;
    v3 = &g_403de5;
    rpl_fts_read();
    if (...)
    {
        v30 = v10;
        if (((char)(v10[11] - 0 >> 63)))
        {
            /* goto 4210538; */
        }
    }
    if (...)
    {
        if (v30[4] == 0)
        {
            v30[4] = 1;
            v30 = v30[1];
        }
    }
    if (...)
    {
        rsp<8> = rsp<8> - 8;
        v2 = &g_403f7a;
        rpl_fts_set();
        rsp<8> = rsp<8> - 8;
        v1 = &g_403f82;
        rpl_fts_read();
    }
}
