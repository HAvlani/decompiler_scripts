extern char align_variable_outer_quotes;
extern char cwd_some_quoted;
extern char dired;
extern struct_0 dired_pos;
extern char g_418a85;
extern void g_418a99;
extern unsigned long long stdout[7];

int quote_name()
{
    unsigned long long v0;  // [bp-0x2078]
    unsigned long v1;  // [bp-0x2070]
    unsigned long long v10;  // rax
    char *v13;  // rax
    char *v16;  // rax
    unsigned long v18;  // rcx
    unsigned long long v19;  // rdx
    unsigned long v2;  // [bp-0x2068]
    unsigned long|unsigned long long v21;  // rbp
    unsigned long v22;  // rdi
    char v23;  // r8b
    unsigned long v24;  // r9
    unsigned long long v25;  // r13
    unsigned long v3;  // [bp-0x2060]
    char v4;  // [bp-0x2051]
    char *v5;  // [bp-0x2050]
    char v6;  // [bp-0x2048]
    unsigned long v7;  // [bp-0x2030]
    unsigned long v8;  // [bp-0x1030]
    unsigned long v9;  // [bp+0x8]

    v8 = v8;
    v7 = v7;
    v25 = v24;
    v1 = &v6;
    v5 = &v6;
    if (v4 != 0)
    {
        if (((long long)v23) != 0)
        {
            dired_outbyte();
        }
    }
    if (v18 != 0)
    {
        if ((long long)is_colored() != 0)
        {
            restore_default_color();
        }
        put_indicator.isra.0();
        put_indicator.isra.0();
        put_indicator.isra.0();
    }
    if (v9 != 0)
    {
        v21 = ((long long)align_variable_outer_quotes);
        if (((long long)align_variable_outer_quotes) != 0)
        {
            v21 = ((long long)cwd_some_quoted);
            if (((long long)cwd_some_quoted) != 0)
            {
                if (v4 == 0)
                {
                    v24 -= 2;
                    v19 = ((long long)*(v5));
                    v16 = *(stdout + 40);
                    if (*(stdout + 40) < *(stdout + 48))
                    {
                        v0 = 1;
                        *(stdout + 40) = v16 + 1;
                        *(v16) = v19;
                        /* goto 4229040; */
                    }
                    else
                    {
                        v2 = v24;
                        __overflow();
                        v0 = 1;
                        v24 = v2;
                        /* goto 4229040; */
                    }
                }
                else
                {
                    v0 = 0;
                    v21 = 0;
                    /* goto 4229040; */
                }
            }
        }
        if (((long long)cwd_some_quoted) == 0 || ((long long)align_variable_outer_quotes) == 0)
        {
            v0 = 0;
            v24 = (long long)quote_name_buf.constprop.0();
        }
        v3 = v24;
        v2 = (long long)file_escape();
        __printf_chk(0x1, &g_418a85, file_escape(), v18, ((int)v2));
        rpl_free();
        rpl_free();
    }
    else
    {
        v0 = 0;
        v21 = 0;
    }
    if (v24 == 0 && v9 == 0 || v25 == 0 && v9 != 0)
    {
        fwrite_unlocked(v0 + &v6, 0x1, v3, stdout);
        dired_pos = dired_pos + v3;
    }
    if (v9 == 0 && v24 != 0 || v25 != 0 && v9 != 0)
    {
        if (dired != 0)
        {
            v2 = v3;
            push_current_dired_pos.part.0();
        }
        fwrite_unlocked(v0 + &v6, 0x1, v24, stdout);
        dired_pos = dired_pos + v24;
        if (dired != 0)
        {
            push_current_dired_pos.part.0();
        }
    }
    if (v9 != 0)
    {
        fwrite_unlocked(&g_418a99, 0x1, 0x6, stdout);
        if (((long long)v21) != 0)
        {
            v19 = ((long long)*(v5 + v24 + 1));
            v13 = *(stdout + 40);
            if (*(stdout + 40) < *(stdout + 48))
            {
                *(stdout + 40) = *(stdout + 40) + 1;
                *(v13) = v19;
            }
            else
            {
                __overflow();
            }
        }
    }
    if (!(v5 != v22))
    {
        v10 = ((long long)v4) + v24;
        return v10;
    }
    else if (&v6 != v1)
    {
        rpl_free();
        v10 = ((long long)v4) + v24;
        return v10;
    }
    else
    {
        v10 = ((long long)v4) + v24;
        return v10;
    }
}
