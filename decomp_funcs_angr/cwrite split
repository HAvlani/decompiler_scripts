typedef struct struct_0 {
    unsigned int field_0;
} struct_0;

extern char elide_empty_files;
extern struct_1 filter_command;
extern struct_0 output_desc;

int cwrite()
{
    unsigned long long v1;  // rax
    unsigned long v5;  // rdx
    struct_0 *v6;  // rbx
    unsigned long v7;  // rsi
    char v8;  // dil
    unsigned long long v9;  // r12

    if (((long long)v8) != 0)
    {
        if ((v7 | v5) == 0)
        {
            if (elide_empty_files != 0)
            {
                v1 = 1;
                return v1;
            }
        }
        if (elide_empty_files == 0 || (v7 | v5) != 0)
        {
            closeout();
            next_file_name();
            output_desc = (int)create();
            if (((int)output_desc) < 0)
            {
                v9 = (long long)quotearg_n_style_colon();
                error(0x1, *(__errno_location()), "%s");
            }
        }
    }
    if (((long long)v8) == 0 || elide_empty_files == 0 && ((int)output_desc) >= 0 || ((int)output_desc) >= 0 && (v7 | v5) != 0)
    {
        v1 = full_write();
        if (v1 != v5)
        {
            v6 = __errno_location();
            if (v6->field_0 == 32)
            {
                v1 = 0;
                if (filter_command == 0)
                {
                    quotearg_n_style_colon();
                    error(0x1, v6->field_0, "%s");
                }
                else
                {
                    return v1;
                }
            }
            else
            {
                quotearg_n_style_colon();
                error(0x1, v6->field_0, "%s");
            }
        }
        else
        {
            v1 = 1;
            return v1;
        }
    }
}
