extern char crown;
extern struct_1 first_indent;
extern unsigned int g_40802f;
extern struct_1 in_column;
extern unsigned int last_line_length;
extern unsigned int next_char;
extern struct_1 next_prefix_indent;
extern unsigned int other_indent;
extern unsigned int out_column;
extern unsigned long long parabuf;
extern struct_0 prefix;
extern struct_1 prefix_full_length;
extern struct_1 prefix_indent;
extern struct_1 prefix_lead_space;
extern struct_1 prefix_length;
extern char split;
extern struct_0 stdin;
extern unsigned long long stdout[7];
extern char tabs;
extern char tagged;
extern unsigned long long unused_word_type;
extern struct_0 word_limit;
extern struct_0 wptr;

int fmt()
{
    unsigned long v0;  // [bp-0x40]
    unsigned long|unsigned long long|unsigned int v10;  // ebp
    unsigned long|unsigned long long|unsigned int v11;  // esi
    unsigned long long|unsigned long long [7]|unsigned int v12;  // edi
    unsigned long long v13;  // r12
    unsigned long long v14;  // r12
    char *|unsigned long long v15;  // r13
    unsigned long|unsigned long long v17;  // r15
    char *|char|unsigned long long|unsigned long|unsigned int v2;  // rax
    unsigned long long v4;  // rax
    char *v6;  // rax
    unsigned int v8;  // ecx
    char *|unsigned int v9;  // edx

    v14 = v12;
    v0 = v11;
    fadvise();
    tabs = 0;
    other_indent = 0;
    next_char = (int)get_prefix();
    v10 = ((long long)next_char);
    while (true)
    {
        last_line_length = 0;
        while (true)
        {
            if (v10 != -1 && v10 != 10)
            {
                if (prefix_lead_space <= ((int)next_prefix_indent) && prefix_full_length + prefix_indent <= in_column)
                {
                    prefix_indent = next_prefix_indent;
                    first_indent = in_column;
                    wptr = &parabuf;
                    word_limit = &unused_word_type;
                    v11 = get_line();
                    set_other_indent();
                    if (split == 0)
                    {
                        if (crown != 0)
                        {
                            if (((int)(next_prefix_indent + prefix_full_length)) <= in_column)
                            {
                                if (((int)v11) != 10)
                                {
                                    if (((int)v11) == -1)
                                    {
                                    }
                                    else
                                    {
                                        do
                                        {
                                            v11 = get_line();
                                        }
                                        while (((int)in_column) == other_indent && next_prefix_indent + prefix_full_length <= in_column && next_prefix_indent == prefix_indent && v11 != 10 && v11 != -1);
                                    }
                                }
                            }
                        }
                        else
                        {
                            if (tagged != 0)
                            {
                                if (((int)next_prefix_indent) == ((int)prefix_indent))
                                {
                                    if (((int)(next_prefix_indent + prefix_full_length)) <= in_column)
                                    {
                                        if (((int)v11) != 10)
                                        {
                                            if (((int)v11) != -1)
                                            {
                                                if (in_column == first_indent)
                                                {
                                                }
                                                else
                                                {
                                                    do
                                                    {
                                                        v11 = get_line();
                                                    }
                                                    while (((int)in_column) == other_indent && next_prefix_indent + prefix_full_length <= in_column && next_prefix_indent == prefix_indent && v11 != 10 && v11 != -1);
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                            else
                            {
                                if (((int)next_prefix_indent) == ((int)prefix_indent))
                                {
                                    do
                                    {
                                        v8 = ((int)(reg_24<4> + prefix_full_length));
                                        if (v11 == -1 || v11 == 10 || in_column != other_indent)
                                        {
                                            break;
                                        }
                                        v11 = get_line();
                                    }
                                    while (v8 <= in_column && next_prefix_indent == prefix_indent);
                                }
                            }
                        }
                    }
                    v10 = word_limit;
                    if (word_limit > 4243744)
                    {
                        *(v10 + 24) = *(v10 + 24) | 10;
                        next_char = v11;
                        fmt_paragraph();
                        put_paragraph();
                        break;
                    }
                    else
                    {
                        __assert_fail(); /* do not return */
                    }
                }
                if (prefix_lead_space > ((int)next_prefix_indent) || prefix_full_length + prefix_indent > in_column)
                {
                    out_column = 0;
                    if (((int)next_prefix_indent) < in_column)
                    {
                        v17 = 1;
                        /* goto 4208638; */
                    }
                }
            }
            if (v10 == -1 || v10 == 10)
            {
                out_column = 0;
                v17 = ((long long)(((int)v17) & v9));
            }
            if (((int)next_prefix_indent) < in_column)
            {
                if (v10 == -1 || v10 == 10 || prefix_lead_space > ((int)next_prefix_indent) || prefix_full_length + prefix_indent > in_column)
                {
                    put_space();
                    v12 = ((int)in_column);
                    v15 = prefix;
                }
            }
            if (v10 != -1 || ((long long)v17) != 0)
            {
                if (((long long)v17) != 0 || v10 != 10)
                {
                    if (v10 == -1 || v10 == 10 || prefix_lead_space > ((int)next_prefix_indent) || prefix_full_length + prefix_indent > in_column)
                    {
                        put_space();
                        v12 = ((long long)in_column);
                        v17 = 1;
                        v15 = prefix;
                        if (out_column == in_column)
                        {
                            /* goto 4208976; */
                        }
                    }
                }
            }
            if (out_column != in_column && (((int)next_prefix_indent) < in_column || v10 != -1 || ((long long)v17) != 0) && (((int)next_prefix_indent) < in_column || ((long long)v17) != 0 || v10 != 10) && (v10 == -1 || v10 == 10 || prefix_lead_space > ((int)next_prefix_indent) || prefix_full_length + prefix_indent > in_column))
            {
                while (true)
                {
                    v11 = ((long long)*(v15));
                    if (((long long)*(v15)) != 0)
                    {
                        v15 += 1;
                        v2 = *(stdout + 40);
                        if (*(stdout + 40) < *(stdout + 48))
                        {
                            *(stdout + 40) = *(stdout + 40) + 1;
                            *(v2) = v11;
                        }
                        else
                        {
                            __overflow();
                            v12 = ((long long)in_column);
                        }
                        v2 = ((int)(out_column + 1));
                        out_column = out_column + 1;
                        if (v2 == reg_72<4>)
                        {
                            break;
                        }
                    }
                    else
                    {
                        break;
                    }
                }
            }
            if (...)
            {
                if (v10 == -1)
                {
                    if (prefix_length + next_prefix_indent <= in_column)
                    {
                        v2 = *(stdout + 40);
                        if (*(stdout + 40) < *(stdout + 48))
                        {
                            *(stdout + 40) = *(stdout + 40) + 1;
                            *(v2) = 10;
                            /* goto 4208796; */
                        }
                        else
                        {
                            __overflow();
                            /* goto 4208796; */
                        }
                    }
                }
            }
            if (...)
            {
                put_space();
                do
                {
                    v12 = stdout;
                    v6 = *(stdout + 40);
                    if (*(stdout + 40) < *(stdout + 48))
                    {
                        *(stdout + 40) = *(stdout + 40) + 1;
                        *(v6) = v10;
                        v2 = v12[1];
                    }
                    else
                    {
                        __overflow();
                        v2 = v12[1];
                    }
                    if (v12[1] < v12[2] && *(stdout + 40) < *(stdout + 48) || v12[1] < v12[2] && *(stdout + 40) >= *(stdout + 48))
                    {
                        v12[1] = rax<8> + 1;
                        v10 = ((long long)*(rax<8>));
                        v2 = 1;
                    }
                    if (*(stdout + 40) < *(stdout + 48) && v12[1] >= v12[2] || v12[1] >= v12[2] && *(stdout + 40) >= *(stdout + 48))
                    {
                        v10 = __uflow();
                        v2 = ((char)(((int)v10) != -1));
                    }
                }
                while (((long long)v2) != 0 && ((int)rbp<8>) != 10);
            }
            if (...)
            {
                v2 = *(stdout + 40);
                if (*(stdout + 40) < *(stdout + 48))
                {
                    *(stdout + 40) = *(stdout + 40) + 1;
                    *(v2) = 10;
                }
                else
                {
                    __overflow();
                }
                v10 = get_prefix();
            }
            if (...)
            {
                next_char = -1;
                if (((long long)(v12[0] & 32)) != 0)
                {
                    v12 = v14;
                    if (v14 != stdin)
                    {
                        rpl_fclose();
                    }
                    else
                    {
                        clearerr_unlocked();
                    }
                    v13 = 0;
                    v15 = (long long)quotearg_n_style_colon();
                }
                else if (v12 != stdin)
                {
                    v2 = rpl_fclose();
                    v13 = 1;
                    if (v2 == 0)
                    {
                        v4 = v13;
                        return v4;
                    }
                    v10 = ((long long)*(__errno_location()));
                    v13 = v10 % 0x80000000;
                    if (((int)v10) < 0)
                    {
                        v4 = v13;
                        return v4;
                    }
                    else
                    {
                        v15 = (long long)quotearg_n_style_colon();
                        if (((int)v10) != 0)
                        {
                            v9 = "%s";
                            error(0x0, ((unsigned int)v10), v9);
                            v4 = v13;
                            return v4;
                        }
                    }
                }
                else
                {
                    clearerr_unlocked();
                    v13 = 1;
                    v4 = v13;
                    return v4;
                }
                if (((long long)(v12[0] & 32)) != 0 || ((int)v10) == 0 && v12 != stdin && v2 != 0 && ((int)v10) >= 0)
                {
                    v10 = 0;
                    v9 = dcgettext(0x0, &g_40802f, 0x5);
                    error(0x0, ((unsigned int)v10), v9);
                    v4 = v13;
                    return v4;
                }
            }
        }
    }
}
