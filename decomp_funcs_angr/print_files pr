typedef struct struct_4 {
    unsigned long long field_0;
    unsigned long long field_8;
    unsigned int field_10;
    char padding_14[24];
    unsigned int field_2c;
    char padding_30[9];
    char field_39;
} struct_4;

typedef struct struct_8 {
    char padding_0[8];
    unsigned long long field_8;
} struct_8;

typedef struct struct_5 {
    char padding_0[16];
    unsigned int field_10;
} struct_5;

typedef struct struct_3 {
    char padding_0[24];
    unsigned long long field_18;
    unsigned long long field_20;
    char padding_28[12];
    unsigned int field_34;
    char field_38;
} struct_3;

typedef struct struct_2 {
    char padding_0[16];
    unsigned int field_10;
    char padding_14[37];
    char field_39;
} struct_2;

typedef struct struct_7 {
    char padding_0[44];
    unsigned int field_2c;
} struct_7;

typedef struct struct_6 {
    char padding_0[40];
    unsigned int field_28;
} struct_6;

extern char FF_only;
extern char align_empty_cols;
extern char balance_columns;
extern struct_0 buff;
extern struct_0 buff_allocated;
extern unsigned int buff_current;
extern unsigned int chars_per_column;
extern struct_1 chars_per_line;
extern struct_1 chars_per_margin;
extern struct_1 chars_per_number;
extern struct_0 clump_buff;
extern unsigned int col_sep_length;
extern char *col_sep_string;
extern struct_0 column_vector;
extern struct_1 columns;
extern char double_space;
extern char empty_line;
extern struct_1 *end_vector;
extern char extremities;
extern struct_1 files_ready_to_read;
extern struct_0 first_page_number;
extern unsigned int g_40d075;
extern unsigned int g_40d086;
extern unsigned int g_40d2b0;
extern char have_read_stdin;
extern unsigned int input_position;
extern char join_lines;
extern char keep_FF;
extern char last_line;
extern struct_0 last_page_number;
extern struct_1 line_count;
extern struct_1 line_number;
extern struct_1 *line_vector;
extern struct_1 lines_per_body;
extern struct_1 lines_per_page;
extern struct_0 number_buff;
extern char number_separator;
extern struct_1 number_width;
extern char numbered_lines;
extern unsigned int output_position;
extern char pad_vertically;
extern struct_1 padding_not_printed;
extern unsigned long long page_number;
extern char parallel_files;
extern char print_a_FF;
extern char print_a_header;
extern <missing-type> print_char;
extern <missing-type> print_stored;
extern <missing-type> read_line;
extern unsigned int separators_not_printed;
extern unsigned int spaces_not_printed;
extern struct_1 start_line_num;
extern struct_0 stdin;
extern unsigned long long stdout[7];
extern <missing-type> store_char;
extern char storing_columns;
extern char tabify_output;
extern unsigned int total_files;
extern char truncate_lines;
extern char untabify_input;
extern char use_col_separator;
extern char use_form_feed;

