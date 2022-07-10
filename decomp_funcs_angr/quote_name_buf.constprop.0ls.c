typedef struct struct_1 {
    unsigned long long field_0;
} struct_1;

typedef struct struct_2 {
    unsigned short field_0;
} struct_2;

extern char align_variable_outer_quotes;
extern char cwd_some_quoted;
extern char qmark_funny_chars;

int quote_name_buf.constprop.0()
{
    BOT tmp_9;  // tmp #9
    unsigned long long v0;  // [bp-0x90]
    unsigned long long v1;  // [bp-0x88]
    struct_1 *|unsigned long long v10;  // rax
    unsigned long long v11;  // rax
    struct_2 *|unsigned int v12;  // ecx
    unsigned long long v13;  // rdx
    unsigned long long v14;  // rbx
    unsigned long long v15;  // rbp
    unsigned long long|void *|char * v16;  // rsi
    struct_1 *|unsigned long long v17;  // rdi
    struct_1 *v18;  // r8
    char *v19;  // r9
    unsigned long long v2;  // [bp-0x80]
    unsigned long|unsigned long long v20;  // r12
    unsigned long|unsigned long long v21;  // r13
    unsigned long long v22;  // r14
    unsigned long|unsigned int v23;  // r15d
    char v3;  // [bp-0x69]
    struct_1 *v4;  // [bp-0x68]
    char v5;  // [bp-0x4c]
    unsigned long long v6;  // [bp-0x48]
    char|unsigned long|unsigned long long v8;  // rax
    unsigned long long v9;  // rax

    v4 = v17;
    v2 = v17->field_0;
    v8 = get_quoting_style();
    v8 = ((char)(v8 <= 2)) & qmark_funny_chars;
    v3 = ((char)(v8 <= 2)) & qmark_funny_chars;
    if (((long long)(((char)(v8 <= 2)) & qmark_funny_chars)) == 0)
    {
        v23 = 0;
        if (v12 == 0)
        {
            v2 = v16;
            v20 = strlen(v16);
        }
    }
    else if (v12 == 0)
    {
        v14 = strlen(v16);
        v20 = v14 + 1;
        if (v14 > 8191)
        {
            v2 = (long long)xmalloc();
        }
        memcpy(v2, v16, v20);
        v3 = 0;
        /* goto 4228089; */
    }
    else
    {
        v23 = 1;
    }
    if (((long long)(((char)(v8 <= 2)) & qmark_funny_chars)) == 0 && v12 != 0 || ((long long)(((char)(v8 <= 2)) & qmark_funny_chars)) != 0 && v12 != 0)
    {
        v20 = (long long)quotearg_buffer();
        if (v20 > 8191)
        {
            v2 = (long long)xmalloc();
            quotearg_buffer();
        }
        tmp_9 = v2;
        v3 = 1;
        if (*(v16) == *(tmp_9))
        {
            v3 = ((char)(v20 != strlen(v16)));
        }
    }
    if (((long long)(((char)(v8 <= 2)) & qmark_funny_chars)) == 0 || v12 != 0)
    {
        if (v23 != 0 && (v12 != 0 || ((long long)(((char)(v8 <= 2)) & qmark_funny_chars)) != 0))
        {
            v14 = v20;
            /* goto 4228089; */
        }
        if (v18 != 0)
        {
            if (v12 == 0 || v23 == 0)
            {
                if (((long long)(((char)(v8 <= 2)) & qmark_funny_chars)) == 0 || v23 == 0)
                {
                    v8 = __ctype_get_mb_cur_max();
                    if (v8 <= 1)
                    {
                        v15 = v2 + v20;
                        if (v2 + v20 > v2)
                        {
                            v12 = *(__ctype_b_loc());
                            v8 = v2;
                            v14 = 0;
                            do
                            {
                                v14 = v14 - 18446744069414584319 - ((long long)(((long long)(*(v12 + ((long long)*(v8)) * 2) & 0x4000)) < 1));
                                v8 += 1;
                            }
                            while (v15 != v8);
                        }
                    }
                    else
                    {
                        mbsnwidth();
                    }
                    if (align_variable_outer_quotes == 0)
                    {
                        *(v19) = 0;
                        v18->field_0 = v14;
                        v4->field_0 = v2;
                        v11 = v20;
                        return v11;
                    }
                }
            }
        }
        if (v12 == 0 || v23 == 0)
        {
            if (((long long)(((char)(v8 <= 2)) & qmark_funny_chars)) == 0 || v23 == 0)
            {
                if (align_variable_outer_quotes == 0)
                {
                    *(v19) = 0;
                    v4->field_0 = v2;
                    v11 = v20;
                    return v11;
                }
            }
        }
    }
    if (v12 == 0 && ((long long)(((char)(v8 <= 2)) & qmark_funny_chars)) != 0 || v12 != 0 && v23 != 0 || ((long long)(((char)(v8 <= 2)) & qmark_funny_chars)) != 0 && v23 != 0)
    {
        v10 = __ctype_get_mb_cur_max();
        v16 = v2;
        v17 = v2 + v14;
        v1 = v2 + v14;
        if (v10 <= 1)
        {
            if (v1 > v2)
            {
                v10 = __ctype_b_loc();
                v13 = v2;
                do
                {
                    if (((long long)(*(v10->field_0 + (((long long)*(v13)) << 1) + 1) & 64)) == 0)
                    {
                        *(v13) = 63;
                    }
                    v13 += 1;
                }
                while (v13 != v1);
            }
        }
        else if (v17 > v2)
        {
            v20 = v16;
            v14 = 0;
            v21 = v16;
            do
            {
                v10 = ((long long)*(v21));
                if (!(((char)(((long long)*(v21)) <= 95))) && (v10 - 97 & 255) > 29)
                {
                    /* goto 4228341; */
                }
                if ((((char)(((long long)*(v21)) <= 95)) || (v10 - 97 & 255) > 29) && (((char)(((long long)v10) <= 64)) || !(((char)(((long long)*(v21)) <= 95)))) && (((char)(((long long)v10) <= 31)) || !(((char)(((long long)*(v21)) <= 95))) || !(((char)(((long long)v10) <= 35)))) && (((char)(((long long)v10) <= 35)) || !(((char)(((long long)*(v21)) <= 95))) || (v10 - 37 & 255) > 26))
                {
                    v6 = 0;
                    v22 = v21;
                    while (true)
                    {
                        v10 = rpl_mbrtowc();
                        v0 = v20 + 1;
                        if (v10 == 18446744069414584319)
                        {
                            *(v20) = 63;
                            v21 = v22 + 1;
                        }
                        else if (v10 != 18446744069414584318)
                        {
                            v21 = (v10 != 0? v10 : 1);
                            v9 = wcwidth(v5);
                            if (((int)v9) < 0)
                            {
                                *(v20) = 63;
                                v22 += v21;
                                v14 += 1;
                                v20 = v0;
                                v10 = mbsinit(((int)&v6));
                            }
                            else
                            {
                                v13 = 0;
                                do
                                {
                                    *(v20 + v13) = *(v22 + v13);
                                    v13 += 1;
                                }
                                while (v21 != v13);
                                v22 += v21;
                                v20 += v21;
                                v14 = 0 + v9;
                                v10 = mbsinit(((int)&v6));
                            }
                            v21 = v22;
                            break;
                        }
                        if (v10 == 18446744069414584318)
                        {
                            *(v20) = 63;
                            v21 = v1;
                        }
                        if (v10 == 18446744069414584319 || v10 == 18446744069414584318)
                        {
                            break;
                        }
                    }
                }
                else
                {
                    *(v20) = v10;
                    v21 += 1;
                }
            }
            while (v1 > r13<8>);
        }
        else
        {
            /* goto 4228172; */
        }
        v8 = ((long long)align_variable_outer_quotes);
    }
    if (...)
    {
        v8 = ((char)(((int)v3) ^ 1)) & cwd_some_quoted;
    }
    if (align_variable_outer_quotes != 0 || v12 == 0 && ((long long)(((char)(v8 <= 2)) & qmark_funny_chars)) != 0 || v12 != 0 && v23 != 0 || ((long long)(((char)(v8 <= 2)) & qmark_funny_chars)) != 0 && v23 != 0)
    {
        *(v19) = v8;
        if (v18 != 0)
        {
            v18->field_0 = v14;
            v4->field_0 = v2;
            v11 = v20;
            return v11;
        }
        v4->field_0 = v2;
        v11 = v20;
        return v11;
    }
}
