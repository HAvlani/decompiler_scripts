typedef struct struct_1 {
    char padding_0[9];
    char field_9;
    char field_a;
    char padding_b[5];
    struct struct_2 *field_10;
    char field_18;
} struct_1;

typedef struct struct_8 {
    unsigned long long field_0;
} struct_8;

typedef struct struct_5 {
    char padding_0[8];
    char field_8;
} struct_5;

typedef struct struct_7 {
    char padding_0[24];
    unsigned long long field_18;
} struct_7;

typedef struct struct_4 {
    char padding_0[24];
    unsigned long long field_18;
    char padding_20[12];
    unsigned int field_2c;
} struct_4;

typedef struct struct_0 {
    unsigned int field_0;
} struct_0;

typedef struct struct_9 {
    char padding_0[104];
    unsigned short field_68;
} struct_9;

extern char g_4053c5;
extern char g_40540c;
extern char g_405480;
extern char g_405496;
extern char g_4054a7;
extern char g_4054bd;
extern char g_4054c5;
extern char g_4054e0;
extern char g_4054f6;
extern char g_405508;
extern char g_40553b;
extern char g_405549;
extern unsigned long long g_40555c;
extern char g_405574;
extern char g_405590;
extern char g_4055b5;
extern char g_4055d3;
extern char g_40561b;
extern char g_40565a;
extern char g_405662;
extern char g_405681;
extern char g_4056ae;
extern char g_4056ca;
extern char g_4056d2;
extern char g_4056f4;
extern char g_40570a;
extern char g_40571c;
extern char g_405785;
extern char g_4057a0;
extern char g_4057b6;
extern char g_4057cc;
extern char g_4057e5;
extern char g_405801;
extern char g_405816;
extern char g_405826;
extern char g_405844;
extern char g_40585a;
extern char g_40586b;
extern char g_40587e;
extern char g_40588c;
extern char g_4058ef;
extern char g_405905;
extern char g_405916;
extern char g_4059d0;
extern char g_4059e6;
extern char g_4059fd;
extern char g_405a1b;
extern char g_405a2f;
extern char g_405a45;
extern char g_405a5b;
extern char g_405a63;
extern char g_405a83;
extern char g_405af1;
extern char g_405b04;
extern char g_405b1a;
extern char g_405b2e;
extern char g_405b52;
extern unsigned int g_416c52;
extern unsigned int g_416c76;
extern unsigned int g_416c89;
extern unsigned int g_416cd2;
extern unsigned int g_416d60;
extern unsigned int g_416d90;
extern unsigned int g_416dd0;
extern unsigned int g_416df0;
extern unsigned int g_416eb0;
extern unsigned int g_416f20;
extern unsigned int g_416f78;

