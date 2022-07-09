typedef struct struct_0 {
    unsigned long long field_0;
} struct_0;

extern struct_0 stdin;

int swallow_file_in_memory.isra.0()
{
    unsigned long v0;  // [bp-0x28]
    unsigned long v1;  // [bp-0x20]
    unsigned long long v3;  // rax
    struct_0 *v4;  // rdx
    struct_0 *v5;  // rsi
    char v6[2];  // rdi
    unsigned long long v7;  // r12
    struct_0 *v8;  // fs

    if (v6 != 0)
    {
        if (v6[0] != 0)
        {
            if (v6[0] != 45 || v6[1] != 0)
            {
                v3 = read_file();
                v5->field_0 = v3;
                if (v3 != 0)
                {
                    v4->field_0 = v3 + v0;
                    return v1 ^ *(v8 + 0x28);
                }
                v7 = (long long)quotearg_n_style_colon();
                error(0x1, *(__errno_location()), "%s");
            }
        }
    }
    if (v6 == 0 || v6[0] == 0 || v6[0] == 45 && v6[1] == 0)
    {
        v3 = fread_file();
        v5->field_0 = v3;
        if (v3 != 0)
        {
            clearerr_unlocked(((int)stdin));
            v3 = v5->field_0;
            v4->field_0 = v3 + v0;
            return v1 ^ *(v8 + 0x28);
        }
        v7 = (long long)quotearg_n_style_colon();
        error(0x1, *(__errno_location()), "%s");
    }
}
