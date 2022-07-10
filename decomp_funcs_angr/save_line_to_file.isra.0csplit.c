typedef struct struct_0 {
    unsigned long long field_0;
} struct_0;

extern struct_0 bytes_written;
extern unsigned int g_418009;
extern unsigned long long output_stream;

int save_line_to_file.isra.0()
{
    unsigned long long v1;  // rax
    struct_0 *v3;  // rsi
    struct_0 *v4;  // rdi
    unsigned long long v5;  // r13

    v1 = fwrite_unlocked(v3->field_0, 0x1, v4->field_0, output_stream);
    if (v1 == v4->field_0)
    {
        bytes_written = bytes_written + v1;
        return v1;
    }
    v5 = (long long)quotearg_style();
    error(0x0, *(__errno_location()), dcgettext(0x0, &g_418009, 0x5));
    output_stream = 0;
    cleanup_fatal(); /* do not return */
}
