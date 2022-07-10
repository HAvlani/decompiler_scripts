typedef struct struct_1 {
    unsigned long long field_0;
    unsigned long long field_8;
    unsigned int field_10;
    char padding_14[37];
    char field_39;
} struct_1;

extern char failed_opens;
extern unsigned int g_40d075;
extern char have_read_stdin;
extern char ignore_failed_opens;
extern struct_2 stdin;
extern struct_0 total_files;

int open_file()
{
    struct_1 *v2;  // rbx
    struct_1 *v3;  // rsi
    unsigned long long|char [2] v4;  // rdi
    unsigned long long v5;  // r12

    v2 = v3;
    if (v4[0] == 45)
    {
        if (v4[1] == 0)
        {
            have_read_stdin = 1;
            v2->field_8 = dcgettext(0x0, &g_40d075, 0x5);
            v2->field_0 = stdin;
            if (stdin != 0)
            {
                fadvise();
                v2->field_39 = 0;
                v2->field_10 = 0;
                total_files = total_files + 1;
                return 1;
            }
        }
    }
    if (v4[0] != 45 || v4[1] != 0)
    {
        v3->field_8 = v4;
        v4 = (long long)fopen_safer();
        v3->field_0 = v4;
        if (v4 != 0)
        {
            fadvise();
            v2->field_39 = 0;
            v2->field_10 = 0;
            total_files = total_files + 1;
            return 1;
        }
    }
    if (v4 == 0 && v4[0] != 45 || v4 == 0 && v4[1] != 0 || v4[0] == 45 && v4[1] == 0 && stdin == 0)
    {
        failed_opens = 1;
        if (((long long)ignore_failed_opens) != 0)
        {
            return 0;
        }
        v5 = (long long)quotearg_n_style_colon();
        error(0x0, *(__errno_location()), "%s");
        return ((long long)ignore_failed_opens);
    }
}
