typedef struct struct_1 {
    unsigned long long field_0;
} struct_1;

extern struct_1 bytes_written;
extern unsigned int caught_signals;
extern char elide_empty_files;
extern struct_0 files_created;
extern unsigned int g_418009;
extern struct_1 output_filename;
extern char *output_stream;
extern char suppress_count;

int close_output_file()
{
    char v0;  // [bp-0xc8]
    unsigned long v1;  // [bp-0x30]
    struct_1 *v10;  // fs
    char *v5;  // rdx
    unsigned int v6;  // ebx
    unsigned long v7;  // rsi
    unsigned long long v8;  // r12
    unsigned int v9;  // r13d

    if (!(output_stream != 0))
    {
        return v1 ^ *(v10 + 0x28);
    }
    else if (!(((long long)(*(output_stream) & 32)) == 0))
    {
        v8 = (long long)quotearg_style();
        v5 = dcgettext(0x0, &g_418009, 0x5);
        error(0x0, v7, v5);
        output_stream = 0;
        cleanup_fatal(); /* do not return */
    }
    else if (rpl_fclose() == 0)
    {
        if (bytes_written == 0)
        {
            if (elide_empty_files != 0)
            {
                sigprocmask(((int)bytes_written), &caught_signals, ((int)&v0));
                v6 = unlink(output_filename);
                v9 = ((int)*(__errno_location()));
                files_created = files_created - 1;
                sigprocmask(0x2, ((int)&v0), 0x0);
                if (v6 == 0)
                {
                    output_stream = 0;
                    return v1 ^ *(v10 + 0x28);
                }
                else if (v9 == 2)
                {
                    output_stream = 0;
                    return v1 ^ *(v10 + 0x28);
                }
                else
                {
                    quotearg_n_style_colon();
                    error(0x0, v9, "%s");
                    output_stream = 0;
                    return v1 ^ *(v10 + 0x28);
                }
            }
        }
        if (elide_empty_files == 0 || bytes_written != 0)
        {
            if (suppress_count != 0)
            {
                output_stream = 0;
                return v1 ^ *(v10 + 0x28);
            }
            imaxtostr();
            __fprintf_chk();
            output_stream = 0;
            return v1 ^ *(v10 + 0x28);
        }
    }
    else
    {
        v8 = (long long)quotearg_n_style_colon();
        v7 = ((long long)*(__errno_location()));
        error(0x0, v7, v5);
        output_stream = 0;
        cleanup_fatal(); /* do not return */
    }
}
