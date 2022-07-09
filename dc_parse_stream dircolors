typedef struct struct_2 {
    unsigned long long field_0;
} struct_2;

typedef struct struct_1 {
    unsigned short field_0;
} struct_1;

extern unsigned int g_407039;
extern unsigned int g_4072e0;
extern unsigned int g_407310;
extern char g_408ac8;
extern unsigned long long slack_codes[2];

int dc_parse_stream()
{
    BOT tmp_19;  // tmp #19
    BOT tmp_24;  // tmp #24
    BOT tmp_6;  // tmp #6
    BOT tmp_2;  // tmp #2
    unsigned long v0;  // [bp-0x80]
    unsigned int v1;  // [bp-0x78]
    char v10;  // [bp+0x100009]
    char v11;  // [bp+0x10000a]
    unsigned long long|unsigned int v12;  // rax
    unsigned long long v13;  // rax
    unsigned long long v15;  // rax
    unsigned long long|struct_1 * v16;  // rcx
    unsigned long long v17;  // rdx
    unsigned long long v18;  // rbx
    char [2]|char * v19;  // rbp
    char v2;  // [bp-0x71]
    char [2]|unsigned long v20;  // rsi
    void *v21;  // rdi
    char [2]|unsigned long long v22;  // rdi
    char [2]|unsigned long long|unsigned int v23;  // r12
    unsigned long long v24;  // r13
    void *v25;  // r14
    struct_2 *|unsigned long long v26;  // r15
    unsigned long long v27;  // cc_dep1
    unsigned long v3;  // [bp-0x70]
    unsigned long v4;  // [bp-0x68]
    unsigned long v5;  // [bp-0x60]
    unsigned long long v6;  // [bp-0x50]
    unsigned long long v7;  // [bp-0x48]

    v25 = v21;
    v3 = v20;
    v6 = 0;
    v7 = 0;
    v13 = getenv("TERM");
    if (v21 != 0)
    {
        v21 = v13;
        v0 = (*(v21) != 0? v21 : "none");
    }
    else
    {
        v0 = "none";
    }
    v1 = 3;
    v22 = getenv("COLORTERM");
    v2 = 1;
    tmp_19 = v22 != 0;
    v24 = 0;
    v4 = (tmp_19? v22 : 4223280);
    while (true)
    {
        v24 += 1;
        if (v25 != 0)
        {
            v13 = __getdelim(&v6, &v7, 0xa, v25);
            if (!(((char)[D] amd64g_calculate_condition(0xe<64>, 0x14<64>, rax<8>, 0x0<64>, cc_ndep<8>))))
            {
            }
            else
            {
                rpl_free();
                return ((long long)v2);
            }
        }
        strlen("# Configuration file for dircolors, a utility to help you set the");
        if (False)
        {
            return ((long long)v2);
        }
        if (v25 == 0 || !(((char)[D] amd64g_calculate_condition(0xe<64>, 0x14<64>, rax<8>, 0x0<64>, cc_ndep<8>))))
        {
            v26 = __ctype_b_loc();
            while (true)
            {
                v17 = ((long long)v10);
                if (((long long)(*(v16 + (((long long)v10) << 1) + 1) & 32)) == 0)
                {
                    break;
                }
                v19 += 1;
            }
            v23 = rbp<8>;
            do
            {
                tmp_24 = ((long long)v11);
                v23 = &v11;
            }
            while (...);
        }
    }
    v19 = (long long)ximemdup0();
    if (v23[0] != 0)
    {
        v16 = v26->field_0;
        do
        {
            v17 = ((long long)v23[1]);
            v23 += 1;
            v27 = ((long long)(*(v16 + v17 * 2 + 1) & 32));
        }
        while (((char)v27) != 0);
        if (((long long)v17) != 0)
        {
            if (v17 != 35)
            {
                v20 = v23;
                do
                {
                    v22 = v20;
                    v13 = ((long long)v20[1]);
                    v20 += 1;
                    tmp_6 = v13;
                }
                while (((long long)(((char)(tmp_6 != 35)) & ((char)(((long long)tmp_6) != 0)))) != 0);
                if (((long long)(*(v16 + (((long long)v20[1]) << 1) + 1) & 32)) != 0)
                {
                    do
                    {
                        v13 = ((long long)v22[1]);
                        v22 -= 1;
                        v27 = ((long long)(*(v16 + v13 * 2 + 1) & 32));
                    }
                    while (((char)v27) != 0);
                }
                v23 = ximemdup0();
                v12 = c_strcasecmp();
                if (!(v12 == 0))
                {
                    v12 = c_strcasecmp();
                    if (v1 != 2)
                    {
                        if (((int)3) != 0)
                        {
                            v15 = ((long long)*(v19));
                        }
                    }
                    else
                    {
                        v15 = ((long long)*(v19));
                        v1 = 1;
                        tmp_2 = v15;
                    }
                }
                if (v1 != 2 && (v12 == 0 || v12 == 0))
                {
                    v12 = ((int)(((int)(fnmatch(v23) == 0)) * 2));
                    v1 = v12;
                    /* goto 4207129; */
                }
            }
        }
    }
    if (v17 == 35 || ((long long)v17) == 0 || v23[0] == 0)
    {
        v23 = (long long)quotearg_n_style_colon();
        error(0x0, 0x0, dcgettext(0x0, &g_4072e0, 0x5));
        rpl_free();
        v2 = 0;
        /* goto 4206816; */
    }
    if (...)
    {
        if (v15 != 42)
        {
            v12 = c_strcasecmp();
            if (v12 != 0)
            {
                v12 = c_strcasecmp();
                if (v12 != 0)
                {
                    v12 = c_strcasecmp();
                    if (v12 != 0)
                    {
                        v5 = "# Configuration file for dircolors, a utility to help you set the";
                        v18 = 0;
                        while (true)
                        {
                            v12 = c_strcasecmp();
                            if (v12 != 0)
                            {
                                v18 += 1;
                                if (v1 == 3)
                                {
                                    break;
                                }
                                if (v3 != 0)
                                {
                                    v26 = (long long)quotearg_n_style_colon();
                                }
                                else
                                {
                                    v26 = dcgettext(0x0, &g_407039, 0x5);
                                }
                                error(0x0, 0x0, dcgettext(0x0, &g_407310, 0x5));
                                v2 = 0;
                                break;
                            }
                            else
                            {
                                append_entry();
                                break;
                            }
                        }
                    }
                }
            }
        }
        else
        {
            append_entry();
            /* goto 4207129; */
        }
    }
    if (...)
    {
        append_entry();
    }
    if (...)
    {
        rpl_free();
        rpl_free();
    }
}
