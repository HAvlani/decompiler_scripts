typedef struct struct_0 {
    char padding_0[176];
    unsigned long long field_b0;
    char field_b8;
    char padding_b9[15];
    unsigned long long field_c8;
} struct_0;

extern struct_1 block_size_width;
extern struct_1 format;
extern struct_1 indicator_style;
extern struct_1 inode_number_width;
extern char print_block_size;
extern char print_inode;
extern char print_scontext;
extern struct_1 scontext_width;

int length_of_file_name_and_frills()
{
    unsigned long long v1;  // rax
    unsigned long|unsigned long long v2;  // rbx
    struct_0 *v3;  // rbp
    struct_0 *v4;  // rdi
    unsigned long long v6;  // r8

    v3 = v4;
    if (!(print_inode != 0))
    {
        v2 = 0;
    }
    else if (format != 4)
    {
        v2 = ((long long)inode_number_width) + 1;
        if (print_block_size == 0)
        {
            if (print_scontext == 0)
            {
                /* goto 4232268; */
            }
        }
    }
    else
    {
        v2 = strlen((long long)umaxtostr()) + 1;
    }
    if (format != 4)
    {
        if (print_block_size != 0)
        {
            v1 = ((long long)block_size_width) + 1;
            /* goto 4232252; */
        }
        if (print_scontext != 0)
        {
            v1 = ((long long)scontext_width) + 1;
            /* goto 4232484; */
        }
    }
    else
    {
        if (print_block_size != 0)
        {
            v1 = 2;
            if (v4->field_b8 != 0)
            {
                v1 = strlen((long long)human_readable()) + 1;
                /* goto 4232252; */
            }
        }
        if (print_scontext != 0)
        {
            v1 = strlen(v4->field_b0) + 1;
            /* goto 4232484; */
        }
    }
    if (print_block_size != 0)
    {
        v2 += v1;
    }
    if (print_scontext == 0)
    {
        (long long)fileinfo_name_width.part.0() = v3->field_c8;
    }
    else
    {
        (long long)fileinfo_name_width.part.0() = v3->field_c8;
        v2 += v1;
    }
    if (v3->field_c8 == 0 && print_scontext == 0 || v3->field_c8 == 0 && print_scontext != 0)
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
