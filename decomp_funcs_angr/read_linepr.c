typedef struct struct_2 {
    unsigned long long field_0;
    char padding_8[24];
    unsigned long long field_20;
    char padding_28[12];
    unsigned int field_34;
    char field_38;
    char field_39;
} struct_2;

typedef struct struct_3 {
    struct struct_4 *field_0;
    char padding_8[24];
    unsigned long long field_20;
    char padding_28[12];
    unsigned int field_34;
    char field_38;
    char field_39;
} struct_3;

extern char FF_only;
extern char align_empty_cols;
extern struct_1 chars_per_column;
extern struct_0 clump_buff;
extern struct_1 col_sep_length;
extern struct_0 column_vector;
extern char empty_line;
extern struct_1 input_position;
extern char keep_FF;
extern char pad_vertically;
extern unsigned int padding_not_printed;
extern char parallel_files;
extern char print_a_FF;
extern char print_a_header;
extern unsigned int separators_not_printed;
extern <missing-type> spaces_not_printed;
extern <missing-type> store_char;
extern char storing_columns;
extern char truncate_lines;
extern char use_col_separator;

int read_line()
{
    char *|unsigned long long|unsigned int v1;  // rax
    unsigned long long|unsigned int|unsigned long long [3] v10;  // rdi
    unsigned long v11;  // rdi
    struct_2 *v12;  // rdi
    unsigned long long v13[3];  // rdi
    unsigned long long v14;  // r12
    unsigned long long v15;  // r13
    unsigned long long v2;  // rax
    char *v4;  // rax
    unsigned long long v6;  // rcx
    unsigned long long v7;  // rdx
    unsigned long|unsigned long long|unsigned int v8;  // rbx
    struct_3 *v9;  // rbp

    v9 = v12;
    v10 = v12->field_0;
    v1 = v10[1];
    if (v10[1] < v10[2])
    {
        v7 = v1 + 1;
        v10[1] = v1 + 1;
        v8 = ((int)*(v1));
    }
    else
    {
        v8 = __uflow(v10);
    }
    if (v8 != 12)
    {
        v9->field_39 = 0;
    }
    else
    {
        v10 = v9->field_0;
        v1 = v9->field_0->field_8;
        v7 = v9->field_0->field_10;
        if (v9->field_39 != 0)
        {
            if (v1 < v7)
            {
                v10[1] = v1 + 1;
                v8 = ((long long)*(v1));
            }
            else
            {
                v8 = __uflow(v10);
            }
            if (v8 != 10)
            {
                v9->field_39 = 0;
            }
            else
            {
                v10 = v9->field_0;
                v1 = v9->field_0->field_8;
                if (v9->field_0->field_8 < v9->field_0->field_10)
                {
                    v7 = v1 + 1;
                    v10[1] = v1 + 1;
                    v8 = ((long long)*(v1));
                }
                else
                {
                    v8 = __uflow(v10);
                }
                v9->field_39 = 0;
            }
            if (v8 != 10 || ((int)v8) != 10)
            {
                if (v8 == 12)
                {
                    v10 = v9->field_0;
                    v1 = v9->field_0->field_8;
                    v7 = v9->field_0->field_10;
                }
            }
        }
        if (v9->field_39 == 0 || v8 == 12 && v8 != 10 || v8 == 12 && ((int)v8) != 10)
        {
            if (v1 < v7)
            {
                v10[1] = v1 + 1;
                v11 = ((long long)*(v1));
            }
            else
            {
                v11 = __uflow(v10);
            }
            if (((int)v11) == 10)
            {
                FF_only = 1;
            }
            else
            {
                ungetc(v11, v9->field_0);
                FF_only = 1;
            }
            if (print_a_header != 0)
            {
                if (storing_columns == 0)
                {
                    pad_vertically = 1;
                    print_header();
                    hold_file.isra.0();
                    return 1;
                }
            }
        }
    }
    if ((v8 == 12 || v8 != 10) && (v8 != 12 || v8 != 12) && (v8 != 12 || v9->field_39 != 0) && (v8 != 10 || ((int)v8) != 10 || v8 != 12))
    {
        if (((int)rbx<8>) != -1)
        {
            v14 = (long long)char_to_clump();
        }
        else
        {
            close_file();
            v2 = 1;
            return v2;
        }
    }
    if (truncate_lines != 0 && (v8 == 10 || v8 == 10 || ((int)rbx<8>) != -1) && (((int)v8) == 10 || v8 == 10 || ((int)rbx<8>) != -1) && (v8 == 12 || v8 == 10 || ((int)rbx<8>) != -1) && (v8 == 10 || v8 != 12 || v9->field_39 != 0) && (v8 == 10 || v8 == 10 || v8 != 12 || v8 != 12) && (((int)v8) == 10 || v8 == 10 || v8 != 12 || v8 != 12))
    {
        if (input_position > chars_per_column)
        {
            input_position = input_position;
            v2 = 0;
            return v2;
        }
    }
    if (...)
    {
        if (v9->field_20 != 4207808)
        {
            pad_vertically = 1;
            if (print_a_header != 0)
            {
                if (storing_columns == 0)
                {
                    print_header();
                }
            }
            if (parallel_files != 0)
            {
                if (align_empty_cols != 0)
                {
                    v1 = ((int)separators_not_printed);
                    v15 = column_vector;
                    separators_not_printed = 0;
                    if (v1 > 0)
                    {
                        while (true)
                        {
                            v15 += 64;
                            align_column();
                            separators_not_printed = separators_not_printed + 1;
                            if ((((long long)separators_not_printed) << 6) + column_vector == v15)
                            {
                                break;
                            }
                        }
                    }
                    v7 = 0;
                    align_empty_cols = 0;
                    v10 = ((int)v9->field_34);
                    padding_not_printed = v9->field_34;
                    spaces_not_printed = (truncate_lines == 0? 0 : *(0x4141e8));
                }
            }
            if (align_empty_cols == 0 || parallel_files == 0)
            {
                v10 = ((long long)padding_not_printed);
            }
            if (col_sep_length < ((unsigned int)v10))
            {
                pad_across_to();
                padding_not_printed = 0;
            }
            if (use_col_separator != 0)
            {
                print_sep_string();
            }
        }
        if (v9->field_38 != 0)
        {
            add_line_number.isra.0();
        }
        empty_line = 0;
        v2 = 1;
        if (v8 == 10)
        {
            return v2;
        }
        v8 = clump_buff;
        v15 = clump_buff + v14 - 1 + 1;
        if (((int)v14) != 0)
        {
            while (true)
            {
                v8 += 1;
                v10 = ((long long)*(v8 + 1));
                *(rbp<8> + 32)();
                if (v15 == v8)
                {
                    break;
                }
            }
        }
        while (true)
        {
            v10 = v9->field_0;
            v4 = v9->field_0->field_8;
            if (v9->field_0->field_8 < v9->field_0->field_10)
            {
                v10[1] = v4 + 1;
                v1 = ((long long)*(v4));
            }
            else
            {
                v1 = __uflow(v10);
            }
            if (v1 == 10)
            {
                return 1;
            }
            else if (v1 == 12)
            {
                v13 = v9->field_0;
                v1 = v9->field_0->field_8;
                if (v9->field_0->field_8 < v9->field_0->field_10)
                {
                    v13[1] = v1 + 1;
                    v11 = ((long long)*(v1));
                }
                else
                {
                    v11 = __uflow(v13);
                }
                ungetc(v11, v9->field_0);
            }
            else if (v1 != -1)
            {
                v2 = char_to_clump();
                if (truncate_lines != 0)
                {
                    v6 = ((long long)chars_per_column);
                    if (input_position > chars_per_column)
                    {
                        input_position = input_position;
                        v2 = 0;
                        return v2;
                    }
                }
                if (truncate_lines == 0 || input_position <= chars_per_column)
                {
                    v8 = clump_buff;
                    v7 = v2 - 1;
                    v14 = clump_buff + v2 - 1 + 1;
                    while (true)
                    {
                        v8 += 1;
                        v10 = ((long long)*(v8 + 1));
                        *(rbp<8> + 32)();
                        if (v8 == v14)
                        {
                            break;
                        }
                    }
                }
                close_file();
                v2 = 1;
                return v2;
            }
        }
    }
    if (...)
    {
        if (keep_FF != 0)
        {
            print_a_FF = 1;
            hold_file.isra.0();
            return 1;
        }
        hold_file.isra.0();
        return 1;
    }
}
