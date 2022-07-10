typedef struct struct_0 {
    unsigned int field_0;
} struct_0;

extern struct_1 buff;
extern struct_0 chars_per_margin;
extern struct_0 col_sep_length;
extern unsigned int column_vector[13];
extern struct_0 columns;
extern struct_1 end_vector;
extern char extremities;
extern struct_1 line_vector;
extern struct_0 output_position;
extern char pad_vertically;
extern unsigned int padding_not_printed;
extern char print_a_header;
extern struct_0 spaces_not_printed;
extern char use_col_separator;

int print_stored()
{
    unsigned int [13]|unsigned int v1;  // rax
    unsigned long long v2;  // rbx
    unsigned int v3[14];  // rdi
    struct_0 *v4;  // r12
    unsigned int v5[14];  // r13

    v5 = v3;
    v4 = ((long long)v3[10]);
    pad_vertically = 1;
    v3[10] = ((int)v4) + 1;
    v2 = ((long long)*(line_vector + v4 * 4)) + buff;
    if (print_a_header != 0)
    {
        print_header();
    }
    if (v3[4] == 1)
    {
        if (columns > 0)
        {
            v1 = column_vector;
            do
            {
                v1[4] = 2;
                v1 += 64;
            }
            while (v1 != (((long long)(((long long)columns) - 1)) + 1 << 6) + column_vector);
        }
        if (*(column_vector + 48) <= 0)
        {
            if (extremities != 0)
            {
                return 1;
            }
            pad_vertically = 0;
            return 1;
        }
    }
    if (*(column_vector + 48) > 0 || v3[4] != 1)
    {
        if (col_sep_length < padding_not_printed)
        {
            pad_across_to();
            padding_not_printed = 0;
        }
        if (use_col_separator != 0)
        {
            print_sep_string();
        }
        if (((long long)*(line_vector + (((long long)v3[10]) << 2))) + buff != buff + ((long long)*(line_vector + (((long long)v3[10]) << 2) + 4)))
        {
            while (true)
            {
                v2 += 1;
                print_char();
                if (buff + ((long long)*(line_vector + (((long long)v3[10]) << 2) + 4)) == v2)
                {
                    break;
                }
            }
        }
        if (spaces_not_printed == 0)
        {
            v1 = ((int)(v5[13] - col_sep_length));
            output_position = *(end_vector + ((long long)v3[10]) * 4) + v5[13];
            if (v1 != chars_per_margin)
            {
                return 1;
            }
            output_position = ((int)(*(end_vector + ((long long)v3[10]) * 4) + v3[13] - col_sep_length));
            return 1;
        }
        return 1;
    }
}