int rm()
{
    BOT tmp_11;  // tmp #11
    unsigned long v0;  // [bp-0x38]
    unsigned long v1;  // [bp-0x30]
    unsigned int v10;  // [bp+0x1c]
    unsigned long long v11[12];  // [bp+0x100010]
    unsigned long v12;  // [bp+0x100038]
    char v13[2];  // [bp+0x100040]
    unsigned int v14;  // [bp+0x100048]
    unsigned long v15;  // [bp+0x100060]
    unsigned long v16;  // [bp+0x100078]
    unsigned long v17;  // [bp+0x100080]
    char [21]|unsigned long long v19;  // rax
    unsigned long v2;  // [bp-0x28]
    unsigned long long [12]|unsigned long long|char [2] v20;  // rax
    unsigned long long v21;  // rax
    unsigned long long v26;  // rax
    unsigned long v3;  // [bp-0x20]
    unsigned long long [12]|unsigned int v31;  // edx
    unsigned long v34;  // rsi
    unsigned long long|struct_8 * v35;  // rdi
    unsigned long long|struct_4 * v37;  // r12
    unsigned long long v38;  // r13
    unsigned int v39;  // r13d
    unsigned long v4;  // [bp-0x18]
    struct_1 *v40;  // r14
    unsigned long|unsigned long long|unsigned int v41;  // r15d
    struct_0 *v42;  // r15
    unsigned long|unsigned long long|unsigned int v5;  // [bp-0x10]
    unsigned long v6;  // [bp-0x8]
    unsigned long v7;  // [bp+0x0]
    unsigned long v8;  // [bp+0x8]

    rsp<8> = rsp<8> - 8;
    v7 = &g_405480;
    v38 = (long long)quotearg_n_style_colon();
    rsp<8> = rsp<8> - 8;
    v6 = &g_405496;
    rsp<8> = rsp<8> - 8;
    v5 = &g_4054a7;
    error(0x0, 0x0, dcgettext(0x0, &g_416df0, 0x5));
    rsp<8> = rsp<8> - 8;
    v7 = &g_4054e0;
    v38 = (long long)quotearg_n_style_colon();
    rsp<8> = rsp<8> - 8;
    v6 = &g_4054f6;
    v34 = ((long long)v14);
    rsp<8> = rsp<8> - 8;
    v5 = &g_405508;
    error(0x0, v34, dcgettext(0x0, &g_416c89, 0x5));
    /* goto 4215975; */
    if (v40->field_9 == 0)
    {
        if (v40->field_a != 0)
        {
            rsp<8> = rsp<8> - 8;
            v7 = &g_40553b;
            v41 = openat(v37->field_2c, ((int)v12), 0x30900);
            if (v41 >= 0)
            {
                rsp<8> = rsp<8> - 8;
                v6 = &g_405549;
                v19 = fdopendir();
                if (v19 != 0)
                {
                    v7 = v19;
                    rsp<8> = rsp<8> - 8;
                    v5 = &g_40555c;
                    v42->field_0 = 0;
                    v42 = __errno_location();
                    /* goto 4216170; */
                    if (v19[19] == 46 && ((long long)tmp_11) != 0 && v19 != 0 && v19 != 47)
                    {
                        /* goto 4216200; */
                    }
                }
                else
                {
                    rsp<8> = rsp<8> - 8;
                    v5 = &g_405a83;
                    close(v41);
                }
            }
        }
    }
    if (v35->field_0 != 0)
    {
        v37 = (long long)xfts_open();
    }
    else
    {
        v21 = v38;
        return v21;
    }
    if (((long long)tmp_11) == 0 || v19 == 47 || v40->field_9 == 0 && v41 >= 0 && v40->field_a != 0 && v19 != 0)
    {
        v6 = rdi<8>;
        rsp<8> = rsp<8> - 8;
        v4 = &g_405574;
        v19 = readdir();
        v35 = v5;
    }
    if (v19 != 0)
    {
        if (v40->field_9 == 0 || ((long long)tmp_11) == 0 || v19 == 47)
        {
            if (((long long)tmp_11) == 0 || v19 == 47 || v41 >= 0)
            {
                if (((long long)tmp_11) == 0 || v19 == 47 || v40->field_a != 0)
                {
                    if (((long long)tmp_11) == 0 || v19 == 47 || v19 != 0)
                    {
                        if (v19[19] == 46)
                        {
                            v19 = ((long long)v19 + ((long long)(v19[20] == 46))[20]);
                            tmp_11 = v19;
                        }
                        if ((((long long)tmp_11) != 0 || v19[19] != 46) && (v19 != 47 || v19[19] != 46))
                        {
                            v39 = ((int)*(v41));
                            rsp<8> = rsp<8> - 8;
                            v3 = &g_405590;
                            closedir();
                            *(v41) = v39;
                        }
                    }
                }
            }
        }
    }
    if (v19 == 0 && (v40->field_9 == 0 || ((long long)tmp_11) == 0 || v19 == 47) && (((long long)tmp_11) == 0 || v19 == 47 || v41 >= 0) && (((long long)tmp_11) == 0 || v19 == 47 || v40->field_a != 0) && (((long long)tmp_11) == 0 || v19 == 47 || v19 != 0))
    {
        v5 = *(v41);
        rsp<8> = rsp<8> - 8;
        v3 = &g_4055b5;
        closedir();
        v31 = ((int)((int)v4));
        *(v41) = ((int)v4);
    }
    if (v40->field_9 != 0 || v31 == 0 && ((long long)tmp_11) == 0 && v19 == 0 || v31 == 0 && v19 == 0 && v19 == 47 || v31 == 0 && v19 == 0 && v41 >= 0 && v40->field_a != 0 && v19 != 0)
    {
        if (v15 == 0)
        {
            rsp<8> = rsp<8> - 8;
            v7 = &g_4055d3;
            v20 = last_component();
            if (v20[0] == 46)
            {
                v20 = ((long long)v20 + ((long long)(v20[1] == 46))[1]);
                tmp_11 = v20;
            }
        }
    }
    if (...)
    {
        if (v40->field_a != 0)
        {
            v41 = 39;
            /* goto 4216550; */
        }
    }
    if (...)
    {
        v41 = 21;
    }
    if (...)
    {
        rsp<8> = rsp<8> - 8;
        v7 = &g_4056f4;
        v38 = (long long)quotearg_style();
        rsp<8> = rsp<8> - 8;
        v6 = &g_40570a;
        rsp<8> = rsp<8> - 8;
        v5 = &g_40571c;
        error(0x0, v41, dcgettext(0x0, &g_416c52, 0x5));
        v20 = v11;
        if (((char)(v11[11] - 0 >> 63)))
        {
            /* goto 4215975; */
        }
    }
    if (...)
    {
        if (v20[4] == 0)
        {
            v20[4] = 1;
            v20 = v20[1];
        }
        else
        {
            /* goto 4215975; */
        }
    }
    if (...)
    {
        if (v40->field_10 != 0)
        {
            if (v17 == v40->field_10->field_0)
            {
                if (v16 == v40->field_10->field_8)
                {
                    if (v13[0] == 47)
                    {
                        if (v13[1] == 0)
                        {
                            rsp<8> = rsp<8> - 8;
                            v6 = &g_4058ef;
                            v38 = (long long)quotearg_style();
                            rsp<8> = rsp<8> - 8;
                            v5 = &g_405905;
                            rsp<8> = rsp<8> - 8;
                            v4 = &g_405916;
                            error(0x0, 0x0, dcgettext(0x0, &g_416d60, 0x5));
                        }
                    }
                }
            }
        }
    }
    if (...)
    {
        rsp<8> = rsp<8> - 8;
        v6 = &g_405785;
        v7 = (long long)quotearg_n_style();
        rsp<8> = rsp<8> - 8;
        v5 = &g_4057a0;
        v41 = (long long)quotearg_n_style();
        rsp<8> = rsp<8> - 8;
        v4 = &g_4057b6;
        v38 = (long long)quotearg_n_style();
        rsp<8> = rsp<8> - 8;
        v3 = &g_4057cc;
        rsp<8> = rsp<8> - 8;
        v2 = &g_4057e5;
        error(0x0, 0x0, dcgettext(0x0, &g_416f78, 0x5));
        /* goto 4215975; */
    }
    if (...)
    {
        if (v40->field_18 != 0)
        {
            rsp<8> = rsp<8> - 8;
            v6 = &g_405801;
            rsp<8> = rsp<8> - 8;
            v5 = &g_405816;
            v26 = __lxstat(0x1, (int)file_name_concat(), v31);
            if (v26 == 0)
            {
                rsp<8> = rsp<8> - 8;
                v4 = &g_405826;
                rpl_free();
                if (v37->field_18 != v8)
                {
                    rsp<8> = rsp<8> - 8;
                    v3 = &g_405844;
                    v38 = (long long)quotearg_style();
                    rsp<8> = rsp<8> - 8;
                    v2 = &g_40585a;
                    rsp<8> = rsp<8> - 8;
                    v1 = &g_40586b;
                    error(0x0, 0x0, dcgettext(0x0, &g_416f20, 0x5));
                    v34 = "and --preserve-root=all is in effect";
                    /* goto 4216951; */
                }
            }
            else
            {
                rsp<8> = rsp<8> - 8;
                v4 = &g_405a1b;
                v5 = (long long)quotearg_n_style();
                rsp<8> = rsp<8> - 8;
                v3 = &g_405a2f;
                v38 = (long long)quotearg_n_style();
                rsp<8> = rsp<8> - 8;
                v2 = &g_405a45;
                rsp<8> = rsp<8> - 8;
                v1 = &g_405a5b;
                error(0x0, 0x0, dcgettext(0x0, &g_416dd0, 0x5));
                rsp<8> = rsp<8> - 8;
                v0 = &g_405a63;
                rpl_free();
                /* goto 4215975; */
            }
        }
    }
    if (...)
    {
        rsp<8> = rsp<8> - 8;
        v6 = &g_405af1;
        v41 = (long long)quotearg_n_style();
        rsp<8> = rsp<8> - 8;
        v5 = &g_405b04;
        v38 = (long long)quotearg_n_style();
        rsp<8> = rsp<8> - 8;
        v4 = &g_405b1a;
        rsp<8> = rsp<8> - 8;
        v3 = &g_405b2e;
        error(0x0, 0x0, dcgettext(0x0, &g_416d90, 0x5));
        /* goto 4217110; */
    }
    if (...)
    {
        rsp<8> = rsp<8> - 8;
        v7 = &g_40561b;
        v41 = (long long)prompt();
        if (((int)v41) == 2)
        {
            if (v10 == 4)
            {
                rsp<8> = rsp<8> - 8;
                v6 = &g_4056ae;
                v41 = (long long)excise();
                if (((int)v41) == 2)
                {
                    rsp<8> = rsp<8> - 8;
                    v5 = &g_4056ca;
                    rpl_fts_set();
                    rsp<8> = rsp<8> - 8;
                    v4 = &g_4056d2;
                    rpl_fts_read();
                }
            }
        }
    }
    if (...)
    {
        v34 = "use --no-preserve-root to override this failsafe";
    }
    if (...)
    {
        rsp<8> = rsp<8> - 8;
        v3 = &g_40587e;
        rsp<8> = rsp<8> - 8;
        v2 = &g_40588c;
        error(0x0, 0x0, dcgettext(0x0, v34, 0x5));
    }
    rsp<8> = rsp<8> - 8;
    v1 = &g_4054bd;
    rpl_fts_set();
    rsp<8> = rsp<8> - 8;
    v0 = &g_4054c5;
    rpl_fts_read();
    if (...)
    {
        v31 = v11;
        if (((char)(v11[11] - 0 >> 63)))
        {
            /* goto 4216394; */
        }
    }
    if (...)
    {
        if (v31[4] == 0)
        {
            v31[4] = 1;
            v31 = v31[1];
        }
    }
    if (...)
    {
        rsp<8> = rsp<8> - 8;
        v6 = &g_40565a;
        rpl_fts_set();
        rsp<8> = rsp<8> - 8;
        v5 = &g_405662;
        rpl_fts_read();
    }
}