int print_files()
{
    BOT tmp_31;  // tmp #31
    BOT tmp_9;  // tmp #9
    BOT tmp_17;  // tmp #17
    BOT tmp_38;  // tmp #38
    unsigned int|unsigned long long v0;  // [bp-0x40]
    struct_3 * v11;  // rax
    struct_7 *|unsigned long long v14;  // rax
    unsigned int|unsigned long|unsigned long long v15;  // rcx
    unsigned int|char|struct_5 *|unsigned long long v16;  // rdx
    unsigned long long v17;  // rdx
    unsigned int [12]|unsigned int [13]|unsigned int [14]|unsigned long long|struct_5 * v18;  // rbx
    unsigned int|unsigned long long v2;  // eax
    unsigned int|struct_4 *|unsigned long long v20;  // rbp
    unsigned long long|unsigned long|unsigned int|struct_6 *|char * v21;  // rsi
    unsigned int|unsigned int [14]|unsigned long long v22;  // rdi
    unsigned long long v23;  // r8
    unsigned long long v24;  // r9
    unsigned long long v25;  // r10
    unsigned long long v26;  // r11
    unsigned int|unsigned long|unsigned long long v27;  // r12
    unsigned int|unsigned long long v28;  // r13
    unsigned int|unsigned long|unsigned long long v29;  // r14
    struct_2 *|unsigned long long|unsigned int|char *|struct_8 * v3;  // rax
    unsigned int|unsigned long|unsigned long long v30;  // r15
    unsigned int v31;  // cc_dep1
    struct_3 *|unsigned long long|unsigned long|unsigned int|struct_7 * v4;  // rax
    unsigned long long v8;  // rax

    v27 = v22;
    v18 = v21;
    lines_per_body = ((int)(((long long)lines_per_body) - 10));
    if (((int)(((long long)lines_per_body) - 10)) > 0)
    {
    }
    else
    {
        extremities = 0;
        keep_FF = 1;
    }
    if (extremities == 0 || ((int)(((long long)lines_per_body) - 10)) <= 0)
    {
        lines_per_body = ((int)lines_per_page);
    }
    if (double_space != 0)
    {
        lines_per_body = ((int)(((long long)(((int)(((long long)lines_per_body) >> 31)) + lines_per_body)) >> 1));
    }
    if (((int)v22) == 0)
    {
        parallel_files = 0;
        v15 = ((long long)columns);
        v23 = 0;
    }
    else
    {
        v23 = ((long long)parallel_files);
        if (((long long)parallel_files) != 0)
        {
            columns = ((int)v27);
            v15 = v27;
        }
        else
        {
            v15 = ((long long)columns);
        }
    }
    if (storing_columns != 0)
    {
        balance_columns = 1;
    }
    v17 = ((long long)join_lines);
    if (((int)v15) > 1)
    {
        if (use_col_separator == 0)
        {
            col_sep_length = 1;
            use_col_separator = 1;
            truncate_lines = 1;
            col_sep_string = (((long long)v17) != 0? "\t" : " ");
            v21 = (((long long)v17) != 0? "\t" : " ");
        }
        else
        {
            v2 = ((long long)col_sep_length);
            if (!(((long long)join_lines) == 0))
            {
                truncate_lines = 1;
                if (((int)col_sep_length) == 1)
                {
                    v21 = col_sep_string;
                }
            }
            else if (((int)col_sep_length) != 1)
            {
                truncate_lines = 1;
                /* goto 4214092; */
            }
            else
            {
                v21 = col_sep_string;
                if (*(col_sep_string) == 9)
                {
                    col_sep_string = " ";
                    v21 = " ";
                }
                truncate_lines = 1;
                /* goto 4214082; */
            }
        }
        if (((int)col_sep_length) == 1 || use_col_separator == 0)
        {
            v2 = 1;
        }
        if (*(v21) != 9 || ((int)col_sep_length) != 1 && use_col_separator != 0)
        {
            untabify_input = 1;
        }
        tabify_output = 1;
    }
    else
    {
        storing_columns = 0;
        v2 = ((long long)col_sep_length);
    }
    if (((long long)join_lines) != 0)
    {
        truncate_lines = 0;
    }
    if (((long long)numbered_lines) != 0)
    {
        line_count = start_line_num;
        v17 = ((long long)chars_per_number);
        v21 = ((int)(((long long)chars_per_number) + 1));
        if (number_separator == 9)
        {
            v21 = v17 + ((long long)(((int)(v17 >> 31 >> 29)) - (((int)(v17 + (v17 >> 31 >> 29))) & 7))) + 8;
        }
        number_width = v21;
    }
    if (((long long)numbered_lines) == 0 || ((long long)v23) == 0)
    {
        v21 = 0;
    }
    v16 = ((long long)(((int)v2) * (((int)v15) - 1)));
    if (((char)[D] amd64g_calculate_condition(0x0<64>, 0x33<64>, Conv(64->64, rbx<8>), Conv(32->64, (Load(addr=0x4141e8<64>, size=4, endness=Iend_LE) + 0x1<32>)), cc_ndep<8>)))
    {
        v16 = 2147483647;
    }
    v2 = ((int)(chars_per_line - v21 - ((int)v16)));
    if (((int)((((long long)(chars_per_line - v21)) ^ v16) & (((long long)(chars_per_line - v21)) ^ ((long long)(chars_per_line - v21)) - v16))) >= 0)
    {
        v2 = ((int)((v2 >> 31 CONCAT ((int)v2)) % ((int)v15)));
        chars_per_column = v2;
        if (((int)chars_per_column) > 0)
        {
            if (((long long)numbered_lines) != 0)
            {
                rpl_free();
                number_buff = (long long)xmalloc();
            }
            rpl_free();
            total_files = 0;
            clump_buff = (long long)xmalloc();
            rpl_free();
            v3 = xnmalloc();
            column_vector = v3;
            v20 = v3;
            if (parallel_files != 0)
            {
                if (((int)v22) != 0)
                {
                    v27 = v18 + (v22 - 1) * 8 + 8;
                    while (true)
                    {
                        v3 = open_file();
                        if (((long long)v3) != 0)
                        {
                            v18 += 8;
                            v20 += 64;
                            if (v18 == v27)
                            {
                                break;
                            }
                        }
                        else
                        {
                            v18 += 8;
                            columns = columns - 1;
                            if (v18 == v27)
                            {
                                break;
                            }
                        }
                    }
                }
                if (columns != 0)
                {
                    init_header();
                }
                else
                {
                    return v3;
                }
            }
            else
            {
                if (((int)v22) > 0)
                {
                    v3 = open_file();
                    if (((long long)v3) == 0)
                    {
                        return v3;
                    }
                    fileno(v20->field_0);
                    init_header();
                    v20->field_2c = 0;
                }
                else
                {
                    v20->field_39 = 0;
                    v20->field_8 = dcgettext(0x0, &g_40d075, 0x5);
                    v20->field_10 = 0;
                    v20->field_0 = stdin;
                    total_files = total_files + 1;
                    have_read_stdin = 1;
                    init_header();
                    v20->field_2c = 0;
                }
                if (((int)v22) <= 0 || ((long long)v3) != 0)
                {
                    v16 = v20->field_8;
                    v3 = v20 + 64;
                    v15 = v20->field_0;
                    if (columns != 1)
                    {
                        v20 += (((long long)(columns - 2)) + 2) * 64;
                        do
                        {
                            v3->field_8 = v16;
                            v3 += 64;
                            *(v3 + 0x40) = v15;
                            *(v3 + 0x30) = 0;
                            *(v3 + 0x7) = 0;
                            *(v3 + 0x14) = 0;
                        }
                        while (v3 != v20);
                    }
                }
            }
            if (parallel_files == 0 && ((int)v22) <= 0 || parallel_files == 0 && ((long long)v3) != 0 || parallel_files != 0 && columns != 0)
            {
                files_ready_to_read = total_files;
                if (storing_columns != 0)
                {
                    v18 = ((long long)(columns * lines_per_body));
                    if (!(!(((char)[D] amd64g_calculate_condition(0x0<64>, 0x33<64>, Conv(64->64, rbx<8>), Conv(32->64, (Load(addr=0x4141e8<64>, size=4, endness=Iend_LE) + 0x1<32>)), cc_ndep<8>)))))
                    {
                        integer_overflow(); /* do not return */
                    }
                    else if (!(((int)(!(v18 ^ 1) & (v18 ^ v18 + 1))) >= 0))
                    {
                        integer_overflow(); /* do not return */
                    }
                    else if (((int)(!(((long long)chars_per_column) ^ 1) & (((long long)chars_per_column) ^ ((long long)chars_per_column) + 1))) >= 0)
                    {
                        rpl_free();
                        line_vector = (long long)xnmalloc();
                        rpl_free();
                        end_vector = (long long)xnmalloc();
                        rpl_free();
                        buff = (long long)xnmalloc();
                        buff_allocated = (((long long)use_col_separator) + 1) * ((long long)(columns * lines_per_body * (chars_per_column + 1)));
                    }
                    else
                    {
                        integer_overflow(); /* do not return */
                    }
                }
                if (False)
                {
                    integer_overflow(); /* do not return */
                }
                if (storing_columns == 0 || !(((char)[D] amd64g_calculate_condition(0x0<64>, 0x33<64>, Conv(64->64, rbx<8>), Conv(32->64, (Load(addr=0x4141e8<64>, size=4, endness=Iend_LE) + 0x1<32>)), cc_ndep<8>))) && ((int)(!(v18 ^ 1) & (v18 ^ v18 + 1))) >= 0 && ((int)(!(((long long)chars_per_column) ^ 1) & (((long long)chars_per_column) ^ ((long long)chars_per_column) + 1))) >= 0)
                {
                    if (first_page_number <= 1)
                    {
                        page_number = 1;
                    }
                    else
                    {
                        v27 = 1;
                        while (true)
                        {
                            v18 = column_vector;
                            v29 = 1;
                            if (lines_per_body > 1)
                            {
                                do
                                {
                                    if (columns > 0)
                                    {
                                        v20 = 1;
                                        while (true)
                                        {
                                            if (v18->field_10 != 0)
                                            {
                                                ((unsigned int)v20) = ((long long)((unsigned int)v20)) + 1;
                                                v18 += 64;
                                                if (((int)((unsigned int)v20)) > columns)
                                                {
                                                    break;
                                                }
                                            }
                                            else
                                            {
                                                ((unsigned int)v20) = ((long long)((unsigned int)v20)) + 1;
                                                v18 += 64;
                                                skip_read();
                                                if (((int)((unsigned int)v20)) > columns)
                                                {
                                                    break;
                                                }
                                            }
                                        }
                                        v18 = column_vector;
                                    }
                                    v29 = ((long long)((unsigned int)v29)) + 1;
                                }
                                while (((int)v29) < lines_per_body);
                            }
                            last_line = 1;
                            if (columns > 0)
                            {
                                v20 = 1;
                                while (true)
                                {
                                    if (*(rbx<8> + 16) != 0)
                                    {
                                        v20 = ((int)v20) + 1;
                                        v18 = rbx<8> + 64;
                                        if (v20 > columns)
                                        {
                                            break;
                                        }
                                    }
                                    else
                                    {
                                        v20 = ((long long)v20) + 1;
                                        v18 = rbx<8> + 64;
                                        skip_read();
                                        if (((int)v20) > columns)
                                        {
                                            break;
                                        }
                                    }
                                }
                                if (storing_columns != 0)
                                {
                                    v16 = column_vector;
                                    if (columns > 0)
                                    {
                                        do
                                        {
                                            if (v16->field_10 != 3)
                                            {
                                                v16->field_10 = 2;
                                            }
                                            v16 += 64;
                                        }
                                        while (v16 != (((long long)(columns - 1)) + 1 << 6) + column_vector);
                                    }
                                }
                            }
                            reset_status();
                            last_line = 0;
                            if (files_ready_to_read > 0)
                            {
                                v27 += 1;
                                if (first_page_number == v27)
                                {
                                    break;
                                }
                            }
                            else
                            {
                                error(0x0, 0x0, dcgettext(0x0, &g_40d2b0, 0x5));
                                if (files_ready_to_read > 0)
                                {
                                    return v3;
                                    break;
                                }
                            }
                        }
                        page_number = first_page_number;
                    }
                    v23 = 0;
                    v26 = ((long long)numbered_lines);
                    if (((long long)truncate_lines) != 0)
                    {
                        v23 = ((long long)(chars_per_column + chars_per_margin));
                        if (parallel_files != 0)
                        {
                            if (((long long)numbered_lines) != 0)
                            {
                                v23 = ((long long)(((int)(chars_per_column + chars_per_margin)) + number_width));
                            }
                        }
                    }
                    v27 = ((long long)col_sep_length);
                    v24 = column_vector;
                    v25 = ((long long)columns);
                    v21 = ((long long)(chars_per_margin + col_sep_length));
                    v18 = column_vector;
                    if (columns > 1)
                    {
                        v0 = v24;
                        v11 = v24;
                        v16 = 1;
                        while (true)
                        {
                            if (((long long)storing_columns) != 0)
                            {
                                v11->field_18 = &print_stored;
                                v11->field_20 = &store_char;
                            }
                            else
                            {
                                v11->field_20 = &print_char;
                                v11->field_18 = &read_line;
                            }
                            v15 = 0;
                            if (((long long)numbered_lines) != 0)
                            {
                                v15 = ((long long)(0 | ((int)parallel_files) ^ 1));
                            }
                            v11->field_38 = v15;
                            v11->field_34 = v21;
                            if (((long long)truncate_lines) != 0)
                            {
                                v21 = v27 + r8<8>;
                                v16 = ((long long)v16) + 1;
                                v11 += 64;
                                v23 = v27 + r8<8> + ((long long)chars_per_column);
                                if (((int)v16) == ((int)columns))
                                {
                                    break;
                                }
                            }
                            else
                            {
                                v16 = ((long long)v16) + 1;
                                v23 = 0;
                                v21 = 0;
                                v11 += 64;
                                if (((int)v16) == ((int)columns))
                                {
                                    break;
                                }
                            }
                        }
                        v24 = v0;
                        v16 = ((int)v25);
                        v4 = (v25 - 2 + 1) * 64 + v0;
                    }
                    else
                    {
                        v4 = column_vector;
                        v16 = 1;
                    }
                    if (((long long)storing_columns) != 0)
                    {
                        if (balance_columns != 0)
                        {
                            v4->field_20 = &store_char;
                            v4->field_18 = &print_stored;
                        }
                    }
                    if (((long long)storing_columns) == 0 || balance_columns == 0)
                    {
                        v4->field_20 = &print_char;
                        v4->field_18 = &read_line;
                    }
                    if (((long long)numbered_lines) != 0)
                    {
                        v16 = ((char)(v16 == 1));
                        v26 = ((long long)(((int)parallel_files) ^ 1 | v16));
                    }
                    v4->field_38 = v26;
                    v20 = 0;
                    v4->field_34 = v21;
                    line_number = line_count;
                    while (true)
                    {
                        if (((int)v25) != 0)
                        {
                            v15 = ((int)lines_per_body);
                            v4 = (v25 - 1 + 1) * 64 + r9<8>;
                            do
                            {
                                tmp_31 = v18[4] == 0;
                                v18 += 64;
                                v18[4] = (tmp_31? ((int)v15) : ((int)rbp<8>));
                            }
                            while (v4 != v18);
                        }
                        while (true)
                        {
                            v3 = cols_ready_to_print();
                            if (v3 != 0)
                            {
                                return v3;
                                if (extremities != 0)
                                {
                                    print_a_header = 1;
                                }
                                pad_vertically = 0;
                                v27 = ((long long)lines_per_body);
                                if (double_space != 0)
                                {
                                    v27 = ((long long)(((int)lines_per_body) * 2));
                                }
                                v28 = 0;
                                if (((int)r12<8>) > 0)
                                {
                                    while (true)
                                    {
                                        v3 = cols_ready_to_print();
                                        output_position = 0;
                                        spaces_not_printed = 0;
                                        v18 = column_vector;
                                        separators_not_printed = 0;
                                        pad_vertically = 0;
                                        align_empty_cols = 0;
                                        empty_line = 1;
                                        if (columns > 0)
                                        {
                                            v29 = 1;
                                            while (true)
                                            {
                                                v21 = ((long long)v18[12]);
                                                input_position = 0;
                                                if (v18[4] == 1 || ((int)v21) > 0)
                                                {
                                                    tmp_9 = ((long long)v18[13]);
                                                    FF_only = 0;
                                                    v22 = v18;
                                                    padding_not_printed = ((int)tmp_9);
                                                    v3 = v18[6]();
                                                    if (((long long)v3) == 0)
                                                    {
                                                        read_rest_of_line();
                                                    }
                                                    v24 = ((long long)pad_vertically);
                                                    v3 = ((int)(v18[12] - 1));
                                                    v28 = ((long long)(((int)v28) | ((int)pad_vertically)));
                                                    v18[12] = v18[12] - 1;
                                                    if (v3 <= 0)
                                                    {
                                                        v3 = cols_ready_to_print();
                                                    }
                                                    if (parallel_files != 0 && (v3 > 0 || v3 != 0))
                                                    {
                                                        v3 = ((int)v18[4]);
                                                        if (empty_line == 0 && v18[4] != 0 && v3 != 3)
                                                        {
                                                            if (v3 == 2 && FF_only != 0)
                                                            {
                                                                /* goto 4216336; */
                                                            }
                                                        }
                                                    }
                                                }
                                                if (empty_line != 0 && parallel_files != 0 && (((int)v21) <= 0 || v18[4] != 0) && (v18[4] != 0 || v18[4] != 1) && (((int)v21) <= 0 || v3 > 0 || v3 != 0) && (v3 > 0 || v3 != 0 || v18[4] != 1))
                                                {
                                                    align_empty_cols = 1;
                                                }
                                                if (...)
                                                {
                                                    align_column();
                                                }
                                                if (...)
                                                {
                                                    if (use_col_separator != 0)
                                                    {
                                                        separators_not_printed = separators_not_printed + 1;
                                                    }
                                                    v29 = ((long long)v29) + 1;
                                                    v18 += 64;
                                                }
                                                v3 = *(stdout + 40);
                                                if (*(stdout + 40) < *(stdout + 48))
                                                {
                                                    *(stdout + 40) = *(stdout + 40) + 1;
                                                    *(v3) = 10;
                                                }
                                                else
                                                {
                                                    __overflow();
                                                }
                                                v27 = ((int)(((int)v27) - 1));
                                                break;
                                            }
                                            if (...)
                                            {
                                                v3 = cols_ready_to_print();
                                            }
                                        }
                                        if (columns <= 0 || v3 != 0)
                                        {
                                            v3 = cols_ready_to_print();
                                        }
                                        if (((long long)r13b<1>) != 0 && double_space != 0 && (v3 != 0 || extremities != 0))
                                        {
                                            v3 = *(stdout + 40);
                                            if (*(stdout + 40) < *(stdout + 48))
                                            {
                                                *(stdout + 40) = *(stdout + 40) + 1;
                                                *(v3) = 10;
                                            }
                                            else
                                            {
                                                __overflow();
                                            }
                                            v27 = ((int)((unsigned int)v27)) - 1;
                                        }
                                        v25 = ((long long)columns);
                                        v3 = column_vector;
                                    }
                                    if (True)
                                    {
                                        pad_vertically = v28;
                                    }
                                    else if (((unsigned int)v27) == 0 && (v3 == 0 || reg_112<4> <= 0) && (reg_112<4> <= 0 || extremities == 0) && (reg_112<4> <= 0 || v3 != 0))
                                    {
                                        v16 = (r10<8> - 1 + 1) * 64 + rax<8>;
                                    }
                                }
                                else if (((char)[D] amd64g_calculate_condition(0x0<64>, 0x33<64>, Conv(64->64, rbx<8>), Conv(32->64, (Load(addr=0x4141e8<64>, size=4, endness=Iend_LE) + 0x1<32>)), cc_ndep<8>)))
                                {
                                    v3 = r9<8>;
                                }
                                if (((int)r12<8>) > 0 || ((char)[D] amd64g_calculate_condition(0x0<64>, 0x33<64>, Conv(64->64, rbx<8>), Conv(32->64, (Load(addr=0x4141e8<64>, size=4, endness=Iend_LE) + 0x1<32>)), cc_ndep<8>)) && ((int)v25) > 0)
                                {
                                    if (((int)r12<8>) <= 0 || ((long long)v28) != 0)
                                    {
                                        v16 = (r10<8> - 1 + 1) * 64 + rax<8>;
                                        do
                                        {
                                            if (*(rax<8> + 16) == 0)
                                            {
                                                *(rax<8> + 57) = 1;
                                            }
                                            v3 = rax<8> + 64;
                                        }
                                        while (v3 != v16);
                                        pad_vertically = v28;
                                    }
                                    if (((long long)v28) != 0 && extremities != 0)
                                    {
                                        if (use_form_feed == 0)
                                        {
                                            v27 = ((int)(((int)r12<8>) + 5));
                                            if (((char)(((int)r12<8>) + 5 == 0)))
                                            {
                                                /* goto 4215721; */
                                            }
                                            else
                                            {
                                                do
                                                {
                                                    v3 = *(stdout + 40);
                                                    if (*(stdout + 40) < *(stdout + 48))
                                                    {
                                                        *(stdout + 40) = *(stdout + 40) + 1;
                                                        *(v3) = 10;
                                                    }
                                                    else
                                                    {
                                                        __overflow();
                                                    }
                                                    v31 = v27;
                                                    v27 = ((long long)v27) - 1;
                                                }
                                                while (v31 != 1);
                                            }
                                        }
                                        else
                                        {
                                            v3 = *(stdout + 40);
                                            if (*(stdout + 40) < *(stdout + 48))
                                            {
                                                *(stdout + 40) = *(stdout + 40) + 1;
                                                *(v3) = 12;
                                                /* goto 4215721; */
                                            }
                                            else
                                            {
                                                __overflow();
                                                /* goto 4215721; */
                                            }
                                        }
                                    }
                                }
                                if (print_a_FF != 0 && keep_FF != 0 && (extremities == 0 || ((int)r12<8>) <= 0) && (((int)r12<8>) <= 0 || ((long long)v28) != 0) && (((long long)v28) == 0 || extremities == 0 || ((int)v25) <= 0 || !(((char)[D] amd64g_calculate_condition(0x0<64>, 0x33<64>, Conv(64->64, rbx<8>), Conv(32->64, (Load(addr=0x4141e8<64>, size=4, endness=Iend_LE) + 0x1<32>)), cc_ndep<8>)))))
                                {
                                    v3 = *(stdout + 40);
                                    if (*(stdout + 40) < *(stdout + 48))
                                    {
                                        *(stdout + 40) = *(stdout + 40) + 1;
                                        *(v3) = 12;
                                    }
                                    else
                                    {
                                        __overflow();
                                    }
                                    print_a_FF = 0;
                                }
                                v3 = page_number + 1;
                                page_number = page_number + 1;
                                if (v3 > last_page_number)
                                {
                                    return v3;
                                }
                                reset_status();
                                v24 = column_vector;
                                v25 = ((long long)columns);
                                v18 = column_vector;
                                v23 = ((long long)balance_columns);
                                buff_current = 0;
                                v8 = ((long long)(r10<8> - ((long long)((v23 & 255) < 1))));
                                v0 = ((int)(r10<8> - ((long long)((v23 & 255) < 1))));
                                if (((int)(r10<8> - ((long long)((v23 & 255) < 1)))) > 0)
                                {
                                    tmp_17 = ((long long)v8) - 1;
                                    v14 = r9<8>;
                                    v16 = (tmp_17 + 1) * 64 + r9<8>;
                                    do
                                    {
                                        v14->field_2c = 0;
                                        v14 += 64;
                                    }
                                    while (v16 != v14);
                                    v28 = 0;
                                    v29 = 1;
                                    v30 = 0;
                                    while (files_ready_to_read != 0)
                                    {
                                        v27 = ((long long)lines_per_body);
                                        *(rbx<8> + 40) = ((int)v30);
                                        if (lines_per_body == 0)
                                        {
                                        }
                                        else
                                        {
                                            do
                                            {
                                                if (v18[4] == 0)
                                                {
                                                    input_position = 0;
                                                    v14 = read_line();
                                                    if (((long long)v14) == 0)
                                                    {
                                                        read_rest_of_line();
                                                    }
                                                    if (v18[4] == 0 || buff_current != ((int)v28))
                                                    {
                                                        v15 = v30;
                                                        v18[11] = v18[11] + 1;
                                                        v30 = ((long long)(((int)v30) + 1));
                                                        *(line_vector + v15 * 4) = ((int)v28);
                                                        v28 = ((long long)buff_current);
                                                        *(end_vector + v15 * 4) = input_position;
                                                        v31 = v27;
                                                        v27 = ((long long)v27) - 1;
                                                        if (v31 == 1)
                                                        {
                                                            break;
                                                        }
                                                    }
                                                }
                                                if (v18[4] != 0 || buff_current == ((int)v28) && v18[4] != 0)
                                                {
                                                    v31 = ((unsigned int)v27);
                                                    v27 = ((int)((unsigned int)v27)) - 1;
                                                    if (v31 == 1)
                                                    {
                                                        break;
                                                    }
                                                }
                                            }
                                            while (v31 == 1 || files_ready_to_read != 0);
                                        }
                                        v29 = ((long long)v29) + 1;
                                        v18 = rbx<8> + 64;
                                        if (v0 < ((int)v29))
                                        {
                                            break;
                                        }
                                    }
                                    v18 = column_vector;
                                    v23 = ((long long)balance_columns);
                                    v25 = ((long long)columns);
                                    v4 = v30 * 4;
                                    v24 = column_vector;
                                }
                                else
                                {
                                    v28 = 0;
                                    v4 = 0;
                                    v30 = 0;
                                }
                                *(line_vector + rax<8>) = ((unsigned int)v28);
                                v28 = ((int)r10<8>) - 1;
                                if (((long long)r8b<1>) != 0)
                                {
                                    if (((int)r10<8>) > 0)
                                    {
                                        v27 = ((int)r10<8>) + 1;
                                        v22 = 0;
                                        v21 = r9<8>;
                                        v15 = 1;
                                        v4 = ((int)((v30 >> 31 CONCAT v30) % ((int)r10<8>)));
                                        v16 = (v30 >> 31 CONCAT v30) % ((int)r10<8>) >> 32;
                                        v29 = ((int)((v30 >> 31 CONCAT v30) % ((int)r10<8>) + 1));
                                        do
                                        {
                                            v21->field_28 = ((unsigned int)v22);
                                            tmp_38 = ((int)v15) <= ((int)v16);
                                            v15 = ((long long)(((int)v15) + 1));
                                            v21 += 64;
                                            *(v21 + 0x14) = (tmp_38? ((int)v29) : ((int)rax<8>));
                                            ((unsigned int)v22) = ((long long)(((unsigned int)v22) + (tmp_38? ((int)v29) : ((int)rax<8>))));
                                        }
                                        while (((int)v15) != v27);
                                    }
                                }
                                if (v28 != 0)
                                {
                                    v4 = r9<8>;
                                    v16 = (r10<8> - 2 + 1) * 64 + r9<8>;
                                    do
                                    {
                                        v15 = ((int)v4->field_2c);
                                        v4 += 64;
                                        *(v4 + 0x10) = v15;
                                    }
                                    while (v4 != v16);
                                    v18 = (r10<8> - 2 + 1) * 64 + v24;
                                }
                                if (v28 == 0 && ((long long)r8b<1>) != 0 || ((long long)v23) != 0 && v28 != 0)
                                {
                                    v18[12] = v18[11];
                                }
                                if (((long long)r8b<1>) == 0 && v28 == 0 || ((long long)v23) == 0 && v28 != 0)
                                {
                                    if (*(rbx<8> + 16) == 0)
                                    {
                                        *(rbx<8> + 48) = lines_per_body;
                                    }
                                    else
                                    {
                                        *(rbx<8> + 48) = 0;
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
        else
        {
            error(0x1, 0x0, dcgettext(0x0, &g_40d086, 0x5));
        }
    }
    else
    {
        chars_per_column = 0;
        error(0x1, 0x0, dcgettext(0x0, &g_40d086, 0x5));
    }
}
