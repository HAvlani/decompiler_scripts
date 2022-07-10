typedef struct struct_1 {
    char padding_0[176];
    unsigned long long field_b0;
    char field_b8;
    char padding_b9[15];
    unsigned long long field_c8;
} struct_1;

extern struct_0 block_size_width;
extern struct_0 format;
extern struct_0 indicator_style;
extern struct_0 inode_number_width;
extern char print_block_size;
extern char print_inode;
extern char print_scontext;
extern struct_0 scontext_width;

int length_of_file_name_and_frills()
{
    unsigned long long v1;  // rax
    unsigned long|unsigned long long v2;  // rbx
    struct_1 *v3;  // rbp
    struct_1 *v4;  // rdi
    unsigned long long v6;  // r8

    v3 = v4;
    if (!(print_inode != 0))
    {
        v2 = 0;
    }
    else if (format != 4)
    {
        v2 = ((long long)inode_number_width) + 1;
    }
    else
    {
        v2 = strlen((long long)umaxtostr()) + 1;
    }
    if (print_block_size != 0)
    {
        if (format != 4)
        {
            v1 = ((long long)block_size_width) + 1;
        }
        else
        {
            v1 = 2;
            if (v4->field_b8 != 0)
            {
                v1 = strlen((long long)human_readable()) + 1;
            }
        }
        v2 += v1;
    }
    if (print_scontext == 0)
    {
    }
    else
    {
        if (format != 4)
        {
            v1 = ((long long)scontext_width) + 1;
        }
        else
        {
            v1 = strlen(v4->field_b0) + 1;
        }
        (long long)fileinfo_name_width.part.0() = v3->field_c8;
        v2 += v1;
    }
    if (print_scontext == 0 && v3->field_c8 == 0 || v3->field_c8 == 0 && print_scontext != 0)
    {
        (long long)fileinfo_name_width.part.0() = (long long)fileinfo_name_width.part.0();
    }
    v6 = (long long)fileinfo_name_width.part.0() + v2;
    if (indicator_style != 0)
    {
        v6 += ((long long)((long long)get_type_indicator() != 0));
        return v6;
    }
    return v6;
}
