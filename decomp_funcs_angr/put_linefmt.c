typedef struct struct_1 {
    char padding_0[32];
    unsigned long long field_20;
} struct_1;

extern struct_0 last_line_length;
extern unsigned int out_column;
extern struct_2 prefix;
extern struct_0 prefix_length;
extern unsigned long long stdout[7];

int put_line()
{
    char *v2;  // rax
    struct_1 * v7;  // rbx
    unsigned int v8;  // esi
    struct_1 *v9;  // rdi

    out_column = 0;
    put_space();
    fputs_unlocked(prefix, stdout);
    v7 = ((long long)(v8 - (prefix_length + out_column)));
    out_column = prefix_length + out_column;
    put_space();
    if (v7 != v7->field_20 - 40)
    {
        v7 = v9;
        while (true)
        {
            v7 += 40;
            put_word.isra.0();
            put_space();
            if (v9->field_20 - 40 == v7)
            {
                break;
            }
        }
        put_word.isra.0();
        last_line_length = out_column;
        v2 = *(stdout + 40);
        if (*(stdout + 40) < *(stdout + 48))
        {
            *(stdout + 40) = *(stdout + 40) + 1;
            *(v2) = 10;
            return v2;
        }
    }
    else
    {
        put_word.isra.0();
        last_line_length = out_column;
        v2 = *(stdout + 40);
        if (*(stdout + 40) < *(stdout + 48))
        {
            *(stdout + 40) = *(stdout + 40) + 1;
            *(v2) = 10;
            return v2;
        }
    }
}
