typedef struct struct_0 {
    char padding_0[32];
    unsigned long long field_20;
    char padding_28[144];
    char field_b8;
} struct_0;

extern struct_1 format;
extern struct_1 indicator_style;
extern char print_block_size;
extern char print_inode;
extern char print_scontext;

int print_file_name_and_frills()
{
    unsigned long long v2;  // rax
    unsigned long long v3;  // rcx
    struct_0 *v4;  // rdi
    unsigned long long v5;  // r12

    set_normal_color();
    if (print_inode != 0)
    {
        if (v4->field_b8 != 0)
        {
            if (v4->field_20 != 0)
            {
                v3 = (long long)umaxtostr();
            }
        }
        __printf_chk(0x1, "%*s ");
    }
    if (print_block_size != 0)
    {
        if (v4->field_b8 == 0)
        {
        }
        else
        {
            v3 = (long long)human_readable();
            if (format == 4)
            {
                /* goto 4230944; */
            }
        }
        __printf_chk(0x1, "%*s ");
    }
    if (print_scontext != 0)
    {
        __printf_chk(0x1, "%*s ");
    }
    v5 = (long long)print_name_with_quoting();
    if (indicator_style == 0)
    {
        v2 = v5;
        return v2;
    }
    v5 += (long long)print_type_indicator();
    v2 = v5;
    return v2;
}
