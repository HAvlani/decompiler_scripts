typedef struct struct_0 {
    unsigned int field_0;
} struct_0;

extern struct_0 exit_failure;
extern struct_1 file_name;
extern unsigned int g_415540;

int close_stdin()
{
    unsigned long v0;  // [bp-0x10]
    unsigned long v1;  // [bp-0x8]
    unsigned long long v3;  // rax
    unsigned long long v4;  // rax
    unsigned long long v5;  // rax
    struct_0 *v6;  // rbp
    unsigned long long v7;  // r12
    unsigned long v8;  // r13

    v1 = v8;
    v0 = dcgettext(0x0, &g_415540, 0x5);
    v5 = freadahead();
    if (v5 == 0)
    {
        v3 = close_stream();
    }
    if (v3 != 0 || v5 != 0)
    {
        while (true)
        {
            v4 = rpl_fseeko();
            if (v4 == 0)
            {
                v4 = rpl_fflush();
                if (v4 != 0)
                {
                    close_stream();
                }
            }
            if (v4 == 0 || v4 != 0)
            {
                v3 = close_stream();
                if (v3 == 0)
                {
                    break;
                }
            }
            v7 = dcgettext(0x0, &g_415540, 0x5);
            v6 = __errno_location();
            if (file_name != 0)
            {
                quotearg_colon();
                error(0x0, v6->field_0, "%s: %s");
            }
            else
            {
                error(0x0, v6->field_0, "%s");
            }
            close_stdout();
            _exit(exit_failure);
        }
    }
}
