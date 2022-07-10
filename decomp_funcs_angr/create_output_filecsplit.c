typedef struct struct_1 {
    unsigned long long field_0;
} struct_1;

extern unsigned long long bytes_written;
extern unsigned int caught_signals;
extern struct_0 files_created;
extern struct_1 output_filename;
extern struct_1 output_stream;

int create_output_file()
{
    char v0;  // [bp-0xb8]
    unsigned long v1;  // [bp-0x30]
    unsigned long long v4;  // rax
    unsigned long long v6;  // rbp
    unsigned long long v7;  // r12d
    struct_1 *v8;  // fs

    v7 = 75;
    output_filename = (long long)make_filename();
    if (files_created == 2147483647)
    {
        quotearg_n_style_colon();
        error(0x0, v7, "%s");
        cleanup_fatal(); /* do not return */
    }
    sigprocmask(0x0, &caught_signals, ((int)&v0));
    v4 = fopen_safer();
    v6 = v4;
    output_stream = v4;
    v7 = ((int)*(__errno_location()));
    files_created = files_created + ((int)(v6 != 0));
    sigprocmask(0x2, ((int)&v0), 0x0);
    if (v6 != 0)
    {
        bytes_written = 0;
        return v1 ^ *(v8 + 0x28);
    }
    else
    {
        quotearg_n_style_colon();
        error(0x0, v7, "%s");
        cleanup_fatal(); /* do not return */
    }
}
