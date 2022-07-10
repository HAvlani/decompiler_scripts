extern struct_0 chars_per_number;
extern struct_0 chars_per_output_tab;
extern struct_0 columns;
extern unsigned int g_40d071;
extern struct_0 input_position;
extern struct_0 line_number;
extern struct_1 number_buff;
extern char number_separator;
extern struct_0 number_width;
extern struct_0 output_position;
extern char parallel_files;
extern char truncate_lines;

int add_line_number.isra.0()
{
    BOT tmp_19;  // tmp #19
    char v0;  // [bp+0x0]
    unsigned long long v10;  // r12
    unsigned long v11;  // r12
    unsigned long long v2;  // rax
    unsigned long long v3;  // rax
    unsigned long long v4;  // rdx
    unsigned long long|unsigned int v5;  // rbx
    unsigned long v6;  // rbx
    unsigned long long v7;  // rbp
    unsigned long long v8;  // rdi
    unsigned long long v9;  // rdi

    v7 = v8;
    v3 = __sprintf_chk(((int)number_buff), 0x1, 0xffffffff, &g_40d071, chars_per_number, line_number, ((int)v6), ((int)&v0), ((int)v11));
    line_number = line_number + 1;
    tmp_19 = v3;
    v2 = ((long long)chars_per_number);
    v4 = v2 - 1;
    v5 = ((long long)(((int)tmp_19) - chars_per_number)) + number_buff;
    v10 = ((long long)(((int)tmp_19) - chars_per_number)) + number_buff + v2 - 1 + 1;
    if (chars_per_number > 0)
    {
        while (true)
        {
            v5 += 1;
            v8 = ((long long)*(v5 + 1));
            *(rbp<8>)();
            if (v5 == v10)
            {
                break;
            }
        }
    }
    v9 = ((long long)number_separator);
    if (!(columns > 1))
    {
        *(rbp<8>)();
        if (number_separator == 9)
        {
            output_position = ((int)(chars_per_output_tab - ((int)((output_position >> 31 CONCAT output_position) % chars_per_output_tab >> 32)) + output_position));
        }
    }
    else if (number_separator != 9)
    {
        *(rbp<8>)();
    }
    else
    {
        v5 = ((int)(((long long)(number_width - chars_per_number)) - 1));
        if (number_width - chars_per_number > 0)
        {
            while (true)
            {
                v5 = ((int)((unsigned int)v5)) - 1;
                v9 = 32;
                *(rbp<8>)();
                if (v5 == -1)
                {
                    break;
                }
                v5 = ((long long)v5) - 1;
                v9 = 32;
                *(rbp<8>)();
                break;
            }
        }
    }
    if (!(truncate_lines != 0))
    {
        return v2;
    }
    else if (parallel_files == 0)
    {
        v2 = ((long long)number_width);
        input_position = input_position + number_width;
        return v2;
    }
    else
    {
        return v2;
    }
}
