typedef struct struct_0 {
    unsigned int field_0;
} struct_0;

extern struct_1 in_stream;

int read_char()
{
    unsigned long long v1;  // rax
    unsigned long long v2;  // rax
    struct_0 *v4;  // rdi
    unsigned long long v5;  // r12

    v5 = 1;
    v4->field_0 = -1;
    if (in_stream == 0)
    {
        v2 = v5;
        return v2;
    }
    while (true)
    {
        v1 = fgetc(in_stream);
        v4->field_0 = v1;
        if (v1 == -1)
        {
            __errno_location();
            v5 = ((long long)(((int)v5) & ((int)(check_and_close() & open_next_file()))));
            v2 = v5;
            return v2;
        }
        else
        {
            v2 = v5;
            return v2;
        }
    }
}
