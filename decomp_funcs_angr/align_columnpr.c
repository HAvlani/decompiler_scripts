typedef struct struct_0 {
    char padding_0[52];
    unsigned int field_34;
} struct_0;

typedef struct struct_2 {
    char padding_0[52];
    unsigned int field_34;
    char field_38;
} struct_2;

extern struct_1 col_sep_length;
extern unsigned int padding_not_printed;
extern char use_col_separator;

int align_column()
{
    unsigned long long v1;  // rax
    struct_2 *v2;  // edi
    struct_0 *v3;  // rdi

    v1 = ((long long)col_sep_length);
    v2 = ((int)v3->field_34);
    padding_not_printed = v3->field_34;
    if (!(v2 <= col_sep_length))
    {
        v1 = pad_across_to();
        padding_not_printed = 0;
        if (use_col_separator == 0)
        {
            if (*(v3 + 0x38) == 0)
            {
                return v1;
            }
        }
        else
        {
            v1 = print_sep_string();
            if (*(v3 + 0x38) == 0)
            {
                return v1;
            }
        }
    }
    else if (!(use_col_separator == 0))
    {
        v1 = print_sep_string();
        if (*(v3 + 0x38) == 0)
        {
            return v1;
        }
    }
    else if (*(v3 + 0x38) == 0)
    {
        return v1;
    }
}
