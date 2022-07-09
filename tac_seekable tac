extern struct_0 G_buffer;
extern struct_0 G_buffer_size;
extern unsigned int g_416004;
extern unsigned int g_416014;
extern unsigned int g_416023;
extern unsigned int g_4161b0;
extern struct_0 *g_41e108;
extern struct_0 *g_41e110;
extern struct_0 match_length;
extern struct_0 read_size;
extern struct_0 sentinel_length;
extern char *separator;
extern char separator_ends_record;

int tac_seekable()
{
    BOT tmp_1;  // tmp #1
    BOT tmp_5;  // tmp #5
    unsigned int|char *|unsigned long v0;  // [bp-0x58]
    char *|unsigned long v1;  // [bp-0x50]
    unsigned long|unsigned long long v12;  // rdx
    unsigned long long v13;  // rdx
    unsigned long long v14;  // rbp
    unsigned long long v15;  // rbp
    unsigned long long v16;  // rbp
    unsigned long v17;  // rsi
    unsigned int|unsigned long long v18;  // edi
    char *|unsigned long long v19;  // r8
    unsigned int v2;  // [bp-0x48]
    unsigned long long v20;  // r13
    unsigned long long v21;  // r13
    char *|unsigned long long v22;  // r15
    unsigned long long v23;  // cc_dep1
    char v3;  // [bp-0x41]
    unsigned long v4;  // [bp-0x40]
    unsigned long long v6;  // rax
    unsigned long long v7;  // rax
    unsigned long long v8;  // rax
    unsigned long long v9;  // rax

    v21 = v13;
    v2 = v18;
    v1 = match_length;
    v12 = ((long long)((0 CONCAT v13) % read_size >> 64));
    v4 = v17;
    if (v12 != 0)
    {
        v21 -= v12;
        v6 = lseek();
        if (((char)[D] amd64g_calculate_condition(0x8<64>, 0x14<64>, rax<8>, 0x0<64>, cc_ndep<8>)))
        {
            v0 = (long long)quotearg_n_style_colon();
            error(0x0, *(__errno_location()), dcgettext(0x0, &g_416004, 0x5));
        }
    }
    while (true)
    {
        v15 = read_size;
        v12 = (long long)safe_read();
        if (v12 == 0)
        {
            if (v21 != 0)
            {
                v6 = lseek();
                if (((char)[D] amd64g_calculate_condition(0x8<64>, 0x14<64>, rax<8>, 0x0<64>, cc_ndep<8>)))
                {
                    v16 = (long long)quotearg_n_style_colon();
                    error(0x0, *(__errno_location()), dcgettext(0x0, &g_416004, 0x5));
                    v15 = read_size;
                }
                v21 -= v15;
            }
            else if (read_size != 0)
            {
                /* goto 4207534; */
            }
        }
        else
        {
            if (v12 == 18446744069414584319 && v12 != read_size)
            {
                v20 = (long long)quotearg_n_style_colon();
                error(0x0, *(__errno_location()), dcgettext(0x0, &g_416014, 0x5));
                return 0;
            }
        }
        if ((v12 == read_size || v12 == 0) && (read_size == 0 || v12 != 0) && (v21 == 0 || v12 != 0))
        {
            while (true)
            {
                v0 = v15;
                v15 = (long long)safe_read();
                if (v15 == 0)
                {
                    break;
                }
                else if (v15 != 18446744069414584319)
                {
                    v21 = r13<8> + v15;
                    v12 = v15;
                    break;
                    v20 = (long long)quotearg_n_style_colon();
                    error(0x0, *(__errno_location()), dcgettext(0x0, &g_416014, 0x5));
                    return 0;
                }
            }
            if (v15 != 18446744069414584319 && read_size != v15 && v15 != 0)
            {
                v14 = G_buffer;
                v6 = sentinel_length;
                v3 = 1;
                v12 = G_buffer + v12;
                v0 = v12;
                v19 = (sentinel_length == 0? v0 : v0 - *(&stack_base-80) + 1);
            }
        }
        if ((v21 == 0 || v12 != 0) && (v12 == 0 || v12 != 18446744069414584319) && (read_size != 0 || v12 != 18446744069414584319))
        {
            v14 = G_buffer;
            v6 = sentinel_length;
            v3 = 1;
            v12 = G_buffer + v12;
            v0 = v12;
            v19 = (sentinel_length == 0? v0 : v0 - *(&stack_base-80) + 1);
            while (true)
            {
                if (sentinel_length == 0 || v6 == 0)
                {
                    v19 = 1 - (v19 - v14);
                    if (v19 <= 1)
                    {
                        if (!(((char)(v19 == 1))))
                        {
                            v6 = rpl_re_search();
                            if (v6 == 18446744069414584319)
                            {
                                v14 = G_buffer;
                                /* goto 4208255; */
                            }
                            else if (v6 != 18446744069414584318)
                            {
                                v14 = G_buffer;
                                v22 = G_buffer + *(g_41e108);
                                match_length = *(g_41e110) - *(g_41e108);
                            }
                            if (v6 == 18446744069414584318)
                            {
                                error(0x1, 0x0, dcgettext(0x0, &g_4161b0, 0x5));
                            }
                        }
                        if (v6 == 18446744069414584319 || ((char)(v19 == 1)))
                        {
                            v22 = rbp<8> - 1;
                        }
                    }
                    else
                    {
                        error(0x1, 0x0, dcgettext(0x0, &g_416023, 0x5));
                    }
                }
                if (...)
                {
                    if (v21 != 0)
                    {
                        tmp_1 = v0 - rbp<8>;
                        v0 -= rbp<8>;
                        v9 = read_size;
                        if (read_size < tmp_1)
                        {
                            v18 = G_buffer_size;
                            read_size = v9 * 2;
                            G_buffer_size = sentinel_length + v9 * 4 + 2;
                            if (sentinel_length + (v9 << 2) + 2 >= v18)
                            {
                                G_buffer = (long long)xrealloc() + (sentinel_length != 0? sentinel_length : 1);
                                v9 = read_size;
                            }
                            else
                            {
                                xalloc_die(); /* do not return */
                            }
                        }
                    }
                    else
                    {
                        output();
                        return 1;
                    }
                }
                if (...)
                {
                    if (v21 >= v9)
                    {
                    }
                    else
                    {
                        read_size = v21;
                    }
                    v8 = lseek();
                    if (((char)[D] amd64g_calculate_condition(0x8<64>, 0x14<64>, rax<8>, 0x0<64>, cc_ndep<8>)))
                    {
                        v14 = (long long)quotearg_n_style_colon();
                        error(0x0, *(__errno_location()), dcgettext(0x0, &g_416004, 0x5));
                    }
                    v15 = G_buffer;
                    v22 = read_size;
                    tmp_5 = v0 + v22 + v15;
                    ((unsigned int)v0) = v0 + v22 + v15;
                    v1 = (sentinel_length == 0? tmp_5 : memmove(G_buffer + read_size, G_buffer, *(&stack_base-88)));
                    v6 = safe_read();
                    v19 = v1;
                    if (v6 == read_size)
                    {
                        v14 = G_buffer;
                        if (sentinel_length != 0)
                        {
                            v22 = v19 - 1;
                        }
                    }
                }
                if (...)
                {
                    v19 = v22;
                }
                if (...)
                {
                    v22 = v19 - 1;
                }
                if (...)
                {
                    v6 = strncmp(v19, separator + 1, match_length - 1);
                }
                if (...)
                {
                    if (separator_ends_record != 0)
                    {
                        v7 = match_length + v22;
                        v23 = ((long long)(((char)(((int)v3) ^ 1)) | ((char)(v0 != match_length + v22))));
                        v3 = ((char)(((int)v3) ^ 1)) | ((char)(v0 != match_length + v22));
                        if (((char)v23) == 0)
                        {
                            v0 = v7;
                        }
                        else
                        {
                            v0 = v0;
                            output();
                            v3 = 0;
                        }
                    }
                    else
                    {
                        output();
                        v0 = v22;
                    }
                    v6 = sentinel_length;
                    v19 = v22;
                    if (sentinel_length != 0)
                    {
                        v19 += 1 - match_length;
                    }
                }
            }
            v20 = (long long)quotearg_n_style_colon();
            error(0x0, *(__errno_location()), dcgettext(0x0, &g_416014, 0x5));
        }
    }
    return 0;
}
