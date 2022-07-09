typedef struct struct_1 {
    unsigned int field_0;
} struct_1;

extern struct_1 exit_failure;
extern struct_0 file_name;
extern unsigned int g_40bdb8;
extern char ignore_EPIPE;

int close_stdout()
{
    unsigned long long v1;  // rax
    struct_1 *v2;  // rbx
    unsigned long long v3;  // r12

    v1 = close_stream();
    if (v1 != 0)
    {
        v2 = __errno_location();
        if (ignore_EPIPE == 0 || v2->field_0 != 32)
        {
            v3 = dcgettext(0x0, &g_40bdb8, 0x5);
            if (file_name != 0)
            {
                quotearg_colon();
                error(0x0, v2->field_0, "%s: %s");
            }
        }
    }
    if (v1 == 0 || v2->field_0 == 32 && ignore_EPIPE != 0)
    {
        v1 = close_stream();
    }
    if (((int)v1) == 0 && (v1 == 0 || v2->field_0 == 32) && (v1 == 0 || ignore_EPIPE != 0))
    {
        return v1;
    }
    while (true)
    {
        _exit(exit_failure);
        error(0x0, v2->field_0, "%s");
    }
}
