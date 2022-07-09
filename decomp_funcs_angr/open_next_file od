extern char *file_list[2];
extern char flag_dump_strings;
extern unsigned int g_40c040;
extern char have_read_stdin;
extern struct_0 in_stream;
extern char input_filename[2];
extern char limit_bytes_to_format;
extern struct_0 stdin;

int open_next_file()
{
    void * v1;  // rax
    unsigned long long v2;  // rax
    char v3[2];  // rdi
    unsigned long long v4;  // r12
    unsigned long long v5;  // r12
    char v6;  // cc_dep1

    v4 = 1;
    while (true)
    {
        v3 = *(file_list);
        input_filename = *(file_list);
        if (v3 == 0)
        {
            break;
        }
        v6 = ((char)*(*(file_list)));
        file_list = file_list + 8;
        if (*(*(file_list) + 1) == 0 && v6 == 45)
        {
            have_read_stdin = 1;
            input_filename = dcgettext(0x0, &g_40c040, 0x5);
            v1 = stdin;
            in_stream = stdin;
        }
        if (*(*(file_list) + 1) != 0 || v6 != 45)
        {
            v1 = fopen(*(file_list), "r");
            in_stream = v1;
            if (v1 == 0)
            {
                v5 = (long long)quotearg_n_style_colon();
                v4 = 0;
                error(0x0, *(__errno_location()), "%s");
                v1 = in_stream;
            }
        }
        if (limit_bytes_to_format == 0)
        {
            break;
        }
        if (limit_bytes_to_format != 0)
        {
            if (flag_dump_strings != 0)
            {
                break;
            }
            if (flag_dump_strings != 0)
            {
                v2 = v4;
                return v2;
            }
            setvbuf(v1, NULL, 0x2, 0x0);
            break;
        }
        else
        {
            v2 = v4;
            return v2;
        }
    }
    v2 = v4;
    return v2;
}
