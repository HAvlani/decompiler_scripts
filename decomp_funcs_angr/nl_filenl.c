typedef struct struct_2 {
    unsigned int field_0;
} struct_2;

extern struct_0 blank_join;
extern unsigned long long blank_lines.7404;
extern struct_0 body_del;
extern struct_0 body_del_len;
extern unsigned long long body_regex;
extern struct_0 body_type;
extern struct_0 current_regex;
extern char *current_type;
extern struct_0 footer_del;
extern struct_0 footer_del_len;
extern unsigned long long footer_regex;
extern struct_0 footer_type;
extern unsigned int g_4161f8;
extern struct_0 g_41d168;
extern struct_1 *g_41d170;
extern char have_read_stdin;
extern struct_0 header_del;
extern struct_0 header_del_len;
extern unsigned long long header_regex;
extern struct_0 header_type;
extern struct_0 line_no;
extern char line_no_overflow;
extern struct_0 print_no_line_fmt;
extern char reset_numbers;
extern struct_1 *section_del;
extern struct_0 starting_line_number;
extern struct_0 stdin;
extern unsigned long long stdout[7];

int nl_file()
{
    struct_2 *v0;  // [bp-0x40]
    unsigned long v10;  // r14
    unsigned long long v2;  // rax
    char *v4;  // rax
    unsigned long|unsigned int v6;  // rbp
    char * v7;  // rbp
    char v8[2];  // rdi
    unsigned long|unsigned int v9;  // r13

    v6 = ((long long)(((int)v8[0]) - 45));
    if (v8[0] == 45)
    {
        v6 = ((int)v8[1]);
    }
    v0 = __errno_location();
    if (v6 == 0)
    {
        have_read_stdin = 1;
        v7 = stdin;
    }
    else
    {
        v7 = fopen(v8, "r");
        if (v7 == 0)
        {
            quotearg_n_style_colon();
            error(0x0, v0->field_0, "%s");
            v2 = 0;
            return v2;
        }
    }
    if (v6 == 0 || v7 != 0)
    {
        fadvise();
        while (true)
        {
            v2 = readlinebuffer();
            if (v2 != 0)
            {
                v10 = g_41d168;
                if (*(g_41d170) == *(section_del) && g_41d168 - 1 > 1 && footer_del_len > 1)
                {
                    if (g_41d168 - 1 == header_del_len)
                    {
                        v2 = memcmp(g_41d170, header_del, g_41d168 - 1);
                        if (v2 == 0)
                        {
                            current_type = header_type;
                            current_regex = &header_regex;
                            if (reset_numbers != 0)
                            {
                                /* goto 4207421; */
                            }
                        }
                    }
                    if (g_41d168 - 1 != header_del_len || v2 != 0)
                    {
                        if (g_41d168 - 1 == body_del_len)
                        {
                            v2 = memcmp(g_41d170, body_del, g_41d168 - 1);
                            if (v2 == 0)
                            {
                                current_type = body_type;
                                current_regex = &body_regex;
                                if (reset_numbers == 0)
                                {
                                    /* goto 4207442; */
                                }
                            }
                        }
                        if (g_41d168 - 1 == footer_del_len && (v2 != 0 || g_41d168 - 1 != body_del_len))
                        {
                            v2 = memcmp(g_41d170, footer_del, g_41d168 - 1);
                            if (v2 != 0)
                            {
                            }
                            else
                            {
                                current_type = footer_type;
                                current_regex = &footer_regex;
                            }
                        }
                    }
                }
                if (...)
                {
                    if (*(current_type) != 112)
                    {
                        if (*(current_type) == 97 && ((char)(((long long)*(current_type)) <= 112)) && blank_join > 1)
                        {
                            if (g_41d168 <= 1)
                            {
                                v2 = blank_lines.7404 + 1;
                                blank_lines.7404 = blank_lines.7404 + 1;
                            }
                            if (blank_join == v2 || g_41d168 > 1)
                            {
                                print_lineno();
                                v10 = g_41d168;
                                blank_lines.7404 = 0;
                                /* goto 4207162; */
                            }
                        }
                        if ((((char)(((long long)*(current_type)) <= 112)) || *(current_type) == 116) && (*(current_type) == 97 || !(((char)(((long long)*(current_type)) <= 112)))) && (((char)(((long long)*(current_type)) <= 112)) || g_41d168 > 1) && (blank_join <= 1 || !(((char)(((long long)*(current_type)) <= 112)))))
                        {
                            print_lineno();
                            v10 = g_41d168;
                            /* goto 4207162; */
                        }
                    }
                    else
                    {
                        v2 = rpl_re_search();
                        if (v2 == 18446744069414584318)
                        {
                            error(0x1, v0->field_0, dcgettext(0x0, &g_4161f8, 0x5));
                        }
                        else if (v2 != 18446744069414584319)
                        {
                            print_lineno();
                            v10 = g_41d168;
                            /* goto 4207162; */
                        }
                    }
                    if (...)
                    {
                        fputs_unlocked(print_no_line_fmt, stdout);
                        v10 = g_41d168;
                    }
                    if (...)
                    {
                        fwrite_unlocked(g_41d170, 0x1, r14<8>, stdout);
                    }
                }
                if (...)
                {
                    line_no_overflow = 0;
                    line_no = starting_line_number;
                }
                if (...)
                {
                    v4 = *(stdout + 40);
                    if (*(stdout + 40) < *(stdout + 48))
                    {
                        *(stdout + 40) = *(stdout + 40) + 1;
                        *(v4) = 10;
                    }
                    else
                    {
                        __overflow();
                    }
                }
            }
            else
            {
                v9 = ((int)(((long long)(*(v7) & 32)) == 0? 0 : *(*(&stack_base-64))));
                if (v8[1] == 0 && v8[0] == 45)
                {
                    clearerr_unlocked();
                }
                if (v8[1] != 0 || v8[0] != 45)
                {
                    v2 = rpl_fclose();
                    if (v2 != 0)
                    {
                        if (v9 == 0)
                        {
                            v9 = ((long long)v0->field_0);
                        }
                        else
                        {
                            quotearg_n_style_colon();
                            error(0x0, v9, "%s");
                            return 0;
                        }
                    }
                }
                if (v9 == 0 || v2 == 0 || v8[1] == 0 && v8[0] == 45)
                {
                    v2 = 1;
                    if (v9 == 0)
                    {
                        return v2;
                    }
                    quotearg_n_style_colon();
                }
            }
        }
        error(0x0, v9, "%s");
        return 0;
    }
}
